/*
 * amsung EXYNOS Camera PostProcessing driver
 *
 *  Copyright (C) 2016 Samsung Electronics Co., Ltd.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 */

#ifndef CAMERAPP_SFR_GDC_V110_H
#define CAMERAPP_SFR_GDC_V110_H

enum camerapp_gdc_reg_name {
	GDC_R_GDC_YUV_FORMAT,
	GDC_R_GDC_DMA_ADDRESS,
	GDC_R_GDC_DMA_ADDRESS_2,
	GDC_R_GDC_CONFIG,
	GDC_R_GDC_INPUT_ORG_SIZE,
	GDC_R_GDC_INPUT_CROP_SIZE,
	GDC_R_GDC_INPUT_CROP_START,
	GDC_R_GDC_SCALE,
	GDC_R_GDC_SCALE_SHIFTER,
	GDC_R_GDC_INV_SCALE,
	GDC_R_GDC_OUT_CROP_SIZE,
	GDC_R_GDC_OUT_CROP_START,
	GDC_R_GDC_OUT_SCALE,
	GDC_R_GDC_INTERPOLATION,
	GDC_R_CORE_DEBUG,
	GDC_R_GDC_GRID_DX_0,
	GDC_R_GDC_GRID_DX_1,
	GDC_R_GDC_GRID_DX_2,
	GDC_R_GDC_GRID_DX_3,
	GDC_R_GDC_GRID_DX_4,
	GDC_R_GDC_GRID_DX_5,
	GDC_R_GDC_GRID_DX_6,
	GDC_R_GDC_GRID_DX_7,
	GDC_R_GDC_GRID_DX_8,
	GDC_R_GDC_GRID_DX_9,
	GDC_R_GDC_GRID_DX_10,
	GDC_R_GDC_GRID_DX_11,
	GDC_R_GDC_GRID_DX_12,
	GDC_R_GDC_GRID_DX_13,
	GDC_R_GDC_GRID_DX_14,
	GDC_R_GDC_GRID_DX_15,
	GDC_R_GDC_GRID_DX_16,
	GDC_R_GDC_GRID_DX_17,
	GDC_R_GDC_GRID_DX_18,
	GDC_R_GDC_GRID_DX_19,
	GDC_R_GDC_GRID_DX_20,
	GDC_R_GDC_GRID_DX_21,
	GDC_R_GDC_GRID_DX_22,
	GDC_R_GDC_GRID_DX_23,
	GDC_R_GDC_GRID_DX_24,
	GDC_R_GDC_GRID_DX_25,
	GDC_R_GDC_GRID_DX_26,
	GDC_R_GDC_GRID_DX_27,
	GDC_R_GDC_GRID_DX_28,
	GDC_R_GDC_GRID_DX_29,
	GDC_R_GDC_GRID_DX_30,
	GDC_R_GDC_GRID_DX_31,
	GDC_R_GDC_GRID_DX_32,
	GDC_R_GDC_GRID_DX_33,
	GDC_R_GDC_GRID_DX_34,
	GDC_R_GDC_GRID_DX_35,
	GDC_R_GDC_GRID_DX_36,
	GDC_R_GDC_GRID_DX_37,
	GDC_R_GDC_GRID_DX_38,
	GDC_R_GDC_GRID_DX_39,
	GDC_R_GDC_GRID_DX_40,
	GDC_R_GDC_GRID_DX_41,
	GDC_R_GDC_GRID_DX_42,
	GDC_R_GDC_GRID_DX_43,
	GDC_R_GDC_GRID_DX_44,
	GDC_R_GDC_GRID_DX_45,
	GDC_R_GDC_GRID_DX_46,
	GDC_R_GDC_GRID_DX_47,
	GDC_R_GDC_GRID_DX_48,
	GDC_R_GDC_GRID_DX_49,
	GDC_R_GDC_GRID_DX_50,
	GDC_R_GDC_GRID_DX_51,
	GDC_R_GDC_GRID_DX_52,
	GDC_R_GDC_GRID_DX_53,
	GDC_R_GDC_GRID_DX_54,
	GDC_R_GDC_GRID_DX_55,
	GDC_R_GDC_GRID_DX_56,
	GDC_R_GDC_GRID_DX_57,
	GDC_R_GDC_GRID_DX_58,
	GDC_R_GDC_GRID_DX_59,
	GDC_R_GDC_GRID_DX_60,
	GDC_R_GDC_GRID_DX_61,
	GDC_R_GDC_GRID_DX_62,
	GDC_R_GDC_GRID_DY_0,
	GDC_R_GDC_GRID_DY_1,
	GDC_R_GDC_GRID_DY_2,
	GDC_R_GDC_GRID_DY_3,
	GDC_R_GDC_GRID_DY_4,
	GDC_R_GDC_GRID_DY_5,
	GDC_R_GDC_GRID_DY_6,
	GDC_R_GDC_GRID_DY_7,
	GDC_R_GDC_GRID_DY_8,
	GDC_R_GDC_GRID_DY_9,
	GDC_R_GDC_GRID_DY_10,
	GDC_R_GDC_GRID_DY_11,
	GDC_R_GDC_GRID_DY_12,
	GDC_R_GDC_GRID_DY_13,
	GDC_R_GDC_GRID_DY_14,
	GDC_R_GDC_GRID_DY_15,
	GDC_R_GDC_GRID_DY_16,
	GDC_R_GDC_GRID_DY_17,
	GDC_R_GDC_GRID_DY_18,
	GDC_R_GDC_GRID_DY_19,
	GDC_R_GDC_GRID_DY_20,
	GDC_R_GDC_GRID_DY_21,
	GDC_R_GDC_GRID_DY_22,
	GDC_R_GDC_GRID_DY_23,
	GDC_R_GDC_GRID_DY_24,
	GDC_R_GDC_GRID_DY_25,
	GDC_R_GDC_GRID_DY_26,
	GDC_R_GDC_GRID_DY_27,
	GDC_R_GDC_GRID_DY_28,
	GDC_R_GDC_GRID_DY_29,
	GDC_R_GDC_GRID_DY_30,
	GDC_R_GDC_GRID_DY_31,
	GDC_R_GDC_GRID_DY_32,
	GDC_R_GDC_GRID_DY_33,
	GDC_R_GDC_GRID_DY_34,
	GDC_R_GDC_GRID_DY_35,
	GDC_R_GDC_GRID_DY_36,
	GDC_R_GDC_GRID_DY_37,
	GDC_R_GDC_GRID_DY_38,
	GDC_R_GDC_GRID_DY_39,
	GDC_R_GDC_GRID_DY_40,
	GDC_R_GDC_GRID_DY_41,
	GDC_R_GDC_GRID_DY_42,
	GDC_R_GDC_GRID_DY_43,
	GDC_R_GDC_GRID_DY_44,
	GDC_R_GDC_GRID_DY_45,
	GDC_R_GDC_GRID_DY_46,
	GDC_R_GDC_GRID_DY_47,
	GDC_R_GDC_GRID_DY_48,
	GDC_R_GDC_GRID_DY_49,
	GDC_R_GDC_GRID_DY_50,
	GDC_R_GDC_GRID_DY_51,
	GDC_R_GDC_GRID_DY_52,
	GDC_R_GDC_GRID_DY_53,
	GDC_R_GDC_GRID_DY_54,
	GDC_R_GDC_GRID_DY_55,
	GDC_R_GDC_GRID_DY_56,
	GDC_R_GDC_GRID_DY_57,
	GDC_R_GDC_GRID_DY_58,
	GDC_R_GDC_GRID_DY_59,
	GDC_R_GDC_GRID_DY_60,
	GDC_R_GDC_GRID_DY_61,
	GDC_R_GDC_GRID_DY_62,
	GDC_R_PXC_FLUSH,
	GDC_R_PXC_REQ_CNT_LUM_0,
	GDC_R_PXC_HIT_CNT_LUM_0,
	GDC_R_PXC_DEBUG_BUSY,
	GDC_R_PXC_DEBUG_LUM0,
	GDC_R_PXC_STRIDE_LUM,
	GDC_R_PXC_STRIDE_CHROMA,
	GDC_R_PXC_DPB_BASE_LUM,
	GDC_R_PXC_DPB_BASE_CHROMA,
	GDC_R_PEND,
	GDC_R_REQ_STOP,
	GDC_R_WAXI_STRIDE_LUM,
	GDC_R_WAXI_STRIDE_CHROMA,
	GDC_R_FRAMESTART_CMD,
	GDC_R_GDC_INT_MASK,
	GDC_R_GDC_INT_STATUS,
	GDC_R_GDC_PRO_SIZE,
	GDC_R_GDC_SW_RESET,
	GDC_R_GDC_PROCESSING,
	GDC_REG_CNT,
};

