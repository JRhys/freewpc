#include <freewpc.h>
static char glyph_8x8font_32_bits[] = { 6, 8,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
static char glyph_8x8font_33_bits[] = { 6, 8,
 0x10,0x10,0x10,0x10,0x10,0x00,0x10,0x00};
static char glyph_8x8font_34_bits[] = { 6, 8,
 0x28,0x28,0x00,0x00,0x00,0x00,0x00,0x00};
static char glyph_8x8font_35_bits[] = { 6, 8,
 0x28,0x28,0xfe,0x28,0xfe,0x28,0x28,0x00};
static char glyph_8x8font_36_bits[] = { 6, 8,
 0x10,0x78,0x14,0x38,0x50,0x3c,0x10,0x00};
static char glyph_8x8font_37_bits[] = { 6, 8,
 0x00,0x4c,0x2c,0x10,0x68,0x64,0x00,0x00};
static char glyph_8x8font_38_bits[] = { 6, 8,
 0x18,0x14,0x08,0x14,0x62,0x22,0x5c,0x00};
static char glyph_8x8font_39_bits[] = { 6, 8,
 0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00};
static char glyph_8x8font_40_bits[] = { 6, 8,
 0x20,0x10,0x08,0x08,0x08,0x10,0x20,0x00};
static char glyph_8x8font_41_bits[] = { 6, 8,
 0x08,0x10,0x20,0x20,0x20,0x10,0x08,0x00};
static char glyph_8x8font_42_bits[] = { 6, 8,
 0x10,0x92,0x54,0x38,0x54,0x92,0x10,0x00};
static char glyph_8x8font_43_bits[] = { 6, 8,
 0x10,0x10,0x10,0xfe,0x10,0x10,0x10,0x00};
static char glyph_8x8font_44_bits[] = { 6, 8,
 0x00,0x00,0x00,0x00,0x30,0x30,0x20,0x10};
static char glyph_8x8font_45_bits[] = { 6, 8,
 0x00,0x00,0x00,0xfe,0x00,0x00,0x00,0x00};
static char glyph_8x8font_46_bits[] = { 6, 8,
 0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00};
static char glyph_8x8font_47_bits[] = { 6, 8,
 0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x00};
static char glyph_8x8font_48_bits[] = { 6, 8,
 0x38,0x44,0x44,0x44,0x44,0x44,0x38,0x00};
static char glyph_8x8font_49_bits[] = { 6, 8,
 0x10,0x18,0x10,0x10,0x10,0x10,0x38,0x00};
static char glyph_8x8font_50_bits[] = { 6, 8,
 0x38,0x44,0x40,0x20,0x10,0x08,0x7c,0x00};
static char glyph_8x8font_51_bits[] = { 6, 8,
 0x38,0x44,0x40,0x30,0x40,0x44,0x38,0x00};
static char glyph_8x8font_52_bits[] = { 6, 8,
 0x30,0x28,0x24,0x7c,0x20,0x20,0x70,0x00};
static char glyph_8x8font_53_bits[] = { 6, 8,
 0x7c,0x04,0x04,0x3c,0x40,0x44,0x38,0x00};
static char glyph_8x8font_54_bits[] = { 6, 8,
 0x38,0x44,0x04,0x3c,0x44,0x44,0x38,0x00};
static char glyph_8x8font_55_bits[] = { 6, 8,
 0x7c,0x40,0x20,0x10,0x08,0x08,0x08,0x00};
static char glyph_8x8font_56_bits[] = { 6, 8,
 0x38,0x44,0x44,0x38,0x44,0x44,0x38,0x00};
static char glyph_8x8font_57_bits[] = { 6, 8,
 0x38,0x44,0x44,0x78,0x40,0x44,0x38,0x00};
static char glyph_8x8font_58_bits[] = { 6, 8,
 0x00,0x30,0x30,0x00,0x30,0x30,0x00,0x00};
static char glyph_8x8font_59_bits[] = { 6, 8,
 0x00,0x30,0x30,0x00,0x30,0x30,0x20,0x10};
static char glyph_8x8font_60_bits[] = { 6, 8,
 0x20,0x10,0x08,0x04,0x08,0x10,0x20,0x00};
static char glyph_8x8font_61_bits[] = { 6, 8,
 0x00,0x00,0xfe,0x00,0xfe,0x00,0x00,0x00};
static char glyph_8x8font_62_bits[] = { 6, 8,
 0x04,0x08,0x10,0x20,0x10,0x08,0x04,0x00};
static char glyph_8x8font_63_bits[] = { 6, 8,
 0x38,0x44,0x40,0x20,0x10,0x00,0x10,0x00};
static char glyph_8x8font_64_bits[] = { 6, 8,
 0x38,0x44,0x74,0x54,0x74,0x04,0x38,0x00};
static char glyph_8x8font_65_bits[] = { 6, 8,
 0x38,0x44,0x44,0x7c,0x44,0x44,0x44,0x00};
static char glyph_8x8font_66_bits[] = { 6, 8,
 0x3c,0x44,0x44,0x3c,0x44,0x44,0x3c,0x00};
static char glyph_8x8font_67_bits[] = { 6, 8,
 0x38,0x44,0x04,0x04,0x04,0x44,0x38,0x00};
static char glyph_8x8font_68_bits[] = { 6, 8,
 0x3c,0x44,0x44,0x44,0x44,0x44,0x3c,0x00};
static char glyph_8x8font_69_bits[] = { 6, 8,
 0x7c,0x04,0x04,0x3c,0x04,0x04,0x7c,0x00};
static char glyph_8x8font_70_bits[] = { 6, 8,
 0x7c,0x04,0x04,0x7c,0x04,0x04,0x04,0x00};
static char glyph_8x8font_71_bits[] = { 6, 8,
 0x38,0x44,0x04,0x74,0x44,0x44,0x38,0x00};
static char glyph_8x8font_72_bits[] = { 6, 8,
 0x44,0x44,0x44,0x7c,0x44,0x44,0x44,0x00};
static char glyph_8x8font_73_bits[] = { 6, 8,
 0x38,0x10,0x10,0x10,0x10,0x10,0x38,0x00};
static char glyph_8x8font_74_bits[] = { 6, 8,
 0x70,0x20,0x20,0x20,0x24,0x24,0x18,0x00};
static char glyph_8x8font_75_bits[] = { 6, 8,
 0x44,0x44,0x24,0x1c,0x24,0x44,0x44,0x00};
static char glyph_8x8font_76_bits[] = { 6, 8,
 0x08,0x08,0x08,0x08,0x08,0x08,0x78,0x00};
static char glyph_8x8font_77_bits[] = { 6, 8,
 0x42,0x66,0x5a,0x42,0x42,0x42,0x42,0x00};
static char glyph_8x8font_78_bits[] = { 6, 8,
 0x44,0x4c,0x54,0x54,0x64,0x44,0x44,0x00};
static char glyph_8x8font_79_bits[] = { 6, 8,
 0x38,0x44,0x44,0x44,0x44,0x44,0x38,0x00};
static char glyph_8x8font_80_bits[] = { 6, 8,
 0x38,0x48,0x48,0x38,0x08,0x08,0x08,0x00};
static char glyph_8x8font_81_bits[] = { 6, 8,
 0x38,0x44,0x44,0x44,0x44,0x44,0x38,0x60};
static char glyph_8x8font_82_bits[] = { 6, 8,
 0x3c,0x44,0x44,0x3c,0x14,0x24,0x44,0x00};
static char glyph_8x8font_83_bits[] = { 6, 8,
 0x38,0x44,0x04,0x38,0x40,0x44,0x38,0x00};
static char glyph_8x8font_84_bits[] = { 6, 8,
 0x7c,0x10,0x10,0x10,0x10,0x10,0x10,0x00};
static char glyph_8x8font_85_bits[] = { 6, 8,
 0x44,0x44,0x44,0x44,0x44,0x44,0x38,0x00};
static char glyph_8x8font_86_bits[] = { 6, 8,
 0x44,0x44,0x44,0x28,0x28,0x10,0x10,0x00};
static char glyph_8x8font_87_bits[] = { 6, 8,
 0x82,0x82,0x82,0x54,0x54,0x28,0x28,0x00};
static char glyph_8x8font_88_bits[] = { 6, 8,
 0x44,0x44,0x28,0x10,0x28,0x44,0x44,0x00};
static char glyph_8x8font_89_bits[] = { 6, 8,
 0x44,0x44,0x28,0x10,0x10,0x10,0x10,0x00};
static char glyph_8x8font_90_bits[] = { 6, 8,
 0x7c,0x40,0x20,0x10,0x08,0x04,0x7c,0x00};
static char glyph_8x8font_91_bits[] = { 6, 8,
 0x38,0x08,0x08,0x08,0x08,0x08,0x38,0x00};
static char glyph_8x8font_92_bits[] = { 6, 8,
 0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x00};
static char glyph_8x8font_93_bits[] = { 6, 8,
 0x38,0x20,0x20,0x20,0x20,0x20,0x38,0x00};
static char glyph_8x8font_94_bits[] = { 6, 8,
 0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00};
static char glyph_8x8font_95_bits[] = { 6, 8,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe};

#define BASECHAR ' '
static char *font_8x8_glyphs[] = {
	[32 - BASECHAR] = glyph_8x8font_32_bits,
	[33 - BASECHAR] = glyph_8x8font_33_bits,
	[34 - BASECHAR] = glyph_8x8font_34_bits,
	[35 - BASECHAR] = glyph_8x8font_35_bits,
	[36 - BASECHAR] = glyph_8x8font_36_bits,
	[37 - BASECHAR] = glyph_8x8font_37_bits,
	[38 - BASECHAR] = glyph_8x8font_38_bits,
	[39 - BASECHAR] = glyph_8x8font_39_bits,
	[40 - BASECHAR] = glyph_8x8font_40_bits,
	[41 - BASECHAR] = glyph_8x8font_41_bits,
	[42 - BASECHAR] = glyph_8x8font_42_bits,
	[43 - BASECHAR] = glyph_8x8font_43_bits,
	[44 - BASECHAR] = glyph_8x8font_44_bits,
	[45 - BASECHAR] = glyph_8x8font_45_bits,
	[46 - BASECHAR] = glyph_8x8font_46_bits,
	[47 - BASECHAR] = glyph_8x8font_47_bits,
	[48 - BASECHAR] = glyph_8x8font_48_bits,
	[49 - BASECHAR] = glyph_8x8font_49_bits,
	[50 - BASECHAR] = glyph_8x8font_50_bits,
	[51 - BASECHAR] = glyph_8x8font_51_bits,
	[52 - BASECHAR] = glyph_8x8font_52_bits,
	[53 - BASECHAR] = glyph_8x8font_53_bits,
	[54 - BASECHAR] = glyph_8x8font_54_bits,
	[55 - BASECHAR] = glyph_8x8font_55_bits,
	[56 - BASECHAR] = glyph_8x8font_56_bits,
	[57 - BASECHAR] = glyph_8x8font_57_bits,
	[58 - BASECHAR] = glyph_8x8font_58_bits,
	[59 - BASECHAR] = glyph_8x8font_59_bits,
	[60 - BASECHAR] = glyph_8x8font_60_bits,
	[61 - BASECHAR] = glyph_8x8font_61_bits,
	[62 - BASECHAR] = glyph_8x8font_62_bits,
	[63 - BASECHAR] = glyph_8x8font_63_bits,
	[64 - BASECHAR] = glyph_8x8font_64_bits,
	[65 - BASECHAR] = glyph_8x8font_65_bits,
	[66 - BASECHAR] = glyph_8x8font_66_bits,
	[67 - BASECHAR] = glyph_8x8font_67_bits,
	[68 - BASECHAR] = glyph_8x8font_68_bits,
	[69 - BASECHAR] = glyph_8x8font_69_bits,
	[70 - BASECHAR] = glyph_8x8font_70_bits,
	[71 - BASECHAR] = glyph_8x8font_71_bits,
	[72 - BASECHAR] = glyph_8x8font_72_bits,
	[73 - BASECHAR] = glyph_8x8font_73_bits,
	[74 - BASECHAR] = glyph_8x8font_74_bits,
	[75 - BASECHAR] = glyph_8x8font_75_bits,
	[76 - BASECHAR] = glyph_8x8font_76_bits,
	[77 - BASECHAR] = glyph_8x8font_77_bits,
	[78 - BASECHAR] = glyph_8x8font_78_bits,
	[79 - BASECHAR] = glyph_8x8font_79_bits,
	[80 - BASECHAR] = glyph_8x8font_80_bits,
	[81 - BASECHAR] = glyph_8x8font_81_bits,
	[82 - BASECHAR] = glyph_8x8font_82_bits,
	[83 - BASECHAR] = glyph_8x8font_83_bits,
	[84 - BASECHAR] = glyph_8x8font_84_bits,
	[85 - BASECHAR] = glyph_8x8font_85_bits,
	[86 - BASECHAR] = glyph_8x8font_86_bits,
	[87 - BASECHAR] = glyph_8x8font_87_bits,
	[88 - BASECHAR] = glyph_8x8font_88_bits,
	[89 - BASECHAR] = glyph_8x8font_89_bits,
	[90 - BASECHAR] = glyph_8x8font_90_bits,
	[91 - BASECHAR] = glyph_8x8font_91_bits,
	[92 - BASECHAR] = glyph_8x8font_92_bits,
	[93 - BASECHAR] = glyph_8x8font_93_bits,
	[94 - BASECHAR] = glyph_8x8font_94_bits,
	[95 - BASECHAR] = glyph_8x8font_95_bits,
};
const font_t font_bitmap8 = {
	.spacing = 2,
	.height = 8,
	.glyphs = font_8x8_glyphs,
	.basechar = BASECHAR,
};
