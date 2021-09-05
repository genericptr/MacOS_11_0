{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNMaterialProperty.h }

{$ifdef TYPES}
type
  SCNMaterialPropertyPtr = ^SCNMaterialProperty;
{$endif}

{$ifdef TYPES}
type
  SCNFilterMode = NSInteger;
  SCNFilterModePtr = ^SCNFilterMode;

const
  SCNFilterModeNone = 0;
  SCNFilterModeNearest = 1;
  SCNFilterModeLinear = 2;

type
  SCNWrapMode = NSInteger;
  SCNWrapModePtr = ^SCNWrapMode;

const
  SCNWrapModeClamp = 1;
  SCNWrapModeRepeat = 2;
  SCNWrapModeClampToBorder = 3;
  SCNWrapModeMirror = 4;
{$endif}

{$ifdef CLASSES}

type
  SCNMaterialProperty = objcclass external (NSObject, SCNAnimatableProtocol, NSSecureCodingProtocol)
  public
    class function materialPropertyWithContents (contents: id): id; message 'materialPropertyWithContents:'; { available in macos  }
    procedure setContents(newValue: id); message 'setContents:';
    function contents: id; message 'contents';
    procedure setIntensity(newValue: CGFloat); message 'setIntensity:'; { available in macos  }
    function intensity: CGFloat; message 'intensity'; { available in macos  }
    procedure setMinificationFilter(newValue: SCNFilterMode); message 'setMinificationFilter:';
    function minificationFilter: SCNFilterMode; message 'minificationFilter';
    procedure setMagnificationFilter(newValue: SCNFilterMode); message 'setMagnificationFilter:';
    function magnificationFilter: SCNFilterMode; message 'magnificationFilter';
    procedure setMipFilter(newValue: SCNFilterMode); message 'setMipFilter:';
    function mipFilter: SCNFilterMode; message 'mipFilter';
    procedure setContentsTransform(newValue: SCNMatrix4); message 'setContentsTransform:';
    function contentsTransform: SCNMatrix4; message 'contentsTransform';
    procedure setWrapS(newValue: SCNWrapMode); message 'setWrapS:';
    function wrapS: SCNWrapMode; message 'wrapS';
    procedure setWrapT(newValue: SCNWrapMode); message 'setWrapT:';
    function wrapT: SCNWrapMode; message 'wrapT';
    procedure setMappingChannel(newValue: NSInteger); message 'setMappingChannel:';
    function mappingChannel: NSInteger; message 'mappingChannel';
    procedure setTextureComponents(newValue: SCNColorMask); message 'setTextureComponents:'; { available in macos , ios , tvos , watchos  }
    function textureComponents: SCNColorMask; message 'textureComponents'; { available in macos , ios , tvos , watchos  }
    procedure setMaxAnisotropy(newValue: CGFloat); message 'setMaxAnisotropy:'; { available in macos  }
    function maxAnisotropy: CGFloat; message 'maxAnisotropy'; { available in macos  }

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