static const struct camerapp_sfr_reg gdc_regs[GDC_REG_CNT] = {
	{0x04, "GDC_YUV_FORMAT"},
	{0x10, "GDC_DMA_ADDRESS"},
	{0x14, "GDC_DMA_ADDRESS_2"},
	{0x28, "GDC_CONFIG"},
	{0x50, "GDC_INPUT_ORG_SIZE"},
	{0x54, "GDC_INPUT_CROP_SIZE"},
	{0x58, "GDC_INPUT_CROP_START"},
	{0x5c, "GDC_SCALE"},
	{0x60, "GDC_SCALE_SHIFTER"},
	{0x64, "GDC_INV_SCALE"},
	{0x68, "GDC_OUT_CROP_SIZE"},
	{0x6c, "GDC_OUT_CROP_START"},
	{0x70, "GDC_OUT_SCALE"},
	{0x7c, "GDC_INTERPOLATION"},
	{0x80, "CORE_DEBUG"},
	{0x100, "GDC_GRID_DX_0"},
	{0x104, "GDC_GRID_DX_1"},
	{0x108, "GDC_GRID_DX_2"},
	{0x10c, "GDC_GRID_DX_3"},
	{0x110, "GDC_GRID_DX_4"},
	{0x114, "GDC_GRID_DX_5"},
	{0x118, "GDC_GRID_DX_6"},
	{0x11c, "GDC_GRID_DX_7"},
	{0x120, "GDC_GRID_DX_8"},
	{0x124, "GDC_GRID_DX_9"},
	{0x128, "GDC_GRID_DX_10"},
	{0x12c, "GDC_GRID_DX_11"},
	{0x130, "GDC_GRID_DX_12"},
	{0x134, "GDC_GRID_DX_13"},
	{0x138, "GDC_GRID_DX_14"},
	{0x13c, "GDC_GRID_DX_15"},
	{0x140, "GDC_GRID_DX_16"},
	{0x144, "GDC_GRID_DX_17"},
	{0x148, "GDC_GRID_DX_18"},
	{0x14c, "GDC_GRID_DX_19"},
	{0x150, "GDC_GRID_DX_20"},
	{0x154, "GDC_GRID_DX_21"},
	{0x158, "GDC_GRID_DX_22"},
	{0x15c, "GDC_GRID_DX_23"},
	{0x160, "GDC_GRID_DX_24"},
	{0x164, "GDC_GRID_DX_25"},
	{0x168, "GDC_GRID_DX_26"},
	{0x16c, "GDC_GRID_DX_27"},
	{0x170, "GDC_GRID_DX_28"},
	{0x174, "GDC_GRID_DX_29"},
	{0x178, "GDC_GRID_DX_30"},
	{0x17c, "GDC_GRID_DX_31"},
	{0x180, "GDC_GRID_DX_32"},
	{0x184, "GDC_GRID_DX_33"},
	{0x188, "GDC_GRID_DX_34"},
	{0x18c, "GDC_GRID_DX_35"},
	{0x190, "GDC_GRID_DX_36"},
	{0x194, "GDC_GRID_DX_37"},
	{0x198, "GDC_GRID_DX_38"},
	{0x19c, "GDC_GRID_DX_39"},
	{0x1a0, "GDC_GRID_DX_40"},
	{0x1a4, "GDC_GRID_DX_41"},
	{0x1a8, "GDC_GRID_DX_42"},
	{0x1ac, "GDC_GRID_DX_43"},
	{0x1b0, "GDC_GRID_DX_44"},
	{0x1b4, "GDC_GRID_DX_45"},
	{0x1b8, "GDC_GRID_DX_46"},
	{0x1bc, "GDC_GRID_DX_47"},
	{0x1c0, "GDC_GRID_DX_48"},
	{0x1c4, "GDC_GRID_DX_49"},
	{0x1c8, "GDC_GRID_DX_50"},
	{0x1cc, "GDC_GRID_DX_51"},
	{0x1d0, "GDC_GRID_DX_52"},
	{0x1d4, "GDC_GRID_DX_53"},
	{0x1d8, "GDC_GRID_DX_54"},
	{0x1dc, "GDC_GRID_DX_55"},
	{0x1e0, "GDC_GRID_DX_56"},
	{0x1e4, "GDC_GRID_DX_57"},
	{0x1e8, "GDC_GRID_DX_58"},
	{0x1ec, "GDC_GRID_DX_59"},
	{0x1f0, "GDC_GRID_DX_60"},
	{0x1f4, "GDC_GRID_DX_61"},
	{0x1f8, "GDC_GRID_DX_62"},
	{0x200, "GDC_GRID_DY_0"},
	{0x204, "GDC_GRID_DY_1"},
	{0x208, "GDC_GRID_DY_2"},
	{0x20c, "GDC_GRID_DY_3"},
	{0x210, "GDC_GRID_DY_4"},
	{0x214, "GDC_GRID_DY_5"},
	{0x218, "GDC_GRID_DY_6"},
	{0x21c, "GDC_GRID_DY_7"},
	{0x220, "GDC_GRID_DY_8"},
	{0x224, "GDC_GRID_DY_9"},
	{0x228, "GDC_GRID_DY_10"},
	{0x22c, "GDC_GRID_DY_11"},
	{0x230, "GDC_GRID_DY_12"},
	{0x234, "GDC_GRID_DY_13"},
	{0x238, "GDC_GRID_DY_14"},
	{0x23c, "GDC_GRID_DY_15"},
	{0x240, "GDC_GRID_DY_16"},
	{0x244, "GDC_GRID_DY_17"},
	{0x248, "GDC_GRID_DY_18"},
	{0x24c, "GDC_GRID_DY_19"},
	{0x250, "GDC_GRID_DY_20"},
	{0x254, "GDC_GRID_DY_21"},
	{0x258, "GDC_GRID_DY_22"},
	{0x25c, "GDC_GRID_DY_23"},
	{0x260, "GDC_GRID_DY_24"},
	{0x264, "GDC_GRID_DY_25"},
	{0x268, "GDC_GRID_DY_26"},
	{0x26c, "GDC_GRID_DY_27"},
	{0x270, "GDC_GRID_DY_28"},
	{0x274, "GDC_GRID_DY_29"},
	{0x278, "GDC_GRID_DY_30"},
	{0x27c, "GDC_GRID_DY_31"},
	{0x280, "GDC_GRID_DY_32"},
	{0x284, "GDC_GRID_DY_33"},
	{0x288, "GDC_GRID_DY_34"},
	{0x28c, "GDC_GRID_DY_35"},
	{0x290, "GDC_GRID_DY_36"},
	{0x294, "GDC_GRID_DY_37"},
	{0x298, "GDC_GRID_DY_38"},
	{0x29c, "GDC_GRID_DY_39"},
	{0x2a0, "GDC_GRID_DY_40"},
	{0x2a4, "GDC_GRID_DY_41"},
	{0x2a8, "GDC_GRID_DY_42"},
	{0x2ac, "GDC_GRID_DY_43"},
	{0x2b0, "GDC_GRID_DY_44"},
	{0x2b4, "GDC_GRID_DY_45"},
	{0x2b8, "GDC_GRID_DY_46"},
	{0x2bc, "GDC_GRID_DY_47"},
	{0x2c0, "GDC_GRID_DY_48"},
	{0x2c4, "GDC_GRID_DY_49"},
	{0x2c8, "GDC_GRID_DY_50"},
	{0x2cc, "GDC_GRID_DY_51"},
	{0x2d0, "GDC_GRID_DY_52"},
	{0x2d4, "GDC_GRID_DY_53"},
	{0x2d8, "GDC_GRID_DY_54"},
	{0x2dc, "GDC_GRID_DY_55"},
	{0x2e0, "GDC_GRID_DY_56"},
	{0x2e4, "GDC_GRID_DY_57"},
	{0x2e8, "GDC_GRID_DY_58"},
	{0x2ec, "GDC_GRID_DY_59"},
	{0x2f0, "GDC_GRID_DY_60"},
	{0x2f4, "GDC_GRID_DY_61"},
	{0x2f8, "GDC_GRID_DY_62"},
	{0x308, "PXC_FLUSH"},
	{0x314, "PXC_REQ_CNT_LUM_0"},
	{0x320, "PXC_HIT_CNT_LUM_0"},
	{0x32c, "PXC_DEBUG_BUSY"},
	{0x330, "PXC_DEBUG_LUM0"},
	{0x384, "PXC_STRIDE_LUM"},
	{0x388, "PXC_STRIDE_CHROMA"},
	{0x400, "PXC_DPB_BASE_LUM"},
	{0x404, "PXC_DPB_BASE_CHROMA"},
	{0x500, "PEND"},
	{0x504, "REQ_STOP"},
	{0x508, "WAXI_STRIDE_LUM"},
	{0x50c, "WAXI_STRIDE_CHROMA"},
	{0x510, "FRAMESTART_CMD"},
	{0x514, "GDC_INT_MASK"},
	{0x518, "GDC_INT_STATUS"},
	{0x51c, "GDC_PRO_SIZE"},
	{0x520, "GDC_SW_RESET"},
	{0x524, "GDC_PROCESSING"},
};

