#ifndef STATE_XML
#define STATE_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://0x04.net/cgit/index.cgi/rules-ng-ng
git clone git://0x04.net/rules-ng-ng

The rules-ng-ng source files this header was generated from are:
- state.xml     (  30526 bytes, from 2024-10-10 18:45:02)
- common.xml    (  35664 bytes, from 2023-12-13 09:33:18)
- common_3d.xml (  15069 bytes, from 2023-12-13 09:33:18)
- state_hi.xml  (  35909 bytes, from 2024-06-21 11:31:54)
- copyright.xml (   1597 bytes, from 2020-10-28 12:56:03)
- state_2d.xml  (  52271 bytes, from 2023-05-30 20:50:02)
- state_3d.xml  (  89542 bytes, from 2024-10-10 18:45:02)
- state_blt.xml (  14592 bytes, from 2023-12-13 09:33:18)
- state_vg.xml  (   5975 bytes, from 2020-10-28 12:56:03)

Copyright (C) 2012-2024 by the following authors:
- Wladimir J. van der Laan <laanwj@gmail.com>
- Christian Gmeiner <christian.gmeiner@gmail.com>
- Lucas Stach <l.stach@pengutronix.de>
- Russell King <rmk@arm.linux.org.uk>

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sub license,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial portions
of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/


#define VARYING_COMPONENT_USE_UNUSED				0x00000000
#define VARYING_COMPONENT_USE_USED				0x00000001
#define VARYING_COMPONENT_USE_POINTCOORD_X			0x00000002
#define VARYING_COMPONENT_USE_POINTCOORD_Y			0x00000003
#define VARYING_INTERPOLATION_MODE_SMOOTH			0x00000000
#define VARYING_INTERPOLATION_MODE_NONPERSPECTIVE		0x00000001
#define VARYING_INTERPOLATION_MODE_FLAT				0x00000002
#define VARYING_INTERPOLATION_MODE_UNK				0x00000003
#define VARYING_LOCATION_CENTROID				0x00000001
#define FE_DATA_TYPE_BYTE					0x00000000
#define FE_DATA_TYPE_UNSIGNED_BYTE				0x00000001
#define FE_DATA_TYPE_SHORT					0x00000002
#define FE_DATA_TYPE_UNSIGNED_SHORT				0x00000003
#define FE_DATA_TYPE_INT					0x00000004
#define FE_DATA_TYPE_UNSIGNED_INT				0x00000005
#define FE_DATA_TYPE_INT_2_10_10_10_REV				0x00000006
#define FE_DATA_TYPE_UNSIGNED_INT_2_10_10_10_REV		0x00000007
#define FE_DATA_TYPE_FLOAT					0x00000008
#define FE_DATA_TYPE_HALF_FLOAT					0x00000009
#define FE_DATA_TYPE_FIXED					0x0000000b
#define FE_DATA_TYPE_INT_10_10_10_2				0x0000000c
#define FE_DATA_TYPE_UNSIGNED_INT_10_10_10_2			0x0000000d
#define FE_DATA_TYPE_BYTE_I					0x0000000e
#define FE_DATA_TYPE_SHORT_I					0x0000000f
#define VARYING_SEMANTIC_MODE__MASK				0x00000003
#define VARYING_SEMANTIC_MODE__SHIFT				0
#define VARYING_SEMANTIC_MODE(x)				(((x) << VARYING_SEMANTIC_MODE__SHIFT) & VARYING_SEMANTIC_MODE__MASK)
#define VARYING_SEMANTIC_LOCATION__MASK				0x00000004
#define VARYING_SEMANTIC_LOCATION__SHIFT			2
#define VARYING_SEMANTIC_LOCATION(x)				(((x) << VARYING_SEMANTIC_LOCATION__SHIFT) & VARYING_SEMANTIC_LOCATION__MASK)
#define FE_VERTEX_STREAM_CONTROL_VERTEX_STRIDE__MASK		0x000000ff
#define FE_VERTEX_STREAM_CONTROL_VERTEX_STRIDE__SHIFT		0
#define FE_VERTEX_STREAM_CONTROL_VERTEX_STRIDE(x)		(((x) << FE_VERTEX_STREAM_CONTROL_VERTEX_STRIDE__SHIFT) & FE_VERTEX_STREAM_CONTROL_VERTEX_STRIDE__MASK)
#define FE_VERTEX_STREAM_CONTROL_VERTEX_DIVISOR__MASK		0x00ff0000
#define FE_VERTEX_STREAM_CONTROL_VERTEX_DIVISOR__SHIFT		16
#define FE_VERTEX_STREAM_CONTROL_VERTEX_DIVISOR(x)		(((x) << FE_VERTEX_STREAM_CONTROL_VERTEX_DIVISOR__SHIFT) & FE_VERTEX_STREAM_CONTROL_VERTEX_DIVISOR__MASK)
#define VIVS_FE							0x00000000

