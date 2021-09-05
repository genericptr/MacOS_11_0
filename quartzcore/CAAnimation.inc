{ Parsed from QuartzCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/QuartzCore.framework/Headers/CAAnimation.h }

{$ifdef TYPES}
type
  CAAnimationPtr = ^CAAnimation;
  CAPropertyAnimationPtr = ^CAPropertyAnimation;
  CABasicAnimationPtr = ^CABasicAnimation;
  CAKeyframeAnimationPtr = ^CAKeyframeAnimation;
  CASpringAnimationPtr = ^CASpringAnimation;
  CATransitionPtr = ^CATransition;
  CAAnimationGroupPtr = ^CAAnimationGroup;
  CAAnimationDelegateProtocolPtr = ^CAAnimationDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  CAAnimationCalculationMode = NSString;
  CAAnimationCalculationModePtr = ^CAAnimationCalculationMode;
  CAAnimationRotationMode = NSString;
  CAAnimationRotationModePtr = ^CAAnimationRotationMode;
  CATransitionType = NSString;
  CATransitionTypePtr = ^CATransitionType;
  CATransitionSubtype = NSString;
  CATransitionSubtypePtr = ^CATransitionSubtype;
{$endif}

{$ifdef CLASSES}

type
  CAAnimation = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol, CAMediaTimingProtocol, CAActionProtocol)
  private
    _attr: pointer;
    _flags: cuint32;
  public
    class function animation: id; message 'animation';
    class function defaultValueForKey (key: NSString): id; message 'defaultValueForKey:';
    function shouldArchiveValueForKey (key: NSString): objcbool; message 'shouldArchiveValueForKey:';
    procedure setTimingFunction(newValue: CAMediaTimingFunction); message 'setTimingFunction:';
    function timingFunction: CAMediaTimingFunction; message 'timingFunction';
    procedure setDelegate(newValue: CAAnimationDelegateProtocol); message 'setDelegate:';
    function delegate: CAAnimationDelegateProtocol; message 'delegate';
    procedure setRemovedOnCompletion(newValue: objcbool); message 'setRemovedOnCompletion:';
    function isRemovedOnCompletion: objcbool; message 'isRemovedOnCompletion';

    { Adopted protocols }
    function autoreverses: objcbool; message 'autoreverses';
    function beginTime: CFTimeInterval; message 'beginTime';
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function duration: CFTimeInterval; message 'duration';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function fillMode: CAMediaTimingFillMode; message 'fillMode';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function repeatCount: single; message 'repeatCount';
    function repeatDuration: CFTimeInterval; message 'repeatDuration';
    procedure runActionForKey_object_arguments (event: NSString; anObject: id; dict: NSDictionary); message 'runActionForKey:object:arguments:';
    procedure setAutoreverses (newValue: objcbool); message 'setAutoreverses:';
    procedure setBeginTime (newValue: CFTimeInterval); message 'setBeginTime:';
    procedure setDuration (newValue: CFTimeInterval); message 'setDuration:';
    procedure setFillMode (newValue: CAMediaTimingFillMode); message 'setFillMode:';
    procedure setRepeatCount (newValue: single); message 'setRepeatCount:';
    procedure setRepeatDuration (newValue: CFTimeInterval); message 'setRepeatDuration:';
    procedure setSpeed (newValue: single); message 'setSpeed:';
    procedure setTimeOffset (newValue: CFTimeInterval); message 'setTimeOffset:';
    function speed: single; message 'speed';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
    function timeOffset: CFTimeInterval; message 'timeOffset';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CAAnimationDelegateProtocol = objcprotocol external name 'CAAnimationDelegate' (NSObjectProtocol)
  optional
    procedure animationDidStart (anim: CAAnimation); message 'animationDidStart:';
    procedure animationDidStop_finished (anim: CAAnimation; flag: objcbool); message 'animationDidStop:finished:';
  end;
{$endif}

{$ifdef CLASSES}

type
  CAPropertyAnimation = objcclass external (CAAnimation)
  public
    class function animationWithKeyPath (path: NSString): id; message 'animationWithKeyPath:';
    procedure setKeyPath(newValue: NSString); message 'setKeyPath:';
    function keyPath: NSString; message 'keyPath';
    procedure setAdditive(newValue: objcbool); message 'setAdditive:';
    function isAdditive: objcbool; message 'isAdditive';
    procedure setCumulative(newValue: objcbool); message 'setCumulative:';
    function isCumulative: objcbool; message 'isCumulative';
    procedure setValueFunction(newValue: CAValueFunction); message 'setValueFunction:';
    function valueFunction: CAValueFunction; message 'valueFunction';
  end;

