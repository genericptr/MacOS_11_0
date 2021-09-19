{ Parsed from SceneKit.framework SCNLight.h }

{$ifdef TYPES}
type
  SCNLightPtr = ^SCNLight;
{$endif}

{$ifdef TYPES}
type
  SCNLightType = NSString;
  SCNLightTypePtr = ^SCNLightType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNLightTypeAmbient: SCNLightType; cvar; external;
  SCNLightTypeOmni: SCNLightType; cvar; external;
  SCNLightTypeDirectional: SCNLightType; cvar; external;
  SCNLightTypeSpot: SCNLightType; cvar; external;
  SCNLightTypeIES: SCNLightType { available in macos 10.12, ios 10.0, tvos 10.0 }; cvar; external;
  SCNLightTypeProbe: SCNLightType { available in macos 10.12, ios 10.0, tvos 10.0 }; cvar; external;
  SCNLightTypeArea: SCNLightType { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCNShadowMode = NSInteger;
  SCNShadowModePtr = ^SCNShadowMode;

const
  SCNShadowModeForward = 0;
  SCNShadowModeDeferred = 1;
  SCNShadowModeModulated = 2;

type
  SCNLightProbeType = NSInteger;
  SCNLightProbeTypePtr = ^SCNLightProbeType;

const
  SCNLightProbeTypeIrradiance = 0;
  SCNLightProbeTypeRadiance = 1;

type
  SCNLightProbeUpdateType = NSInteger;
  SCNLightProbeUpdateTypePtr = ^SCNLightProbeUpdateType;

const
  SCNLightProbeUpdateTypeNever = 0;
  SCNLightProbeUpdateTypeRealtime = 1;

type
  SCNLightAreaType = NSInteger;
  SCNLightAreaTypePtr = ^SCNLightAreaType;

const
  SCNLightAreaTypeRectangle = 1;
  SCNLightAreaTypePolygon = 4;
{$endif}

{$ifdef CLASSES}

type
  SCNLight = objcclass external (NSObject, SCNAnimatableProtocol, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function light: id; message 'light';
    procedure setType(newValue: SCNLightType); message 'setType:';
    function type_: SCNLightType; message 'type';
    procedure setColor(newValue: id); message 'setColor:';
    function color: id; message 'color';
    procedure setTemperature(newValue: CGFloat); message 'setTemperature:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function temperature: CGFloat; message 'temperature'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setIntensity(newValue: CGFloat); message 'setIntensity:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function intensity: CGFloat; message 'intensity'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setCastsShadow(newValue: objcbool); message 'setCastsShadow:';
    function castsShadow: objcbool; message 'castsShadow';
    procedure setShadowColor(newValue: id); message 'setShadowColor:';
    function shadowColor: id; message 'shadowColor';
    procedure setShadowRadius(newValue: CGFloat); message 'setShadowRadius:';
    function shadowRadius: CGFloat; message 'shadowRadius';
    procedure setShadowMapSize(newValue: CGSize); message 'setShadowMapSize:'; { available in macos 10.10 }
    function shadowMapSize: CGSize; message 'shadowMapSize'; { available in macos 10.10 }
    procedure setShadowSampleCount(newValue: NSUInteger); message 'setShadowSampleCount:'; { available in macos 10.10 }
    function shadowSampleCount: NSUInteger; message 'shadowSampleCount'; { available in macos 10.10 }
    procedure setShadowMode(newValue: SCNShadowMode); message 'setShadowMode:'; { available in macos 10.10 }
    function shadowMode: SCNShadowMode; message 'shadowMode'; { available in macos 10.10 }
    procedure setShadowBias(newValue: CGFloat); message 'setShadowBias:'; { available in macos 10.10 }
    function shadowBias: CGFloat; message 'shadowBias'; { available in macos 10.10 }
    procedure setAutomaticallyAdjustsShadowProjection(newValue: objcbool); message 'setAutomaticallyAdjustsShadowProjection:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function automaticallyAdjustsShadowProjection: objcbool; message 'automaticallyAdjustsShadowProjection'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setMaximumShadowDistance(newValue: CGFloat); message 'setMaximumShadowDistance:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function maximumShadowDistance: CGFloat; message 'maximumShadowDistance'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setForcesBackFaceCasters(newValue: objcbool); message 'setForcesBackFaceCasters:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function forcesBackFaceCasters: objcbool; message 'forcesBackFaceCasters'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setSampleDistributedShadowMaps(newValue: objcbool); message 'setSampleDistributedShadowMaps:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function sampleDistributedShadowMaps: objcbool; message 'sampleDistributedShadowMaps'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setShadowCascadeCount(newValue: NSUInteger); message 'setShadowCascadeCount:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function shadowCascadeCount: NSUInteger; message 'shadowCascadeCount'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setShadowCascadeSplittingFactor(newValue: CGFloat); message 'setShadowCascadeSplittingFactor:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function shadowCascadeSplittingFactor: CGFloat; message 'shadowCascadeSplittingFactor'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setOrthographicScale(newValue: CGFloat); message 'setOrthographicScale:'; { available in macos 10.10 }
    function orthographicScale: CGFloat; message 'orthographicScale'; { available in macos 10.10 }
    procedure setZNear(newValue: CGFloat); message 'setZNear:'; { available in macos 10.10 }
    function zNear: CGFloat; message 'zNear'; { available in macos 10.10 }
    procedure setZFar(newValue: CGFloat); message 'setZFar:'; { available in macos 10.10 }
    function zFar: CGFloat; message 'zFar'; { available in macos 10.10 }
    procedure setAttenuationStartDistance(newValue: CGFloat); message 'setAttenuationStartDistance:'; { available in macos 10.10 }
    function attenuationStartDistance: CGFloat; message 'attenuationStartDistance'; { available in macos 10.10 }
    procedure setAttenuationEndDistance(newValue: CGFloat); message 'setAttenuationEndDistance:'; { available in macos 10.10 }
    function attenuationEndDistance: CGFloat; message 'attenuationEndDistance'; { available in macos 10.10 }
    procedure setAttenuationFalloffExponent(newValue: CGFloat); message 'setAttenuationFalloffExponent:'; { available in macos 10.10 }
    function attenuationFalloffExponent: CGFloat; message 'attenuationFalloffExponent'; { available in macos 10.10 }
    procedure setSpotInnerAngle(newValue: CGFloat); message 'setSpotInnerAngle:'; { available in macos 10.10 }
    function spotInnerAngle: CGFloat; message 'spotInnerAngle'; { available in macos 10.10 }
    procedure setSpotOuterAngle(newValue: CGFloat); message 'setSpotOuterAngle:'; { available in macos 10.10 }
    function spotOuterAngle: CGFloat; message 'spotOuterAngle'; { available in macos 10.10 }
    procedure setIESProfileURL(newValue: NSURL); message 'setIESProfileURL:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function IESProfileURL: NSURL; message 'IESProfileURL'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function sphericalHarmonicsCoefficients: NSData; message 'sphericalHarmonicsCoefficients'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setProbeType(newValue: SCNLightProbeType); message 'setProbeType:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function probeType: SCNLightProbeType; message 'probeType'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setProbeUpdateType(newValue: SCNLightProbeUpdateType); message 'setProbeUpdateType:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function probeUpdateType: SCNLightProbeUpdateType; message 'probeUpdateType'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setProbeExtents(newValue: simd_float3); message 'setProbeExtents:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function probeExtents: simd_float3; message 'probeExtents'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setProbeOffset(newValue: simd_float3); message 'setProbeOffset:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function probeOffset: simd_float3; message 'probeOffset'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setParallaxCorrectionEnabled(newValue: objcbool); message 'setParallaxCorrectionEnabled:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function parallaxCorrectionEnabled: objcbool; message 'parallaxCorrectionEnabled'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setParallaxExtentsFactor(newValue: simd_float3); message 'setParallaxExtentsFactor:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function parallaxExtentsFactor: simd_float3; message 'parallaxExtentsFactor'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setParallaxCenterOffset(newValue: simd_float3); message 'setParallaxCenterOffset:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function parallaxCenterOffset: simd_float3; message 'parallaxCenterOffset'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function probeEnvironment: SCNMaterialProperty; message 'probeEnvironment'; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 5.0 }
    procedure setAreaType(newValue: SCNLightAreaType); message 'setAreaType:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function areaType: SCNLightAreaType; message 'areaType'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setAreaExtents(newValue: simd_float3); message 'setAreaExtents:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function areaExtents: simd_float3; message 'areaExtents'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setAreaPolygonVertices(newValue: NSArray); message 'setAreaPolygonVertices:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function areaPolygonVertices: NSArray; message 'areaPolygonVertices'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setDrawsArea(newValue: objcbool); message 'setDrawsArea:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function drawsArea: objcbool; message 'drawsArea'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setDoubleSided(newValue: objcbool); message 'setDoubleSided:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function doubleSided: objcbool; message 'doubleSided'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function gobo: SCNMaterialProperty; message 'gobo'; { available in macos 10.9 }
    procedure setCategoryBitMask(newValue: NSUInteger); message 'setCategoryBitMask:'; { available in macos 10.10 }
    function categoryBitMask: NSUInteger; message 'categoryBitMask'; { available in macos 10.10 }

    { Adopted protocols }
    procedure addAnimation_forKey (animation: SCNAnimationProtocol; key: NSString); message 'addAnimation:forKey:';
    procedure addAnimationPlayer_forKey (player: SCNAnimationPlayer; key: NSString); message 'addAnimationPlayer:forKey:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function animationForKey (key: NSString): CAAnimationPtr; message 'animationForKey:'; deprecated 'replace with -animationPlayerForKey:';
    function animationKeys: NSArray; message 'animationKeys';
    function animationPlayerForKey (key: NSString): SCNAnimationPlayer; message 'animationPlayerForKey:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function isAnimationForKeyPaused (key: NSString): objcbool; message 'isAnimationForKeyPaused:'; deprecated 'Use -[SCNAnimationPlayer paused] instead';
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    procedure removeAnimationForKey_blendOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:blendOutDuration:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; deprecated 'replace with -removeAnimationForKey:blendOutDuration:';
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    procedure setSpeed_forAnimationKey (speed: CGFloat; key: NSString); message 'setSpeed:forAnimationKey:'; deprecated 'Use -[SCNAnimationPlayer setSpeed:] instead';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

