{ Parsed from SceneKit.framework SCNCamera.h }

{$ifdef TYPES}
type
  SCNCameraPtr = ^SCNCamera;
{$endif}

{$ifdef TYPES}
type
  SCNCameraProjectionDirection = NSInteger;
  SCNCameraProjectionDirectionPtr = ^SCNCameraProjectionDirection;

const
  SCNCameraProjectionDirectionVertical = 0;
  SCNCameraProjectionDirectionHorizontal = 1;
{$endif}

{$ifdef CLASSES}

type
  SCNCamera = objcclass external (NSObject, SCNAnimatableProtocol, SCNTechniqueSupportProtocol, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function camera: id; message 'camera';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setFieldOfView(newValue: CGFloat); message 'setFieldOfView:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function fieldOfView: CGFloat; message 'fieldOfView'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setProjectionDirection(newValue: SCNCameraProjectionDirection); message 'setProjectionDirection:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function projectionDirection: SCNCameraProjectionDirection; message 'projectionDirection'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setFocalLength(newValue: CGFloat); message 'setFocalLength:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function focalLength: CGFloat; message 'focalLength'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setSensorHeight(newValue: CGFloat); message 'setSensorHeight:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function sensorHeight: CGFloat; message 'sensorHeight'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setZNear(newValue: double); message 'setZNear:';
    function zNear: double; message 'zNear';
    procedure setZFar(newValue: double); message 'setZFar:';
    function zFar: double; message 'zFar';
    procedure setAutomaticallyAdjustsZRange(newValue: objcbool); message 'setAutomaticallyAdjustsZRange:'; { available in macos 10.9 }
    function automaticallyAdjustsZRange: objcbool; message 'automaticallyAdjustsZRange'; { available in macos 10.9 }
    procedure setUsesOrthographicProjection(newValue: objcbool); message 'setUsesOrthographicProjection:';
    function usesOrthographicProjection: objcbool; message 'usesOrthographicProjection';
    procedure setOrthographicScale(newValue: double); message 'setOrthographicScale:'; { available in macos 10.9 }
    function orthographicScale: double; message 'orthographicScale'; { available in macos 10.9 }
    procedure setProjectionTransform(newValue: SCNMatrix4); message 'setProjectionTransform:';
    function projectionTransform: SCNMatrix4; message 'projectionTransform';
    function projectionTransformWithViewportSize (viewportSize: CGSize): SCNMatrix4; message 'projectionTransformWithViewportSize:'; { available in macos , ios , tvos , watchos  }
    procedure setWantsDepthOfField(newValue: objcbool); message 'setWantsDepthOfField:'; { available in macos 10.9 }
    function wantsDepthOfField: objcbool; message 'wantsDepthOfField'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setFocusDistance(newValue: CGFloat); message 'setFocusDistance:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function focusDistance: CGFloat; message 'focusDistance'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setFocalBlurSampleCount(newValue: NSInteger); message 'setFocalBlurSampleCount:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function focalBlurSampleCount: NSInteger; message 'focalBlurSampleCount'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setFStop(newValue: CGFloat); message 'setFStop:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function fStop: CGFloat; message 'fStop'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setApertureBladeCount(newValue: NSInteger); message 'setApertureBladeCount:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function apertureBladeCount: NSInteger; message 'apertureBladeCount'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setMotionBlurIntensity(newValue: CGFloat); message 'setMotionBlurIntensity:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function motionBlurIntensity: CGFloat; message 'motionBlurIntensity'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setScreenSpaceAmbientOcclusionIntensity(newValue: CGFloat); message 'setScreenSpaceAmbientOcclusionIntensity:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function screenSpaceAmbientOcclusionIntensity: CGFloat; message 'screenSpaceAmbientOcclusionIntensity'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setScreenSpaceAmbientOcclusionRadius(newValue: CGFloat); message 'setScreenSpaceAmbientOcclusionRadius:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function screenSpaceAmbientOcclusionRadius: CGFloat; message 'screenSpaceAmbientOcclusionRadius'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setScreenSpaceAmbientOcclusionBias(newValue: CGFloat); message 'setScreenSpaceAmbientOcclusionBias:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function screenSpaceAmbientOcclusionBias: CGFloat; message 'screenSpaceAmbientOcclusionBias'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setScreenSpaceAmbientOcclusionDepthThreshold(newValue: CGFloat); message 'setScreenSpaceAmbientOcclusionDepthThreshold:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function screenSpaceAmbientOcclusionDepthThreshold: CGFloat; message 'screenSpaceAmbientOcclusionDepthThreshold'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setScreenSpaceAmbientOcclusionNormalThreshold(newValue: CGFloat); message 'setScreenSpaceAmbientOcclusionNormalThreshold:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function screenSpaceAmbientOcclusionNormalThreshold: CGFloat; message 'screenSpaceAmbientOcclusionNormalThreshold'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setWantsHDR(newValue: objcbool); message 'setWantsHDR:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function wantsHDR: objcbool; message 'wantsHDR'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setExposureOffset(newValue: CGFloat); message 'setExposureOffset:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function exposureOffset: CGFloat; message 'exposureOffset'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setAverageGray(newValue: CGFloat); message 'setAverageGray:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function averageGray: CGFloat; message 'averageGray'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setWhitePoint(newValue: CGFloat); message 'setWhitePoint:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function whitePoint: CGFloat; message 'whitePoint'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setWantsExposureAdaptation(newValue: objcbool); message 'setWantsExposureAdaptation:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function wantsExposureAdaptation: objcbool; message 'wantsExposureAdaptation'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setExposureAdaptationBrighteningSpeedFactor(newValue: CGFloat); message 'setExposureAdaptationBrighteningSpeedFactor:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function exposureAdaptationBrighteningSpeedFactor: CGFloat; message 'exposureAdaptationBrighteningSpeedFactor'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setExposureAdaptationDarkeningSpeedFactor(newValue: CGFloat); message 'setExposureAdaptationDarkeningSpeedFactor:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function exposureAdaptationDarkeningSpeedFactor: CGFloat; message 'exposureAdaptationDarkeningSpeedFactor'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setMinimumExposure(newValue: CGFloat); message 'setMinimumExposure:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function minimumExposure: CGFloat; message 'minimumExposure'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setMaximumExposure(newValue: CGFloat); message 'setMaximumExposure:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function maximumExposure: CGFloat; message 'maximumExposure'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setBloomThreshold(newValue: CGFloat); message 'setBloomThreshold:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function bloomThreshold: CGFloat; message 'bloomThreshold'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setBloomIterationCount(newValue: NSInteger); message 'setBloomIterationCount:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function bloomIterationCount: NSInteger; message 'bloomIterationCount'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setBloomIterationSpread(newValue: CGFloat); message 'setBloomIterationSpread:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function bloomIterationSpread: CGFloat; message 'bloomIterationSpread'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setBloomIntensity(newValue: CGFloat); message 'setBloomIntensity:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function bloomIntensity: CGFloat; message 'bloomIntensity'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setBloomBlurRadius(newValue: CGFloat); message 'setBloomBlurRadius:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function bloomBlurRadius: CGFloat; message 'bloomBlurRadius'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setVignettingPower(newValue: CGFloat); message 'setVignettingPower:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function vignettingPower: CGFloat; message 'vignettingPower'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setVignettingIntensity(newValue: CGFloat); message 'setVignettingIntensity:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function vignettingIntensity: CGFloat; message 'vignettingIntensity'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setColorFringeStrength(newValue: CGFloat); message 'setColorFringeStrength:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function colorFringeStrength: CGFloat; message 'colorFringeStrength'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setColorFringeIntensity(newValue: CGFloat); message 'setColorFringeIntensity:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function colorFringeIntensity: CGFloat; message 'colorFringeIntensity'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setSaturation(newValue: CGFloat); message 'setSaturation:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function saturation: CGFloat; message 'saturation'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setContrast(newValue: CGFloat); message 'setContrast:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function contrast: CGFloat; message 'contrast'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setGrainIntensity(newValue: CGFloat); message 'setGrainIntensity:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function grainIntensity: CGFloat; message 'grainIntensity'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setGrainScale(newValue: CGFloat); message 'setGrainScale:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function grainScale: CGFloat; message 'grainScale'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setGrainIsColored(newValue: objcbool); message 'setGrainIsColored:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function grainIsColored: objcbool; message 'grainIsColored'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setWhiteBalanceTemperature(newValue: CGFloat); message 'setWhiteBalanceTemperature:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function whiteBalanceTemperature: CGFloat; message 'whiteBalanceTemperature'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setWhiteBalanceTint(newValue: CGFloat); message 'setWhiteBalanceTint:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function whiteBalanceTint: CGFloat; message 'whiteBalanceTint'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function colorGrading: SCNMaterialProperty; message 'colorGrading'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setCategoryBitMask(newValue: NSUInteger); message 'setCategoryBitMask:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function categoryBitMask: NSUInteger; message 'categoryBitMask'; { available in macos 10.12, ios 10.0, tvos 10.0 }

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
    procedure setTechnique (newValue: SCNTechnique); message 'setTechnique:'; { available in macos  }
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
    function technique: SCNTechnique; message 'technique'; { available in macos 10.10 }
  end;
{$endif}