type
  CABasicAnimation = objcclass external (CAPropertyAnimation)
  public
    procedure setFromValue(newValue: id); message 'setFromValue:';
    function fromValue: id; message 'fromValue';
    procedure setToValue(newValue: id); message 'setToValue:';
    function toValue: id; message 'toValue';
    procedure setByValue(newValue: id); message 'setByValue:';
    function byValue: id; message 'byValue';
  end;

type
  CAKeyframeAnimation = objcclass external (CAPropertyAnimation)
  public
    procedure setValues(newValue: NSArray); message 'setValues:';
    function values: NSArray; message 'values';
    procedure setPath(newValue: CGPathRef); message 'setPath:';
    function path: CGPathRef; message 'path';
    procedure setKeyTimes(newValue: NSArray); message 'setKeyTimes:';
    function keyTimes: NSArray; message 'keyTimes';
    procedure setTimingFunctions(newValue: NSArray); message 'setTimingFunctions:';
    function timingFunctions: NSArray; message 'timingFunctions';
    procedure setCalculationMode(newValue: CAAnimationCalculationMode); message 'setCalculationMode:';
    function calculationMode: CAAnimationCalculationMode; message 'calculationMode';
    procedure setTensionValues(newValue: NSArray); message 'setTensionValues:';
    function tensionValues: NSArray; message 'tensionValues';
    procedure setContinuityValues(newValue: NSArray); message 'setContinuityValues:';
    function continuityValues: NSArray; message 'continuityValues';
    procedure setBiasValues(newValue: NSArray); message 'setBiasValues:';
    function biasValues: NSArray; message 'biasValues';
    procedure setRotationMode(newValue: CAAnimationRotationMode); message 'setRotationMode:';
    function rotationMode: CAAnimationRotationMode; message 'rotationMode';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCAAnimationLinear: CAAnimationCalculationMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAAnimationDiscrete: CAAnimationCalculationMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAAnimationPaced: CAAnimationCalculationMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAAnimationCubic: CAAnimationCalculationMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAAnimationCubicPaced: CAAnimationCalculationMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAAnimationRotateAuto: CAAnimationRotationMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAAnimationRotateAutoReverse: CAAnimationRotationMode { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CASpringAnimation = objcclass external (CABasicAnimation)
  public
    procedure setMass(newValue: CGFloat); message 'setMass:';
    function mass: CGFloat; message 'mass';
    procedure setStiffness(newValue: CGFloat); message 'setStiffness:';
    function stiffness: CGFloat; message 'stiffness';
    procedure setDamping(newValue: CGFloat); message 'setDamping:';
    function damping: CGFloat; message 'damping';
    procedure setInitialVelocity(newValue: CGFloat); message 'setInitialVelocity:';
    function initialVelocity: CGFloat; message 'initialVelocity';
    function settlingDuration: CFTimeInterval; message 'settlingDuration';
  end;

type
  CATransition = objcclass external (CAAnimation)
  public
    procedure setType(newValue: CATransitionType); message 'setType:';
    function type_: CATransitionType; message 'type';
    procedure setSubtype(newValue: CATransitionSubtype); message 'setSubtype:';
    function subtype: CATransitionSubtype; message 'subtype';
    procedure setStartProgress(newValue: single); message 'setStartProgress:';
    function startProgress: single; message 'startProgress';
    procedure setEndProgress(newValue: single); message 'setEndProgress:';
    function endProgress: single; message 'endProgress';
    procedure setFilter(newValue: id); message 'setFilter:';
    function filter: id; message 'filter';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCATransitionFade: CATransitionType { available in macos , ios , watchos , tvos  }; cvar; external;
  kCATransitionMoveIn: CATransitionType { available in macos , ios , watchos , tvos  }; cvar; external;
  kCATransitionPush: CATransitionType { available in macos , ios , watchos , tvos  }; cvar; external;
  kCATransitionReveal: CATransitionType { available in macos , ios , watchos , tvos  }; cvar; external;
  kCATransitionFromRight: CATransitionSubtype { available in macos , ios , watchos , tvos  }; cvar; external;
  kCATransitionFromLeft: CATransitionSubtype { available in macos , ios , watchos , tvos  }; cvar; external;
  kCATransitionFromTop: CATransitionSubtype { available in macos , ios , watchos , tvos  }; cvar; external;
  kCATransitionFromBottom: CATransitionSubtype { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CAAnimationGroup = objcclass external (CAAnimation)
  public
    procedure setAnimations(newValue: NSArray); message 'setAnimations:';
    function animations: NSArray; message 'animations';
  end;
{$endif}