#define VIVS_FE_VERTEX_ELEMENT_CONFIG(i0)		       (0x00000600 + 0x4*(i0))
#define VIVS_FE_VERTEX_ELEMENT_CONFIG__ESIZE			0x00000004
#define VIVS_FE_VERTEX_ELEMENT_CONFIG__LEN			0x00000010
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE__MASK		0x0000000f
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE__SHIFT		0
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE(x)			(((x) << VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE__SHIFT) & VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE__MASK)
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_ENDIAN__MASK		0x00000030
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_ENDIAN__SHIFT		4
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_ENDIAN(x)			(((x) << VIVS_FE_VERTEX_ELEMENT_CONFIG_ENDIAN__SHIFT) & VIVS_FE_VERTEX_ELEMENT_CONFIG_ENDIAN__MASK)
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NONCONSECUTIVE		0x00000080
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_STREAM__MASK		0x00000f00
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_STREAM__SHIFT		8
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_STREAM(x)			(((x) << VIVS_FE_VERTEX_ELEMENT_CONFIG_STREAM__SHIFT) & VIVS_FE_VERTEX_ELEMENT_CONFIG_STREAM__MASK)
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NUM__MASK			0x00003000
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NUM__SHIFT		12
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NUM(x)			(((x) << VIVS_FE_VERTEX_ELEMENT_CONFIG_NUM__SHIFT) & VIVS_FE_VERTEX_ELEMENT_CONFIG_NUM__MASK)
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NORMALIZE__MASK		0x0000c000
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NORMALIZE__SHIFT		14
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NORMALIZE_OFF		0x00000000
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NORMALIZE_SIGN_EXTEND	0x00004000
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NORMALIZE_ON		0x00008000
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_START__MASK		0x00ff0000
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_START__SHIFT		16
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_START(x)			(((x) << VIVS_FE_VERTEX_ELEMENT_CONFIG_START__SHIFT) & VIVS_FE_VERTEX_ELEMENT_CONFIG_START__MASK)
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_END__MASK			0xff000000
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_END__SHIFT		24
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_END(x)			(((x) << VIVS_FE_VERTEX_ELEMENT_CONFIG_END__SHIFT) & VIVS_FE_VERTEX_ELEMENT_CONFIG_END__MASK)

#define VIVS_FE_CMD_STREAM_BASE_ADDR				0x00000640

#define VIVS_FE_INDEX_STREAM_BASE_ADDR				0x00000644

#define VIVS_FE_INDEX_STREAM_CONTROL				0x00000648
#define VIVS_FE_INDEX_STREAM_CONTROL_TYPE__MASK			0x00000003
#define VIVS_FE_INDEX_STREAM_CONTROL_TYPE__SHIFT		0
#define VIVS_FE_INDEX_STREAM_CONTROL_TYPE_UNSIGNED_CHAR		0x00000000
#define VIVS_FE_INDEX_STREAM_CONTROL_TYPE_UNSIGNED_SHORT	0x00000001
#define VIVS_FE_INDEX_STREAM_CONTROL_TYPE_UNSIGNED_INT		0x00000002
#define VIVS_FE_INDEX_STREAM_CONTROL_PRIMITIVE_RESTART		0x00000100

#define VIVS_FE_VERTEX_STREAM_BASE_ADDR				0x0000064c

#define VIVS_FE_VERTEX_STREAM_CONTROL				0x00000650

#define VIVS_FE_COMMAND_ADDRESS					0x00000654

#define VIVS_FE_COMMAND_CONTROL					0x00000658
#define VIVS_FE_COMMAND_CONTROL_PREFETCH__MASK			0x0000ffff
#define VIVS_FE_COMMAND_CONTROL_PREFETCH__SHIFT			0
#define VIVS_FE_COMMAND_CONTROL_PREFETCH(x)			(((x) << VIVS_FE_COMMAND_CONTROL_PREFETCH__SHIFT) & VIVS_FE_COMMAND_CONTROL_PREFETCH__MASK)
#define VIVS_FE_COMMAND_CONTROL_ENABLE				0x00010000

#define VIVS_FE_DMA_STATUS					0x0000065c

#define VIVS_FE_DMA_DEBUG_STATE					0x00000660
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE__MASK			0x0000001f
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE__SHIFT		0
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_IDLE			0x00000000
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_DEC			0x00000001
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_ADR0			0x00000002
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_LOAD0			0x00000003
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_ADR1			0x00000004
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_LOAD1			0x00000005
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_3DADR			0x00000006
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_3DCMD			0x00000007
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_3DCNTL		0x00000008
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_3DIDXCNTL		0x00000009
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_INITREQDMA		0x0000000a
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_DRAWIDX		0x0000000b
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_DRAW			0x0000000c
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_2DRECT0		0x0000000d
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_2DRECT1		0x0000000e
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_2DDATA0		0x0000000f
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_2DDATA1		0x00000010
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_WAITFIFO		0x00000011
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_WAIT			0x00000012
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_LINK			0x00000013
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_END			0x00000014
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_STALL			0x00000015
#define VIVS_FE_DMA_DEBUG_STATE_CMD_DMA_STATE__MASK		0x00000300
#define VIVS_FE_DMA_DEBUG_STATE_CMD_DMA_STATE__SHIFT		8
#define VIVS_FE_DMA_DEBUG_STATE_CMD_DMA_STATE_IDLE		0x00000000
#define VIVS_FE_DMA_DEBUG_STATE_CMD_DMA_STATE_START		0x00000100
#define VIVS_FE_DMA_DEBUG_STATE_CMD_DMA_STATE_REQ		0x00000200
#define VIVS_FE_DMA_DEBUG_STATE_CMD_DMA_STATE_END		0x00000300
#define VIVS_FE_DMA_DEBUG_STATE_CMD_FETCH_STATE__MASK		0x00000c00
#define VIVS_FE_DMA_DEBUG_STATE_CMD_FETCH_STATE__SHIFT		10
#define VIVS_FE_DMA_DEBUG_STATE_CMD_FETCH_STATE_IDLE		0x00000000
#define VIVS_FE_DMA_DEBUG_STATE_CMD_FETCH_STATE_RAMVALID	0x00000400
#define VIVS_FE_DMA_DEBUG_STATE_CMD_FETCH_STATE_VALID		0x00000800
#define VIVS_FE_DMA_DEBUG_STATE_REQ_DMA_STATE__MASK		0x00003000
#define VIVS_FE_DMA_DEBUG_STATE_REQ_DMA_STATE__SHIFT		12
#define VIVS_FE_DMA_DEBUG_STATE_REQ_DMA_STATE_IDLE		0x00000000
#define VIVS_FE_DMA_DEBUG_STATE_REQ_DMA_STATE_WAITIDX		0x00001000
#define VIVS_FE_DMA_DEBUG_STATE_REQ_DMA_STATE_CAL		0x00002000
#define VIVS_FE_DMA_DEBUG_STATE_CAL_STATE__MASK			0x0000c000
#define VIVS_FE_DMA_DEBUG_STATE_CAL_STATE__SHIFT		14
#define VIVS_FE_DMA_DEBUG_STATE_CAL_STATE_IDLE			0x00000000
#define VIVS_FE_DMA_DEBUG_STATE_CAL_STATE_LDADR			0x00004000
#define VIVS_FE_DMA_DEBUG_STATE_CAL_STATE_IDXCALC		0x00008000
#define VIVS_FE_DMA_DEBUG_STATE_VE_REQ_STATE__MASK		0x00030000
#define VIVS_FE_DMA_DEBUG_STATE_VE_REQ_STATE__SHIFT		16
#define VIVS_FE_DMA_DEBUG_STATE_VE_REQ_STATE_IDLE		0x00000000
#define VIVS_FE_DMA_DEBUG_STATE_VE_REQ_STATE_CKCACHE		0x00010000
#define VIVS_FE_DMA_DEBUG_STATE_VE_REQ_STATE_MISS		0x00020000

