{ Parsed from SceneKit.framework SCNTechnique.h }

{ Types from SCNTechnique }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SCNTechniquePtr = ^SCNTechnique;
  SCNTechniqueSupportProtocolPtr = ^SCNTechniqueSupportProtocol;
{$endif}

{$ifdef CLASSES}

type
  SCNTechnique = objcclass external (NSObject, SCNAnimatableProtocol, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function techniqueWithDictionary (dictionary: NSDictionary): SCNTechnique; message 'techniqueWithDictionary:';
    class function techniqueBySequencingTechniques (techniques: NSArray): SCNTechnique; message 'techniqueBySequencingTechniques:';
    procedure handleBindingOfSymbol_usingBlock (symbol: NSString; block: SCNBindingBlock); message 'handleBindingOfSymbol:usingBlock:';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation';
    function objectForKeyedSubscript (key: id): id; message 'objectForKeyedSubscript:'; { available in macos 10.11, ios 9.0 }
    procedure setObject_forKeyedSubscript (obj: id; key: NSCopyingProtocol); message 'setObject:forKeyedSubscript:'; { available in macos 10.11, ios 9.0 }
    {$if defined(SCN_ENABLE_METAL)}
    procedure setLibrary(newValue: MTLLibraryProtocol); message 'setLibrary:'; { unavailable in watchos } { available in macos 10.14, ios 12.0, tvos 12.0 }
    function library: MTLLibraryProtocol; message 'library'; { unavailable in watchos } { available in macos 10.14, ios 12.0, tvos 12.0 }
    {$endif}

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

{$ifdef PROTOCOLS}

type
  SCNTechniqueSupportProtocol = objcprotocol external name 'SCNTechniqueSupport' (NSObjectProtocol)
    procedure setTechnique(newValue: SCNTechnique); message 'setTechnique:'; { available in macos 10.10 }
    function technique: SCNTechnique; message 'technique'; { available in macos 10.10 }
  end;
{$endif}

