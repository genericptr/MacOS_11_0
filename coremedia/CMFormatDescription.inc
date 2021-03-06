{ Parsed from CoreMedia.framework CMFormatDescription.h }

{$ifndef CMFORMATDESCRIPTION_H}

{$ifdef TYPES}
type
  CMFormatDescriptionRef = OpaqueType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMFormatDescriptionRefPtr = ^CMFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMMediaType = FourCharCode { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMMediaTypePtr = ^CMMediaType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef FUNCTIONS}
function CMFormatDescriptionCreate(allocator: CFAllocatorRef; mediaType: CMMediaType; mediaSubType: FourCharCode; extensions: CFDictionaryRef; formatDescriptionOut: CMFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMFormatDescriptionGetTypeID: CFTypeID; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMFormatDescriptionEqual(formatDescription: CMFormatDescriptionRef; otherFormatDescription: CMFormatDescriptionRef): Boolean; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMFormatDescriptionEqualIgnoringExtensionKeys(formatDescription: CMFormatDescriptionRef; otherFormatDescription: CMFormatDescriptionRef; formatDescriptionExtensionKeysToIgnore: CFTypeRef; sampleDescriptionExtensionAtomKeysToIgnore: CFTypeRef): Boolean; cdecl; external; { available in macos 10.7, ios 4.3, tvos 9.0, watchos 6.0 }
function CMFormatDescriptionGetMediaType(desc: CMFormatDescriptionRef): CMMediaType; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMFormatDescriptionGetMediaSubType(desc: CMFormatDescriptionRef): FourCharCode; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMFormatDescriptionGetExtensions(desc: CMFormatDescriptionRef): CFDictionaryRef; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMFormatDescriptionExtension_OriginalCompressionSettings: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_SampleDescriptionExtensionAtoms: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_VerbatimSampleDescription: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_VerbatimISOSampleEntry: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMFormatDescriptionGetExtension(desc: CMFormatDescriptionRef; extensionKey: CFStringRef): CFPropertyListRef; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$ifdef TYPES}
type
  CMAudioCodecType = FourCharCode { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMAudioCodecTypePtr = ^CMAudioCodecType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef TYPES}
type
  CMAudioFormatDescriptionRef = CMFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMAudioFormatDescriptionRefPtr = ^CMAudioFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef FUNCTIONS}