#define VIVS_FE_DMA_ADDRESS					0x00000664

#define VIVS_FE_DMA_LOW						0x00000668

#define VIVS_FE_DMA_HIGH					0x0000066c

#define VIVS_FE_AUTO_FLUSH					0x00000670

#define VIVS_FE_PRIMITIVE_RESTART_INDEX				0x00000674

#define VIVS_FE_UNK00678					0x00000678

#define VIVS_FE_UNK0067C					0x0000067c

#define VIVS_FE_VERTEX_STREAMS(i0)			       (0x00000000 + 0x4*(i0))
#define VIVS_FE_VERTEX_STREAMS__ESIZE				0x00000004
#define VIVS_FE_VERTEX_STREAMS__LEN				0x00000008

#define VIVS_FE_VERTEX_STREAMS_BASE_ADDR(i0)		       (0x00000680 + 0x4*(i0))

#define VIVS_FE_VERTEX_STREAMS_CONTROL(i0)		       (0x000006a0 + 0x4*(i0))

#define VIVS_FE_GENERIC_ATTRIB(i0)			       (0x00000000 + 0x4*(i0))
#define VIVS_FE_GENERIC_ATTRIB__ESIZE				0x00000004
#define VIVS_FE_GENERIC_ATTRIB__LEN				0x00000010

#define VIVS_FE_GENERIC_ATTRIB_UNK006C0(i0)		       (0x000006c0 + 0x4*(i0))

#define VIVS_FE_GENERIC_ATTRIB_UNK00700(i0)		       (0x00000700 + 0x4*(i0))

#define VIVS_FE_GENERIC_ATTRIB_UNK00740(i0)		       (0x00000740 + 0x4*(i0))

#define VIVS_FE_GENERIC_ATTRIB_SCALE(i0)		       (0x00000780 + 0x4*(i0))

#define VIVS_FE_HALTI5_ID_CONFIG				0x000007c4
#define VIVS_FE_HALTI5_ID_CONFIG_VERTEX_ID_ENABLE		0x00000001
#define VIVS_FE_HALTI5_ID_CONFIG_INSTANCE_ID_ENABLE		0x00000002
#define VIVS_FE_HALTI5_ID_CONFIG_VERTEX_ID_REG__MASK		0x0000ff00
#define VIVS_FE_HALTI5_ID_CONFIG_VERTEX_ID_REG__SHIFT		8
#define VIVS_FE_HALTI5_ID_CONFIG_VERTEX_ID_REG(x)		(((x) << VIVS_FE_HALTI5_ID_CONFIG_VERTEX_ID_REG__SHIFT) & VIVS_FE_HALTI5_ID_CONFIG_VERTEX_ID_REG__MASK)
#define VIVS_FE_HALTI5_ID_CONFIG_INSTANCE_ID_REG__MASK		0x00ff0000
#define VIVS_FE_HALTI5_ID_CONFIG_INSTANCE_ID_REG__SHIFT		16
#define VIVS_FE_HALTI5_ID_CONFIG_INSTANCE_ID_REG(x)		(((x) << VIVS_FE_HALTI5_ID_CONFIG_INSTANCE_ID_REG__SHIFT) & VIVS_FE_HALTI5_ID_CONFIG_INSTANCE_ID_REG__MASK)

#define VIVS_FE_HALTI5_UNK007D0(i0)			       (0x000007d0 + 0x4*(i0))
#define VIVS_FE_HALTI5_UNK007D0__ESIZE				0x00000004
#define VIVS_FE_HALTI5_UNK007D0__LEN				0x00000002

#define VIVS_FE_HALTI5_UNK007D8					0x000007d8

#define VIVS_FE_DESC_START					0x000007dc

#define VIVS_FE_DESC_END					0x000007e0

