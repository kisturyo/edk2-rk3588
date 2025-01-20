/** @file

  Copyright (c) 2022 Rockchip Electronics Co. Ltd.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef __VOP2_REGS_H__
#define __VOP2_REGS_H__

/* System registers definition */
#define RK3568_REG_CFG_DONE  0x000
#define CFG_DONE_EN          BIT(15)

#define RK3568_VERSION_INFO  0x004
#define EN_MASK              1
#define ALL_MASK             0xFFFFFFFF

#define RK3568_AUTO_GATING_CTRL  0x008

#define RK3568_SYS_AXI_LUT_CTRL  0x024
#define LUT_DMA_EN_SHIFT         0

#define RK3568_DSP_IF_EN            0x028
#define RGB_EN_SHIFT                0
#define RK3588_DP0_EN_SHIFT         0
#define RK3588_DP1_EN_SHIFT         1
#define RK3588_RGB_EN_SHIFT         8
#define HDMI0_EN_SHIFT              1
#define EDP0_EN_SHIFT               3
#define RK3588_EDP0_EN_SHIFT        2
#define RK3588_HDMI0_EN_SHIFT       3
#define MIPI0_EN_SHIFT              4
#define RK3588_EDP1_EN_SHIFT        4
#define RK3588_HDMI1_EN_SHIFT       5
#define RK3588_MIPI0_EN_SHIFT       6
#define MIPI1_EN_SHIFT              20
#define RK3588_MIPI1_EN_SHIFT       7
#define LVDS0_EN_SHIFT              5
#define LVDS1_EN_SHIFT              24
#define BT1120_EN_SHIFT             6
#define BT656_EN_SHIFT              7
#define IF_MUX_MASK                 3
#define RGB_MUX_SHIFT               8
#define HDMI0_MUX_SHIFT             10
#define RK3588_DP0_MUX_SHIFT        12
#define RK3588_DP1_MUX_SHIFT        14
#define EDP0_MUX_SHIFT              14
#define RK3588_HDMI_EDP0_MUX_SHIFT  16
#define RK3588_HDMI_EDP1_MUX_SHIFT  18
#define MIPI0_MUX_SHIFT             16
#define RK3588_MIPI0_MUX_SHIFT      20
#define MIPI1_MUX_SHIFT             21
#define LVDS0_MUX_SHIFT             18
#define LVDS1_MUX_SHIFT             25

#define RK3568_DSP_IF_CTRL               0x02C
#define LVDS_DUAL_EN_SHIFT               0
#define RK3588_BT656_UV_SWAP_SHIFT       0
#define LVDS_DUAL_LEFT_RIGHT_EN_SHIFT    1
#define RK3588_BT656_YC_SWAP_SHIFT       1
#define LVDS_DUAL_SWAP_EN_SHIFT          2
#define BT656_UV_SWAP                    4
#define RK3588_BT1120_UV_SWAP_SHIFT      4
#define BT656_YC_SWAP                    5
#define RK3588_BT1120_YC_SWAP_SHIFT      5
#define BT656_DCLK_POL                   6
#define RK3588_HDMI_DUAL_EN_SHIFT        8
#define RK3588_EDP_DUAL_EN_SHIFT         8
#define RK3588_DP_DUAL_EN_SHIFT          9
#define RK3568_MIPI_DUAL_EN_SHIFT        10
#define RK3588_MIPI_DSI0_MODE_SEL_SHIFT  11
#define RK3588_MIPI_DSI1_MODE_SEL_SHIFT  12

#define RK3568_DSP_IF_POL           0x030
#define IF_CTRL_REG_DONE_IMD_MASK   1
#define IF_CTRL_REG_DONE_IMD_SHIFT  28
#define IF_CRTL_MIPI_DCLK_POL_SHIT  19
#define IF_CRTL_EDP_DCLK_POL_SHIT   15
#define IF_CRTL_HDMI_DCLK_POL_SHIT  7
#define IF_CRTL_HDMI_PIN_POL_MASK   0x7
#define IF_CRTL_HDMI_PIN_POL_SHIT   4

#define RK3588_DP0_PIN_POL_SHIFT  8
#define RK3588_DP1_PIN_POL_SHIFT  12
#define RK3588_IF_PIN_POL_MASK    0x7

#define IF_CRTL_RGB_LVDS_DCLK_POL_SHIT  3

#define HDMI_EDP0_DCLK_DIV_SHIFT    16
#define HDMI_EDP0_PIXCLK_DIV_SHIFT  18
#define HDMI_EDP1_DCLK_DIV_SHIFT    20
#define HDMI_EDP1_PIXCLK_DIV_SHIFT  22
#define MIPI0_PIXCLK_DIV_SHIFT      24
#define MIPI1_PIXCLK_DIV_SHIFT      26

#define RK3568_SYS_OTP_WIN_EN      0x50
#define OTP_WIN_EN_SHIFT           0
#define RK3568_SYS_LUT_PORT_SEL    0x58
#define GAMMA_PORT_SEL_MASK        0x3
#define GAMMA_PORT_SEL_SHIFT       0
#define RK3568_MIPI_DUAL_EN_SHIFT  10

