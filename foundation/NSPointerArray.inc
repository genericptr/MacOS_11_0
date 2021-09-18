{ Parsed from Foundation.framework NSPointerArray.h }

{ Types from NSPointerArrayConveniences }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSPointerArrayPtr = ^NSPointerArray;
{$endif}

{$ifdef CLASSES}

type
  NSPointerArray = objcclass external (NSObject, NSFastEnumerationProtocol, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function initWithOptions (options: NSPointerFunctionsOptions): id; message 'initWithOptions:'; { NS_DESIGNATED_INITIALIZER }
    function initWithPointerFunctions (functions: NSPointerFunctions): id; message 'initWithPointerFunctions:'; { NS_DESIGNATED_INITIALIZER }
    class function pointerArrayWithOptions (options: NSPointerFunctionsOptions): NSPointerArray; message 'pointerArrayWithOptions:';
    class function pointerArrayWithPointerFunctions (functions: NSPointerFunctions): NSPointerArray; message 'pointerArrayWithPointerFunctions:';
    function pointerFunctions: NSPointerFunctions; message 'pointerFunctions';
    function pointerAtIndex (index: NSUInteger): pointer; message 'pointerAtIndex:';
    procedure addPointer (pointer_: pointer); message 'addPointer:';
    procedure removePointerAtIndex (index: NSUInteger); message 'removePointerAtIndex:';
    procedure insertPointer_atIndex (item: pointer; index: NSUInteger); message 'insertPointer:atIndex:';
    procedure replacePointerAtIndex_withPointer (index: NSUInteger; item: pointer); message 'replacePointerAtIndex:withPointer:';
    procedure compact; message 'compact';
    procedure setCount(newValue: NSUInteger); message 'setCount:';
    function count: NSUInteger; message 'count';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSPointerArrayConveniences = objccategory external (NSPointerArray)
    {$if defined(TARGET_OS_OSX)}
    class function pointerArrayWithStrongObjects: id; message 'pointerArrayWithStrongObjects'; { unavailable in ios, watchos, tvos }
    class function pointerArrayWithWeakObjects: id; message 'pointerArrayWithWeakObjects'; { unavailable in ios, watchos, tvos }
    {$endif}
    class function strongObjectsPointerArray: NSPointerArray; message 'strongObjectsPointerArray'; { available in macos , ios , watchos , tvos  }
    class function weakObjectsPointerArray: NSPointerArray; message 'weakObjectsPointerArray'; { available in macos , ios , watchos , tvos  }
    function allObjects: NSArray; message 'allObjects';
  end;
{$endif}