function CMAudioFormatDescriptionCreate(allocator: CFAllocatorRef; asbd: AudioStreamBasicDescriptionPtr; layoutSize: size_t; layout: AudioChannelLayoutPtr; magicCookieSize: size_t; magicCookie: pointer; extensions: CFDictionaryRef; formatDescriptionOut: CMAudioFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMAudioFormatDescriptionGetStreamBasicDescription(desc: CMAudioFormatDescriptionRef): AudioStreamBasicDescriptionPtr; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMAudioFormatDescriptionGetMagicCookie(desc: CMAudioFormatDescriptionRef; sizeOut: size_tPtr): pointer; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMAudioFormatDescriptionGetChannelLayout(desc: CMAudioFormatDescriptionRef; sizeOut: size_tPtr): AudioChannelLayoutPtr; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMAudioFormatDescriptionGetFormatList(desc: CMAudioFormatDescriptionRef; sizeOut: size_tPtr): AudioFormatListItemPtr; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMAudioFormatDescriptionGetRichestDecodableFormat(desc: CMAudioFormatDescriptionRef): AudioFormatListItemPtr; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMAudioFormatDescriptionGetMostCompatibleFormat(desc: CMAudioFormatDescriptionRef): AudioFormatListItemPtr; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMAudioFormatDescriptionCreateSummary(allocator: CFAllocatorRef; formatDescriptionArray: CFArrayRef; flags: cuint32; formatDescriptionOut: CMAudioFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$ifdef TYPES}
type
  CMAudioFormatDescriptionMask = cuint32 { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMAudioFormatDescriptionMaskPtr = ^CMAudioFormatDescriptionMask { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef FUNCTIONS}
function CMAudioFormatDescriptionEqual(formatDescription: CMAudioFormatDescriptionRef; otherFormatDescription: CMAudioFormatDescriptionRef; equalityMask: CMAudioFormatDescriptionMask; equalityMaskOut: CMAudioFormatDescriptionMaskPtr): Boolean; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$ifdef TYPES}
type
  CMVideoFormatDescriptionRef = CMFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMVideoFormatDescriptionRefPtr = ^CMVideoFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMPixelFormatType = FourCharCode { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMPixelFormatTypePtr = ^CMPixelFormatType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef TYPES}
type
  CMVideoCodecType = FourCharCode { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMVideoCodecTypePtr = ^CMVideoCodecType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef TYPES}
type
  CMVideoDimensions = record
    width: cint32;
    height: cint32;
  end;
type
  CMVideoDimensionsPtr = ^CMVideoDimensions;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMFormatDescriptionExtension_FormatName: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_Depth: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_CleanAperture: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionKey_CleanApertureWidth: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionKey_CleanApertureHeight: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionKey_CleanApertureHorizontalOffset: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionKey_CleanApertureVerticalOffset: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionKey_CleanApertureWidthRational: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionKey_CleanApertureHeightRational: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionKey_CleanApertureHorizontalOffsetRational: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionKey_CleanApertureVerticalOffsetRational: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_FieldCount: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_FieldDetail: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionFieldDetail_TemporalTopFirst: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionFieldDetail_TemporalBottomFirst: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionFieldDetail_SpatialFirstLineEarly: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionFieldDetail_SpatialFirstLineLate: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_PixelAspectRatio: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionKey_PixelAspectRatioHorizontalSpacing: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionKey_PixelAspectRatioVerticalSpacing: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_ColorPrimaries: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionColorPrimaries_ITU_R_709_2: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionColorPrimaries_EBU_3213: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionColorPrimaries_SMPTE_C: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionColorPrimaries_DCI_P3: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionColorPrimaries_P3_D65: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionColorPrimaries_ITU_R_2020: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionColorPrimaries_P22: CFStringRef { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_TransferFunction: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionTransferFunction_ITU_R_709_2: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionTransferFunction_SMPTE_240M_1995: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionTransferFunction_UseGamma: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionTransferFunction_ITU_R_2020: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionTransferFunction_SMPTE_ST_428_1: CFStringRef { available in macos 10.12, ios 10.0, tvos 10.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionTransferFunction_SMPTE_ST_2084_PQ: CFStringRef { available in macos 10.13, ios 11.0, tvos 11.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionTransferFunction_ITU_R_2100_HLG: CFStringRef { available in macos 10.13, ios 11.0, tvos 11.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionTransferFunction_Linear: CFStringRef { available in macos 10.14, ios 12.0, tvos 12.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionTransferFunction_sRGB: CFStringRef { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_GammaLevel: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_YCbCrMatrix: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionYCbCrMatrix_ITU_R_709_2: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionYCbCrMatrix_ITU_R_601_4: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionYCbCrMatrix_SMPTE_240M_1995: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionYCbCrMatrix_ITU_R_2020: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_FullRangeVideo: CFStringRef { available in macos 10.7, ios 4.3, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_ICCProfile: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_BytesPerRow: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_ChromaLocationTopField: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_ChromaLocationBottomField: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionChromaLocation_Left: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionChromaLocation_Center: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionChromaLocation_TopLeft: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionChromaLocation_Top: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionChromaLocation_BottomLeft: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionChromaLocation_Bottom: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionChromaLocation_DV420: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionConformsToMPEG2VideoProfile: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_ProtectedContentOriginalFormat: CFStringRef { available in macos 11.0, ios 14.0, tvos 14.0, watchos 7.0 }; cvar; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMFormatDescriptionExtension_TemporalQuality: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_SpatialQuality: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_VerbatimImageDescription: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_Version: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_RevisionLevel: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_Vendor: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionVendor_Apple: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_MasteringDisplayColorVolume: CFStringRef { available in macos 10.13, ios 11.0, tvos 11.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_ContentLightLevelInfo: CFStringRef { available in macos 10.13, ios 11.0, tvos 11.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_AlternativeTransferCharacteristics: CFStringRef { available in macos 10.14, ios 12.0, tvos 12.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_AuxiliaryTypeInfo: CFStringRef; cvar; external;
  kCMFormatDescriptionExtension_AlphaChannelMode: CFStringRef { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionAlphaChannelMode_StraightAlpha: CFStringRef { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionAlphaChannelMode_PremultipliedAlpha: CFStringRef { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }; cvar; external;
  kCMFormatDescriptionExtension_ContainsAlphaChannel: CFStringRef { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMVideoFormatDescriptionCreate(allocator: CFAllocatorRef; codecType: CMVideoCodecType; width: cint32; height: cint32; extensions: CFDictionaryRef; formatDescriptionOut: CMVideoFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMVideoFormatDescriptionCreateForImageBuffer(allocator: CFAllocatorRef; imageBuffer: CVImageBufferRef; formatDescriptionOut: CMVideoFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMVideoFormatDescriptionCreateFromH264ParameterSets(allocator: CFAllocatorRef; parameterSetCount: size_t; parameterSetPointers: pbyte; parameterSetSizes: size_tPtr; NALUnitHeaderLength: cint; formatDescriptionOut: CMFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }
function CMVideoFormatDescriptionCreateFromHEVCParameterSets(allocator: CFAllocatorRef; parameterSetCount: size_t; parameterSetPointers: pbyte; parameterSetSizes: size_tPtr; NALUnitHeaderLength: cint; extensions: CFDictionaryRef; formatDescriptionOut: CMFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 6.0 }
function CMVideoFormatDescriptionGetH264ParameterSetAtIndex(videoDesc: CMFormatDescriptionRef; parameterSetIndex: size_t; parameterSetPointerOut: pbyte; parameterSetSizeOut: size_tPtr; parameterSetCountOut: size_tPtr; NALUnitHeaderLengthOut: pcint): OSStatus; cdecl; external; { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }
function CMVideoFormatDescriptionGetHEVCParameterSetAtIndex(videoDesc: CMFormatDescriptionRef; parameterSetIndex: size_t; parameterSetPointerOut: pbyte; parameterSetSizeOut: size_tPtr; parameterSetCountOut: size_tPtr; NALUnitHeaderLengthOut: pcint): OSStatus; cdecl; external; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 6.0 }
function CMVideoFormatDescriptionGetDimensions(videoDesc: CMVideoFormatDescriptionRef): CMVideoDimensions; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMVideoFormatDescriptionGetPresentationDimensions(videoDesc: CMVideoFormatDescriptionRef; usePixelAspectRatio: Boolean; useCleanAperture: Boolean): CGSize; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMVideoFormatDescriptionGetCleanAperture(videoDesc: CMVideoFormatDescriptionRef; originIsAtTopLeft: Boolean): CGRect; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMVideoFormatDescriptionGetExtensionKeysCommonWithImageBuffers: CFArrayRef; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMVideoFormatDescriptionMatchesImageBuffer(desc: CMVideoFormatDescriptionRef; imageBuffer: CVImageBufferRef): Boolean; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$ifdef TYPES}
type
  CMMuxedFormatDescriptionRef = CMFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMMuxedFormatDescriptionRefPtr = ^CMMuxedFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMMuxedStreamType = FourCharCode { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMMuxedStreamTypePtr = ^CMMuxedStreamType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef FUNCTIONS}
function CMMuxedFormatDescriptionCreate(allocator: CFAllocatorRef; muxType: CMMuxedStreamType; extensions: CFDictionaryRef; formatDescriptionOut: CMMuxedFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$ifdef TYPES}
type
  CMClosedCaptionFormatDescriptionRef = CMFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMClosedCaptionFormatDescriptionRefPtr = ^CMClosedCaptionFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMClosedCaptionFormatType = FourCharCode { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMClosedCaptionFormatTypePtr = ^CMClosedCaptionFormatType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef TYPES}
type
  CMTextFormatDescriptionRef = CMFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMTextFormatDescriptionRefPtr = ^CMTextFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMTextFormatType = FourCharCode { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMTextFormatTypePtr = ^CMTextFormatType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef TYPES}
type
  CMTextDisplayFlags = cuint32 { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMTextDisplayFlagsPtr = ^CMTextDisplayFlags { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef TYPES}
type
  CMTextJustificationValue = cint8 { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMTextJustificationValuePtr = ^CMTextJustificationValue { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTextFormatDescriptionExtension_DisplayFlags: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionExtension_BackgroundColor: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionColor_Red: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionColor_Green: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionColor_Blue: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionColor_Alpha: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionExtension_DefaultTextBox: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionRect_Top: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionRect_Left: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionRect_Bottom: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionRect_Right: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionExtension_DefaultStyle: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionStyle_StartChar: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionStyle_Font: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionStyle_FontFace: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionStyle_ForegroundColor: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionStyle_FontSize: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionExtension_HorizontalJustification: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionExtension_VerticalJustification: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionStyle_EndChar: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionExtension_FontTable: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionExtension_TextJustification: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionStyle_Height: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionStyle_Ascent: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTextFormatDescriptionExtension_DefaultFontName: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMTextFormatDescriptionGetDisplayFlags(desc: CMFormatDescriptionRef; displayFlagsOut: CMTextDisplayFlagsPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTextFormatDescriptionGetJustification(desc: CMFormatDescriptionRef; horizontaJustificationlOut: CMTextJustificationValuePtr; verticalJustificationOut: CMTextJustificationValuePtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTextFormatDescriptionGetDefaultTextBox(desc: CMFormatDescriptionRef; originIsAtTopLeft: Boolean; heightOfTextTrack: CGFloat; defaultTextBoxOut: CGRectPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTextFormatDescriptionGetDefaultStyle(desc: CMFormatDescriptionRef; localFontIDOut: pcuint16; boldOut: pobjcbool; italicOut: pobjcbool; underlineOut: pobjcbool; fontSizeOut: CGFloatPtr; colorComponentsOut: CGFloatPtr { 4 element array of CGFloat }): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTextFormatDescriptionGetFontName(desc: CMFormatDescriptionRef; localFontID: cuint16; fontNameOut: CFStringRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$ifdef TYPES}
type
  CMSubtitleFormatType = FourCharCode { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMSubtitleFormatTypePtr = ^CMSubtitleFormatType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef TYPES}
type
  CMTimeCodeFormatDescriptionRef = CMFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMTimeCodeFormatDescriptionRefPtr = ^CMTimeCodeFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMTimeCodeFormatType = FourCharCode { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMTimeCodeFormatTypePtr = ^CMTimeCodeFormatType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef FUNCTIONS}
function CMTimeCodeFormatDescriptionCreate(allocator: CFAllocatorRef; timeCodeFormatType: CMTimeCodeFormatType; frameDuration: CMTime; frameQuanta: cuint32; flags: cuint32; extensions: CFDictionaryRef; formatDescriptionOut: CMTimeCodeFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeCodeFormatDescriptionGetFrameDuration(timeCodeFormatDescription: CMTimeCodeFormatDescriptionRef): CMTime; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeCodeFormatDescriptionGetFrameQuanta(timeCodeFormatDescription: CMTimeCodeFormatDescriptionRef): cuint32; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeCodeFormatDescriptionGetTimeCodeFlags(desc: CMTimeCodeFormatDescriptionRef): cuint32; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimeCodeFormatDescriptionExtension_SourceReferenceName: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTimeCodeFormatDescriptionKey_Value: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTimeCodeFormatDescriptionKey_LangCode: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CMMetadataFormatDescriptionRef = CMFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMMetadataFormatDescriptionRefPtr = ^CMMetadataFormatDescriptionRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMMetadataFormatType = FourCharCode { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMMetadataFormatTypePtr = ^CMMetadataFormatType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMFormatDescriptionExtensionKey_MetadataKeyTable: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescriptionKey_Namespace: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescriptionKey_Value: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescriptionKey_LocalID: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescriptionKey_DataType: CFStringRef { available in macos 10.10, ios 8.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescriptionKey_DataTypeNamespace: CFStringRef { available in macos 10.10, ios 8.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescriptionKey_ConformingDataTypes: CFStringRef { available in macos 10.10, ios 8.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescriptionKey_LanguageTag: CFStringRef { available in macos 10.10, ios 8.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescriptionKey_StructuralDependency: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescriptionKey_SetupData: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescription_StructuralDependencyKey_DependencyIsInvalidFlag: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescriptionMetadataSpecificationKey_Identifier: CFStringRef { available in macos 10.10, ios 8.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescriptionMetadataSpecificationKey_DataType: CFStringRef { available in macos 10.10, ios 8.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescriptionMetadataSpecificationKey_ExtendedLanguageTag: CFStringRef { available in macos 10.10, ios 8.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescriptionMetadataSpecificationKey_StructuralDependency: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMMetadataFormatDescriptionMetadataSpecificationKey_SetupData: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMMetadataFormatDescriptionCreateWithKeys(allocator: CFAllocatorRef; metadataType: CMMetadataFormatType; keys: CFArrayRef; formatDescriptionOut: CMMetadataFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMMetadataFormatDescriptionCreateWithMetadataSpecifications(allocator: CFAllocatorRef; metadataType: CMMetadataFormatType; metadataSpecifications: CFArrayRef; formatDescriptionOut: CMMetadataFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 6.0 }
function CMMetadataFormatDescriptionCreateWithMetadataFormatDescriptionAndMetadataSpecifications(allocator: CFAllocatorRef; sourceDescription: CMMetadataFormatDescriptionRef; metadataSpecifications: CFArrayRef; formatDescriptionOut: CMMetadataFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 6.0 }
function CMMetadataFormatDescriptionCreateByMergingMetadataFormatDescriptions(allocator: CFAllocatorRef; sourceDescription: CMMetadataFormatDescriptionRef; otherSourceDescription: CMMetadataFormatDescriptionRef; formatDescriptionOut: CMMetadataFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 6.0 }
function CMMetadataFormatDescriptionGetKeyWithLocalID(desc: CMMetadataFormatDescriptionRef; localKeyID: OSType): CFDictionaryRef; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMMetadataFormatDescriptionGetIdentifiers(desc: CMMetadataFormatDescriptionRef): CFArrayRef; cdecl; external; { available in macos 10.10, ios 8.0, tvos 9.0, watchos 6.0 }
{$endif}

{$endif}
