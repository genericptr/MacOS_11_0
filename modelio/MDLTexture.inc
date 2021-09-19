{ Parsed from ModelIO.framework MDLTexture.h }

{$ifdef TYPES}
type
  MDLTexturePtr = ^MDLTexture;
  MDLURLTexturePtr = ^MDLURLTexture;
  MDLCheckerboardTexturePtr = ^MDLCheckerboardTexture;
  MDLSkyCubeTexturePtr = ^MDLSkyCubeTexture;
  MDLColorSwatchTexturePtr = ^MDLColorSwatchTexture;
  MDLNoiseTexturePtr = ^MDLNoiseTexture;
  MDLNormalMapTexturePtr = ^MDLNormalMapTexture;
{$endif}

{$ifdef TYPES}
type
  MDLTextureChannelEncoding = NSInteger;
  MDLTextureChannelEncodingPtr = ^MDLTextureChannelEncoding;

const
  MDLTextureChannelEncodingUInt8 = 1;
  MDLTextureChannelEncodingUInt16 = 2;
  MDLTextureChannelEncodingUInt24 = 3;
  MDLTextureChannelEncodingUInt32 = 4;
  MDLTextureChannelEncodingFloat16 = $102;
  MDLTextureChannelEncodingFloat16SR = $302;
  MDLTextureChannelEncodingFloat32 = $104;
{$endif}

{$ifdef CLASSES}

