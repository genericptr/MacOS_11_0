{ Parsed from Metal.framework MTLTexture.h }

{$ifdef TYPES}
type
  MTLSharedTextureHandlePtr = ^MTLSharedTextureHandle;
  MTLTextureDescriptorPtr = ^MTLTextureDescriptor;
  MTLTextureProtocolPtr = ^MTLTextureProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLTextureType = NSUInteger;
  MTLTextureTypePtr = ^MTLTextureType;

const
  MTLTextureType1D = 0;
  MTLTextureType1DArray = 1;
  MTLTextureType2D = 2;
  MTLTextureType2DArray = 3;
  MTLTextureType2DMultisample = 4;
  MTLTextureTypeCube = 5;
  MTLTextureTypeCubeArray = 6 { available in macos , ios  };
  MTLTextureType3D = 7;
  MTLTextureType2DMultisampleArray = 8 { available in macos , ios  };
  MTLTextureTypeTextureBuffer = 9 { available in macos , ios  };

type
  MTLTextureSwizzle = cuint8;
  MTLTextureSwizzlePtr = ^MTLTextureSwizzle;

const
  MTLTextureSwizzleZero = 0;
  MTLTextureSwizzleOne = 1;
  MTLTextureSwizzleRed = 2;
  MTLTextureSwizzleGreen = 3;
  MTLTextureSwizzleBlue = 4;
  MTLTextureSwizzleAlpha = 5;

type
  MTLTextureSwizzleChannels = record
    red: MTLTextureSwizzle;
    green: MTLTextureSwizzle;
    blue: MTLTextureSwizzle;
    alpha: MTLTextureSwizzle;
  end;
type
  MTLTextureSwizzleChannelsPtr = ^MTLTextureSwizzleChannels;
{$endif}

{$ifdef CLASSES}

type
  MTLSharedTextureHandle = objcclass external (NSObject, NSSecureCodingProtocol)
  private
    _priv: MTLSharedTextureHandlePrivatePtr;
  public
    function device: MTLDeviceProtocol; message 'device';
    function label_: NSString; message 'label';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  MTLTextureUsage = NSUInteger;
  MTLTextureUsagePtr = ^MTLTextureUsage;

const
  MTLTextureUsageUnknown = $0000;
  MTLTextureUsageShaderRead = $0001;
  MTLTextureUsageShaderWrite = $0002;
  MTLTextureUsageRenderTarget = $0004;
  MTLTextureUsagePixelFormatView = $0010;
{$endif}

{$ifdef CLASSES}

