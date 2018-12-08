/*
 * iaxxx-register-defs-out-tunnel-group.h -- IAxxx register definition
 *
 * Copyright (c) 2016 Knowles, inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __IAXXX_REGISTER_DEFS_OUT_TNL_GRP_H__
#define __IAXXX_REGISTER_DEFS_OUT_TNL_GRP_H__

/*** The base address for this set of registers ***/
#define IAXXX_OUT_TNL_GRP_REGS_ADDR (0x03000030)

/*** OUT_TNL_GRP_TNL_CTRL (0x03000030) ***/
/*
 * Tunnel Control Register.
 */
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_ADDR (0x03000030)
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_MASK_VAL 0x00ff0003
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_RMASK_VAL 0x00ff0003
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_WMASK_VAL 0x00ff0003
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_RESET_VAL 0x00000000

/*
 * Tunnel direction
 * 0 - Input (host to device)
 * 1 - Output (device to host)
 */
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_DIR_MASK 0x00000001
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_DIR_RESET_VAL 0x0
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_DIR_POS 0
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_DIR_SIZE 1
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_DIR_DECL 0

/*
 * Tunnel operation mode
 * 0 - Sync (Does not discard frames. Halts source until current frame is
 * consumed.)
 * 1 - Async (Discards old frame when new one arrives before current frame is
 * consumed. Does not affect source flow.)
 */
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_MODE_MASK 0x00000002
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_MODE_RESET_VAL 0x0
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_MODE_POS 1
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_MODE_SIZE 1
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_MODE_DECL 1

/*
 * Expected output encoding. The data coming from the tunnel will be
 * converted to the specified format. It will not affect the OPAQUE encoded
 * data.
 * 1  - Afloat
 * 15 - Q15
 */
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_OUTPUT_ENCODING_MASK 0x00ff0000
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_OUTPUT_ENCODING_RESET_VAL 0x0
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_OUTPUT_ENCODING_POS 16
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_OUTPUT_ENCODING_SIZE 8
#define IAXXX_OUT_TNL_GRP_TNL_CTRL_OUTPUT_ENCODING_DECL (23 : 16)

/*** OUT_TNL_GRP_CONNECT (0x03000034) ***/
/*
 */
#define IAXXX_OUT_TNL_GRP_CONNECT_ADDR (0x03000034)
#define IAXXX_OUT_TNL_GRP_CONNECT_MASK_VAL 0x0000ffff
#define IAXXX_OUT_TNL_GRP_CONNECT_RMASK_VAL 0x0000ffff
#define IAXXX_OUT_TNL_GRP_CONNECT_WMASK_VAL 0x0000ffff
#define IAXXX_OUT_TNL_GRP_CONNECT_RESET_VAL 0x00000000

/*
 * System ID of the source endpoint feeding this endpoint
 */
#define IAXXX_OUT_TNL_GRP_CONNECT_SOURCE_ID_MASK 0x0000ffff
#define IAXXX_OUT_TNL_GRP_CONNECT_SOURCE_ID_RESET_VAL 0x0
#define IAXXX_OUT_TNL_GRP_CONNECT_SOURCE_ID_POS 0
#define IAXXX_OUT_TNL_GRP_CONNECT_SOURCE_ID_SIZE 16
#define IAXXX_OUT_TNL_GRP_CONNECT_SOURCE_ID_DECL (15 : 0)

/*** OUT_TNL_GRP_TNL_NFRAME_DROPS (0x03000038) ***/
/*
 * Number of Frames drops.
 */
#define IAXXX_OUT_TNL_GRP_TNL_NFRAME_DROPS_ADDR (0x03000038)
#define IAXXX_OUT_TNL_GRP_TNL_NFRAME_DROPS_MASK_VAL 0xffffffff
#define IAXXX_OUT_TNL_GRP_TNL_NFRAME_DROPS_RMASK_VAL 0xffffffff
#define IAXXX_OUT_TNL_GRP_TNL_NFRAME_DROPS_WMASK_VAL 0x00000000
#define IAXXX_OUT_TNL_GRP_TNL_NFRAME_DROPS_RESET_VAL 0x00000000