#define VIVS_FE_DESC_AVAIL					0x000007e4
#define VIVS_FE_DESC_AVAIL_COUNT__MASK				0x0000007f
#define VIVS_FE_DESC_AVAIL_COUNT__SHIFT				0
#define VIVS_FE_DESC_AVAIL_COUNT(x)				(((x) << VIVS_FE_DESC_AVAIL_COUNT__SHIFT) & VIVS_FE_DESC_AVAIL_COUNT__MASK)

#define VIVS_FE_FENCE_WAIT_DATA_LOW				0x000007e8

#define VIVS_FE_FENCE_WAIT_DATA_HIGH				0x000007f4

#define VIVS_FE_ROBUSTNESS_UNK007F8				0x000007f8

#define VIVS_FE_MULTI_CLUSTER_UNK007FC				0x000007fc

#define VIVS_GL							0x00000000

#define VIVS_GL_PIPE_SELECT					0x00003800
#define VIVS_GL_PIPE_SELECT_PIPE__MASK				0x00000001
#define VIVS_GL_PIPE_SELECT_PIPE__SHIFT				0
#define VIVS_GL_PIPE_SELECT_PIPE(x)				(((x) << VIVS_GL_PIPE_SELECT_PIPE__SHIFT) & VIVS_GL_PIPE_SELECT_PIPE__MASK)

#define VIVS_GL_EVENT						0x00003804
#define VIVS_GL_EVENT_EVENT_ID__MASK				0x0000001f
#define VIVS_GL_EVENT_EVENT_ID__SHIFT				0
#define VIVS_GL_EVENT_EVENT_ID(x)				(((x) << VIVS_GL_EVENT_EVENT_ID__SHIFT) & VIVS_GL_EVENT_EVENT_ID__MASK)
#define VIVS_GL_EVENT_FROM_FE					0x00000020
#define VIVS_GL_EVENT_FROM_PE					0x00000040
#define VIVS_GL_EVENT_FROM_BLT					0x00000080
#define VIVS_GL_EVENT_SOURCE__MASK				0x00001f00
#define VIVS_GL_EVENT_SOURCE__SHIFT				8
#define VIVS_GL_EVENT_SOURCE(x)					(((x) << VIVS_GL_EVENT_SOURCE__SHIFT) & VIVS_GL_EVENT_SOURCE__MASK)

#define VIVS_GL_SEMAPHORE_TOKEN					0x00003808
#define VIVS_GL_SEMAPHORE_TOKEN_FROM__MASK			0x0000001f
#define VIVS_GL_SEMAPHORE_TOKEN_FROM__SHIFT			0
#define VIVS_GL_SEMAPHORE_TOKEN_FROM(x)				(((x) << VIVS_GL_SEMAPHORE_TOKEN_FROM__SHIFT) & VIVS_GL_SEMAPHORE_TOKEN_FROM__MASK)
#define VIVS_GL_SEMAPHORE_TOKEN_TO__MASK			0x00001f00
#define VIVS_GL_SEMAPHORE_TOKEN_TO__SHIFT			8
#define VIVS_GL_SEMAPHORE_TOKEN_TO(x)				(((x) << VIVS_GL_SEMAPHORE_TOKEN_TO__SHIFT) & VIVS_GL_SEMAPHORE_TOKEN_TO__MASK)
#define VIVS_GL_SEMAPHORE_TOKEN_UNK28__MASK			0x30000000
#define VIVS_GL_SEMAPHORE_TOKEN_UNK28__SHIFT			28
#define VIVS_GL_SEMAPHORE_TOKEN_UNK28(x)			(((x) << VIVS_GL_SEMAPHORE_TOKEN_UNK28__SHIFT) & VIVS_GL_SEMAPHORE_TOKEN_UNK28__MASK)

#define VIVS_GL_FLUSH_CACHE					0x0000380c
#define VIVS_GL_FLUSH_CACHE_DEPTH				0x00000001
#define VIVS_GL_FLUSH_CACHE_COLOR				0x00000002
#define VIVS_GL_FLUSH_CACHE_TEXTURE				0x00000004
#define VIVS_GL_FLUSH_CACHE_PE2D				0x00000008
#define VIVS_GL_FLUSH_CACHE_TEXTUREVS				0x00000010
#define VIVS_GL_FLUSH_CACHE_SHADER_L1				0x00000020
#define VIVS_GL_FLUSH_CACHE_SHADER_L2				0x00000040
#define VIVS_GL_FLUSH_CACHE_UNK10				0x00000400
#define VIVS_GL_FLUSH_CACHE_UNK11				0x00000800
#define VIVS_GL_FLUSH_CACHE_DESCRIPTOR_UNK12			0x00001000
#define VIVS_GL_FLUSH_CACHE_DESCRIPTOR_UNK13			0x00002000
#define VIVS_GL_FLUSH_CACHE_UNK14				0x00004000

#define VIVS_GL_FLUSH_MMU					0x00003810
#define VIVS_GL_FLUSH_MMU_FLUSH_FEMMU				0x00000001
#define VIVS_GL_FLUSH_MMU_FLUSH_UNK1				0x00000002
#define VIVS_GL_FLUSH_MMU_FLUSH_UNK2				0x00000004
#define VIVS_GL_FLUSH_MMU_FLUSH_PEMMU				0x00000008
#define VIVS_GL_FLUSH_MMU_FLUSH_UNK4				0x00000010

#define VIVS_GL_VERTEX_ELEMENT_CONFIG				0x00003814
#define VIVS_GL_VERTEX_ELEMENT_CONFIG_UNK0			0x00000001
#define VIVS_GL_VERTEX_ELEMENT_CONFIG_REUSE			0x00000010