#define RK3568_SYS_PD_CTRL           0x034
#define RK3568_VP0_LINE_FLAG         0x70
#define RK3568_VP1_LINE_FLAG         0x74
#define RK3568_VP2_LINE_FLAG         0x78
#define RK3568_SYS0_INT_EN           0x80
#define RK3568_SYS0_INT_CLR          0x84
#define RK3568_SYS0_INT_STATUS       0x88
#define RK3568_SYS1_INT_EN           0x90
#define RK3568_SYS1_INT_CLR          0x94
#define RK3568_SYS1_INT_STATUS       0x98
#define RK3568_VP0_INT_EN            0xA0
#define RK3568_VP0_INT_CLR           0xA4
#define RK3568_VP0_INT_STATUS        0xA8
#define RK3568_VP1_INT_EN            0xB0
#define RK3568_VP1_INT_CLR           0xB4
#define RK3568_VP1_INT_STATUS        0xB8
#define RK3568_VP2_INT_EN            0xC0
#define RK3568_VP2_INT_CLR           0xC4
#define RK3568_VP2_INT_STATUS        0xC8
#define RK3588_CLUSTER0_PD_EN_SHIFT  0
#define RK3588_CLUSTER1_PD_EN_SHIFT  1
#define RK3588_CLUSTER2_PD_EN_SHIFT  2
#define RK3588_CLUSTER3_PD_EN_SHIFT  3
#define RK3588_DSC_8K_PD_EN_SHIFT    5
#define RK3588_DSC_4K_PD_EN_SHIFT    6
#define RK3588_ESMART_PD_EN_SHIFT    7

#define RK3568_SYS_STATUS0               0x60
#define RK3588_CLUSTER0_PD_STATUS_SHIFT  8
#define RK3588_CLUSTER1_PD_STATUS_SHIFT  9
#define RK3588_CLUSTER2_PD_STATUS_SHIFT  10
#define RK3588_CLUSTER3_PD_STATUS_SHIFT  11
#define RK3588_DSC_8K_PD_STATUS_SHIFT    13
#define RK3588_DSC_4K_PD_STATUS_SHIFT    14
#define RK3588_ESMART_PD_STATUS_SHIFT    15

/* Overlay registers definition    */
#define RK3568_OVL_CTRL                  0x600
#define OVL_PORT_MUX_REG_DONE_IMD_SHIFT  28
#define RK3568_OVL_LAYER_SEL             0x604
#define LAYER_SEL_MASK                   0xF

#define RK3568_OVL_PORT_SEL   0x608
#define PORT_MUX_MASK         0xF
#define PORT_MUX_SHIFT        0
#define LAYER_SEL_PORT_MASK   0x3
#define LAYER_SEL_PORT_SHIFT  16

#define RK3568_CLUSTER0_MIX_SRC_COLOR_CTRL  0x610
#define RK3568_CLUSTER0_MIX_DST_COLOR_CTRL  0x614
#define RK3568_CLUSTER0_MIX_SRC_ALPHA_CTRL  0x618
#define RK3568_CLUSTER0_MIX_DST_ALPHA_CTRL  0x61C
#define RK3568_MIX0_SRC_COLOR_CTRL          0x650
#define RK3568_MIX0_DST_COLOR_CTRL          0x654
#define RK3568_MIX0_SRC_ALPHA_CTRL          0x658
#define RK3568_MIX0_DST_ALPHA_CTRL          0x65C
#define RK3568_HDR0_SRC_COLOR_CTRL          0x6C0
#define RK3568_HDR0_DST_COLOR_CTRL          0x6C4
#define RK3568_HDR0_SRC_ALPHA_CTRL          0x6C8
#define RK3568_HDR0_DST_ALPHA_CTRL          0x6CC
#define RK3568_VP0_BG_MIX_CTRL              0x6E0
#define BG_MIX_CTRL_MASK                    0xff
#define BG_MIX_CTRL_SHIFT                   24
#define RK3568_VP1_BG_MIX_CTRL              0x6E4
#define RK3568_VP2_BG_MIX_CTRL              0x6E8
#define RK3568_CLUSTER_DLY_NUM              0x6F0
#define RK3568_SMART_DLY_NUM                0x6F8

/* Video Port registers definition */
#define RK3568_VP0_DSP_CTRL       0xC00
#define OUT_MODE_MASK             0xF
#define OUT_MODE_SHIFT            0
#define DATA_SWAP_MASK            0x1F
#define DATA_SWAP_SHIFT           8
#define DSP_BG_SWAP               0x1
#define DSP_RB_SWAP               0x2
#define DSP_RG_SWAP               0x4
#define DSP_DELTA_SWAP            0x8
#define CORE_DCLK_DIV_EN_SHIFT    4
#define P2I_EN_SHIFT              5
#define DSP_FILED_POL             6
#define INTERLACE_EN_SHIFT        7
#define POST_DSP_OUT_R2Y_SHIFT    15
#define PRE_DITHER_DOWN_EN_SHIFT  16
#define DITHER_DOWN_EN_SHIFT      17
#define DSP_LUT_EN_SHIFT          28

#define STANDBY_EN_SHIFT  31

#define RK3568_VP0_MIPI_CTRL     0xC04
#define DCLK_DIV2_SHIFT          4
#define DCLK_DIV2_MASK           0x3
#define MIPI_DUAL_EN_SHIFT       20
#define MIPI_DUAL_SWAP_EN_SHIFT  21
#define EDPI_TE_EN               28
#define EDPI_WMS_HOLD_EN         30
#define EDPI_WMS_FS              31

#define RK3568_VP0_COLOR_BAR_CTRL  0xC08
#define RK3568_VP0_3D_LUT_CTRL     0xC10
#define VP0_3D_LUT_EN_SHIFT        0
#define VP0_3D_LUT_UPDATE_SHIFT    2

#define RK3588_VP0_CLK_CTRL  0xC0C
#define DCLK_CORE_DIV_SHIFT  0
#define DCLK_OUT_DIV_SHIFT   2

#define RK3568_VP0_3D_LUT_MST  0xC20