enum camerapp_gdc_reg_field {
	GDC_F_DST_PIXEL_FORMAT,
	GDC_F_SRC_PIXEL_FORMAT,
	GDC_F_GDC_YUV_FORMAT,
	GDC_F_GDC_DMA_ADDRESS,
	GDC_F_GDC_DMA_ADDRESS_2,
	GDC_F_GDC_MIRROR_Y,
	GDC_F_GDC_MIRROR_X,
	GDC_F_GDC_ORG_HEIGHT,
	GDC_F_GDC_ORG_WIDTH,
	GDC_F_GDC_CROP_HEIGHT,
	GDC_F_GDC_CROP_WIDTH,
	GDC_F_GDC_CROP_START_Y,
	GDC_F_GDC_CROP_START_X,
	GDC_F_GDC_SCALE_Y,
	GDC_F_GDC_SCALE_X,
	GDC_F_GDC_SCALE_SHIFTER_Y,
	GDC_F_GDC_SCALE_SHIFTER_X,
	GDC_F_GDC_INV_SCALE_Y,
	GDC_F_GDC_INV_SCALE_X,
	GDC_F_GDC_IMAGE_ACTIVE_HEIGHT,
	GDC_F_GDC_IMAGE_ACTIVE_WIDTH,
	GDC_F_GDC_IMAGE_CROP_PRE_Y,
	GDC_F_GDC_IMAGE_CROP_PRE_X,
	GDC_F_GDC_OUT_SCALE_Y,
	GDC_F_GDC_OUT_SCALE_X,
	GDC_F_GDC_CLAMP_TYPE,
	GDC_F_GDC_INTERP_TYPE,
	GDC_F_WRREQ,
	GDC_F_GDC_ENGINE_BUSY,
	GDC_F_GDC_GRID_DX_0,
	GDC_F_GDC_GRID_DX_1,
	GDC_F_GDC_GRID_DX_2,
	GDC_F_GDC_GRID_DX_3,
	GDC_F_GDC_GRID_DX_4,
	GDC_F_GDC_GRID_DX_5,
	GDC_F_GDC_GRID_DX_6,
	GDC_F_GDC_GRID_DX_7,
	GDC_F_GDC_GRID_DX_8,
	GDC_F_GDC_GRID_DX_9,
	GDC_F_GDC_GRID_DX_10,
	GDC_F_GDC_GRID_DX_11,
	GDC_F_GDC_GRID_DX_12,
	GDC_F_GDC_GRID_DX_13,
	GDC_F_GDC_GRID_DX_14,
	GDC_F_GDC_GRID_DX_15,
	GDC_F_GDC_GRID_DX_16,
	GDC_F_GDC_GRID_DX_17,
	GDC_F_GDC_GRID_DX_18,
	GDC_F_GDC_GRID_DX_19,
	GDC_F_GDC_GRID_DX_20,
	GDC_F_GDC_GRID_DX_21,
	GDC_F_GDC_GRID_DX_22,
	GDC_F_GDC_GRID_DX_23,
	GDC_F_GDC_GRID_DX_24,
	GDC_F_GDC_GRID_DX_25,
	GDC_F_GDC_GRID_DX_26,
	GDC_F_GDC_GRID_DX_27,
	GDC_F_GDC_GRID_DX_28,
	GDC_F_GDC_GRID_DX_29,
	GDC_F_GDC_GRID_DX_30,
	GDC_F_GDC_GRID_DX_31,
	GDC_F_GDC_GRID_DX_32,
	GDC_F_GDC_GRID_DX_33,
	GDC_F_GDC_GRID_DX_34,
	GDC_F_GDC_GRID_DX_35,
	GDC_F_GDC_GRID_DX_36,
	GDC_F_GDC_GRID_DX_37,
	GDC_F_GDC_GRID_DX_38,
	GDC_F_GDC_GRID_DX_39,
	GDC_F_GDC_GRID_DX_40,
	GDC_F_GDC_GRID_DX_41,
	GDC_F_GDC_GRID_DX_42,
	GDC_F_GDC_GRID_DX_43,
	GDC_F_GDC_GRID_DX_44,
	GDC_F_GDC_GRID_DX_45,
	GDC_F_GDC_GRID_DX_46,
	GDC_F_GDC_GRID_DX_47,
	GDC_F_GDC_GRID_DX_48,
	GDC_F_GDC_GRID_DX_49,
	GDC_F_GDC_GRID_DX_50,
	GDC_F_GDC_GRID_DX_51,
	GDC_F_GDC_GRID_DX_52,
	GDC_F_GDC_GRID_DX_53,
	GDC_F_GDC_GRID_DX_54,
	GDC_F_GDC_GRID_DX_55,
	GDC_F_GDC_GRID_DX_56,
	GDC_F_GDC_GRID_DX_57,
	GDC_F_GDC_GRID_DX_58,
	GDC_F_GDC_GRID_DX_59,
	GDC_F_GDC_GRID_DX_60,
	GDC_F_GDC_GRID_DX_61,
	GDC_F_GDC_GRID_DX_62,
	GDC_F_GDC_GRID_DY_0,
	GDC_F_GDC_GRID_DY_1,
	GDC_F_GDC_GRID_DY_2,
	GDC_F_GDC_GRID_DY_3,
	GDC_F_GDC_GRID_DY_4,
	GDC_F_GDC_GRID_DY_5,
	GDC_F_GDC_GRID_DY_6,
	GDC_F_GDC_GRID_DY_7,
	GDC_F_GDC_GRID_DY_8,
	GDC_F_GDC_GRID_DY_9,
	GDC_F_GDC_GRID_DY_10,
	GDC_F_GDC_GRID_DY_11,
	GDC_F_GDC_GRID_DY_12,
	GDC_F_GDC_GRID_DY_13,
	GDC_F_GDC_GRID_DY_14,
	GDC_F_GDC_GRID_DY_15,
	GDC_F_GDC_GRID_DY_16,
	GDC_F_GDC_GRID_DY_17,
	GDC_F_GDC_GRID_DY_18,
	GDC_F_GDC_GRID_DY_19,
	GDC_F_GDC_GRID_DY_20,
	GDC_F_GDC_GRID_DY_21,
	GDC_F_GDC_GRID_DY_22,
	GDC_F_GDC_GRID_DY_23,
	GDC_F_GDC_GRID_DY_24,
	GDC_F_GDC_GRID_DY_25,
	GDC_F_GDC_GRID_DY_26,
	GDC_F_GDC_GRID_DY_27,
	GDC_F_GDC_GRID_DY_28,
	GDC_F_GDC_GRID_DY_29,
	GDC_F_GDC_GRID_DY_30,
	GDC_F_GDC_GRID_DY_31,
	GDC_F_GDC_GRID_DY_32,
	GDC_F_GDC_GRID_DY_33,
	GDC_F_GDC_GRID_DY_34,
	GDC_F_GDC_GRID_DY_35,
	GDC_F_GDC_GRID_DY_36,
	GDC_F_GDC_GRID_DY_37,
	GDC_F_GDC_GRID_DY_38,
	GDC_F_GDC_GRID_DY_39,
	GDC_F_GDC_GRID_DY_40,
	GDC_F_GDC_GRID_DY_41,
	GDC_F_GDC_GRID_DY_42,
	GDC_F_GDC_GRID_DY_43,
	GDC_F_GDC_GRID_DY_44,
	GDC_F_GDC_GRID_DY_45,
	GDC_F_GDC_GRID_DY_46,
	GDC_F_GDC_GRID_DY_47,
	GDC_F_GDC_GRID_DY_48,
	GDC_F_GDC_GRID_DY_49,
	GDC_F_GDC_GRID_DY_50,
	GDC_F_GDC_GRID_DY_51,
	GDC_F_GDC_GRID_DY_52,
	GDC_F_GDC_GRID_DY_53,
	GDC_F_GDC_GRID_DY_54,
	GDC_F_GDC_GRID_DY_55,
	GDC_F_GDC_GRID_DY_56,
	GDC_F_GDC_GRID_DY_57,
	GDC_F_GDC_GRID_DY_58,
	GDC_F_GDC_GRID_DY_59,
	GDC_F_GDC_GRID_DY_60,
	GDC_F_GDC_GRID_DY_61,
	GDC_F_GDC_GRID_DY_62,
	GDC_F_FLUSH,
	GDC_F_REQCNTLUM0,
	GDC_F_HITCNTLUM0,
	GDC_F_PXCBUSYLUM,
	GDC_F_PORT0BUSY,
	GDC_F_CHROMACACHEST,
	GDC_F_HITFIFOST,
	GDC_F_MISSFIFOST,
	GDC_F_PXCSTRIDELUM,
	GDC_F_PXCSTRIDECHROMA,
	GDC_F_DPBLUMBASE,
	GDC_F_DPBCHRBASE,
	GDC_F_WPEND,
	GDC_F_RPEND,
	GDC_F_RESET_OK,
	GDC_F_EN_RESET,
	GDC_F_WRITE_STRIDE_LUMA,
	GDC_F_WRITE_STRIDE_CHROMA,
	GDC_F_FRAMESTART_CMD,
	GDC_F_INT_MASK_FRAME_END,
	GDC_F_INT_STATUS_FRAME_END,
	GDC_F_GDC_PRO_HEIGHT,
	GDC_F_GDC_PRO_WIDTH,
	GDC_F_SW_RESET,
	GDC_F_GDC_PROCESSING,
	GDC_REG_FIELD_CNT
};

