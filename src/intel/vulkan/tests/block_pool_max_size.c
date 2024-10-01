/*
 * Copyright © 2023 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#include "anv_private.h"
#include "test_common.h"

void block_pool_max_size(void);

void block_pool_max_size(void)
{
   struct anv_physical_device physical_device = {};
   struct anv_device device = {};
   struct anv_block_pool pool;

   const uint32_t block_size = 16 * 1024;
   const uint32_t initial_size = block_size;
   const uint32_t _1Mb = 1024 * 1024;

   test_device_info_init(&physical_device.info);
   anv_device_set_physical(&device, &physical_device);
   device.kmd_backend = anv_kmd_backend_get(INTEL_KMD_TYPE_STUB);
   pthread_mutex_init(&device.mutex, NULL);
   anv_bo_cache_init(&device.bo_cache, &device);
   anv_block_pool_init(&pool, &device, "test", 4096, initial_size, _1Mb);
   ASSERT(pool.size == initial_size);

   for (uint32_t i = 0; i < _1Mb / block_size; i++) {
      uint32_t padding;
      int64_t offset;

      VkResult result = anv_block_pool_alloc(&pool, block_size, &offset, &padding);
      ASSERT(result == VK_SUCCESS);

      /* Pool will have grown at least space to fit the new allocation. */
      ASSERT(pool.size <= _1Mb);

      /* Use the memory to ensure it is valid. */
      void *map = anv_block_pool_map(&pool, offset, block_size);
      memset(map, 22, block_size);
   }

   {
      uint32_t padding;
      int64_t offset;

      VkResult result = anv_block_pool_alloc(&pool, block_size, &offset, &padding);
      ASSERT(result == VK_ERROR_OUT_OF_DEVICE_MEMORY);
   }

   anv_block_pool_finish(&pool);
   anv_bo_cache_finish(&device.bo_cache);
   pthread_mutex_destroy(&device.mutex);
}
