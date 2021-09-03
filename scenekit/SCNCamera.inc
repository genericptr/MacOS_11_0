{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNCamera.h }

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
    procedure setFieldOfView(newValue: CGFloat); message 'setFieldOfView:'; { available in macos , ios , tvos , watchos  }
    function fieldOfView: CGFloat; message 'fieldOfView'; { available in macos , ios , tvos , watchos  }
    procedure setProjectionDirection(newValue: SCNCameraProjectionDirection); message 'setProjectionDirection:'; { available in macos , ios , tvos , watchos  }
    function projectionDirection: SCNCameraProjectionDirection; message 'projectionDirection'; { available in macos , ios , tvos , watchos  }
    procedure setFocalLength(newValue: CGFloat); message 'setFocalLength:'; { available in macos , ios , tvos , watchos  }
    function focalLength: CGFloat; message 'focalLength'; { available in macos , ios , tvos , watchos  }
    procedure setSensorHeight(newValue: CGFloat); message 'setSensorHeight:'; { available in macos , ios , tvos , watchos  }
    function sensorHeight: CGFloat; message 'sensorHeight'; { available in macos , ios , tvos , watchos  }
    procedure setZNear(newValue: double); message 'setZNear:';
    function zNear: double; message 'zNear';
    procedure setZFar(newValue: double); message 'setZFar:';
    function zFar: double; message 'zFar';
    procedure setAutomaticallyAdjustsZRange(newValue: objcbool); message 'setAutomaticallyAdjustsZRange:'; { available in macos  }
    function automaticallyAdjustsZRange: objcbool; message 'automaticallyAdjustsZRange'; { available in macos  }
    procedure setUsesOrthographicProjection(newValue: objcbool); message 'setUsesOrthographicProjection:';
    function usesOrthographicProjection: objcbool; message 'usesOrthographicProjection';
    procedure setOrthographicScale(newValue: double); message 'setOrthographicScale:'; { available in macos  }
    function orthographicScale: double; message 'orthographicScale'; { available in macos  }
    procedure setProjectionTransform(newValue: SCNMatrix4); message 'setProjectionTransform:';
    function projectionTransform: SCNMatrix4; message 'projectionTransform';
    function projectionTransformWithViewportSize (viewportSize: CGSize): SCNMatrix4; message 'projectionTransformWithViewportSize:'; { available in macos , ios , tvos , watchos  }
    procedure setWantsDepthOfField(newValue: objcbool); message 'setWantsDepthOfField:'; { available in macos , ios , tvos , watchos  }
    function wantsDepthOfField: objcbool; message 'wantsDepthOfField'; { available in macos , ios , tvos , watchos  }
    procedure setFocusDistance(newValue: CGFloat); message 'setFocusDistance:'; { available in macos , ios , tvos , watchos  }
    function focusDistance: CGFloat; message 'focusDistance'; { available in macos , ios , tvos , watchos  }
    procedure setFocalBlurSampleCount(newValue: NSInteger); message 'setFocalBlurSampleCount:'; { available in macos , ios , tvos , watchos  }
    function focalBlurSampleCount: NSInteger; message 'focalBlurSampleCount'; { available in macos , ios , tvos , watchos  }
    procedure setFStop(newValue: CGFloat); message 'setFStop:'; { available in macos , ios , tvos , watchos  }
    function fStop: CGFloat; message 'fStop'; { available in macos , ios , tvos , watchos  }
    procedure setApertureBladeCount(newValue: NSInteger); message 'setApertureBladeCount:'; { available in macos , ios , tvos , watchos  }
    function apertureBladeCount: NSInteger; message 'apertureBladeCount'; { available in macos , ios , tvos , watchos  }
    procedure setMotionBlurIntensity(newValue: CGFloat); message 'setMotionBlurIntensity:'; { available in macos , ios , tvos  }
    function motionBlurIntensity: CGFloat; message 'motionBlurIntensity'; { available in macos , ios , tvos  }
    procedure setScreenSpaceAmbientOcclusionIntensity(newValue: CGFloat); message 'setScreenSpaceAmbientOcclusionIntensity:'; { available in macos , ios , tvos , watchos  }
    function screenSpaceAmbientOcclusionIntensity: CGFloat; message 'screenSpaceAmbientOcclusionIntensity'; { available in macos , ios , tvos , watchos  }
    procedure setScreenSpaceAmbientOcclusionRadius(newValue: CGFloat); message 'setScreenSpaceAmbientOcclusionRadius:'; { available in macos , ios , tvos , watchos  }
    function screenSpaceAmbientOcclusionRadius: CGFloat; message 'screenSpaceAmbientOcclusionRadius'; { available in macos , ios , tvos , watchos  }
    procedure setScreenSpaceAmbientOcclusionBias(newValue: CGFloat); message 'setScreenSpaceAmbientOcclusionBias:'; { available in macos , ios , tvos , watchos  }
    function screenSpaceAmbientOcclusionBias: CGFloat; message 'screenSpaceAmbientOcclusionBias'; { available in macos , ios , tvos , watchos  }
    procedure setScreenSpaceAmbientOcclusionDepthThreshold(newValue: CGFloat); message 'setScreenSpaceAmbientOcclusionDepthThreshold:'; { available in macos , ios , tvos , watchos  }
    function screenSpaceAmbientOcclusionDepthThreshold: CGFloat; message 'screenSpaceAmbientOcclusionDepthThreshold'; { available in macos , ios , tvos , watchos  }
    procedure setScreenSpaceAmbientOcclusionNormalThreshold(newValue: CGFloat); message 'setScreenSpaceAmbientOcclusionNormalThreshold:'; { available in macos , ios , tvos , watchos  }
    function screenSpaceAmbientOcclusionNormalThreshold: CGFloat; message 'screenSpaceAmbientOcclusionNormalThreshold'; { available in macos , ios , tvos , watchos  }
    procedure setWantsHDR(newValue: objcbool); message 'setWantsHDR:'; { available in macos , ios , tvos  }
    function wantsHDR: objcbool; message 'wantsHDR'; { available in macos , ios , tvos  }
    procedure setExposureOffset(newValue: CGFloat); message 'setExposureOffset:'; { available in macos , ios , tvos  }
    function exposureOffset: CGFloat; message 'exposureOffset'; { available in macos , ios , tvos  }
    procedure setAverageGray(newValue: CGFloat); message 'setAverageGray:'; { available in macos , ios , tvos  }
    function averageGray: CGFloat; message 'averageGray'; { available in macos , ios , tvos  }
    procedure setWhitePoint(newValue: CGFloat); message 'setWhitePoint:'; { available in macos , ios , tvos  }
    function whitePoint: CGFloat; message 'whitePoint'; { available in macos , ios , tvos  }
    procedure setWantsExposureAdaptation(newValue: objcbool); message 'setWantsExposureAdaptation:'; { available in macos , ios , tvos  }
    function wantsExposureAdaptation: objcbool; message 'wantsExposureAdaptation'; { available in macos , ios , tvos  }
    procedure setExposureAdaptationBrighteningSpeedFactor(newValue: CGFloat); message 'setExposureAdaptationBrighteningSpeedFactor:'; { available in macos , ios , tvos  }
    function exposureAdaptationBrighteningSpeedFactor: CGFloat; message 'exposureAdaptationBrighteningSpeedFactor'; { available in macos , ios , tvos  }
    procedure setExposureAdaptationDarkeningSpeedFactor(newValue: CGFloat); message 'setExposureAdaptationDarkeningSpeedFactor:'; { available in macos , ios , tvos  }
    function exposureAdaptationDarkeningSpeedFactor: CGFloat; message 'exposureAdaptationDarkeningSpeedFactor'; { available in macos , ios , tvos  }
    procedure setMinimumExposure(newValue: CGFloat); message 'setMinimumExposure:'; { available in macos , ios , tvos  }
    function minimumExposure: CGFloat; message 'minimumExposure'; { available in macos , ios , tvos  }
    procedure setMaximumExposure(newValue: CGFloat); message 'setMaximumExposure:'; { available in macos , ios , tvos  }
    function maximumExposure: CGFloat; message 'maximumExposure'; { available in macos , ios , tvos  }
    procedure setBloomThreshold(newValue: CGFloat); message 'setBloomThreshold:'; { available in macos , ios , tvos  }
    function bloomThreshold: CGFloat; message 'bloomThreshold'; { available in macos , ios , tvos  }
    procedure setBloomIterationCount(newValue: NSInteger); message 'setBloomIterationCount:'; { available in macos , ios , tvos , watchos  }
    function bloomIterationCount: NSInteger; message 'bloomIterationCount'; { available in macos , ios , tvos , watchos  }
    procedure setBloomIterationSpread(newValue: CGFloat); message 'setBloomIterationSpread:'; { available in macos , ios , tvos , watchos  }
    function bloomIterationSpread: CGFloat; message 'bloomIterationSpread'; { available in macos , ios , tvos , watchos  }
    procedure setBloomIntensity(newValue: CGFloat); message 'setBloomIntensity:'; { available in macos , ios , tvos  }
    function bloomIntensity: CGFloat; message 'bloomIntensity'; { available in macos , ios , tvos  }
    procedure setBloomBlurRadius(newValue: CGFloat); message 'setBloomBlurRadius:'; { available in macos , ios , tvos  }
    function bloomBlurRadius: CGFloat; message 'bloomBlurRadius'; { available in macos , ios , tvos  }
    procedure setVignettingPower(newValue: CGFloat); message 'setVignettingPower:'; { available in macos , ios , tvos  }
    function vignettingPower: CGFloat; message 'vignettingPower'; { available in macos , ios , tvos  }
    procedure setVignettingIntensity(newValue: CGFloat); message 'setVignettingIntensity:'; { available in macos , ios , tvos  }
    function vignettingIntensity: CGFloat; message 'vignettingIntensity'; { available in macos , ios , tvos  }
    procedure setColorFringeStrength(newValue: CGFloat); message 'setColorFringeStrength:'; { available in macos , ios , tvos  }
    function colorFringeStrength: CGFloat; message 'colorFringeStrength'; { available in macos , ios , tvos  }
    procedure setColorFringeIntensity(newValue: CGFloat); message 'setColorFringeIntensity:'; { available in macos , ios , tvos  }
    function colorFringeIntensity: CGFloat; message 'colorFringeIntensity'; { available in macos , ios , tvos  }
    procedure setSaturation(newValue: CGFloat); message 'setSaturation:'; { available in macos , ios , tvos  }
    function saturation: CGFloat; message 'saturation'; { available in macos , ios , tvos  }
    procedure setContrast(newValue: CGFloat); message 'setContrast:'; { available in macos , ios , tvos  }
    function contrast: CGFloat; message 'contrast'; { available in macos , ios , tvos  }
    procedure setGrainIntensity(newValue: CGFloat); message 'setGrainIntensity:'; { available in macos , ios , tvos , watchos  }
    function grainIntensity: CGFloat; message 'grainIntensity'; { available in macos , ios , tvos , watchos  }
    procedure setGrainScale(newValue: CGFloat); message 'setGrainScale:'; { available in macos , ios , tvos , watchos  }
    function grainScale: CGFloat; message 'grainScale'; { available in macos , ios , tvos , watchos  }
    procedure setGrainIsColored(newValue: objcbool); message 'setGrainIsColored:'; { available in macos , ios , tvos , watchos  }
    function grainIsColored: objcbool; message 'grainIsColored'; { available in macos , ios , tvos , watchos  }
    procedure setWhiteBalanceTemperature(newValue: CGFloat); message 'setWhiteBalanceTemperature:'; { available in macos , ios , tvos , watchos  }
    function whiteBalanceTemperature: CGFloat; message 'whiteBalanceTemperature'; { available in macos , ios , tvos , watchos  }
    procedure setWhiteBalanceTint(newValue: CGFloat); message 'setWhiteBalanceTint:'; { available in macos , ios , tvos , watchos  }
    function whiteBalanceTint: CGFloat; message 'whiteBalanceTint'; { available in macos , ios , tvos , watchos  }
    function colorGrading: SCNMaterialProperty; message 'colorGrading'; { available in macos , ios , tvos  }
    procedure setCategoryBitMask(newValue: NSUInteger); message 'setCategoryBitMask:'; { available in macos  }
    function categoryBitMask: NSUInteger; message 'categoryBitMask'; { available in macos  }

    { Adopted protocols }
    procedure addAnimation_forKey (animation: id; key: NSString); message 'addAnimation:forKey:';
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
    function technique: SCNTechnique; message 'technique'; { available in macos  }
  end;
{$endif}