#define RK3568_VP0_DSP_BG                 0xC2C
#define RK3568_VP0_PRE_SCAN_HTIMING       0xC30
#define RK3568_VP0_POST_DSP_HACT_INFO     0xC34
#define RK3568_VP0_POST_DSP_VACT_INFO     0xC38
#define RK3568_VP0_POST_SCL_FACTOR_YRGB   0xC3C
#define RK3568_VP0_POST_SCL_CTRL          0xC40
#define RK3568_VP0_POST_DSP_VACT_INFO_F1  0xC44
#define RK3568_VP0_DSP_HTOTAL_HS_END      0xC48
#define RK3568_VP0_DSP_HACT_ST_END        0xC4C
#define RK3568_VP0_DSP_VTOTAL_VS_END      0xC50
#define RK3568_VP0_DSP_VACT_ST_END        0xC54
#define RK3568_VP0_DSP_VS_ST_END_F1       0xC58
#define RK3568_VP0_DSP_VACT_ST_END_F1     0xC5C

#define RK3568_VP0_BCSH_CTRL          0xC60
#define BCSH_CTRL_Y2R_SHIFT           0
#define BCSH_CTRL_Y2R_MASK            0x1
#define BCSH_CTRL_Y2R_CSC_MODE_SHIFT  2
#define BCSH_CTRL_Y2R_CSC_MODE_MASK   0x3
#define BCSH_CTRL_R2Y_SHIFT           4
#define BCSH_CTRL_R2Y_MASK            0x1
#define BCSH_CTRL_R2Y_CSC_MODE_SHIFT  6
#define BCSH_CTRL_R2Y_CSC_MODE_MASK   0x3

#define RK3568_VP0_BCSH_BCS    0xC64
#define BCSH_BRIGHTNESS_SHIFT  0
#define BCSH_BRIGHTNESS_MASK   0xFF
#define BCSH_CONTRAST_SHIFT    8
#define BCSH_CONTRAST_MASK     0x1FF
#define BCSH_SATURATION_SHIFT  20
#define BCSH_SATURATION_MASK   0x3FF
#define BCSH_OUT_MODE_SHIFT    30
#define BCSH_OUT_MODE_MASK     0x3

#define RK3568_VP0_BCSH_H   0xC68
#define BCSH_SIN_HUE_SHIFT  0
#define BCSH_SIN_HUE_MASK   0x1FF
#define BCSH_COS_HUE_SHIFT  16
#define BCSH_COS_HUE_MASK   0x1FF

#define RK3568_VP0_BCSH_COLOR  0xC6C
#define BCSH_EN_SHIFT          31
#define BCSH_EN_MASK           1

#define RK3568_VP1_DSP_CTRL               0xD00
#define RK3568_VP1_MIPI_CTRL              0xD04
#define RK3568_VP1_COLOR_BAR_CTRL         0xD08
#define RK3568_VP1_PRE_SCAN_HTIMING       0xD30
#define RK3568_VP1_POST_DSP_HACT_INFO     0xD34
#define RK3568_VP1_POST_DSP_VACT_INFO     0xD38
#define RK3568_VP1_POST_SCL_FACTOR_YRGB   0xD3C
#define RK3568_VP1_POST_SCL_CTRL          0xD40
#define RK3568_VP1_DSP_HACT_INFO          0xD34
#define RK3568_VP1_DSP_VACT_INFO          0xD38
#define RK3568_VP1_POST_DSP_VACT_INFO_F1  0xD44
#define RK3568_VP1_DSP_HTOTAL_HS_END      0xD48
#define RK3568_VP1_DSP_HACT_ST_END        0xD4C
#define RK3568_VP1_DSP_VTOTAL_VS_END      0xD50
#define RK3568_VP1_DSP_VACT_ST_END        0xD54
#define RK3568_VP1_DSP_VS_ST_END_F1       0xD58
#define RK3568_VP1_DSP_VACT_ST_END_F1     0xD5C

#define RK3568_VP2_DSP_CTRL               0xE00
#define RK3568_VP2_MIPI_CTRL              0xE04
#define RK3568_VP2_COLOR_BAR_CTRL         0xE08
#define RK3568_VP2_PRE_SCAN_HTIMING       0xE30
#define RK3568_VP2_POST_DSP_HACT_INFO     0xE34
#define RK3568_VP2_POST_DSP_VACT_INFO     0xE38
#define RK3568_VP2_POST_SCL_FACTOR_YRGB   0xE3C
#define RK3568_VP2_POST_SCL_CTRL          0xE40
#define RK3568_VP2_DSP_HACT_INFO          0xE34
#define RK3568_VP2_DSP_VACT_INFO          0xE38
#define RK3568_VP2_POST_DSP_VACT_INFO_F1  0xE44
#define RK3568_VP2_DSP_HTOTAL_HS_END      0xE48
#define RK3568_VP2_DSP_HACT_ST_END        0xE4C
#define RK3568_VP2_DSP_VTOTAL_VS_END      0xE50
#define RK3568_VP2_DSP_VACT_ST_END        0xE54
#define RK3568_VP2_DSP_VS_ST_END_F1       0xE58
#define RK3568_VP2_DSP_VACT_ST_END_F1     0xE5C

