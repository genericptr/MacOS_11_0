{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSSet.h }

{$ifdef CALLBACKS}
type
  NSSetEnumerateObjectsUsingBlockCallback = reference to function (obj: id; stop: objcboolPtr): pointer; cblock; cdecl;
  NSSetEnumerateObjectsWithOptionsCallback = reference to function (obj: id; stop: objcboolPtr): pointer; cblock; cdecl;
  NSSetObjectsPassingTestCallback = reference to function (obj: id; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSSetObjectsWithOptionsCallback = reference to function (obj: id; stop: objcboolPtr): objcbool; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSSetPtr = ^NSSet;
  NSMutableSetPtr = ^NSMutableSet;
  NSCountedSetPtr = ^NSCountedSet;
{$endif}

{$ifdef CLASSES}

type
  NSSet = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol, NSFastEnumerationProtocol)
  public
    function count: NSUInteger; message 'count';
    function member (object_: id): id; message 'member:';
    function objectEnumerator: NSEnumerator; message 'objectEnumerator';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithObjects_count (objects: id { variable size array of id }; cnt: NSUInteger): id; message 'initWithObjects:count:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSExtendedSet = objccategory external (NSSet)
    function allObjects: NSArray; message 'allObjects';
    function anyObject: id; message 'anyObject';
    function containsObject (anObject: id): objcbool; message 'containsObject:';
    function description: NSString; message 'description';
    function descriptionWithLocale (locale: id): NSString; message 'descriptionWithLocale:';
    function intersectsSet (otherSet: NSSet): objcbool; message 'intersectsSet:';
    function isEqualToSet (otherSet: NSSet): objcbool; message 'isEqualToSet:';
    function isSubsetOfSet (otherSet: NSSet): objcbool; message 'isSubsetOfSet:';
    procedure makeObjectsPerformSelector (aSelector: SEL); message 'makeObjectsPerformSelector:';
    procedure makeObjectsPerformSelector_withObject (aSelector: SEL; argument: id); message 'makeObjectsPerformSelector:withObject:';
    function setByAddingObject (anObject: id): NSSet; message 'setByAddingObject:'; { available in macos , ios , watchos , tvos  }
    function setByAddingObjectsFromSet (other: NSSet): NSSet; message 'setByAddingObjectsFromSet:'; { available in macos , ios , watchos , tvos  }
    function setByAddingObjectsFromArray (other: NSArray): NSSet; message 'setByAddingObjectsFromArray:'; { available in macos , ios , watchos , tvos  }
    procedure enumerateObjectsUsingBlock (block: NSSetEnumerateObjectsUsingBlockCallback); message 'enumerateObjectsUsingBlock:'; { available in macos , ios , watchos , tvos  }
    procedure enumerateObjectsWithOptions_usingBlock (opts: NSEnumerationOptions; block: NSSetEnumerateObjectsWithOptionsCallback); message 'enumerateObjectsWithOptions:usingBlock:'; { available in macos , ios , watchos , tvos  }
    function objectsPassingTest (predicate: NSSetObjectsPassingTestCallback): NSSet; message 'objectsPassingTest:'; { available in macos , ios , watchos , tvos  }
    function objectsWithOptions_passingTest (opts: NSEnumerationOptions; predicate: NSSetObjectsWithOptionsCallback): NSSet; message 'objectsWithOptions:passingTest:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSSetCreation = objccategory external (NSSet)
    class function set_: id; message 'set';
    class function setWithObject (object_: id): id; message 'setWithObject:';
    class function setWithObjects_count (objects: id { variable size array of id }; cnt: NSUInteger): id; message 'setWithObjects:count:';
    class function setWithObjects (firstObj: id): id; varargs; message 'setWithObjects:';
    class function setWithSet (set__: NSSet): id; message 'setWithSet:';
    class function setWithArray (array_: NSArray): id; message 'setWithArray:';
    function initWithObjects (firstObj: id): id; varargs; message 'initWithObjects:';
    function initWithSet (set__: NSSet): id; message 'initWithSet:';
    function initWithSet_copyItems (set__: NSSet; flag: objcbool): id; message 'initWithSet:copyItems:';
    function initWithArray (array_: NSArray): id; message 'initWithArray:';
  end;


type
  NSMutableSet = objcclass external (NSSet)
  public
    procedure addObject (object_: id); message 'addObject:';
    procedure removeObject (object_: id); message 'removeObject:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCapacity (numItems: NSUInteger): id; message 'initWithCapacity:'; { NS_DESIGNATED_INITIALIZER }
  end;


type
  NSExtendedMutableSet = objccategory external (NSMutableSet)
    procedure addObjectsFromArray (array_: NSArray); message 'addObjectsFromArray:';
    procedure intersectSet (otherSet: NSSet); message 'intersectSet:';
    procedure minusSet (otherSet: NSSet); message 'minusSet:';
    procedure removeAllObjects; message 'removeAllObjects';
    procedure unionSet (otherSet: NSSet); message 'unionSet:';
    procedure setSet (otherSet: NSSet); message 'setSet:';
  end;

type
  NSMutableSetCreation = objccategory external (NSMutableSet)
    class function setWithCapacity (numItems: NSUInteger): id; message 'setWithCapacity:';
  end;


type
  NSCountedSet = objcclass external (NSMutableSet)
  private
    _table: id;
    _reserved: pointer;
  public
    function initWithCapacity (numItems: NSUInteger): id; message 'initWithCapacity:'; { NS_DESIGNATED_INITIALIZER }
    function initWithArray (array_: NSArray): id; message 'initWithArray:';
    function initWithSet (set_: NSSet): id; message 'initWithSet:';
    function countForObject (object_: id): NSUInteger; message 'countForObject:';
    function objectEnumerator: NSEnumerator; message 'objectEnumerator';
    procedure addObject (object_: id); message 'addObject:';
    procedure removeObject (object_: id); message 'removeObject:';
  end;
{$endif}