type
  MTLTextureDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function texture2DDescriptorWithPixelFormat_width_height_mipmapped (pixelFormat: MTLPixelFormat; width: NSUInteger; height: NSUInteger; mipmapped: objcbool): MTLTextureDescriptor; message 'texture2DDescriptorWithPixelFormat:width:height:mipmapped:';
    class function textureCubeDescriptorWithPixelFormat_size_mipmapped (pixelFormat: MTLPixelFormat; size: NSUInteger; mipmapped: objcbool): MTLTextureDescriptor; message 'textureCubeDescriptorWithPixelFormat:size:mipmapped:';
    class function textureBufferDescriptorWithPixelFormat_width_resourceOptions_usage (pixelFormat: MTLPixelFormat; width: NSUInteger; resourceOptions: MTLResourceOptions; usage: MTLTextureUsage): MTLTextureDescriptor; message 'textureBufferDescriptorWithPixelFormat:width:resourceOptions:usage:'; { available in macos , ios  }
    procedure setTextureType(newValue: MTLTextureType); message 'setTextureType:';
    function textureType: MTLTextureType; message 'textureType';
    procedure setPixelFormat(newValue: MTLPixelFormat); message 'setPixelFormat:';
    function pixelFormat: MTLPixelFormat; message 'pixelFormat';
    procedure setWidth(newValue: NSUInteger); message 'setWidth:';
    function width: NSUInteger; message 'width';
    procedure setHeight(newValue: NSUInteger); message 'setHeight:';
    function height: NSUInteger; message 'height';
    procedure setDepth(newValue: NSUInteger); message 'setDepth:';
    function depth: NSUInteger; message 'depth';
    procedure setMipmapLevelCount(newValue: NSUInteger); message 'setMipmapLevelCount:';
    function mipmapLevelCount: NSUInteger; message 'mipmapLevelCount';
    procedure setSampleCount(newValue: NSUInteger); message 'setSampleCount:';
    function sampleCount: NSUInteger; message 'sampleCount';
    procedure setArrayLength(newValue: NSUInteger); message 'setArrayLength:';
    function arrayLength: NSUInteger; message 'arrayLength';
    procedure setResourceOptions(newValue: MTLResourceOptions); message 'setResourceOptions:';
    function resourceOptions: MTLResourceOptions; message 'resourceOptions';
    procedure setCpuCacheMode(newValue: MTLCPUCacheMode); message 'setCpuCacheMode:'; { available in macos , ios  }
    function cpuCacheMode: MTLCPUCacheMode; message 'cpuCacheMode'; { available in macos , ios  }
    procedure setStorageMode(newValue: MTLStorageMode); message 'setStorageMode:'; { available in macos , ios  }
    function storageMode: MTLStorageMode; message 'storageMode'; { available in macos , ios  }
    procedure setHazardTrackingMode(newValue: MTLHazardTrackingMode); message 'setHazardTrackingMode:'; { available in macos , ios  }
    function hazardTrackingMode: MTLHazardTrackingMode; message 'hazardTrackingMode'; { available in macos , ios  }
    procedure setUsage(newValue: MTLTextureUsage); message 'setUsage:'; { available in macos , ios  }
    function usage: MTLTextureUsage; message 'usage'; { available in macos , ios  }
    procedure setAllowGPUOptimizedContents(newValue: objcbool); message 'setAllowGPUOptimizedContents:'; { available in macos , ios  }
    function allowGPUOptimizedContents: objcbool; message 'allowGPUOptimizedContents'; { available in macos , ios  }
    procedure setSwizzle(newValue: MTLTextureSwizzleChannels); message 'setSwizzle:'; { available in macos , ios  }
    function swizzle: MTLTextureSwizzleChannels; message 'swizzle'; { available in macos , ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLTextureProtocol = objcprotocol external name 'MTLTexture' (MTLResourceProtocol)
    function rootResource: id; message 'rootResource'; deprecated 'Use parentTexture or buffer instead';
    function parentTexture: id; message 'parentTexture'; { available in macos , ios  }
    function parentRelativeLevel: NSUInteger; message 'parentRelativeLevel'; { available in macos , ios  }
    function parentRelativeSlice: NSUInteger; message 'parentRelativeSlice'; { available in macos , ios  }
    function buffer: id; message 'buffer'; { available in macos , ios  }
    function bufferOffset: NSUInteger; message 'bufferOffset'; { available in macos , ios  }
    function bufferBytesPerRow: NSUInteger; message 'bufferBytesPerRow'; { available in macos , ios  }
    function iosurface: IOSurfaceRef; message 'iosurface'; { available in macos , ios  }
    function iosurfacePlane: NSUInteger; message 'iosurfacePlane'; { available in macos , ios  }
    function textureType: MTLTextureType; message 'textureType';
    function pixelFormat: MTLPixelFormat; message 'pixelFormat';
    function width: NSUInteger; message 'width';
    function height: NSUInteger; message 'height';
    function depth: NSUInteger; message 'depth';
    function mipmapLevelCount: NSUInteger; message 'mipmapLevelCount';
    function sampleCount: NSUInteger; message 'sampleCount';
    function arrayLength: NSUInteger; message 'arrayLength';
    function usage: MTLTextureUsage; message 'usage';
    function isShareable: objcbool; message 'isShareable'; { available in macos , ios  }
    function isFramebufferOnly: objcbool; message 'isFramebufferOnly';
  optional
    function firstMipmapInTail: NSUInteger; message 'firstMipmapInTail'; { available in macos , macCatalyst , ios  }
    function tailSizeInBytes: NSUInteger; message 'tailSizeInBytes'; { available in macos , macCatalyst , ios  }
    function isSparse: objcbool; message 'isSparse'; { available in macos , macCatalyst , ios  }
  required
    function allowGPUOptimizedContents: objcbool; message 'allowGPUOptimizedContents'; { available in macos , ios  }
    procedure getBytes_bytesPerRow_bytesPerImage_fromRegion_mipmapLevel_slice (pixelBytes: pointer; bytesPerRow: NSUInteger; bytesPerImage: NSUInteger; region: MTLRegion; level: NSUInteger; slice: NSUInteger); message 'getBytes:bytesPerRow:bytesPerImage:fromRegion:mipmapLevel:slice:';
    procedure replaceRegion_mipmapLevel_slice_withBytes_bytesPerRow_bytesPerImage (region: MTLRegion; level: NSUInteger; slice: NSUInteger; pixelBytes: pointer; bytesPerRow: NSUInteger; bytesPerImage: NSUInteger); message 'replaceRegion:mipmapLevel:slice:withBytes:bytesPerRow:bytesPerImage:';
    procedure getBytes_bytesPerRow_fromRegion_mipmapLevel (pixelBytes: pointer; bytesPerRow: NSUInteger; region: MTLRegion; level: NSUInteger); message 'getBytes:bytesPerRow:fromRegion:mipmapLevel:';
    procedure replaceRegion_mipmapLevel_withBytes_bytesPerRow (region: MTLRegion; level: NSUInteger; pixelBytes: pointer; bytesPerRow: NSUInteger); message 'replaceRegion:mipmapLevel:withBytes:bytesPerRow:';
    function newTextureViewWithPixelFormat (pixelFormat_: MTLPixelFormat): id; message 'newTextureViewWithPixelFormat:';
    function newTextureViewWithPixelFormat_textureType_levels_slices (pixelFormat_: MTLPixelFormat; textureType_: MTLTextureType; levelRange: NSRange; sliceRange: NSRange): id; message 'newTextureViewWithPixelFormat:textureType:levels:slices:'; { available in macos , ios  }
    function newSharedTextureHandle: MTLSharedTextureHandle; message 'newSharedTextureHandle'; { available in macos , ios  }
    function remoteStorageTexture: id; message 'remoteStorageTexture'; { unavailable in ios }
    function newRemoteTextureViewForDevice (device: id): id; message 'newRemoteTextureViewForDevice:'; { unavailable in ios }
    function swizzle: MTLTextureSwizzleChannels; message 'swizzle'; { available in macos , ios  }
    function newTextureViewWithPixelFormat_textureType_levels_slices_swizzle (pixelFormat_: MTLPixelFormat; textureType_: MTLTextureType; levelRange: NSRange; sliceRange: NSRange; swizzle_: MTLTextureSwizzleChannels): id; message 'newTextureViewWithPixelFormat:textureType:levels:slices:swizzle:'; { available in macos , ios  }
  end;
{$endif}