/* Cluster0 register definition */
#define RK3568_CLUSTER0_WIN0_CTRL0              0x1000
#define CLUSTER_YUV2RGB_EN_SHIFT                8
#define CLUSTER_RGB2YUV_EN_SHIFT                9
#define CLUSTER_CSC_MODE_SHIFT                  10
#define CLUSTER_YRGB_XSCL_MODE_SHIFT            12
#define CLUSTER_YRGB_YSCL_MODE_SHIFT            14
#define RK3568_CLUSTER0_WIN0_CTRL1              0x1004
#define CLUSTER_YRGB_GT2_SHIFT                  28
#define CLUSTER_YRGB_GT4_SHIFT                  29
#define RK3568_CLUSTER0_WIN0_YRGB_MST           0x1010
#define RK3568_CLUSTER0_WIN0_CBR_MST            0x1014
#define RK3568_CLUSTER0_WIN0_VIR                0x1018
#define RK3568_CLUSTER0_WIN0_ACT_INFO           0x1020
#define RK3568_CLUSTER0_WIN0_DSP_INFO           0x1024
#define RK3568_CLUSTER0_WIN0_DSP_ST             0x1028
#define RK3568_CLUSTER0_WIN0_SCL_FACTOR_YRGB    0x1030
#define RK3568_CLUSTER0_WIN0_AFBCD_ROTATE_MODE  0x1054
#define RK3568_CLUSTER0_WIN0_AFBCD_HDR_PTR      0x1058
#define RK3568_CLUSTER0_WIN0_AFBCD_VIR_WIDTH    0x105C
#define RK3568_CLUSTER0_WIN0_AFBCD_PIC_SIZE     0x1060
#define RK3568_CLUSTER0_WIN0_AFBCD_PIC_OFFSET   0x1064
#define RK3568_CLUSTER0_WIN0_AFBCD_DSP_OFFSET   0x1068
#define RK3568_CLUSTER0_WIN0_AFBCD_CTRL         0x106C

#define RK3568_CLUSTER0_WIN1_CTRL0              0x1080
#define RK3568_CLUSTER0_WIN1_CTRL1              0x1084
#define RK3568_CLUSTER0_WIN1_YRGB_MST           0x1090
#define RK3568_CLUSTER0_WIN1_CBR_MST            0x1094
#define RK3568_CLUSTER0_WIN1_VIR                0x1098
#define RK3568_CLUSTER0_WIN1_ACT_INFO           0x10A0
#define RK3568_CLUSTER0_WIN1_DSP_INFO           0x10A4
#define RK3568_CLUSTER0_WIN1_DSP_ST             0x10A8
#define RK3568_CLUSTER0_WIN1_SCL_FACTOR_YRGB    0x10B0
#define RK3568_CLUSTER0_WIN1_AFBCD_ROTATE_MODE  0x10D4
#define RK3568_CLUSTER0_WIN1_AFBCD_HDR_PTR      0x10D8
#define RK3568_CLUSTER0_WIN1_AFBCD_VIR_WIDTH    0x10DC
#define RK3568_CLUSTER0_WIN1_AFBCD_PIC_SIZE     0x10E0
#define RK3568_CLUSTER0_WIN1_AFBCD_PIC_OFFSET   0x10E4
#define RK3568_CLUSTER0_WIN1_AFBCD_DSP_OFFSET   0x10E8
#define RK3568_CLUSTER0_WIN1_AFBCD_CTRL         0x10EC

#define RK3568_CLUSTER0_CTRL  0x1100
#define CLUSTER_EN_SHIFT      0

#define RK3568_CLUSTER1_WIN0_CTRL0              0x1200
#define RK3568_CLUSTER1_WIN0_CTRL1              0x1204
#define RK3568_CLUSTER1_WIN0_YRGB_MST           0x1210
#define RK3568_CLUSTER1_WIN0_CBR_MST            0x1214
#define RK3568_CLUSTER1_WIN0_VIR                0x1218
#define RK3568_CLUSTER1_WIN0_ACT_INFO           0x1220
#define RK3568_CLUSTER1_WIN0_DSP_INFO           0x1224
#define RK3568_CLUSTER1_WIN0_DSP_ST             0x1228
#define RK3568_CLUSTER1_WIN0_SCL_FACTOR_YRGB    0x1230
#define RK3568_CLUSTER1_WIN0_AFBCD_ROTATE_MODE  0x1254
#define RK3568_CLUSTER1_WIN0_AFBCD_HDR_PTR      0x1258
#define RK3568_CLUSTER1_WIN0_AFBCD_VIR_WIDTH    0x125C
#define RK3568_CLUSTER1_WIN0_AFBCD_PIC_SIZE     0x1260
#define RK3568_CLUSTER1_WIN0_AFBCD_PIC_OFFSET   0x1264
#define RK3568_CLUSTER1_WIN0_AFBCD_DSP_OFFSET   0x1268
#define RK3568_CLUSTER1_WIN0_AFBCD_CTRL         0x126C

#define RK3568_CLUSTER1_WIN1_CTRL0              0x1280
#define RK3568_CLUSTER1_WIN1_CTRL1              0x1284
#define RK3568_CLUSTER1_WIN1_YRGB_MST           0x1290
#define RK3568_CLUSTER1_WIN1_CBR_MST            0x1294
#define RK3568_CLUSTER1_WIN1_VIR                0x1298
#define RK3568_CLUSTER1_WIN1_ACT_INFO           0x12A0
#define RK3568_CLUSTER1_WIN1_DSP_INFO           0x12A4
#define RK3568_CLUSTER1_WIN1_DSP_ST             0x12A8
#define RK3568_CLUSTER1_WIN1_SCL_FACTOR_YRGB    0x12B0
#define RK3568_CLUSTER1_WIN1_AFBCD_ROTATE_MODE  0x12D4
#define RK3568_CLUSTER1_WIN1_AFBCD_HDR_PTR      0x12D8
#define RK3568_CLUSTER1_WIN1_AFBCD_VIR_WIDTH    0x12DC
#define RK3568_CLUSTER1_WIN1_AFBCD_PIC_SIZE     0x12E0
#define RK3568_CLUSTER1_WIN1_AFBCD_PIC_OFFSET   0x12E4
#define RK3568_CLUSTER1_WIN1_AFBCD_DSP_OFFSET   0x12E8
#define RK3568_CLUSTER1_WIN1_AFBCD_CTRL         0x12EC