#define VIVS_GL_MULTI_SAMPLE_CONFIG				0x00003818
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_SAMPLES__MASK		0x00000003
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_SAMPLES__SHIFT		0
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_SAMPLES_NONE		0x00000000
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_SAMPLES_2X		0x00000001
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_SAMPLES_4X		0x00000002
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_SAMPLES_MASK		0x00000008
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_ENABLES__MASK		0x000000f0
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_ENABLES__SHIFT		4
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_ENABLES(x)		(((x) << VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_ENABLES__SHIFT) & VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_ENABLES__MASK)
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_ENABLES_MASK		0x00000100
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK12__MASK			0x00007000
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK12__SHIFT		12
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK12(x)			(((x) << VIVS_GL_MULTI_SAMPLE_CONFIG_UNK12__SHIFT) & VIVS_GL_MULTI_SAMPLE_CONFIG_UNK12__MASK)
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK12_MASK			0x00008000
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK16__MASK			0x00030000
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK16__SHIFT		16
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK16(x)			(((x) << VIVS_GL_MULTI_SAMPLE_CONFIG_UNK16__SHIFT) & VIVS_GL_MULTI_SAMPLE_CONFIG_UNK16__MASK)
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK16_MASK			0x00080000

#define VIVS_GL_VARYING_TOTAL_COMPONENTS			0x0000381c
#define VIVS_GL_VARYING_TOTAL_COMPONENTS_NUM__MASK		0x000000ff
#define VIVS_GL_VARYING_TOTAL_COMPONENTS_NUM__SHIFT		0
#define VIVS_GL_VARYING_TOTAL_COMPONENTS_NUM(x)			(((x) << VIVS_GL_VARYING_TOTAL_COMPONENTS_NUM__SHIFT) & VIVS_GL_VARYING_TOTAL_COMPONENTS_NUM__MASK)

#define VIVS_GL_VARYING_NUM_COMPONENTS				0x00003820

#define VIVS_GL_OCCLUSION_QUERY_ADDR				0x00003824

#define VIVS_GL_VARYING_COMPONENT_USE(i0)		       (0x00003828 + 0x4*(i0))
#define VIVS_GL_VARYING_COMPONENT_USE__ESIZE			0x00000004
#define VIVS_GL_VARYING_COMPONENT_USE__LEN			0x00000002
#define VIVS_GL_VARYING_COMPONENT_USE_COMP0__MASK		0x00000003
#define VIVS_GL_VARYING_COMPONENT_USE_COMP0__SHIFT		0
#define VIVS_GL_VARYING_COMPONENT_USE_COMP0(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP0__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP0__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP1__MASK		0x0000000c
#define VIVS_GL_VARYING_COMPONENT_USE_COMP1__SHIFT		2
#define VIVS_GL_VARYING_COMPONENT_USE_COMP1(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP1__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP1__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP2__MASK		0x00000030
#define VIVS_GL_VARYING_COMPONENT_USE_COMP2__SHIFT		4
#define VIVS_GL_VARYING_COMPONENT_USE_COMP2(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP2__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP2__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP3__MASK		0x000000c0
#define VIVS_GL_VARYING_COMPONENT_USE_COMP3__SHIFT		6
#define VIVS_GL_VARYING_COMPONENT_USE_COMP3(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP3__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP3__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP4__MASK		0x00000300
#define VIVS_GL_VARYING_COMPONENT_USE_COMP4__SHIFT		8
#define VIVS_GL_VARYING_COMPONENT_USE_COMP4(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP4__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP4__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP5__MASK		0x00000c00
#define VIVS_GL_VARYING_COMPONENT_USE_COMP5__SHIFT		10
#define VIVS_GL_VARYING_COMPONENT_USE_COMP5(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP5__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP5__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP6__MASK		0x00003000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP6__SHIFT		12
#define VIVS_GL_VARYING_COMPONENT_USE_COMP6(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP6__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP6__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP7__MASK		0x0000c000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP7__SHIFT		14
#define VIVS_GL_VARYING_COMPONENT_USE_COMP7(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP7__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP7__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP8__MASK		0x00030000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP8__SHIFT		16
#define VIVS_GL_VARYING_COMPONENT_USE_COMP8(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP8__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP8__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP9__MASK		0x000c0000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP9__SHIFT		18
#define VIVS_GL_VARYING_COMPONENT_USE_COMP9(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP9__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP9__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP10__MASK		0x00300000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP10__SHIFT		20
#define VIVS_GL_VARYING_COMPONENT_USE_COMP10(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP10__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP10__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP11__MASK		0x00c00000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP11__SHIFT		22
#define VIVS_GL_VARYING_COMPONENT_USE_COMP11(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP11__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP11__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP12__MASK		0x03000000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP12__SHIFT		24
#define VIVS_GL_VARYING_COMPONENT_USE_COMP12(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP12__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP12__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP13__MASK		0x0c000000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP13__SHIFT		26
#define VIVS_GL_VARYING_COMPONENT_USE_COMP13(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP13__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP13__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP14__MASK		0x30000000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP14__SHIFT		28
#define VIVS_GL_VARYING_COMPONENT_USE_COMP14(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP14__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP14__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP15__MASK		0xc0000000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP15__SHIFT		30
#define VIVS_GL_VARYING_COMPONENT_USE_COMP15(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP15__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP15__MASK)

#define VIVS_GL_UNK0382C					0x0000382c

#define VIVS_GL_OCCLUSION_QUERY_CONTROL				0x00003830

