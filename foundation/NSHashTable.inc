{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSHashTable.h }

{$ifdef TYPES}
type
  NSHashTablePtr = ^NSHashTable;
{$endif}

{$if  not (defined(__FOUNDATION_NSHASHTABLE__))}
{$ifdef TYPES}
const
  __FOUNDATION_NSHASHTABLE__ = 1;
  NSHashTableStrongMemory = NSPointerFunctionsStrongMemory { available in macos , ios , watchos , tvos  };
  NSHashTableZeroingWeakMemory = NSPointerFunctionsZeroingWeakMemory { unavailable in ios, watchos, tvos };
  NSHashTableCopyIn = NSPointerFunctionsCopyIn { available in macos , ios , watchos , tvos  };
  NSHashTableObjectPointerPersonality = NSPointerFunctionsObjectPointerPersonality { available in macos , ios , watchos , tvos  };
  NSHashTableWeakMemory = NSPointerFunctionsWeakMemory { available in macos , ios , watchos , tvos  };

type
  NSHashTableOptions = NSUInteger;
  NSHashTableOptionsPtr = ^NSHashTableOptions;
{$endif}

{$ifdef CLASSES}

type
  NSHashTable = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol, NSFastEnumerationProtocol)
  public
    function initWithOptions_capacity (options: NSPointerFunctionsOptions; initialCapacity: NSUInteger): id; message 'initWithOptions:capacity:'; { NS_DESIGNATED_INITIALIZER }
    function initWithPointerFunctions_capacity (functions: NSPointerFunctions; initialCapacity: NSUInteger): id; message 'initWithPointerFunctions:capacity:'; { NS_DESIGNATED_INITIALIZER }
    class function hashTableWithOptions (options: NSPointerFunctionsOptions): NSHashTable; message 'hashTableWithOptions:';
    class function hashTableWithWeakObjects: id; message 'hashTableWithWeakObjects'; { unavailable in ios, watchos, tvos }
    class function weakObjectsHashTable: NSHashTable; message 'weakObjectsHashTable'; { available in macos , ios , watchos , tvos  }
    function pointerFunctions: NSPointerFunctions; message 'pointerFunctions';
    function count: NSUInteger; message 'count';
    function member (object_: id): id; message 'member:';
    function objectEnumerator: NSEnumerator; message 'objectEnumerator';
    procedure addObject (object_: id); message 'addObject:';
    procedure removeObject (object_: id); message 'removeObject:';
    procedure removeAllObjects; message 'removeAllObjects';
    function allObjects: NSArray; message 'allObjects';
    function anyObject: id; message 'anyObject';
    function containsObject (anObject: id): objcbool; message 'containsObject:';
    function intersectsHashTable (other: NSHashTable): objcbool; message 'intersectsHashTable:';
    function isEqualToHashTable (other: NSHashTable): objcbool; message 'isEqualToHashTable:';
    function isSubsetOfHashTable (other: NSHashTable): objcbool; message 'isSubsetOfHashTable:';
    procedure intersectHashTable (other: NSHashTable); message 'intersectHashTable:';
    procedure unionHashTable (other: NSHashTable); message 'unionHashTable:';
    procedure minusHashTable (other: NSHashTable); message 'minusHashTable:';
    function setRepresentation: NSSet; message 'setRepresentation';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  NSHashEnumerator = record
    _pi: NSUInteger;
    _si: NSUInteger;
    _bs: pointer;
  end;
type
  NSHashEnumeratorPtr = ^NSHashEnumerator;
{$endif}

{$ifdef FUNCTIONS}
function NSFreeHashTable(table: NSHashTable): pointer; cdecl; external;
function NSResetHashTable(table: NSHashTable): pointer; cdecl; external;
function NSCompareHashTables(table1: NSHashTable; table2: NSHashTable): objcbool; cdecl; external;
function NSCopyHashTableWithZone(table: NSHashTable; zone: NSZonePtr): NSHashTable; cdecl; external;
function NSHashGet(table: NSHashTable; pointer_: pointer): pointer; cdecl; external;
function NSHashInsert(table: NSHashTable; pointer_: pointer): pointer; cdecl; external;
function NSHashInsertKnownAbsent(table: NSHashTable; pointer_: pointer): pointer; cdecl; external;
function NSHashInsertIfAbsent(table: NSHashTable; pointer_: pointer): pointer; cdecl; external;
function NSHashRemove(table: NSHashTable; pointer_: pointer): pointer; cdecl; external;
function NSEnumerateHashTable(table: NSHashTable): NSHashEnumerator; cdecl; external;
function NSNextHashEnumeratorItem(enumerator: NSHashEnumeratorPtr): pointer; cdecl; external;
function NSEndHashTableEnumeration(enumerator: NSHashEnumeratorPtr): pointer; cdecl; external;
function NSCountHashTable(table: NSHashTable): NSUInteger; cdecl; external;
function NSStringFromHashTable(table: NSHashTable): NSString; cdecl; external;
function NSAllHashTableObjects(table: NSHashTable): NSArray; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  NSHashTableCallBacks = record
    hash: function (table: NSHashTable; param2: pointer): NSUInteger; cdecl;
    isEqual: function (table: NSHashTable; param2: pointer; param3: pointer): objcbool; cdecl;
    retain: function (table: NSHashTable; param2: pointer): pointer; cdecl;
    release: function (table: NSHashTable; param2: pointer): pointer; cdecl;
    describe: function (table: NSHashTable; param2: pointer): NSString; cdecl;
  end;
type
  NSHashTableCallBacksPtr = ^NSHashTableCallBacks;
{$endif}

{$ifdef FUNCTIONS}
function NSCreateHashTableWithZone(callBacks: NSHashTableCallBacks; capacity: NSUInteger; zone: NSZonePtr): NSHashTable; cdecl; external;
function NSCreateHashTable(callBacks: NSHashTableCallBacks; capacity: NSUInteger): NSHashTable; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSIntegerHashCallBacks: NSHashTableCallBacks { unavailable in ios, watchos, tvos }; cvar; external;
  NSNonOwnedPointerHashCallBacks: NSHashTableCallBacks; cvar; external;
  NSNonRetainedObjectHashCallBacks: NSHashTableCallBacks; cvar; external;
  NSObjectHashCallBacks: NSHashTableCallBacks; cvar; external;
  NSOwnedObjectIdentityHashCallBacks: NSHashTableCallBacks; cvar; external;
  NSOwnedPointerHashCallBacks: NSHashTableCallBacks; cvar; external;
  NSPointerToStructHashCallBacks: NSHashTableCallBacks; cvar; external;
  NSIntHashCallBacks: NSHashTableCallBacks { unavailable in ios, watchos, tvos }; cvar; external;
{$endif}

{$endif}