#define RK3568_CLUSTER1_CTRL  0x1300

/* Esmart register definition */
#define RK3568_ESMART0_CTRL0  0x1800
#define RGB2YUV_EN_SHIFT      1
#define CSC_MODE_SHIFT        2
#define CSC_MODE_MASK         0x3

#define RK3568_ESMART0_CTRL1         0x1804
#define YMIRROR_EN_SHIFT             31
#define RK3568_ESMART0_REGION0_CTRL  0x1810
#define REGION0_RB_SWAP_SHIFT        14
#define WIN_EN_SHIFT                 0
#define WIN_FORMAT_MASK              0x1f
#define WIN_FORMAT_SHIFT             1

#define RK3568_ESMART0_REGION0_YRGB_MST  0x1814
#define RK3568_ESMART0_REGION0_CBR_MST   0x1818
#define RK3568_ESMART0_REGION0_VIR       0x181C
#define RK3568_ESMART0_REGION0_ACT_INFO  0x1820
#define RK3568_ESMART0_REGION0_DSP_INFO  0x1824
#define RK3568_ESMART0_REGION0_DSP_ST    0x1828
#define RK3568_ESMART0_REGION0_SCL_CTRL  0x1830
#define YRGB_XSCL_MODE_MASK              0x3
#define YRGB_XSCL_MODE_SHIFT             0
#define YRGB_XSCL_FILTER_MODE_MASK       0x3
#define YRGB_XSCL_FILTER_MODE_SHIFT      2
#define YRGB_YSCL_MODE_MASK              0x3
#define YRGB_YSCL_MODE_SHIFT             4
#define YRGB_YSCL_FILTER_MODE_MASK       0x3
#define YRGB_YSCL_FILTER_MODE_SHIFT      6

#define RK3568_ESMART0_REGION0_SCL_FACTOR_YRGB  0x1834
#define RK3568_ESMART0_REGION0_SCL_FACTOR_CBR   0x1838
#define RK3568_ESMART0_REGION0_SCL_OFFSET       0x183C
#define RK3568_ESMART0_REGION1_CTRL             0x1840
#define YRGB_GT2_MASK                           0x1
#define YRGB_GT2_SHIFT                          8
#define YRGB_GT4_MASK                           0x1
#define YRGB_GT4_SHIFT                          9

#define RK3568_ESMART0_REGION1_YRGB_MST         0x1844
#define RK3568_ESMART0_REGION1_CBR_MST          0x1848
#define RK3568_ESMART0_REGION1_VIR              0x184C
#define RK3568_ESMART0_REGION1_ACT_INFO         0x1850
#define RK3568_ESMART0_REGION1_DSP_INFO         0x1854
#define RK3568_ESMART0_REGION1_DSP_ST           0x1858
#define RK3568_ESMART0_REGION1_SCL_CTRL         0x1860
#define RK3568_ESMART0_REGION1_SCL_FACTOR_YRGB  0x1864
#define RK3568_ESMART0_REGION1_SCL_FACTOR_CBR   0x1868
#define RK3568_ESMART0_REGION1_SCL_OFFSET       0x186C
#define RK3568_ESMART0_REGION2_CTRL             0x1870
#define RK3568_ESMART0_REGION2_YRGB_MST         0x1874
#define RK3568_ESMART0_REGION2_CBR_MST          0x1878
#define RK3568_ESMART0_REGION2_VIR              0x187C
#define RK3568_ESMART0_REGION2_ACT_INFO         0x1880
#define RK3568_ESMART0_REGION2_DSP_INFO         0x1884
#define RK3568_ESMART0_REGION2_DSP_ST           0x1888
#define RK3568_ESMART0_REGION2_SCL_CTRL         0x1890
#define RK3568_ESMART0_REGION2_SCL_FACTOR_YRGB  0x1894
#define RK3568_ESMART0_REGION2_SCL_FACTOR_CBR   0x1898
#define RK3568_ESMART0_REGION2_SCL_OFFSET       0x189C
#define RK3568_ESMART0_REGION3_CTRL             0x18A0
#define RK3568_ESMART0_REGION3_YRGB_MST         0x18A4
#define RK3568_ESMART0_REGION3_CBR_MST          0x18A8
#define RK3568_ESMART0_REGION3_VIR              0x18AC
#define RK3568_ESMART0_REGION3_ACT_INFO         0x18B0
#define RK3568_ESMART0_REGION3_DSP_INFO         0x18B4
#define RK3568_ESMART0_REGION3_DSP_ST           0x18B8
#define RK3568_ESMART0_REGION3_SCL_CTRL         0x18C0
#define RK3568_ESMART0_REGION3_SCL_FACTOR_YRGB  0x18C4
#define RK3568_ESMART0_REGION3_SCL_FACTOR_CBR   0x18C8
#define RK3568_ESMART0_REGION3_SCL_OFFSET       0x18CC

