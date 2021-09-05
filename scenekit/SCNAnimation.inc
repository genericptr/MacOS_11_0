{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNAnimation.h }

{$ifdef TYPES}
type
  SCNTimingFunctionPtr = ^SCNTimingFunction;
  SCNAnimationPtr = ^SCNAnimation;
  SCNAnimationPlayerPtr = ^SCNAnimationPlayer;
  SCNAnimationEventPtr = ^SCNAnimationEvent;
  SCNAnimationProtocolPtr = ^SCNAnimationProtocol;
  SCNAnimatableProtocolPtr = ^SCNAnimatableProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNAnimationProtocol = objcprotocol external name 'SCNAnimation' (NSObjectProtocol)
  end;
{$endif}

{$ifdef CLASSES}

type
  SCNTimingFunction = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function functionWithTimingMode (timingMode: SCNActionTimingMode): SCNTimingFunction; message 'functionWithTimingMode:';
    class function functionWithCAMediaTimingFunction (caTimingFunction: CAMediaTimingFunctionPtr): SCNTimingFunction; message 'functionWithCAMediaTimingFunction:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNAnimatableProtocol = objcprotocol external name 'SCNAnimatable' (NSObjectProtocol)
    procedure addAnimation_forKey (animation: SCNAnimationProtocol; key: NSString); message 'addAnimation:forKey:';
    procedure addAnimationPlayer_forKey (player: SCNAnimationPlayer; key: NSString); message 'addAnimationPlayer:forKey:'; { available in macos , ios , tvos , watchos  }
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    function animationKeys: NSArray; message 'animationKeys';
    function animationPlayerForKey (key: NSString): SCNAnimationPlayer; message 'animationPlayerForKey:'; { available in macos , ios , tvos , watchos  }
    procedure removeAnimationForKey_blendOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:blendOutDuration:'; { available in macos , ios , tvos , watchos  }
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; deprecated 'replace with -removeAnimationForKey:blendOutDuration:';
    function animationForKey (key: NSString): CAAnimationPtr; message 'animationForKey:'; deprecated 'replace with -animationPlayerForKey:';
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    procedure setSpeed_forAnimationKey (speed: CGFloat; key: NSString); message 'setSpeed:forAnimationKey:'; deprecated 'Use -[SCNAnimationPlayer setSpeed:] instead';
    function isAnimationForKeyPaused (key: NSString): objcbool; message 'isAnimationForKeyPaused:'; deprecated 'Use -[SCNAnimationPlayer paused] instead';
  end;
{$endif}

{$ifdef CLASSES}
type
  SCNAnimationDidStartBlock = reference to procedure (animation: SCNAnimation; receiver: id); cblock; cdecl;
  SCNAnimationDidStopBlock = reference to procedure (animation: SCNAnimation; receiver: id; completed: objcbool); cblock; cdecl;

  SCNAnimation = objcclass external (NSObject, SCNAnimationProtocol, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function animationWithContentsOfURL (animationUrl: NSURL): SCNAnimation; message 'animationWithContentsOfURL:';
    class function animationNamed (animationName: NSString): SCNAnimation; message 'animationNamed:';
    class function animationWithCAAnimation (caAnimation: CAAnimationPtr): SCNAnimation; message 'animationWithCAAnimation:';
    procedure setDuration(newValue: NSTimeInterval); message 'setDuration:';
    function duration: NSTimeInterval; message 'duration';
    procedure setKeyPath(newValue: NSString); message 'setKeyPath:';
    function keyPath: NSString; message 'keyPath';
    procedure setTimingFunction(newValue: SCNTimingFunction); message 'setTimingFunction:';
    function timingFunction: SCNTimingFunction; message 'timingFunction';
    procedure setBlendInDuration(newValue: NSTimeInterval); message 'setBlendInDuration:';
    function blendInDuration: NSTimeInterval; message 'blendInDuration';
    procedure setBlendOutDuration(newValue: NSTimeInterval); message 'setBlendOutDuration:';
    function blendOutDuration: NSTimeInterval; message 'blendOutDuration';
    procedure setRemovedOnCompletion(newValue: objcbool); message 'setRemovedOnCompletion:';
    function isRemovedOnCompletion: objcbool; message 'isRemovedOnCompletion';
    procedure setAppliedOnCompletion(newValue: objcbool); message 'setAppliedOnCompletion:';
    function isAppliedOnCompletion: objcbool; message 'isAppliedOnCompletion';
    procedure setRepeatCount(newValue: CGFloat); message 'setRepeatCount:';
    function repeatCount: CGFloat; message 'repeatCount';
    procedure setAutoreverses(newValue: objcbool); message 'setAutoreverses:';
    function autoreverses: objcbool; message 'autoreverses';
    procedure setStartDelay(newValue: NSTimeInterval); message 'setStartDelay:';
    function startDelay: NSTimeInterval; message 'startDelay';
    procedure setTimeOffset(newValue: NSTimeInterval); message 'setTimeOffset:';
    function timeOffset: NSTimeInterval; message 'timeOffset';
    procedure setFillsForward(newValue: objcbool); message 'setFillsForward:';
    function fillsForward: objcbool; message 'fillsForward';
    procedure setFillsBackward(newValue: objcbool); message 'setFillsBackward:';
    function fillsBackward: objcbool; message 'fillsBackward';
    procedure setUsesSceneTimeBase(newValue: objcbool); message 'setUsesSceneTimeBase:';
    function usesSceneTimeBase: objcbool; message 'usesSceneTimeBase';
    procedure setAnimationDidStart(newValue: SCNAnimationDidStartBlock); message 'setAnimationDidStart:';
    function animationDidStart: SCNAnimationDidStartBlock; message 'animationDidStart';
    procedure setAnimationDidStop(newValue: SCNAnimationDidStopBlock); message 'setAnimationDidStop:';
    function animationDidStop: SCNAnimationDidStopBlock; message 'animationDidStop';
    procedure setAnimationEvents(newValue: NSArray); message 'setAnimationEvents:';
    function animationEvents: NSArray; message 'animationEvents';
    procedure setAdditive(newValue: objcbool); message 'setAdditive:';
    function isAdditive: objcbool; message 'isAdditive';
    procedure setCumulative(newValue: objcbool); message 'setCumulative:';
    function isCumulative: objcbool; message 'isCumulative';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  SCNAnimationPlayer = objcclass external (NSObject, SCNAnimatableProtocol, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function animationPlayerWithAnimation (animation: SCNAnimation): SCNAnimationPlayer; message 'animationPlayerWithAnimation:';
    function animation: SCNAnimation; message 'animation';
    procedure setSpeed(newValue: CGFloat); message 'setSpeed:';
    function speed: CGFloat; message 'speed';
    procedure setBlendFactor(newValue: CGFloat); message 'setBlendFactor:';
    function blendFactor: CGFloat; message 'blendFactor';
    procedure setPaused(newValue: objcbool); message 'setPaused:';
    function paused: objcbool; message 'paused';
    procedure play; message 'play';
    procedure stop; message 'stop';
    procedure stopWithBlendOutDuration (duration: NSTimeInterval); message 'stopWithBlendOutDuration:';

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

{$ifdef TYPES}
type
  SCNAnimationEventBlock = reference to procedure (animation: id; animatedObject: id; playingBackward: objcbool); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  SCNAnimationEvent = objcclass external (NSObject)
  public
    class function animationEventWithKeyTime_block (time: CGFloat; eventBlock: SCNAnimationEventBlock): id; message 'animationEventWithKeyTime:block:';
  end;
{$endif}

