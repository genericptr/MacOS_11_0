{ Parsed from GameplayKit.framework GKComponent.h }

{$ifdef TYPES}
type
  GKComponentPtr = ^GKComponent;
  GKComponentSystemPtr = ^GKComponentSystem;
{$endif}

{$ifdef CLASSES}

type
  GKComponent = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function entity: GKEntity; message 'entity';
    procedure updateWithDeltaTime (seconds: NSTimeInterval); message 'updateWithDeltaTime:';
    procedure didAddToEntity; message 'didAddToEntity';
    procedure willRemoveFromEntity; message 'willRemoveFromEntity';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  GKComponentSystem = objcclass external (NSObject, NSFastEnumerationProtocol)
  public
    function componentClass: pobjc_class; message 'componentClass';
    function components: NSArray; message 'components';
    function objectAtIndexedSubscript (idx: NSUInteger): GKComponent; message 'objectAtIndexedSubscript:';
    function initWithComponentClass (cls: pobjc_class): id; message 'initWithComponentClass:';
    procedure addComponent (component: GKComponent); message 'addComponent:';
    procedure addComponentWithEntity (entity: GKEntity); message 'addComponentWithEntity:';
    procedure removeComponentWithEntity (entity: GKEntity); message 'removeComponentWithEntity:';
    procedure removeComponent (component: GKComponent); message 'removeComponent:';
    procedure updateWithDeltaTime (seconds: NSTimeInterval); message 'updateWithDeltaTime:';
    function classForGenericArgumentAtIndex (index: NSUInteger): pobjc_class; message 'classForGenericArgumentAtIndex:';

    { Adopted protocols }
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
  end;
{$endif}