#define RK3568_ESMART1_CTRL0                    0x1A00
#define RK3568_ESMART1_CTRL1                    0x1A04
#define RK3568_ESMART1_REGION0_CTRL             0x1A10
#define RK3568_ESMART1_REGION0_YRGB_MST         0x1A14
#define RK3568_ESMART1_REGION0_CBR_MST          0x1A18
#define RK3568_ESMART1_REGION0_VIR              0x1A1C
#define RK3568_ESMART1_REGION0_ACT_INFO         0x1A20
#define RK3568_ESMART1_REGION0_DSP_INFO         0x1A24
#define RK3568_ESMART1_REGION0_DSP_ST           0x1A28
#define RK3568_ESMART1_REGION0_SCL_CTRL         0x1A30
#define RK3568_ESMART1_REGION0_SCL_FACTOR_YRGB  0x1A34
#define RK3568_ESMART1_REGION0_SCL_FACTOR_CBR   0x1A38
#define RK3568_ESMART1_REGION0_SCL_OFFSET       0x1A3C
#define RK3568_ESMART1_REGION1_CTRL             0x1A40
#define RK3568_ESMART1_REGION1_YRGB_MST         0x1A44
#define RK3568_ESMART1_REGION1_CBR_MST          0x1A48
#define RK3568_ESMART1_REGION1_VIR              0x1A4C
#define RK3568_ESMART1_REGION1_ACT_INFO         0x1A50
#define RK3568_ESMART1_REGION1_DSP_INFO         0x1A54
#define RK3568_ESMART1_REGION1_DSP_ST           0x1A58
#define RK3568_ESMART1_REGION1_SCL_CTRL         0x1A60
#define RK3568_ESMART1_REGION1_SCL_FACTOR_YRGB  0x1A64
#define RK3568_ESMART1_REGION1_SCL_FACTOR_CBR   0x1A68
#define RK3568_ESMART1_REGION1_SCL_OFFSET       0x1A6C
#define RK3568_ESMART1_REGION2_CTRL             0x1A70
#define RK3568_ESMART1_REGION2_YRGB_MST         0x1A74
#define RK3568_ESMART1_REGION2_CBR_MST          0x1A78
#define RK3568_ESMART1_REGION2_VIR              0x1A7C
#define RK3568_ESMART1_REGION2_ACT_INFO         0x1A80
#define RK3568_ESMART1_REGION2_DSP_INFO         0x1A84
#define RK3568_ESMART1_REGION2_DSP_ST           0x1A88
#define RK3568_ESMART1_REGION2_SCL_CTRL         0x1A90
#define RK3568_ESMART1_REGION2_SCL_FACTOR_YRGB  0x1A94
#define RK3568_ESMART1_REGION2_SCL_FACTOR_CBR   0x1A98
#define RK3568_ESMART1_REGION2_SCL_OFFSET       0x1A9C
#define RK3568_ESMART1_REGION3_CTRL             0x1AA0
#define RK3568_ESMART1_REGION3_YRGB_MST         0x1AA4
#define RK3568_ESMART1_REGION3_CBR_MST          0x1AA8
#define RK3568_ESMART1_REGION3_VIR              0x1AAC
#define RK3568_ESMART1_REGION3_ACT_INFO         0x1AB0
#define RK3568_ESMART1_REGION3_DSP_INFO         0x1AB4
#define RK3568_ESMART1_REGION3_DSP_ST           0x1AB8
#define RK3568_ESMART1_REGION3_SCL_CTRL         0x1AC0
#define RK3568_ESMART1_REGION3_SCL_FACTOR_YRGB  0x1AC4
#define RK3568_ESMART1_REGION3_SCL_FACTOR_CBR   0x1AC8
#define RK3568_ESMART1_REGION3_SCL_OFFSET       0x1ACC

#define RK3568_SMART0_CTRL0                    0x1C00
#define RK3568_SMART0_CTRL1                    0x1C04
#define RK3568_SMART0_REGION0_CTRL             0x1C10
#define RK3568_SMART0_REGION0_YRGB_MST         0x1C14
#define RK3568_SMART0_REGION0_CBR_MST          0x1C18
#define RK3568_SMART0_REGION0_VIR              0x1C1C
#define RK3568_SMART0_REGION0_ACT_INFO         0x1C20
#define RK3568_SMART0_REGION0_DSP_INFO         0x1C24
#define RK3568_SMART0_REGION0_DSP_ST           0x1C28
#define RK3568_SMART0_REGION0_SCL_CTRL         0x1C30
#define RK3568_SMART0_REGION0_SCL_FACTOR_YRGB  0x1C34
#define RK3568_SMART0_REGION0_SCL_FACTOR_CBR   0x1C38
#define RK3568_SMART0_REGION0_SCL_OFFSET       0x1C3C
#define RK3568_SMART0_REGION1_CTRL             0x1C40
#define RK3568_SMART0_REGION1_YRGB_MST         0x1C44
#define RK3568_SMART0_REGION1_CBR_MST          0x1C48
#define RK3568_SMART0_REGION1_VIR              0x1C4C
#define RK3568_SMART0_REGION1_ACT_INFO         0x1C50
#define RK3568_SMART0_REGION1_DSP_INFO         0x1C54
#define RK3568_SMART0_REGION1_DSP_ST           0x1C58
#define RK3568_SMART0_REGION1_SCL_CTRL         0x1C60
#define RK3568_SMART0_REGION1_SCL_FACTOR_YRGB  0x1C64
#define RK3568_SMART0_REGION1_SCL_FACTOR_CBR   0x1C68
#define RK3568_SMART0_REGION1_SCL_OFFSET       0x1C6C
#define RK3568_SMART0_REGION2_CTRL             0x1C70
#define RK3568_SMART0_REGION2_YRGB_MST         0x1C74
#define RK3568_SMART0_REGION2_CBR_MST          0x1C78
#define RK3568_SMART0_REGION2_VIR              0x1C7C
#define RK3568_SMART0_REGION2_ACT_INFO         0x1C80
#define RK3568_SMART0_REGION2_DSP_INFO         0x1C84
#define RK3568_SMART0_REGION2_DSP_ST           0x1C88
#define RK3568_SMART0_REGION2_SCL_CTRL         0x1C90
#define RK3568_SMART0_REGION2_SCL_FACTOR_YRGB  0x1C94
#define RK3568_SMART0_REGION2_SCL_FACTOR_CBR   0x1C98
#define RK3568_SMART0_REGION2_SCL_OFFSET       0x1C9C
#define RK3568_SMART0_REGION3_CTRL             0x1CA0
#define RK3568_SMART0_REGION3_YRGB_MST         0x1CA4
#define RK3568_SMART0_REGION3_CBR_MST          0x1CA8
#define RK3568_SMART0_REGION3_VIR              0x1CAC
#define RK3568_SMART0_REGION3_ACT_INFO         0x1CB0
#define RK3568_SMART0_REGION3_DSP_INFO         0x1CB4
#define RK3568_SMART0_REGION3_DSP_ST           0x1CB8
#define RK3568_SMART0_REGION3_SCL_CTRL         0x1CC0
#define RK3568_SMART0_REGION3_SCL_FACTOR_YRGB  0x1CC4
#define RK3568_SMART0_REGION3_SCL_FACTOR_CBR   0x1CC8
#define RK3568_SMART0_REGION3_SCL_OFFSET       0x1CCC