/*
 * Number of Frames drops.
 */
#define IAXXX_OUT_TNL_GRP_TNL_NFRAME_DROPS_TNL_NFRAME_DROPS_CNT_MASK 0xffffffff
#define IAXXX_OUT_TNL_GRP_TNL_NFRAME_DROPS_TNL_NFRAME_DROPS_CNT_RESET_VAL 0x0
#define IAXXX_OUT_TNL_GRP_TNL_NFRAME_DROPS_TNL_NFRAME_DROPS_CNT_POS 0
#define IAXXX_OUT_TNL_GRP_TNL_NFRAME_DROPS_TNL_NFRAME_DROPS_CNT_SIZE 32
#define IAXXX_OUT_TNL_GRP_TNL_NFRAME_DROPS_TNL_NFRAME_DROPS_CNT_DECL (31 : 0)

/*** OUT_TNL_GRP_TNL_NSENT_TO_HOST (0x0300003c) ***/
/*
 * Number of Frames sent to host.
 */
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TO_HOST_ADDR (0x0300003c)
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TO_HOST_MASK_VAL 0xffffffff
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TO_HOST_RMASK_VAL 0xffffffff
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TO_HOST_WMASK_VAL 0x00000000
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TO_HOST_RESET_VAL 0x00000000

/*
 * Number of Frames sent to host.
 */
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TO_HOST_TNL_NSENT_TO_HOST_CNT_MASK 0xffffffff
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TO_HOST_TNL_NSENT_TO_HOST_CNT_RESET_VAL 0x0
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TO_HOST_TNL_NSENT_TO_HOST_CNT_POS 0
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TO_HOST_TNL_NSENT_TO_HOST_CNT_SIZE 32
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TO_HOST_TNL_NSENT_TO_HOST_CNT_DECL (31 : 0)

/*** OUT_TNL_GRP_TNL_NSENT (0x03000040) ***/
/*
 * Number of Frames sent.
 */
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_ADDR (0x03000040)
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_MASK_VAL 0xffffffff
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_RMASK_VAL 0xffffffff
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_WMASK_VAL 0x00000000
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_RESET_VAL 0x00000000

/*
 * Number of Frames sent.
 */
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TNL_NSENT_CNT_MASK 0xffffffff
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TNL_NSENT_CNT_RESET_VAL 0x0
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TNL_NSENT_CNT_POS 0
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TNL_NSENT_CNT_SIZE 32
#define IAXXX_OUT_TNL_GRP_TNL_NSENT_TNL_NSENT_CNT_DECL (31 : 0)

/*** OUT_TNL_GRP_TNL_NRECVD (0x03000044) ***/
/*
 * Number of Frames received.
 */
#define IAXXX_OUT_TNL_GRP_TNL_NRECVD_ADDR (0x03000044)
#define IAXXX_OUT_TNL_GRP_TNL_NRECVD_MASK_VAL 0xffffffff
#define IAXXX_OUT_TNL_GRP_TNL_NRECVD_RMASK_VAL 0xffffffff
#define IAXXX_OUT_TNL_GRP_TNL_NRECVD_WMASK_VAL 0x00000000
#define IAXXX_OUT_TNL_GRP_TNL_NRECVD_RESET_VAL 0x00000000

/*
 * Number of Frames received.
 */
#define IAXXX_OUT_TNL_GRP_TNL_NRECVD_TNL_NRECVD_CNT_MASK 0xffffffff
#define IAXXX_OUT_TNL_GRP_TNL_NRECVD_TNL_NRECVD_CNT_RESET_VAL 0x0
#define IAXXX_OUT_TNL_GRP_TNL_NRECVD_TNL_NRECVD_CNT_POS 0
#define IAXXX_OUT_TNL_GRP_TNL_NRECVD_TNL_NRECVD_CNT_SIZE 32
#define IAXXX_OUT_TNL_GRP_TNL_NRECVD_TNL_NRECVD_CNT_DECL (31 : 0)

/* Number of registers in the module */
#define IAXXX_OUT_TNL_GRP_REG_NUM 6

#endif /* __IAXXX_REGISTER_DEFS_OUT_TNL_GRP_H__ */