{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNLight.h }

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
  SCNLightTypeIES: SCNLightType { available in macos , ios , tvos  }; cvar; external;
  SCNLightTypeProbe: SCNLightType { available in macos , ios , tvos  }; cvar; external;
  SCNLightTypeArea: SCNLightType { available in macos , ios , tvos , watchos  }; cvar; external;
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
    procedure setTemperature(newValue: CGFloat); message 'setTemperature:'; { available in macos , ios , tvos  }
    function temperature: CGFloat; message 'temperature'; { available in macos , ios , tvos  }
    procedure setIntensity(newValue: CGFloat); message 'setIntensity:'; { available in macos , ios , tvos  }
    function intensity: CGFloat; message 'intensity'; { available in macos , ios , tvos  }
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setCastsShadow(newValue: objcbool); message 'setCastsShadow:';
    function castsShadow: objcbool; message 'castsShadow';
    procedure setShadowColor(newValue: id); message 'setShadowColor:';
    function shadowColor: id; message 'shadowColor';
    procedure setShadowRadius(newValue: CGFloat); message 'setShadowRadius:';
    function shadowRadius: CGFloat; message 'shadowRadius';
    procedure setShadowMapSize(newValue: CGSize); message 'setShadowMapSize:'; { available in macos  }
    function shadowMapSize: CGSize; message 'shadowMapSize'; { available in macos  }
    procedure setShadowSampleCount(newValue: NSUInteger); message 'setShadowSampleCount:'; { available in macos  }
    function shadowSampleCount: NSUInteger; message 'shadowSampleCount'; { available in macos  }
    procedure setShadowMode(newValue: SCNShadowMode); message 'setShadowMode:'; { available in macos  }
    function shadowMode: SCNShadowMode; message 'shadowMode'; { available in macos  }
    procedure setShadowBias(newValue: CGFloat); message 'setShadowBias:'; { available in macos  }
    function shadowBias: CGFloat; message 'shadowBias'; { available in macos  }
    procedure setAutomaticallyAdjustsShadowProjection(newValue: objcbool); message 'setAutomaticallyAdjustsShadowProjection:'; { available in macos , ios , tvos , watchos  }
    function automaticallyAdjustsShadowProjection: objcbool; message 'automaticallyAdjustsShadowProjection'; { available in macos , ios , tvos , watchos  }
    procedure setMaximumShadowDistance(newValue: CGFloat); message 'setMaximumShadowDistance:'; { available in macos , ios , tvos , watchos  }
    function maximumShadowDistance: CGFloat; message 'maximumShadowDistance'; { available in macos , ios , tvos , watchos  }
    procedure setForcesBackFaceCasters(newValue: objcbool); message 'setForcesBackFaceCasters:'; { available in macos , ios , tvos , watchos  }
    function forcesBackFaceCasters: objcbool; message 'forcesBackFaceCasters'; { available in macos , ios , tvos , watchos  }
    procedure setSampleDistributedShadowMaps(newValue: objcbool); message 'setSampleDistributedShadowMaps:'; { available in macos , ios , tvos , watchos  }
    function sampleDistributedShadowMaps: objcbool; message 'sampleDistributedShadowMaps'; { available in macos , ios , tvos , watchos  }
    procedure setShadowCascadeCount(newValue: NSUInteger); message 'setShadowCascadeCount:'; { available in macos , ios , tvos , watchos  }
    function shadowCascadeCount: NSUInteger; message 'shadowCascadeCount'; { available in macos , ios , tvos , watchos  }
    procedure setShadowCascadeSplittingFactor(newValue: CGFloat); message 'setShadowCascadeSplittingFactor:'; { available in macos , ios , tvos , watchos  }
    function shadowCascadeSplittingFactor: CGFloat; message 'shadowCascadeSplittingFactor'; { available in macos , ios , tvos , watchos  }
    procedure setOrthographicScale(newValue: CGFloat); message 'setOrthographicScale:'; { available in macos  }
    function orthographicScale: CGFloat; message 'orthographicScale'; { available in macos  }
    procedure setZNear(newValue: CGFloat); message 'setZNear:'; { available in macos  }
    function zNear: CGFloat; message 'zNear'; { available in macos  }
    procedure setZFar(newValue: CGFloat); message 'setZFar:'; { available in macos  }
    function zFar: CGFloat; message 'zFar'; { available in macos  }
    procedure setAttenuationStartDistance(newValue: CGFloat); message 'setAttenuationStartDistance:'; { available in macos  }
    function attenuationStartDistance: CGFloat; message 'attenuationStartDistance'; { available in macos  }
    procedure setAttenuationEndDistance(newValue: CGFloat); message 'setAttenuationEndDistance:'; { available in macos  }
    function attenuationEndDistance: CGFloat; message 'attenuationEndDistance'; { available in macos  }
    procedure setAttenuationFalloffExponent(newValue: CGFloat); message 'setAttenuationFalloffExponent:'; { available in macos  }
    function attenuationFalloffExponent: CGFloat; message 'attenuationFalloffExponent'; { available in macos  }
    procedure setSpotInnerAngle(newValue: CGFloat); message 'setSpotInnerAngle:'; { available in macos  }
    function spotInnerAngle: CGFloat; message 'spotInnerAngle'; { available in macos  }
    procedure setSpotOuterAngle(newValue: CGFloat); message 'setSpotOuterAngle:'; { available in macos  }
    function spotOuterAngle: CGFloat; message 'spotOuterAngle'; { available in macos  }
    procedure setIESProfileURL(newValue: NSURL); message 'setIESProfileURL:'; { available in macos , ios , tvos  }
    function IESProfileURL: NSURL; message 'IESProfileURL'; { available in macos , ios , tvos  }
    function sphericalHarmonicsCoefficients: NSData; message 'sphericalHarmonicsCoefficients'; { available in macos , ios , tvos , watchos  }
    procedure setProbeType(newValue: SCNLightProbeType); message 'setProbeType:'; { available in macos , ios , tvos , watchos  }
    function probeType: SCNLightProbeType; message 'probeType'; { available in macos , ios , tvos , watchos  }
    procedure setProbeUpdateType(newValue: SCNLightProbeUpdateType); message 'setProbeUpdateType:'; { available in macos , ios , tvos , watchos  }
    function probeUpdateType: SCNLightProbeUpdateType; message 'probeUpdateType'; { available in macos , ios , tvos , watchos  }
    procedure setProbeExtents(newValue: simd_float3); message 'setProbeExtents:'; { available in macos , ios , tvos , watchos  }
    function probeExtents: simd_float3; message 'probeExtents'; { available in macos , ios , tvos , watchos  }
    procedure setProbeOffset(newValue: simd_float3); message 'setProbeOffset:'; { available in macos , ios , tvos , watchos  }
    function probeOffset: simd_float3; message 'probeOffset'; { available in macos , ios , tvos , watchos  }
    procedure setParallaxCorrectionEnabled(newValue: objcbool); message 'setParallaxCorrectionEnabled:'; { available in macos , ios , tvos , watchos  }
    function parallaxCorrectionEnabled: objcbool; message 'parallaxCorrectionEnabled'; { available in macos , ios , tvos , watchos  }
    procedure setParallaxExtentsFactor(newValue: simd_float3); message 'setParallaxExtentsFactor:'; { available in macos , ios , tvos , watchos  }
    function parallaxExtentsFactor: simd_float3; message 'parallaxExtentsFactor'; { available in macos , ios , tvos , watchos  }
    procedure setParallaxCenterOffset(newValue: simd_float3); message 'setParallaxCenterOffset:'; { available in macos , ios , tvos , watchos  }
    function parallaxCenterOffset: simd_float3; message 'parallaxCenterOffset'; { available in macos , ios , tvos , watchos  }
    function probeEnvironment: SCNMaterialProperty; message 'probeEnvironment'; { available in macos , ios , tvos , watchos  }
    procedure setAreaType(newValue: SCNLightAreaType); message 'setAreaType:'; { available in macos , ios , tvos , watchos  }
    function areaType: SCNLightAreaType; message 'areaType'; { available in macos , ios , tvos , watchos  }
    procedure setAreaExtents(newValue: simd_float3); message 'setAreaExtents:'; { available in macos , ios , tvos , watchos  }
    function areaExtents: simd_float3; message 'areaExtents'; { available in macos , ios , tvos , watchos  }
    procedure setAreaPolygonVertices(newValue: NSArray); message 'setAreaPolygonVertices:'; { available in macos , ios , tvos , watchos  }
    function areaPolygonVertices: NSArray; message 'areaPolygonVertices'; { available in macos , ios , tvos , watchos  }
    procedure setDrawsArea(newValue: objcbool); message 'setDrawsArea:'; { available in macos , ios , tvos , watchos  }
    function drawsArea: objcbool; message 'drawsArea'; { available in macos , ios , tvos , watchos  }
    procedure setDoubleSided(newValue: objcbool); message 'setDoubleSided:'; { available in macos , ios , tvos , watchos  }
    function doubleSided: objcbool; message 'doubleSided'; { available in macos , ios , tvos , watchos  }
    function gobo: SCNMaterialProperty; message 'gobo'; { available in macos  }
    procedure setCategoryBitMask(newValue: NSUInteger); message 'setCategoryBitMask:'; { available in macos  }
    function categoryBitMask: NSUInteger; message 'categoryBitMask'; { available in macos  }

    { Adopted protocols }
    procedure addAnimation_forKey (animation: SCNAnimationProtocol; key: NSString); message 'addAnimation:forKey:';
    procedure addAnimationPlayer_forKey (player: SCNAnimationPlayer; key: NSString); message 'addAnimationPlayer:forKey:'; { available in macos , ios , tvos , watchos  }
    function animationForKey (key: NSString): CAAnimationPtr; message 'animationForKey:'; deprecated 'replace with -animationPlayerForKey:';
    function animationKeys: NSArray; message 'animationKeys';
    function animationPlayerForKey (key: NSString): SCNAnimationPlayer; message 'animationPlayerForKey:'; { available in macos , ios , tvos , watchos  }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function isAnimationForKeyPaused (key: NSString): objcbool; message 'isAnimationForKeyPaused:'; deprecated 'Use -[SCNAnimationPlayer paused] instead';
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    procedure removeAnimationForKey_blendOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:blendOutDuration:'; { available in macos , ios , tvos , watchos  }
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; deprecated 'replace with -removeAnimationForKey:blendOutDuration:';
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    procedure setSpeed_forAnimationKey (speed: CGFloat; key: NSString); message 'setSpeed:forAnimationKey:'; deprecated 'Use -[SCNAnimationPlayer setSpeed:] instead';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

