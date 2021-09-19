{ Parsed from ModelIO.framework MDLLight.h }

{$ifdef TYPES}
type
  MDLLightPtr = ^MDLLight;
  MDLPhysicallyPlausibleLightPtr = ^MDLPhysicallyPlausibleLight;
  MDLAreaLightPtr = ^MDLAreaLight;
  MDLPhotometricLightPtr = ^MDLPhotometricLight;
  MDLLightProbePtr = ^MDLLightProbe;
{$endif}

{$ifdef TYPES}
type
  MDLLightType = NSUInteger;
  MDLLightTypePtr = ^MDLLightType;

const
  MDLLightTypeUnknown = 0;
  MDLLightTypeAmbient = 1;
  MDLLightTypeDirectional = 2;
  MDLLightTypeSpot = 3;
  MDLLightTypePoint = 4;
  MDLLightTypeLinear = 5;
  MDLLightTypeDiscArea = 6;
  MDLLightTypeRectangularArea = 7;
  MDLLightTypeSuperElliptical = 8;
  MDLLightTypePhotometric = 9;
  MDLLightTypeProbe = 10;
  MDLLightTypeEnvironment = 11;
{$endif}

{$ifdef CLASSES}

type
  MDLLight = objcclass external (MDLObject)
  public
    function irradianceAtPoint (point: vector_float3): CGColorRef; message 'irradianceAtPoint:';
    function irradianceAtPoint_colorSpace (point: vector_float3; colorSpace: CGColorSpaceRef): CGColorRef; message 'irradianceAtPoint:colorSpace:';
    procedure setLightType(newValue: MDLLightType); message 'setLightType:';
    function lightType: MDLLightType; message 'lightType';
    procedure setColorSpace(newValue: NSString); message 'setColorSpace:';
    function colorSpace: NSString; message 'colorSpace';
  end;

type
  MDLPhysicallyPlausibleLight = objcclass external (MDLLight)
  public
    procedure setColorByTemperature (temperature: single); message 'setColorByTemperature:';
    procedure setColor(newValue: CGColorRef); message 'setColor:';
    function color: CGColorRef; message 'color';
    procedure setLumens(newValue: single); message 'setLumens:';
    function lumens: single; message 'lumens';
    procedure setInnerConeAngle(newValue: single); message 'setInnerConeAngle:';
    function innerConeAngle: single; message 'innerConeAngle';
    procedure setOuterConeAngle(newValue: single); message 'setOuterConeAngle:';
    function outerConeAngle: single; message 'outerConeAngle';
    procedure setAttenuationStartDistance(newValue: single); message 'setAttenuationStartDistance:';
    function attenuationStartDistance: single; message 'attenuationStartDistance';
    procedure setAttenuationEndDistance(newValue: single); message 'setAttenuationEndDistance:';
    function attenuationEndDistance: single; message 'attenuationEndDistance';
  end;

type
  MDLAreaLight = objcclass external (MDLPhysicallyPlausibleLight)
  public
    procedure setAreaRadius(newValue: single); message 'setAreaRadius:';
    function areaRadius: single; message 'areaRadius';
    procedure setSuperEllipticPower(newValue: vector_float2); message 'setSuperEllipticPower:';
    function superEllipticPower: vector_float2; message 'superEllipticPower';
    procedure setAspect(newValue: single); message 'setAspect:';
    function aspect: single; message 'aspect';
  end;

type
  MDLPhotometricLight = objcclass external (MDLPhysicallyPlausibleLight)
  public
    function initWithIESProfile (URL: NSURL): id; message 'initWithIESProfile:';
    procedure generateSphericalHarmonicsFromLight (sphericalHarmonicsLevel: NSUInteger); message 'generateSphericalHarmonicsFromLight:';
    procedure generateCubemapFromLight (textureSize: NSUInteger); message 'generateCubemapFromLight:';
    function generateTexture (textureSize: NSUInteger): MDLTexture; message 'generateTexture:'; { available in macos 10.13, ios 11.0, tvos 11.0 }
    function lightCubeMap: MDLTexture; message 'lightCubeMap';
    function sphericalHarmonicsLevel: NSUInteger; message 'sphericalHarmonicsLevel';
    function sphericalHarmonicsCoefficients: NSData; message 'sphericalHarmonicsCoefficients';
  end;

type
  MDLLightProbe = objcclass external (MDLLight)
  public
    function initWithReflectiveTexture_irradianceTexture (reflectiveTexture: MDLTexture; irradianceTexture: MDLTexture): id; message 'initWithReflectiveTexture:irradianceTexture:';
    procedure generateSphericalHarmonicsFromIrradiance (sphericalHarmonicsLevel: NSUInteger); message 'generateSphericalHarmonicsFromIrradiance:';
    function reflectiveTexture: MDLTexture; message 'reflectiveTexture';
    function irradianceTexture: MDLTexture; message 'irradianceTexture';
    function sphericalHarmonicsLevel: NSUInteger; message 'sphericalHarmonicsLevel';
    function sphericalHarmonicsCoefficients: NSData; message 'sphericalHarmonicsCoefficients';
  end;


type
  MDLLightProbe_MDLLightBaking = objccategory external name 'MDLLightBaking' (MDLLightProbe)
    class function lightProbeWithTextureSize_forLocation_lightsToConsider_objectsToConsider_reflectiveCubemap_irradianceCubemap (textureSize: NSInteger; transform_: MDLTransform; lightsToConsider: NSArray; objectsToConsider: NSArray; reflectiveCubemap: MDLTexture; irradianceCubemap: MDLTexture): MDLLightProbe; message 'lightProbeWithTextureSize:forLocation:lightsToConsider:objectsToConsider:reflectiveCubemap:irradianceCubemap:';
  end;
{$endif}