#define VIVS_GL_VARYING_NUM_COMPONENTS2				0x00003834

#define VIVS_GL_UNK03838					0x00003838

#define VIVS_GL_API_MODE					0x0000384c
#define VIVS_GL_API_MODE_OPENGL					0x00000000
#define VIVS_GL_API_MODE_OPENVG					0x00000001
#define VIVS_GL_API_MODE_OPENCL					0x00000002

#define VIVS_GL_CONTEXT_POINTER					0x00003850

#define VIVS_GL_UNK03854					0x00003854

#define VIVS_GL_BUG_FIXES					0x00003860

#define VIVS_GL_FENCE_OUT_ADDRESS				0x00003868

#define VIVS_GL_FENCE_OUT_DATA_LOW				0x0000386c

#define VIVS_GL_USC_CONTROL					0x00003884
#define VIVS_GL_USC_CONTROL_L1_CACHE_RATIO__MASK		0x00000007
#define VIVS_GL_USC_CONTROL_L1_CACHE_RATIO__SHIFT		0
#define VIVS_GL_USC_CONTROL_L1_CACHE_RATIO(x)			(((x) << VIVS_GL_USC_CONTROL_L1_CACHE_RATIO__SHIFT) & VIVS_GL_USC_CONTROL_L1_CACHE_RATIO__MASK)
#define VIVS_GL_USC_CONTROL_ATTRIB_CACHE_RATIO__MASK		0x00000f00
#define VIVS_GL_USC_CONTROL_ATTRIB_CACHE_RATIO__SHIFT		8
#define VIVS_GL_USC_CONTROL_ATTRIB_CACHE_RATIO(x)		(((x) << VIVS_GL_USC_CONTROL_ATTRIB_CACHE_RATIO__SHIFT) & VIVS_GL_USC_CONTROL_ATTRIB_CACHE_RATIO__MASK)
#define VIVS_GL_USC_CONTROL_UNK16__MASK				0x001f0000
#define VIVS_GL_USC_CONTROL_UNK16__SHIFT			16
#define VIVS_GL_USC_CONTROL_UNK16(x)				(((x) << VIVS_GL_USC_CONTROL_UNK16__SHIFT) & VIVS_GL_USC_CONTROL_UNK16__MASK)

#define VIVS_GL_HALTI5_SH_SPECIALS				0x00003888
#define VIVS_GL_HALTI5_SH_SPECIALS_VS_PSIZE_OUT__MASK		0x0000007f
#define VIVS_GL_HALTI5_SH_SPECIALS_VS_PSIZE_OUT__SHIFT		0
#define VIVS_GL_HALTI5_SH_SPECIALS_VS_PSIZE_OUT(x)		(((x) << VIVS_GL_HALTI5_SH_SPECIALS_VS_PSIZE_OUT__SHIFT) & VIVS_GL_HALTI5_SH_SPECIALS_VS_PSIZE_OUT__MASK)
#define VIVS_GL_HALTI5_SH_SPECIALS_PS_PCOORD_IN__MASK		0x00007f00
#define VIVS_GL_HALTI5_SH_SPECIALS_PS_PCOORD_IN__SHIFT		8
#define VIVS_GL_HALTI5_SH_SPECIALS_PS_PCOORD_IN(x)		(((x) << VIVS_GL_HALTI5_SH_SPECIALS_PS_PCOORD_IN__SHIFT) & VIVS_GL_HALTI5_SH_SPECIALS_PS_PCOORD_IN__MASK)
#define VIVS_GL_HALTI5_SH_SPECIALS_UNK16__MASK			0x007f0000
#define VIVS_GL_HALTI5_SH_SPECIALS_UNK16__SHIFT			16
#define VIVS_GL_HALTI5_SH_SPECIALS_UNK16(x)			(((x) << VIVS_GL_HALTI5_SH_SPECIALS_UNK16__SHIFT) & VIVS_GL_HALTI5_SH_SPECIALS_UNK16__MASK)
#define VIVS_GL_HALTI5_SH_SPECIALS_UNK24__MASK			0xff000000
#define VIVS_GL_HALTI5_SH_SPECIALS_UNK24__SHIFT			24
#define VIVS_GL_HALTI5_SH_SPECIALS_UNK24(x)			(((x) << VIVS_GL_HALTI5_SH_SPECIALS_UNK24__SHIFT) & VIVS_GL_HALTI5_SH_SPECIALS_UNK24__MASK)

#define VIVS_GL_GS_UNK0388C					0x0000388c

#define VIVS_GL_FENCE_OUT_DATA_HIGH				0x00003898

#define VIVS_GL_SHADER_INDEX					0x0000389c

#define VIVS_GL_GS_UNK038A0(i0)				       (0x000038a0 + 0x4*(i0))
#define VIVS_GL_GS_UNK038A0__ESIZE				0x00000004
#define VIVS_GL_GS_UNK038A0__LEN				0x00000008

