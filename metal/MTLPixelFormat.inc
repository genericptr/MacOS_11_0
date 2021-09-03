{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLPixelFormat.h }
{$ifdef TYPES}
type
  MTLPixelFormat = NSUInteger;
  MTLPixelFormatPtr = ^MTLPixelFormat;

const
  MTLPixelFormatInvalid = 0;
  MTLPixelFormatA8Unorm = 1;
  MTLPixelFormatR8Unorm = 10;
  MTLPixelFormatR8Unorm_sRGB = 11 { available in macos , macCatalyst , ios  };
  MTLPixelFormatR8Snorm = 12;
  MTLPixelFormatR8Uint = 13;
  MTLPixelFormatR8Sint = 14;
  MTLPixelFormatR16Unorm = 20;
  MTLPixelFormatR16Snorm = 22;
  MTLPixelFormatR16Uint = 23;
  MTLPixelFormatR16Sint = 24;
  MTLPixelFormatR16Float = 25;
  MTLPixelFormatRG8Unorm = 30;
  MTLPixelFormatRG8Unorm_sRGB = 31 { available in macos , macCatalyst , ios  };
  MTLPixelFormatRG8Snorm = 32;
  MTLPixelFormatRG8Uint = 33;
  MTLPixelFormatRG8Sint = 34;
  MTLPixelFormatB5G6R5Unorm = 40 { available in macos , macCatalyst , ios  };
  MTLPixelFormatA1BGR5Unorm = 41 { available in macos , macCatalyst , ios  };
  MTLPixelFormatABGR4Unorm = 42 { available in macos , macCatalyst , ios  };
  MTLPixelFormatBGR5A1Unorm = 43 { available in macos , macCatalyst , ios  };
  MTLPixelFormatR32Uint = 53;
  MTLPixelFormatR32Sint = 54;
  MTLPixelFormatR32Float = 55;
  MTLPixelFormatRG16Unorm = 60;
  MTLPixelFormatRG16Snorm = 62;
  MTLPixelFormatRG16Uint = 63;
  MTLPixelFormatRG16Sint = 64;
  MTLPixelFormatRG16Float = 65;
  MTLPixelFormatRGBA8Unorm = 70;
  MTLPixelFormatRGBA8Unorm_sRGB = 71;
  MTLPixelFormatRGBA8Snorm = 72;
  MTLPixelFormatRGBA8Uint = 73;
  MTLPixelFormatRGBA8Sint = 74;
  MTLPixelFormatBGRA8Unorm = 80;
  MTLPixelFormatBGRA8Unorm_sRGB = 81;
  MTLPixelFormatRGB10A2Unorm = 90;
  MTLPixelFormatRGB10A2Uint = 91;
  MTLPixelFormatRG11B10Float = 92;
  MTLPixelFormatRGB9E5Float = 93;
  MTLPixelFormatBGR10A2Unorm = 94 { available in macos , ios  };
  MTLPixelFormatBGR10_XR = 554 { available in macos , macCatalyst , ios  };
  MTLPixelFormatBGR10_XR_sRGB = 555 { available in macos , macCatalyst , ios  };
  MTLPixelFormatRG32Uint = 103;
  MTLPixelFormatRG32Sint = 104;
  MTLPixelFormatRG32Float = 105;
  MTLPixelFormatRGBA16Unorm = 110;
  MTLPixelFormatRGBA16Snorm = 112;
  MTLPixelFormatRGBA16Uint = 113;
  MTLPixelFormatRGBA16Sint = 114;
  MTLPixelFormatRGBA16Float = 115;
  MTLPixelFormatBGRA10_XR = 552 { available in macos , macCatalyst , ios  };
  MTLPixelFormatBGRA10_XR_sRGB = 553 { available in macos , macCatalyst , ios  };
  MTLPixelFormatRGBA32Uint = 123;
  MTLPixelFormatRGBA32Sint = 124;
  MTLPixelFormatRGBA32Float = 125;
  MTLPixelFormatBC1_RGBA = 130 { unavailable in ios };
  MTLPixelFormatBC1_RGBA_sRGB = 131 { unavailable in ios };
  MTLPixelFormatBC2_RGBA = 132 { unavailable in ios };
  MTLPixelFormatBC2_RGBA_sRGB = 133 { unavailable in ios };
  MTLPixelFormatBC3_RGBA = 134 { unavailable in ios };
  MTLPixelFormatBC3_RGBA_sRGB = 135 { unavailable in ios };
  MTLPixelFormatBC4_RUnorm = 140 { unavailable in ios };
  MTLPixelFormatBC4_RSnorm = 141 { unavailable in ios };
  MTLPixelFormatBC5_RGUnorm = 142 { unavailable in ios };
  MTLPixelFormatBC5_RGSnorm = 143 { unavailable in ios };
  MTLPixelFormatBC6H_RGBFloat = 150 { unavailable in ios };
  MTLPixelFormatBC6H_RGBUfloat = 151 { unavailable in ios };
  MTLPixelFormatBC7_RGBAUnorm = 152 { unavailable in ios };
  MTLPixelFormatBC7_RGBAUnorm_sRGB = 153 { unavailable in ios };
  MTLPixelFormatPVRTC_RGB_2BPP = 160 { available in macos , macCatalyst , ios  };
  MTLPixelFormatPVRTC_RGB_2BPP_sRGB = 161 { available in macos , macCatalyst , ios  };
  MTLPixelFormatPVRTC_RGB_4BPP = 162 { available in macos , macCatalyst , ios  };
  MTLPixelFormatPVRTC_RGB_4BPP_sRGB = 163 { available in macos , macCatalyst , ios  };
  MTLPixelFormatPVRTC_RGBA_2BPP = 164 { available in macos , macCatalyst , ios  };
  MTLPixelFormatPVRTC_RGBA_2BPP_sRGB = 165 { available in macos , macCatalyst , ios  };
  MTLPixelFormatPVRTC_RGBA_4BPP = 166 { available in macos , macCatalyst , ios  };
  MTLPixelFormatPVRTC_RGBA_4BPP_sRGB = 167 { available in macos , macCatalyst , ios  };
  MTLPixelFormatEAC_R11Unorm = 170 { available in macos , macCatalyst , ios  };
  MTLPixelFormatEAC_R11Snorm = 172 { available in macos , macCatalyst , ios  };
  MTLPixelFormatEAC_RG11Unorm = 174 { available in macos , macCatalyst , ios  };
  MTLPixelFormatEAC_RG11Snorm = 176 { available in macos , macCatalyst , ios  };
  MTLPixelFormatEAC_RGBA8 = 178 { available in macos , macCatalyst , ios  };
  MTLPixelFormatEAC_RGBA8_sRGB = 179 { available in macos , macCatalyst , ios  };
  MTLPixelFormatETC2_RGB8 = 180 { available in macos , macCatalyst , ios  };
  MTLPixelFormatETC2_RGB8_sRGB = 181 { available in macos , macCatalyst , ios  };
  MTLPixelFormatETC2_RGB8A1 = 182 { available in macos , macCatalyst , ios  };
  MTLPixelFormatETC2_RGB8A1_sRGB = 183 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_4x4_sRGB = 186 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_5x4_sRGB = 187 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_5x5_sRGB = 188 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_6x5_sRGB = 189 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_6x6_sRGB = 190 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_8x5_sRGB = 192 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_8x6_sRGB = 193 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_8x8_sRGB = 194 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_10x5_sRGB = 195 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_10x6_sRGB = 196 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_10x8_sRGB = 197 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_10x10_sRGB = 198 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_12x10_sRGB = 199 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_12x12_sRGB = 200 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_4x4_LDR = 204 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_5x4_LDR = 205 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_5x5_LDR = 206 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_6x5_LDR = 207 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_6x6_LDR = 208 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_8x5_LDR = 210 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_8x6_LDR = 211 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_8x8_LDR = 212 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_10x5_LDR = 213 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_10x6_LDR = 214 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_10x8_LDR = 215 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_10x10_LDR = 216 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_12x10_LDR = 217 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_12x12_LDR = 218 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_4x4_HDR = 222 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_5x4_HDR = 223 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_5x5_HDR = 224 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_6x5_HDR = 225 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_6x6_HDR = 226 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_8x5_HDR = 228 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_8x6_HDR = 229 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_8x8_HDR = 230 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_10x5_HDR = 231 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_10x6_HDR = 232 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_10x8_HDR = 233 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_10x10_HDR = 234 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_12x10_HDR = 235 { available in macos , macCatalyst , ios  };
  MTLPixelFormatASTC_12x12_HDR = 236 { available in macos , macCatalyst , ios  };
  MTLPixelFormatGBGR422 = 240;
  MTLPixelFormatBGRG422 = 241;
  MTLPixelFormatDepth16Unorm = 250 { available in macos , ios  };
  MTLPixelFormatDepth32Float = 252;
  MTLPixelFormatStencil8 = 253;
  MTLPixelFormatDepth24Unorm_Stencil8 = 255 { unavailable in ios };
  MTLPixelFormatDepth32Float_Stencil8 = 260 { available in macos , ios  };
  MTLPixelFormatX32_Stencil8 = 261 { available in macos , ios  };
  MTLPixelFormatX24_Stencil8 = 262 { unavailable in ios };
{$endif}