type
  MDLTexture = objcclass external (NSObject, MDLNamedProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    class function textureNamed (name: NSString): id; message 'textureNamed:';
    class function textureNamed_bundle (name: NSString; bundleOrNil: NSBundle): id; message 'textureNamed:bundle:';
    class function textureNamed_assetResolver (name: NSString; resolver: id): id; message 'textureNamed:assetResolver:'; { available in macos , ios , tvos  }
    class function textureCubeWithImagesNamed (names: NSArray): id; message 'textureCubeWithImagesNamed:';
    class function textureCubeWithImagesNamed_bundle (names: NSArray; bundleOrNil: NSBundle): id; message 'textureCubeWithImagesNamed:bundle:';
    class function irradianceTextureCubeWithTexture_name_dimensions (texture: MDLTexture; name: NSString; dimensions: vector_int2): id; message 'irradianceTextureCubeWithTexture:name:dimensions:';
    class function irradianceTextureCubeWithTexture_name_dimensions_roughness (texture: MDLTexture; name: NSString; dimensions: vector_int2; roughness: single): id; message 'irradianceTextureCubeWithTexture:name:dimensions:roughness:';
    function initWithData_topLeftOrigin_name_dimensions_rowStride_channelCount_channelEncoding_isCube (pixelData: NSData; topLeftOrigin: objcbool; name: NSString; dimensions: vector_int2; rowStride: NSInteger; channelCount: NSUInteger; channelEncoding: MDLTextureChannelEncoding; isCube: objcbool): id; message 'initWithData:topLeftOrigin:name:dimensions:rowStride:channelCount:channelEncoding:isCube:'; { NS_DESIGNATED_INITIALIZER }
    function writeToURL (URL: NSURL): objcbool; message 'writeToURL:';
    function writeToURL_level (URL: NSURL; level: NSUInteger): objcbool; message 'writeToURL:level:'; { available in macos , ios , tvos  }
    function writeToURL_type (nsurl_: NSURL; type_: CFStringRef): objcbool; message 'writeToURL:type:';
    function writeToURL_type_level (nsurl_: NSURL; type_: CFStringRef; level: NSUInteger): objcbool; message 'writeToURL:type:level:'; { available in macos , ios , tvos  }
    function imageFromTexture: CGImageRef; message 'imageFromTexture';
    function imageFromTextureAtLevel (level: NSUInteger): CGImageRef; message 'imageFromTextureAtLevel:'; { available in macos 10.13, ios 11.0, tvos 11.0 }
    function texelDataWithTopLeftOrigin: NSData; message 'texelDataWithTopLeftOrigin';
    function texelDataWithBottomLeftOrigin: NSData; message 'texelDataWithBottomLeftOrigin';
    function texelDataWithTopLeftOriginAtMipLevel_create (level: NSInteger; create_: objcbool): NSData; message 'texelDataWithTopLeftOriginAtMipLevel:create:';
    function texelDataWithBottomLeftOriginAtMipLevel_create (level: NSInteger; create_: objcbool): NSData; message 'texelDataWithBottomLeftOriginAtMipLevel:create:';
    function dimensions: vector_int2; message 'dimensions';
    function rowStride: NSInteger; message 'rowStride';
    function channelCount: NSUInteger; message 'channelCount';
    function mipLevelCount: NSUInteger; message 'mipLevelCount';
    function channelEncoding: MDLTextureChannelEncoding; message 'channelEncoding';
    procedure setIsCube(newValue: objcbool); message 'setIsCube:';
    function isCube: objcbool; message 'isCube';
    procedure setHasAlphaValues(newValue: objcbool); message 'setHasAlphaValues:';
    function hasAlphaValues: objcbool; message 'hasAlphaValues';

    { Adopted protocols }
    function name: NSString; message 'name';
    procedure setName (newValue: NSString); message 'setName:';
  end;

type
  MDLURLTexture = objcclass external (MDLTexture)
  public
    function initWithURL_name (URL: NSURL; name: NSString): id; message 'initWithURL:name:';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
  end;

type
  MDLCheckerboardTexture = objcclass external (MDLTexture)
  public
    function initWithDivisions_name_dimensions_channelCount_channelEncoding_color1_color2 (divisions: single; name: NSString; dimensions_: vector_int2; channelCount_: cint; channelEncoding_: MDLTextureChannelEncoding; color1: CGColorRef; color2: CGColorRef): id; message 'initWithDivisions:name:dimensions:channelCount:channelEncoding:color1:color2:';
    procedure setDivisions(newValue: single); message 'setDivisions:';
    function divisions: single; message 'divisions';
    procedure setColor1(newValue: CGColorRef); message 'setColor1:';
    function color1: CGColorRef; message 'color1';
    procedure setColor2(newValue: CGColorRef); message 'setColor2:';
    function color2: CGColorRef; message 'color2';
  end;

type
  MDLSkyCubeTexture = objcclass external (MDLTexture)
  public
    function initWithName_channelEncoding_textureDimensions_turbidity_sunElevation_upperAtmosphereScattering_groundAlbedo (name: NSString; channelEncoding_: MDLTextureChannelEncoding; textureDimensions: vector_int2; turbidity: single; sunElevation: single; upperAtmosphereScattering: single; groundAlbedo: single): id; message 'initWithName:channelEncoding:textureDimensions:turbidity:sunElevation:upperAtmosphereScattering:groundAlbedo:';
    function initWithName_channelEncoding_textureDimensions_turbidity_sunElevation_sunAzimuth_upperAtmosphereScattering_groundAlbedo (name: NSString; channelEncoding_: MDLTextureChannelEncoding; textureDimensions: vector_int2; turbidity: single; sunElevation: single; sunAzimuth: single; upperAtmosphereScattering: single; groundAlbedo: single): id; message 'initWithName:channelEncoding:textureDimensions:turbidity:sunElevation:sunAzimuth:upperAtmosphereScattering:groundAlbedo:'; { available in macos , ios , tvos  }
    procedure updateTexture; message 'updateTexture';
    procedure setTurbidity(newValue: single); message 'setTurbidity:';
    function turbidity: single; message 'turbidity';
    procedure setSunElevation(newValue: single); message 'setSunElevation:';
    function sunElevation: single; message 'sunElevation';
    procedure setSunAzimuth(newValue: single); message 'setSunAzimuth:'; { available in macos , ios , tvos  }
    function sunAzimuth: single; message 'sunAzimuth'; { available in macos , ios , tvos  }
    procedure setUpperAtmosphereScattering(newValue: single); message 'setUpperAtmosphereScattering:';
    function upperAtmosphereScattering: single; message 'upperAtmosphereScattering';
    procedure setGroundAlbedo(newValue: single); message 'setGroundAlbedo:';
    function groundAlbedo: single; message 'groundAlbedo';
    procedure setHorizonElevation(newValue: single); message 'setHorizonElevation:';
    function horizonElevation: single; message 'horizonElevation';
    procedure setGroundColor(newValue: CGColorRef); message 'setGroundColor:';
    function groundColor: CGColorRef; message 'groundColor';
    procedure setGamma(newValue: single); message 'setGamma:';
    function gamma: single; message 'gamma';
    procedure setExposure(newValue: single); message 'setExposure:';
    function exposure: single; message 'exposure';
    procedure setBrightness(newValue: single); message 'setBrightness:';
    function brightness: single; message 'brightness';
    procedure setContrast(newValue: single); message 'setContrast:';
    function contrast: single; message 'contrast';
    procedure setSaturation(newValue: single); message 'setSaturation:';
    function saturation: single; message 'saturation';
    procedure setHighDynamicRangeCompression(newValue: vector_float2); message 'setHighDynamicRangeCompression:';
    function highDynamicRangeCompression: vector_float2; message 'highDynamicRangeCompression';
  end;

type
  MDLColorSwatchTexture = objcclass external (MDLTexture)
  public
    function initWithColorTemperatureGradientFrom_toColorTemperature_name_textureDimensions (colorTemperature1: single; colorTemperature2: single; name: NSString; textureDimensions: vector_int2): id; message 'initWithColorTemperatureGradientFrom:toColorTemperature:name:textureDimensions:';
    function initWithColorGradientFrom_toColor_name_textureDimensions (color1: CGColorRef; color2: CGColorRef; name: NSString; textureDimensions: vector_int2): id; message 'initWithColorGradientFrom:toColor:name:textureDimensions:';
  end;

type
  MDLNoiseTexture = objcclass external (MDLTexture)
  public
    function initVectorNoiseWithSmoothness_name_textureDimensions_channelEncoding (smoothness: single; name: NSString; textureDimensions: vector_int2; channelEncoding_: MDLTextureChannelEncoding): id; message 'initVectorNoiseWithSmoothness:name:textureDimensions:channelEncoding:';
    function initScalarNoiseWithSmoothness_name_textureDimensions_channelCount_channelEncoding_grayscale (smoothness: single; name: NSString; textureDimensions: vector_int2; channelCount_: cint; channelEncoding_: MDLTextureChannelEncoding; grayscale: objcbool): id; message 'initScalarNoiseWithSmoothness:name:textureDimensions:channelCount:channelEncoding:grayscale:';
    function initCellularNoiseWithFrequency_name_textureDimensions_channelEncoding (frequency: single; name: NSString; textureDimensions: vector_int2; channelEncoding_: MDLTextureChannelEncoding): id; message 'initCellularNoiseWithFrequency:name:textureDimensions:channelEncoding:'; { available in macos , ios , tvos  }
  end;

type
  MDLNormalMapTexture = objcclass external (MDLTexture)
  public
    function initByGeneratingNormalMapWithTexture_name_smoothness_contrast (sourceTexture: MDLTexture; name: NSString; smoothness: single; contrast: single): id; message 'initByGeneratingNormalMapWithTexture:name:smoothness:contrast:';
  end;
{$endif}

