{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKEntity.h }

{ Types from GKEntity }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  GKEntityPtr = ^GKEntity;
{$endif}

{$ifdef CLASSES}

type
  GKEntity = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function entity: id; message 'entity';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure updateWithDeltaTime (seconds: NSTimeInterval); message 'updateWithDeltaTime:';
    function components: NSArray; message 'components';
    procedure addComponent (component: GKComponent); message 'addComponent:';
    {$if ((defined(SWIFT_SDK_OVERLAY_GAMEPLAYKIT_EPOCH)) and (SWIFT_SDK_OVERLAY_GAMEPLAYKIT_EPOCH >= 1))}
    procedure removeComponentForClass (componentClass: pobjc_class); message 'removeComponentForClass:';
    {$else}
    procedure removeComponentForClass (componentClass: pobjc_class); message 'removeComponentForClass:';
    {$endif}
    {$if ((defined(SWIFT_SDK_OVERLAY_GAMEPLAYKIT_EPOCH)) and (SWIFT_SDK_OVERLAY_GAMEPLAYKIT_EPOCH >= 1))}
    function componentForClass (componentClass: pobjc_class): GKComponent; message 'componentForClass:';
    {$else}
    function componentForClass (componentClass: pobjc_class): GKComponent; message 'componentForClass:';
    {$endif}

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