static const struct camerapp_sfr_field gdc_fields[GDC_REG_FIELD_CNT] = {
	/* 1. register name 2. bit start 3. bit width 4. access type 5. reset */
	{"GDC_YUV_FORMAT", 6, 1, RW, 0x0},
	{"GDC_YUV_FORMAT", 5, 1, RW, 0x0},
	{"GDC_YUV_FORMAT", 0, 1, RW, 0x0},
	{"GDC_DMA_ADDRESS", 0, 32, RW, 0x0},
	{"GDC_DMA_ADDRESS_2", 0, 32, RW, 0x0},
	{"GDC_CONFIG", 5, 1, RW, 0x0},
	{"GDC_CONFIG", 4, 1, RW, 0x0},
	{"GDC_INPUT_ORG_SIZE", 16, 13, RW, 0x0},
	{"GDC_INPUT_ORG_SIZE", 0, 14, RW, 0x0},
	{"GDC_INPUT_CROP_SIZE", 16, 13, RW, 0xc00},
	{"GDC_INPUT_CROP_SIZE", 0, 14, RW, 0x1000},
	{"GDC_INPUT_CROP_START", 16, 13, RW, 0x0},
	{"GDC_INPUT_CROP_START", 0, 13, RW, 0x0},
	{"GDC_SCALE", 16, 16, RW, 0x8000},
	{"GDC_SCALE", 0, 16, RW, 0x8000},
	{"GDC_SCALE_SHIFTER", 4, 3, RW, 0x6},
	{"GDC_SCALE_SHIFTER", 0, 3, RW, 0x6},
	{"GDC_INV_SCALE", 16, 14, RW, 0x1000},
	{"GDC_INV_SCALE", 0, 14, RW, 0x1000},
	{"GDC_OUT_CROP_SIZE", 16, 13, RW, 0xc00},
	{"GDC_OUT_CROP_SIZE", 0, 14, RW, 0x1000},
	{"GDC_OUT_CROP_START", 16, 13, RW, 0x0},
	{"GDC_OUT_CROP_START", 0, 13, RW, 0x0},
	{"GDC_OUT_SCALE", 16, 8, RW, 0x80},
	{"GDC_OUT_SCALE", 0, 8, RW, 0x80},
	{"GDC_INTERPOLATION", 4, 2, RW, 0x2},
	{"GDC_INTERPOLATION", 0, 2, RW, 0x3},
	{"CORE_DEBUG", 1, 5, RWI, 0x1},
	{"CORE_DEBUG", 0, 1, RWI, 0x0},
	{"GDC_GRID_DX_0", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_1", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_2", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_3", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_4", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_5", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_6", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_7", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_8", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_9", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_10", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_11", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_12", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_13", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_14", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_15", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_16", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_17", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_18", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_19", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_20", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_21", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_22", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_23", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_24", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_25", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_26", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_27", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_28", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_29", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_30", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_31", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_32", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_33", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_34", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_35", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_36", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_37", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_38", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_39", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_40", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_41", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_42", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_43", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_44", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_45", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_46", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_47", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_48", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_49", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_50", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_51", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_52", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_53", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_54", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_55", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_56", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_57", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_58", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_59", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_60", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_61", 0, 24, RW, 0x0},
	{"GDC_GRID_DX_62", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_0", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_1", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_2", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_3", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_4", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_5", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_6", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_7", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_8", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_9", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_10", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_11", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_12", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_13", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_14", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_15", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_16", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_17", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_18", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_19", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_20", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_21", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_22", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_23", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_24", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_25", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_26", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_27", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_28", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_29", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_30", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_31", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_32", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_33", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_34", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_35", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_36", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_37", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_38", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_39", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_40", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_41", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_42", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_43", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_44", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_45", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_46", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_47", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_48", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_49", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_50", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_51", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_52", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_53", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_54", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_55", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_56", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_57", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_58", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_59", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_60", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_61", 0, 24, RW, 0x0},
	{"GDC_GRID_DY_62", 0, 24, RW, 0x0},
	{"PXC_FLUSH", 0, 1, RW, 0x0},
	{"PXC_REQ_CNT_LUM_0", 0, 32, RWI, 0x0},
	{"PXC_HIT_CNT_LUM_0", 0, 32, RWI, 0x0},
	{"PXC_DEBUG_BUSY", 3, 1, RWI, 0x0},
	{"PXC_DEBUG_BUSY", 0, 1, RWI, 0x0},
	{"PXC_DEBUG_LUM0", 11, 8, RWI, 0x0},
	{"PXC_DEBUG_LUM0", 5, 6, RWI, 0x0},
	{"PXC_DEBUG_LUM0", 0, 3, RWI, 0x0},
	{"PXC_STRIDE_LUM", 0, 16, RW, 0x0},
	{"PXC_STRIDE_CHROMA", 0, 16, RW, 0x0},
	{"PXC_DPB_BASE_LUM", 0, 32, RW, 0x0},
	{"PXC_DPB_BASE_CHROMA", 0, 32, RW, 0x0},
	{"PEND", 1, 1, RWI, 0x0},
	{"PEND", 0, 1, RWI, 0x0},
	{"REQ_STOP", 1, 1, RWI, 0x0},
	{"REQ_STOP", 0, 1, RW, 0x0},
	{"WAXI_STRIDE_LUM", 0, 16, RW, 0x0},
	{"WAXI_STRIDE_CHROMA", 0, 16, RW, 0x0},
	{"FRAMESTART_CMD", 0, 1, RIW, 0x0},
	{"GDC_INT_MASK", 0, 1, RW, 0x0},
	{"GDC_INT_STATUS", 0, 1, RIW, 0x0},
	{"GDC_PRO_SIZE", 16, 10, RW, 0x0},
	{"GDC_PRO_SIZE", 0, 10, RW, 0x0},
	{"GDC_SW_RESET", 0, 1, RIW, 0x0},
	{"GDC_PROCESSING", 0, 1, RW, 0x0},
};

#endif