#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES(i0)		       (0x000038c0 + 0x4*(i0))
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES__ESIZE			0x00000004
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES__LEN			0x00000010
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_X__MASK		0x00000007
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_X__SHIFT		0
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_X(x)		(((x) << VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_X__SHIFT) & VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_X__MASK)
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_Y__MASK		0x00000070
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_Y__SHIFT		4
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_Y(x)		(((x) << VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_Y__SHIFT) & VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_Y__MASK)
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_Z__MASK		0x00000700
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_Z__SHIFT		8
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_Z(x)		(((x) << VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_Z__SHIFT) & VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_Z__MASK)
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_W__MASK		0x00007000
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_W__SHIFT		12
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_W(x)		(((x) << VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_W__SHIFT) & VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V0_W__MASK)
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_X__MASK		0x00070000
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_X__SHIFT		16
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_X(x)		(((x) << VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_X__SHIFT) & VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_X__MASK)
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_Y__MASK		0x00700000
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_Y__SHIFT		20
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_Y(x)		(((x) << VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_Y__SHIFT) & VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_Y__MASK)
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_Z__MASK		0x07000000
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_Z__SHIFT		24
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_Z(x)		(((x) << VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_Z__SHIFT) & VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_Z__MASK)
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_W__MASK		0x70000000
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_W__SHIFT		28
#define VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_W(x)		(((x) << VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_W__SHIFT) & VIVS_GL_HALTI5_SHADER_ATTRIBUTES_V1_W__MASK)

#define VIVS_GL_SECURITY_UNK3900				0x00003900

#define VIVS_GL_SECURITY_UNK3904				0x00003904

#define VIVS_GL_MULTI_CLUSTER_UNK3908				0x00003908
#define VIVS_GL_MULTI_CLUSTER_UNK3908_UNK0__MASK		0x00000007
#define VIVS_GL_MULTI_CLUSTER_UNK3908_UNK0__SHIFT		0
#define VIVS_GL_MULTI_CLUSTER_UNK3908_UNK0(x)			(((x) << VIVS_GL_MULTI_CLUSTER_UNK3908_UNK0__SHIFT) & VIVS_GL_MULTI_CLUSTER_UNK3908_UNK0__MASK)

#define VIVS_GL_MULTI_CLUSTER_UNK3910(i0)		       (0x00003910 + 0x4*(i0))
#define VIVS_GL_MULTI_CLUSTER_UNK3910__ESIZE			0x00000004
#define VIVS_GL_MULTI_CLUSTER_UNK3910__LEN			0x00000004
#define VIVS_GL_MULTI_CLUSTER_UNK3910_CLUSTER_ALIVE_MASK__MASK	0x000000ff
#define VIVS_GL_MULTI_CLUSTER_UNK3910_CLUSTER_ALIVE_MASK__SHIFT	0
#define VIVS_GL_MULTI_CLUSTER_UNK3910_CLUSTER_ALIVE_MASK(x)	(((x) << VIVS_GL_MULTI_CLUSTER_UNK3910_CLUSTER_ALIVE_MASK__SHIFT) & VIVS_GL_MULTI_CLUSTER_UNK3910_CLUSTER_ALIVE_MASK__MASK)

#define VIVS_GL_NN_CONFIG					0x00003930
#define VIVS_GL_NN_CONFIG_UNK0__MASK				0x00000003
#define VIVS_GL_NN_CONFIG_UNK0__SHIFT				0
#define VIVS_GL_NN_CONFIG_UNK0(x)				(((x) << VIVS_GL_NN_CONFIG_UNK0__SHIFT) & VIVS_GL_NN_CONFIG_UNK0__MASK)
#define VIVS_GL_NN_CONFIG_DISABLE_ZDPN				0x00000004
#define VIVS_GL_NN_CONFIG_DISABLE_SWTILING			0x00000008
#define VIVS_GL_NN_CONFIG_SMALL_BATCH				0x00000010
#define VIVS_GL_NN_CONFIG_DDR_BURST_SIZE__MASK			0x00000060
#define VIVS_GL_NN_CONFIG_DDR_BURST_SIZE__SHIFT			5
#define VIVS_GL_NN_CONFIG_DDR_BURST_SIZE(x)			(((x) << VIVS_GL_NN_CONFIG_DDR_BURST_SIZE__SHIFT) & VIVS_GL_NN_CONFIG_DDR_BURST_SIZE__MASK)
#define VIVS_GL_NN_CONFIG_UNK7					0x00000080
#define VIVS_GL_NN_CONFIG_NN_CORE_COUNT__MASK			0x00000f00
#define VIVS_GL_NN_CONFIG_NN_CORE_COUNT__SHIFT			8
#define VIVS_GL_NN_CONFIG_NN_CORE_COUNT(x)			(((x) << VIVS_GL_NN_CONFIG_NN_CORE_COUNT__SHIFT) & VIVS_GL_NN_CONFIG_NN_CORE_COUNT__MASK)
#define VIVS_GL_NN_CONFIG_UNK12					0x00001000

#define VIVS_GL_SRAM_REMAP_ADDRESS				0x00003938

#define VIVS_GL_OCB_REMAP_START					0x0000393c

#define VIVS_GL_OCB_REMAP_END					0x00003940

#define VIVS_GL_TP_CONFIG					0x0000394c

#define VIVS_GL_UNK03950					0x00003950

#define VIVS_GL_UNK03A00					0x00003a00
#define VIVS_GL_UNK03A00_UNK0__MASK				0x00000007
#define VIVS_GL_UNK03A00_UNK0__SHIFT				0
#define VIVS_GL_UNK03A00_UNK0(x)				(((x) << VIVS_GL_UNK03A00_UNK0__SHIFT) & VIVS_GL_UNK03A00_UNK0__MASK)

#define VIVS_GL_UNK03A04					0x00003a04

#define VIVS_GL_UNK03A08					0x00003a08

#define VIVS_GL_UNK03A0C					0x00003a0c

#define VIVS_GL_UNK03A10					0x00003a10

