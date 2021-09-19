{ Parsed from Foundation.framework NSMapTable.h }

{$ifdef TYPES}
type
  NSMapTablePtr = ^NSMapTable;
{$endif}

{$if  not (defined(__FOUNDATION_NSMAPTABLE__))}
{$ifdef TYPES}
const
  __FOUNDATION_NSMAPTABLE__ = 1;
  NSMapTableStrongMemory = NSPointerFunctionsStrongMemory { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
  NSMapTableZeroingWeakMemory = NSPointerFunctionsZeroingWeakMemory { unavailable in ios, watchos, tvos };
  NSMapTableCopyIn = NSPointerFunctionsCopyIn { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
  NSMapTableObjectPointerPersonality = NSPointerFunctionsObjectPointerPersonality { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
  NSMapTableWeakMemory = NSPointerFunctionsWeakMemory { available in macos 10.8, ios 6.0, watchos 2.0, tvos 9.0 };

type
  NSMapTableOptions = NSUInteger;
  NSMapTableOptionsPtr = ^NSMapTableOptions;
{$endif}

{$ifdef CLASSES}

type
  NSMapTable = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol, NSFastEnumerationProtocol)
  public
    function initWithKeyOptions_valueOptions_capacity (keyOptions: NSPointerFunctionsOptions; valueOptions: NSPointerFunctionsOptions; initialCapacity: NSUInteger): id; message 'initWithKeyOptions:valueOptions:capacity:'; { NS_DESIGNATED_INITIALIZER }
    function initWithKeyPointerFunctions_valuePointerFunctions_capacity (keyFunctions: NSPointerFunctions; valueFunctions: NSPointerFunctions; initialCapacity: NSUInteger): id; message 'initWithKeyPointerFunctions:valuePointerFunctions:capacity:'; { NS_DESIGNATED_INITIALIZER }
    class function mapTableWithKeyOptions_valueOptions (keyOptions: NSPointerFunctionsOptions; valueOptions: NSPointerFunctionsOptions): NSMapTable; message 'mapTableWithKeyOptions:valueOptions:';
    class function mapTableWithStrongToStrongObjects: id; message 'mapTableWithStrongToStrongObjects'; { unavailable in ios, watchos, tvos }
    class function mapTableWithWeakToStrongObjects: id; message 'mapTableWithWeakToStrongObjects'; { unavailable in ios, watchos, tvos }
    class function mapTableWithStrongToWeakObjects: id; message 'mapTableWithStrongToWeakObjects'; { unavailable in ios, watchos, tvos }
    class function mapTableWithWeakToWeakObjects: id; message 'mapTableWithWeakToWeakObjects'; { unavailable in ios, watchos, tvos }
    class function strongToStrongObjectsMapTable: NSMapTable; message 'strongToStrongObjectsMapTable'; { available in macos 10.8, ios 6.0, watchos 2.0, tvos 9.0 }
    class function weakToStrongObjectsMapTable: NSMapTable; message 'weakToStrongObjectsMapTable'; { available in macos 10.8, ios 6.0, watchos 2.0, tvos 9.0 }
    class function strongToWeakObjectsMapTable: NSMapTable; message 'strongToWeakObjectsMapTable'; { available in macos 10.8, ios 6.0, watchos 2.0, tvos 9.0 }
    class function weakToWeakObjectsMapTable: NSMapTable; message 'weakToWeakObjectsMapTable'; { available in macos 10.8, ios 6.0, watchos 2.0, tvos 9.0 }
    function keyPointerFunctions: NSPointerFunctions; message 'keyPointerFunctions';
    function valuePointerFunctions: NSPointerFunctions; message 'valuePointerFunctions';
    function objectForKey (aKey: id): id; message 'objectForKey:';
    procedure removeObjectForKey (aKey: id); message 'removeObjectForKey:';
    procedure setObject_forKey (anObject: id; aKey: id); message 'setObject:forKey:';
    function count: NSUInteger; message 'count';
    function keyEnumerator: NSEnumerator; message 'keyEnumerator';
    function objectEnumerator: NSEnumerator; message 'objectEnumerator';
    procedure removeAllObjects; message 'removeAllObjects';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation';

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
  NSMapEnumerator = record
    _pi: NSUInteger;
    _si: NSUInteger;
    _bs: pointer;
  end;
type
  NSMapEnumeratorPtr = ^NSMapEnumerator;
{$endif}

{$ifdef FUNCTIONS}
function NSFreeMapTable(table: NSMapTable): pointer; cdecl; external;
function NSResetMapTable(table: NSMapTable): pointer; cdecl; external;
function NSCompareMapTables(table1: NSMapTable; table2: NSMapTable): objcbool; cdecl; external;
function NSCopyMapTableWithZone(table: NSMapTable; zone: NSZonePtr): NSMapTable; cdecl; external;
function NSMapMember(table: NSMapTable; key: pointer; originalKey: pointer; value: pointer): objcbool; cdecl; external;
function NSMapGet(table: NSMapTable; key: pointer): pointer; cdecl; external;
function NSMapInsert(table: NSMapTable; key: pointer; value: pointer): pointer; cdecl; external;
function NSMapInsertKnownAbsent(table: NSMapTable; key: pointer; value: pointer): pointer; cdecl; external;
function NSMapInsertIfAbsent(table: NSMapTable; key: pointer; value: pointer): pointer; cdecl; external;
function NSMapRemove(table: NSMapTable; key: pointer): pointer; cdecl; external;
function NSEnumerateMapTable(table: NSMapTable): NSMapEnumerator; cdecl; external;
function NSNextMapEnumeratorPair(enumerator: NSMapEnumeratorPtr; key: pointer; value: pointer): objcbool; cdecl; external;
function NSEndMapTableEnumeration(enumerator: NSMapEnumeratorPtr): pointer; cdecl; external;
function NSCountMapTable(table: NSMapTable): NSUInteger; cdecl; external;
function NSStringFromMapTable(table: NSMapTable): NSString; cdecl; external;
function NSAllMapTableKeys(table: NSMapTable): NSArray; cdecl; external;
function NSAllMapTableValues(table: NSMapTable): NSArray; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  NSMapTableKeyCallBacks = record
    hash: function (table: NSMapTable; param2: pointer): NSUInteger; cdecl;
    isEqual: function (table: NSMapTable; param2: pointer; param3: pointer): objcbool; cdecl;
    retain: function (table: NSMapTable; param2: pointer): pointer; cdecl;
    release: function (table: NSMapTable; param2: pointer): pointer; cdecl;
    describe: function (table: NSMapTable; param2: pointer): NSString; cdecl;
    notAKeyMarker: pointer;
  end;
type
  NSMapTableKeyCallBacksPtr = ^NSMapTableKeyCallBacks;
type
  NSMapTableValueCallBacks = record
    retain: function (table: NSMapTable; param2: pointer): pointer; cdecl;
    release: function (table: NSMapTable; param2: pointer): pointer; cdecl;
    describe: function (table: NSMapTable; param2: pointer): NSString; cdecl;
  end;
type
  NSMapTableValueCallBacksPtr = ^NSMapTableValueCallBacks;
{$endif}

{$ifdef FUNCTIONS}
function NSCreateMapTableWithZone(keyCallBacks: NSMapTableKeyCallBacks; valueCallBacks: NSMapTableValueCallBacks; capacity: NSUInteger; zone: NSZonePtr): NSMapTable; cdecl; external;
function NSCreateMapTable(keyCallBacks: NSMapTableKeyCallBacks; valueCallBacks: NSMapTableValueCallBacks; capacity: NSUInteger): NSMapTable; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSIntegerMapKeyCallBacks: NSMapTableKeyCallBacks { unavailable in ios, watchos, tvos } { available in macos 10.5 }; cvar; external;
  NSNonOwnedPointerMapKeyCallBacks: NSMapTableKeyCallBacks; cvar; external;
  NSNonOwnedPointerOrNullMapKeyCallBacks: NSMapTableKeyCallBacks; cvar; external;
  NSNonRetainedObjectMapKeyCallBacks: NSMapTableKeyCallBacks; cvar; external;
  NSObjectMapKeyCallBacks: NSMapTableKeyCallBacks; cvar; external;
  NSOwnedPointerMapKeyCallBacks: NSMapTableKeyCallBacks; cvar; external;
  NSIntMapKeyCallBacks: NSMapTableKeyCallBacks deprecated 'Not supported'; cvar; external;
  NSIntegerMapValueCallBacks: NSMapTableValueCallBacks { unavailable in ios, watchos, tvos } { available in macos 10.5 }; cvar; external;
  NSNonOwnedPointerMapValueCallBacks: NSMapTableValueCallBacks; cvar; external;
  NSObjectMapValueCallBacks: NSMapTableValueCallBacks; cvar; external;
  NSNonRetainedObjectMapValueCallBacks: NSMapTableValueCallBacks; cvar; external;
  NSOwnedPointerMapValueCallBacks: NSMapTableValueCallBacks; cvar; external;
  NSIntMapValueCallBacks: NSMapTableValueCallBacks deprecated 'Not supported'; cvar; external;
{$endif}

{$endif}
