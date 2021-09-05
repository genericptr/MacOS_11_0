{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNMorpher.h }

{$ifdef TYPES}
type
  SCNMorpherPtr = ^SCNMorpher;
{$endif}

{$ifdef TYPES}
type
  SCNMorpherCalculationMode = NSInteger;
  SCNMorpherCalculationModePtr = ^SCNMorpherCalculationMode;

const
  SCNMorpherCalculationModeNormalized = 0;
  SCNMorpherCalculationModeAdditive = 1;
{$endif}

{$ifdef CLASSES}

type
  SCNMorpher = objcclass external (NSObject, SCNAnimatableProtocol, NSSecureCodingProtocol)
  public
    procedure setTargets(newValue: NSArray); message 'setTargets:';
    function targets: NSArray; message 'targets';
    procedure setWeights(newValue: NSArray); message 'setWeights:'; { available in macos , ios , tvos , watchos  }
    function weights: NSArray; message 'weights'; { available in macos , ios , tvos , watchos  }
    procedure setWeight_forTargetAtIndex (weight: CGFloat; targetIndex: NSUInteger); message 'setWeight:forTargetAtIndex:';
    function weightForTargetAtIndex (targetIndex: NSUInteger): CGFloat; message 'weightForTargetAtIndex:';
    procedure setWeight_forTargetNamed (weight: CGFloat; targetName: NSString); message 'setWeight:forTargetNamed:'; { available in macos , ios , tvos , watchos  }
    function weightForTargetNamed (targetName: NSString): CGFloat; message 'weightForTargetNamed:'; { available in macos , ios , tvos , watchos  }
    procedure setCalculationMode(newValue: SCNMorpherCalculationMode); message 'setCalculationMode:';
    function calculationMode: SCNMorpherCalculationMode; message 'calculationMode';
    procedure setUnifiesNormals(newValue: objcbool); message 'setUnifiesNormals:'; { available in macos , ios , tvos , watchos  }
    function unifiesNormals: objcbool; message 'unifiesNormals'; { available in macos , ios , tvos , watchos  }

    { Adopted protocols }
    procedure addAnimation_forKey (animation: SCNAnimationProtocol; key: NSString); message 'addAnimation:forKey:';
    procedure addAnimationPlayer_forKey (player: SCNAnimationPlayer; key: NSString); message 'addAnimationPlayer:forKey:'; { available in macos , ios , tvos , watchos  }
    function animationForKey (key: NSString): CAAnimationPtr; message 'animationForKey:'; deprecated 'replace with -animationPlayerForKey:';
    function animationKeys: NSArray; message 'animationKeys';
    function animationPlayerForKey (key: NSString): SCNAnimationPlayer; message 'animationPlayerForKey:'; { available in macos , ios , tvos , watchos  }
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