#define RK3568_SMART1_CTRL0                    0x1E00
#define RK3568_SMART1_CTRL1                    0x1E04
#define RK3568_SMART1_REGION0_CTRL             0x1E10
#define RK3568_SMART1_REGION0_YRGB_MST         0x1E14
#define RK3568_SMART1_REGION0_CBR_MST          0x1E18
#define RK3568_SMART1_REGION0_VIR              0x1E1C
#define RK3568_SMART1_REGION0_ACT_INFO         0x1E20
#define RK3568_SMART1_REGION0_DSP_INFO         0x1E24
#define RK3568_SMART1_REGION0_DSP_ST           0x1E28
#define RK3568_SMART1_REGION0_SCL_CTRL         0x1E30
#define RK3568_SMART1_REGION0_SCL_FACTOR_YRGB  0x1E34
#define RK3568_SMART1_REGION0_SCL_FACTOR_CBR   0x1E38
#define RK3568_SMART1_REGION0_SCL_OFFSET       0x1E3C
#define RK3568_SMART1_REGION1_CTRL             0x1E40
#define RK3568_SMART1_REGION1_YRGB_MST         0x1E44
#define RK3568_SMART1_REGION1_CBR_MST          0x1E48
#define RK3568_SMART1_REGION1_VIR              0x1E4C
#define RK3568_SMART1_REGION1_ACT_INFO         0x1E50
#define RK3568_SMART1_REGION1_DSP_INFO         0x1E54
#define RK3568_SMART1_REGION1_DSP_ST           0x1E58
#define RK3568_SMART1_REGION1_SCL_CTRL         0x1E60
#define RK3568_SMART1_REGION1_SCL_FACTOR_YRGB  0x1E64
#define RK3568_SMART1_REGION1_SCL_FACTOR_CBR   0x1E68
#define RK3568_SMART1_REGION1_SCL_OFFSET       0x1E6C
#define RK3568_SMART1_REGION2_CTRL             0x1E70
#define RK3568_SMART1_REGION2_YRGB_MST         0x1E74
#define RK3568_SMART1_REGION2_CBR_MST          0x1E78
#define RK3568_SMART1_REGION2_VIR              0x1E7C
#define RK3568_SMART1_REGION2_ACT_INFO         0x1E80
#define RK3568_SMART1_REGION2_DSP_INFO         0x1E84
#define RK3568_SMART1_REGION2_DSP_ST           0x1E88
#define RK3568_SMART1_REGION2_SCL_CTRL         0x1E90
#define RK3568_SMART1_REGION2_SCL_FACTOR_YRGB  0x1E94
#define RK3568_SMART1_REGION2_SCL_FACTOR_CBR   0x1E98
#define RK3568_SMART1_REGION2_SCL_OFFSET       0x1E9C
#define RK3568_SMART1_REGION3_CTRL             0x1EA0
#define RK3568_SMART1_REGION3_YRGB_MST         0x1EA4
#define RK3568_SMART1_REGION3_CBR_MST          0x1EA8
#define RK3568_SMART1_REGION3_VIR              0x1EAC
#define RK3568_SMART1_REGION3_ACT_INFO         0x1EB0
#define RK3568_SMART1_REGION3_DSP_INFO         0x1EB4
#define RK3568_SMART1_REGION3_DSP_ST           0x1EB8
#define RK3568_SMART1_REGION3_SCL_CTRL         0x1EC0
#define RK3568_SMART1_REGION3_SCL_FACTOR_YRGB  0x1EC4
#define RK3568_SMART1_REGION3_SCL_FACTOR_CBR   0x1EC8
#define RK3568_SMART1_REGION3_SCL_OFFSET       0x1ECC

/* DSC 8K/4K register definition */
#define RK3588_DSC_8K_PPS0_3  0x4000
#define RK3588_DSC_8K_CTRL0   0x40A0
#define DSC_EN_SHIFT          0
#define DSC_RBIT_SHIFT        2
#define DSC_RBYT_SHIFT        3
#define DSC_FLAL_SHIFT        4
#define DSC_MER_SHIFT         5
#define DSC_EPB_SHIFT         6
#define DSC_EPL_SHIFT         7
#define DSC_NSLC_MASK         0x7
#define DSC_NSLC_SHIFT        16
#define DSC_SBO_SHIFT         28
#define DSC_IFEP_SHIFT        29
#define DSC_PPS_UPD_SHIFT     31
#define DSC_CTRL0_DEF_CON     ((1 << DSC_EN_SHIFT)   | (1 << DSC_RBIT_SHIFT) | (0 << DSC_RBYT_SHIFT) |\
                           (1 << DSC_FLAL_SHIFT) | (1 << DSC_MER_SHIFT)  | (0 << DSC_EPB_SHIFT)  | \
                           (1 << DSC_EPL_SHIFT)  | (1 << DSC_SBO_SHIFT))