#define VIVS_GL_STALL_TOKEN					0x00003c00
#define VIVS_GL_STALL_TOKEN_FROM__MASK				0x0000001f
#define VIVS_GL_STALL_TOKEN_FROM__SHIFT				0
#define VIVS_GL_STALL_TOKEN_FROM(x)				(((x) << VIVS_GL_STALL_TOKEN_FROM__SHIFT) & VIVS_GL_STALL_TOKEN_FROM__MASK)
#define VIVS_GL_STALL_TOKEN_TO__MASK				0x00001f00
#define VIVS_GL_STALL_TOKEN_TO__SHIFT				8
#define VIVS_GL_STALL_TOKEN_TO(x)				(((x) << VIVS_GL_STALL_TOKEN_TO__SHIFT) & VIVS_GL_STALL_TOKEN_TO__MASK)
#define VIVS_GL_STALL_TOKEN_FLIP0				0x40000000
#define VIVS_GL_STALL_TOKEN_FLIP1				0x80000000

#define VIVS_NFE						0x00000000

#define VIVS_NFE_VERTEX_STREAMS(i0)			       (0x00000000 + 0x4*(i0))
#define VIVS_NFE_VERTEX_STREAMS__ESIZE				0x00000004
#define VIVS_NFE_VERTEX_STREAMS__LEN				0x00000010

#define VIVS_NFE_VERTEX_STREAMS_BASE_ADDR(i0)		       (0x00014600 + 0x4*(i0))

#define VIVS_NFE_VERTEX_STREAMS_CONTROL(i0)		       (0x00014640 + 0x4*(i0))

#define VIVS_NFE_VERTEX_STREAMS_VERTEX_DIVISOR(i0)	       (0x00014680 + 0x4*(i0))

#define VIVS_NFE_VERTEX_STREAMS_ROBUSTNESS_UNK146C0(i0)	       (0x000146c0 + 0x4*(i0))

#define VIVS_NFE_GENERIC_ATTRIB(i0)			       (0x00000000 + 0x4*(i0))
#define VIVS_NFE_GENERIC_ATTRIB__ESIZE				0x00000004
#define VIVS_NFE_GENERIC_ATTRIB__LEN				0x00000020

#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0(i0)		       (0x00017800 + 0x4*(i0))
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_TYPE__MASK		0x0000000f
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_TYPE__SHIFT		0
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_TYPE(x)			(((x) << VIVS_NFE_GENERIC_ATTRIB_CONFIG0_TYPE__SHIFT) & VIVS_NFE_GENERIC_ATTRIB_CONFIG0_TYPE__MASK)
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_ENDIAN__MASK		0x00000030
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_ENDIAN__SHIFT		4
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_ENDIAN(x)		(((x) << VIVS_NFE_GENERIC_ATTRIB_CONFIG0_ENDIAN__SHIFT) & VIVS_NFE_GENERIC_ATTRIB_CONFIG0_ENDIAN__MASK)
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_STREAM__MASK		0x00000f00
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_STREAM__SHIFT		8
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_STREAM(x)		(((x) << VIVS_NFE_GENERIC_ATTRIB_CONFIG0_STREAM__SHIFT) & VIVS_NFE_GENERIC_ATTRIB_CONFIG0_STREAM__MASK)
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_NUM__MASK		0x00003000
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_NUM__SHIFT		12
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_NUM(x)			(((x) << VIVS_NFE_GENERIC_ATTRIB_CONFIG0_NUM__SHIFT) & VIVS_NFE_GENERIC_ATTRIB_CONFIG0_NUM__MASK)
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_NORMALIZE__MASK		0x0000c000
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_NORMALIZE__SHIFT	14
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_NORMALIZE_OFF		0x00000000
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_NORMALIZE_ON		0x00008000
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_START__MASK		0x00ff0000
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_START__SHIFT		16
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG0_START(x)		(((x) << VIVS_NFE_GENERIC_ATTRIB_CONFIG0_START__SHIFT) & VIVS_NFE_GENERIC_ATTRIB_CONFIG0_START__MASK)

#define VIVS_NFE_GENERIC_ATTRIB_UNK17880(i0)		       (0x00017880 + 0x4*(i0))

#define VIVS_NFE_GENERIC_ATTRIB_UNK17900(i0)		       (0x00017900 + 0x4*(i0))

#define VIVS_NFE_GENERIC_ATTRIB_UNK17980(i0)		       (0x00017980 + 0x4*(i0))

#define VIVS_NFE_GENERIC_ATTRIB_SCALE(i0)		       (0x00017a00 + 0x4*(i0))

#define VIVS_NFE_GENERIC_ATTRIB_CONFIG1(i0)		       (0x00017a80 + 0x4*(i0))
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG1_END__MASK		0x000000ff
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG1_END__SHIFT		0
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG1_END(x)			(((x) << VIVS_NFE_GENERIC_ATTRIB_CONFIG1_END__SHIFT) & VIVS_NFE_GENERIC_ATTRIB_CONFIG1_END__MASK)
#define VIVS_NFE_GENERIC_ATTRIB_CONFIG1_NONCONSECUTIVE		0x00000800

#define VIVS_DUMMY						0x00000000

#define VIVS_DUMMY_DUMMY					0x0003fffc

#define VIVS_WD							0x00000000

#define VIVS_WD_UNK18404					0x00018404
#define VIVS_WD_UNK18404_UNK0__MASK				0x00000003
#define VIVS_WD_UNK18404_UNK0__SHIFT				0
#define VIVS_WD_UNK18404_UNK0(x)				(((x) << VIVS_WD_UNK18404_UNK0__SHIFT) & VIVS_WD_UNK18404_UNK0__MASK)


#endif /* STATE_XML */
