{ Parsed from CoreMedia.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreMedia.framework/Headers/CMFormatDescriptionBridge.h }

{$ifndef CMFORMATDESCRIPTIONBRIDGE_H}

{$ifdef TYPES}
type
  CMImageDescriptionFlavor = CFStringRef { available in macos , ios , tvos , watchos  };
  CMImageDescriptionFlavorPtr = ^CMImageDescriptionFlavor { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMImageDescriptionFlavor_QuickTimeMovie: CMImageDescriptionFlavor { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMImageDescriptionFlavor_ISOFamily: CMImageDescriptionFlavor { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMImageDescriptionFlavor_3GPFamily: CMImageDescriptionFlavor { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMVideoFormatDescriptionCreateFromBigEndianImageDescriptionData(allocator: CFAllocatorRef; imageDescriptionData: pbyte; size: size_t; stringEncoding: CFStringEncoding; flavor: CMImageDescriptionFlavor; formatDescriptionOut: CMVideoFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMVideoFormatDescriptionCreateFromBigEndianImageDescriptionBlockBuffer(allocator: CFAllocatorRef; imageDescriptionBlockBuffer: CMBlockBufferRef; stringEncoding: CFStringEncoding; flavor: CMImageDescriptionFlavor; formatDescriptionOut: CMVideoFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMVideoFormatDescriptionCopyAsBigEndianImageDescriptionBlockBuffer(allocator: CFAllocatorRef; videoFormatDescription: CMVideoFormatDescriptionRef; stringEncoding: CFStringEncoding; flavor: CMImageDescriptionFlavor; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$if defined(TARGET_RT_LITTLE_ENDIAN)}
{$ifdef FUNCTIONS}
function CMSwapBigEndianImageDescriptionToHost(imageDescriptionData: pbyte; imageDescriptionSize: size_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSwapHostEndianImageDescriptionToBig(imageDescriptionData: pbyte; imageDescriptionSize: size_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$else}
{$endif}
{$ifdef TYPES}
type
  CMSoundDescriptionFlavor = CFStringRef { available in macos , ios , tvos , watchos  };
  CMSoundDescriptionFlavorPtr = ^CMSoundDescriptionFlavor { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMSoundDescriptionFlavor_QuickTimeMovie: CMSoundDescriptionFlavor { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSoundDescriptionFlavor_QuickTimeMovieV2: CMSoundDescriptionFlavor { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSoundDescriptionFlavor_ISOFamily: CMSoundDescriptionFlavor { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSoundDescriptionFlavor_3GPFamily: CMSoundDescriptionFlavor { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMAudioFormatDescriptionCreateFromBigEndianSoundDescriptionData(allocator: CFAllocatorRef; soundDescriptionData: pbyte; size: size_t; flavor: CMSoundDescriptionFlavor; formatDescriptionOut: CMAudioFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMAudioFormatDescriptionCreateFromBigEndianSoundDescriptionBlockBuffer(allocator: CFAllocatorRef; soundDescriptionBlockBuffer: CMBlockBufferRef; flavor: CMSoundDescriptionFlavor; formatDescriptionOut: CMAudioFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMAudioFormatDescriptionCopyAsBigEndianSoundDescriptionBlockBuffer(allocator: CFAllocatorRef; audioFormatDescription: CMAudioFormatDescriptionRef; flavor: CMSoundDescriptionFlavor; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMDoesBigEndianSoundDescriptionRequireLegacyCBRSampleTableLayout(soundDescriptionBlockBuffer: CMBlockBufferRef; flavor: CMSoundDescriptionFlavor): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$if defined(TARGET_RT_LITTLE_ENDIAN)}
{$ifdef FUNCTIONS}
function CMSwapBigEndianSoundDescriptionToHost(soundDescriptionData: pbyte; soundDescriptionSize: size_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSwapHostEndianSoundDescriptionToBig(soundDescriptionData: pbyte; soundDescriptionSize: size_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$else}
{$endif}
{$ifdef TYPES}
type
  CMTextDescriptionFlavor = CFStringRef { available in macos , ios , tvos , watchos  };
  CMTextDescriptionFlavorPtr = ^CMTextDescriptionFlavor { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef FUNCTIONS}
function CMTextFormatDescriptionCreateFromBigEndianTextDescriptionData(allocator: CFAllocatorRef; textDescriptionData: pbyte; size: size_t; flavor: CMTextDescriptionFlavor; mediaType: CMMediaType; formatDescriptionOut: CMTextFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTextFormatDescriptionCreateFromBigEndianTextDescriptionBlockBuffer(allocator: CFAllocatorRef; textDescriptionBlockBuffer: CMBlockBufferRef; flavor: CMTextDescriptionFlavor; mediaType: CMMediaType; formatDescriptionOut: CMTextFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTextFormatDescriptionCopyAsBigEndianTextDescriptionBlockBuffer(allocator: CFAllocatorRef; textFormatDescription: CMTextFormatDescriptionRef; flavor: CMTextDescriptionFlavor; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$if defined(TARGET_RT_LITTLE_ENDIAN)}
{$ifdef FUNCTIONS}
function CMSwapBigEndianTextDescriptionToHost(textDescriptionData: pbyte; textDescriptionSize: size_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSwapHostEndianTextDescriptionToBig(textDescriptionData: pbyte; textDescriptionSize: size_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$else}
{$endif}
{$ifdef TYPES}
type
  CMClosedCaptionDescriptionFlavor = CFStringRef { available in macos , ios , tvos , watchos  };
  CMClosedCaptionDescriptionFlavorPtr = ^CMClosedCaptionDescriptionFlavor { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef FUNCTIONS}
function CMClosedCaptionFormatDescriptionCreateFromBigEndianClosedCaptionDescriptionData(allocator: CFAllocatorRef; closedCaptionDescriptionData: pbyte; size: size_t; flavor: CMClosedCaptionDescriptionFlavor; formatDescriptionOut: CMClosedCaptionFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMClosedCaptionFormatDescriptionCreateFromBigEndianClosedCaptionDescriptionBlockBuffer(allocator: CFAllocatorRef; closedCaptionDescriptionBlockBuffer: CMBlockBufferRef; flavor: CMClosedCaptionDescriptionFlavor; formatDescriptionOut: CMClosedCaptionFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMClosedCaptionFormatDescriptionCopyAsBigEndianClosedCaptionDescriptionBlockBuffer(allocator: CFAllocatorRef; closedCaptionFormatDescription: CMClosedCaptionFormatDescriptionRef; flavor: CMClosedCaptionDescriptionFlavor; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$if defined(TARGET_RT_LITTLE_ENDIAN)}
{$ifdef FUNCTIONS}
function CMSwapBigEndianClosedCaptionDescriptionToHost(closedCaptionDescriptionData: pbyte; closedCaptionDescriptionSize: size_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSwapHostEndianClosedCaptionDescriptionToBig(closedCaptionDescriptionData: pbyte; closedCaptionDescriptionSize: size_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$else}
{$endif}
{$ifdef TYPES}
type
  CMTimeCodeDescriptionFlavor = CFStringRef { available in macos , ios , tvos , watchos  };
  CMTimeCodeDescriptionFlavorPtr = ^CMTimeCodeDescriptionFlavor { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef FUNCTIONS}
function CMTimeCodeFormatDescriptionCreateFromBigEndianTimeCodeDescriptionData(allocator: CFAllocatorRef; timeCodeDescriptionData: pbyte; size: size_t; flavor: CMTimeCodeDescriptionFlavor; formatDescriptionOut: CMTimeCodeFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeCodeFormatDescriptionCreateFromBigEndianTimeCodeDescriptionBlockBuffer(allocator: CFAllocatorRef; timeCodeDescriptionBlockBuffer: CMBlockBufferRef; flavor: CMTimeCodeDescriptionFlavor; formatDescriptionOut: CMTimeCodeFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeCodeFormatDescriptionCopyAsBigEndianTimeCodeDescriptionBlockBuffer(allocator: CFAllocatorRef; timeCodeFormatDescription: CMTimeCodeFormatDescriptionRef; flavor: CMTimeCodeDescriptionFlavor; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$if defined(TARGET_RT_LITTLE_ENDIAN)}
{$ifdef FUNCTIONS}
function CMSwapBigEndianTimeCodeDescriptionToHost(timeCodeDescriptionData: pbyte; timeCodeDescriptionSize: size_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSwapHostEndianTimeCodeDescriptionToBig(timeCodeDescriptionData: pbyte; timeCodeDescriptionSize: size_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$else}
{$endif}
{$ifdef TYPES}
type
  CMMetadataDescriptionFlavor = CFStringRef { available in macos , ios , tvos , watchos  };
  CMMetadataDescriptionFlavorPtr = ^CMMetadataDescriptionFlavor { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef FUNCTIONS}
function CMMetadataFormatDescriptionCreateFromBigEndianMetadataDescriptionData(allocator: CFAllocatorRef; metadataDescriptionData: pbyte; size: size_t; flavor: CMMetadataDescriptionFlavor; formatDescriptionOut: CMMetadataFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMetadataFormatDescriptionCreateFromBigEndianMetadataDescriptionBlockBuffer(allocator: CFAllocatorRef; metadataDescriptionBlockBuffer: CMBlockBufferRef; flavor: CMMetadataDescriptionFlavor; formatDescriptionOut: CMMetadataFormatDescriptionRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMMetadataFormatDescriptionCopyAsBigEndianMetadataDescriptionBlockBuffer(allocator: CFAllocatorRef; metadataFormatDescription: CMMetadataFormatDescriptionRef; flavor: CMMetadataDescriptionFlavor; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$if defined(TARGET_RT_LITTLE_ENDIAN)}
{$ifdef FUNCTIONS}
function CMSwapBigEndianMetadataDescriptionToHost(metadataDescriptionData: pbyte; metadataDescriptionSize: size_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSwapHostEndianMetadataDescriptionToBig(metadataDescriptionData: pbyte; metadataDescriptionSize: size_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$else}
{$endif}

{$endif}