#define RK3568_MAX_REG        0x1ED0
#define RK3588_VOP2_REG_BASE  0xFDD90000

#define RK3568_SYS_CTRL_LINE_FLAG0       0x70
#define LINE_FLAG_NUM_MASK               0x1FFF
#define RK3568_DSP_LINE_FLAG_NUM0_SHIFT  0
#define RK3568_DSP_LINE_FLAG_NUM1_SHIFT  16

/* DSC CTRL registers definition */
#define RK3588_DSC_8K_SYS_CTRL    0x200
#define DSC_PORT_SEL_MASK         0x3
#define DSC_PORT_SEL_SHIFT        0
#define DSC_MAN_MODE_MASK         0x1
#define DSC_MAN_MODE_SHIFT        2
#define DSC_INTERFACE_MODE_MASK   0x3
#define DSC_INTERFACE_MODE_SHIFT  4
#define DSC_PIXEL_NUM_MASK        0x3
#define DSC_PIXEL_NUM_SHIFT       6
#define DSC_PXL_CLK_DIV_MASK      0x1
#define DSC_PXL_CLK_DIV_SHIFT     8
#define DSC_CDS_CLK_DIV_MASK      0x3
#define DSC_CDS_CLK_DIV_SHIFT     12
#define DSC_TXP_CLK_DIV_MASK      0x3
#define DSC_TXP_CLK_DIV_SHIFT     14
#define DSC_INIT_DLY_MODE_MASK    0x1
#define DSC_INIT_DLY_MODE_SHIFT   16
#define DSC_SCAN_EN_SHIFT         17
#define DSC_HALT_EN_SHIFT         18

#define RK3588_DSC_8K_RST   0x204
#define RST_DEASSERT_MASK   0x1
#define RST_DEASSERT_SHIFT  0

#define RK3588_DSC_8K_CFG_DONE  0x208
#define DSC_CFG_DONE_SHIFT      0

#define RK3588_DSC_8K_INIT_DLY         0x20C
#define DSC_INIT_DLY_NUM_MASK          0xffff
#define DSC_INIT_DLY_NUM_SHIFT         0
#define SCAN_TIMING_PARA_IMD_EN_SHIFT  16

#define RK3588_DSC_8K_HTOTAL_HS_END  0x210
#define DSC_HTOTAL_PW_MASK           0xffffffff
#define DSC_HTOTAL_PW_SHIFT          0

#define RK3588_DSC_8K_HACT_ST_END  0x214
#define DSC_HACT_ST_END_MASK       0xffffffff
#define DSC_HACT_ST_END_SHIFT      0

#define RK3588_DSC_8K_VTOTAL_VS_END  0x218
#define DSC_VTOTAL_PW_MASK           0xffffffff
#define DSC_VTOTAL_PW_SHIFT          0

#define RK3588_DSC_8K_VACT_ST_END  0x21C
#define DSC_VACT_ST_END_MASK       0xffffffff
#define DSC_VACT_ST_END_SHIFT      0

#define RK3588_DSC_8K_STATUS  0x220

#define RK3588_VOP_GRF_BASE              0xFD5A4000
#define RK3588_GRF_VOP_CON2              0x0008
#define RK3588_GRF_EDP0_ENABLE_SHIFT     0
#define RK3588_GRF_HDMITX0_ENABLE_SHIFT  1
#define RK3588_GRF_EDP1_ENABLE_SHIFT     3
#define RK3588_GRF_HDMITX1_ENABLE_SHIFT  4

#define RK3588_VO0_GRF_BASE  0xFD5A6000

#define RK3588_VO1_GRF_BASE   0xFD5A8000
#define RK3588_GRF_VO1_CON0   0x0000
#define HDMI_SYNC_POL_MASK    0x3
#define HDMI0_SYNC_POL_SHIFT  5
#define HDMI1_SYNC_POL_SHIFT  7

#define RK3588_PMU_BISR_CON3                0x20C
#define RK3588_PD_CLUSTER0_REPAIR_EN_SHIFT  9
#define RK3588_PD_CLUSTER1_REPAIR_EN_SHIFT  10
#define RK3588_PD_CLUSTER2_REPAIR_EN_SHIFT  11
#define RK3588_PD_CLUSTER3_REPAIR_EN_SHIFT  12
#define RK3588_PD_DSC_8K_REPAIR_EN_SHIFT    13
#define RK3588_PD_DSC_4K_REPAIR_EN_SHIFT    14
#define RK3588_PD_ESMART_REPAIR_EN_SHIFT    15

#define RK3588_PMU_BISR_STATUS5            0x294
#define RK3588_PD_CLUSTER0_PWR_STAT_SHIFI  9
#define RK3588_PD_CLUSTER1_PWR_STAT_SHIFI  10
#define RK3588_PD_CLUSTER2_PWR_STAT_SHIFI  11
#define RK3588_PD_CLUSTER3_PWR_STAT_SHIFI  12
#define RK3588_PD_DSC_8K_PWR_STAT_SHIFI    13
#define RK3588_PD_DSC_4K_PWR_STAT_SHIFI    14
#define RK3588_PD_ESMART_PWR_STAT_SHIFI    15

#endif
