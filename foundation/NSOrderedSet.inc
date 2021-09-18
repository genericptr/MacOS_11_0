{ Parsed from Foundation.framework NSOrderedSet.h }

{ Types from NSExtendedMutableOrderedSet }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  NSOrderedSetEnumerateObjectsUsingBlockCallback = reference to procedure (obj: id; idx: NSUInteger; stop: objcboolPtr); cblock; cdecl;
  NSOrderedSetEnumerateObjectsWithOptionsCallback = reference to procedure (obj: id; idx: NSUInteger; stop: objcboolPtr); cblock; cdecl;
  NSOrderedSetEnumerateObjectsAtIndexesCallback = reference to procedure (obj: id; idx: NSUInteger; stop: objcboolPtr); cblock; cdecl;
  NSOrderedSetIndexOfObjectPassingTestCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSOrderedSetIndexOfObjectWithOptionsCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSOrderedSetIndexOfObjectAtIndexesCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSOrderedSetIndexesOfObjectsPassingTestCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSOrderedSetIndexesOfObjectsWithOptionsCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSOrderedSetIndexesOfObjectsAtIndexesCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSOrderedSetDifferenceFromOrderedSetCallback = reference to function (obj1: id; obj2: id): objcbool; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSOrderedSetPtr = ^NSOrderedSet;
  NSMutableOrderedSetPtr = ^NSMutableOrderedSet;
{$endif}

{$ifdef CLASSES}

type
  NSOrderedSet = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol, NSFastEnumerationProtocol)
  public
    function count: NSUInteger; message 'count';
    function objectAtIndex (idx: NSUInteger): id; message 'objectAtIndex:';
    function indexOfObject (object_: id): NSUInteger; message 'indexOfObject:';
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
  NSExtendedOrderedSet = objccategory external (NSOrderedSet)
    procedure getObjects_range (objects: id { variable size array of id }; range: NSRange); message 'getObjects:range:';
    function objectsAtIndexes (indexes: NSIndexSet): NSArray; message 'objectsAtIndexes:';
    function firstObject: id; message 'firstObject';
    function lastObject: id; message 'lastObject';
    function isEqualToOrderedSet (other: NSOrderedSet): objcbool; message 'isEqualToOrderedSet:';
    function containsObject (object_: id): objcbool; message 'containsObject:';
    function intersectsOrderedSet (other: NSOrderedSet): objcbool; message 'intersectsOrderedSet:';
    function intersectsSet (set_: NSSet): objcbool; message 'intersectsSet:';
    function isSubsetOfOrderedSet (other: NSOrderedSet): objcbool; message 'isSubsetOfOrderedSet:';
    function isSubsetOfSet (set_: NSSet): objcbool; message 'isSubsetOfSet:';
    function objectAtIndexedSubscript (idx: NSUInteger): id; message 'objectAtIndexedSubscript:'; { available in macos , ios , watchos , tvos  }
    function objectEnumerator: NSEnumerator; message 'objectEnumerator';
    function reverseObjectEnumerator: NSEnumerator; message 'reverseObjectEnumerator';
    function reversedOrderedSet: NSOrderedSet; message 'reversedOrderedSet';
    function array_: NSArray; message 'array';
    function set_: NSSet; message 'set';
    procedure enumerateObjectsUsingBlock (block: NSOrderedSetEnumerateObjectsUsingBlockCallback); message 'enumerateObjectsUsingBlock:';
    procedure enumerateObjectsWithOptions_usingBlock (opts: NSEnumerationOptions; block: NSOrderedSetEnumerateObjectsWithOptionsCallback); message 'enumerateObjectsWithOptions:usingBlock:';
    procedure enumerateObjectsAtIndexes_options_usingBlock (s: NSIndexSet; opts: NSEnumerationOptions; block: NSOrderedSetEnumerateObjectsAtIndexesCallback); message 'enumerateObjectsAtIndexes:options:usingBlock:';
    function indexOfObjectPassingTest (predicate: NSOrderedSetIndexOfObjectPassingTestCallback): NSUInteger; message 'indexOfObjectPassingTest:';
    function indexOfObjectWithOptions_passingTest (opts: NSEnumerationOptions; predicate: NSOrderedSetIndexOfObjectWithOptionsCallback): NSUInteger; message 'indexOfObjectWithOptions:passingTest:';
    function indexOfObjectAtIndexes_options_passingTest (s: NSIndexSet; opts: NSEnumerationOptions; predicate: NSOrderedSetIndexOfObjectAtIndexesCallback): NSUInteger; message 'indexOfObjectAtIndexes:options:passingTest:';
    function indexesOfObjectsPassingTest (predicate: NSOrderedSetIndexesOfObjectsPassingTestCallback): NSIndexSet; message 'indexesOfObjectsPassingTest:';
    function indexesOfObjectsWithOptions_passingTest (opts: NSEnumerationOptions; predicate: NSOrderedSetIndexesOfObjectsWithOptionsCallback): NSIndexSet; message 'indexesOfObjectsWithOptions:passingTest:';
    function indexesOfObjectsAtIndexes_options_passingTest (s: NSIndexSet; opts: NSEnumerationOptions; predicate: NSOrderedSetIndexesOfObjectsAtIndexesCallback): NSIndexSet; message 'indexesOfObjectsAtIndexes:options:passingTest:';
    function indexOfObject_inSortedRange_options_usingComparator (object_: id; range: NSRange; opts: NSBinarySearchingOptions; cmp: NSComparator): NSUInteger; message 'indexOfObject:inSortedRange:options:usingComparator:';
    function sortedArrayUsingComparator (cmptr: NSComparator): NSArray; message 'sortedArrayUsingComparator:';
    function sortedArrayWithOptions_usingComparator (opts: NSSortOptions; cmptr: NSComparator): NSArray; message 'sortedArrayWithOptions:usingComparator:';
    function description: NSString; message 'description';
    function descriptionWithLocale (locale: id): NSString; message 'descriptionWithLocale:';
    function descriptionWithLocale_indent (locale: id; level: NSUInteger): NSString; message 'descriptionWithLocale:indent:';
  end;

type
  NSOrderedSetCreation = objccategory external (NSOrderedSet)
    class function orderedSet: id; message 'orderedSet';
    class function orderedSetWithObject (object_: id): id; message 'orderedSetWithObject:';
    class function orderedSetWithObjects_count (objects: id { variable size array of id }; cnt: NSUInteger): id; message 'orderedSetWithObjects:count:';
    class function orderedSetWithObjects (firstObj: id): id; varargs; message 'orderedSetWithObjects:';
    class function orderedSetWithOrderedSet (set_: NSOrderedSet): id; message 'orderedSetWithOrderedSet:';
    class function orderedSetWithOrderedSet_range_copyItems (set_: NSOrderedSet; range: NSRange; flag: objcbool): id; message 'orderedSetWithOrderedSet:range:copyItems:';
    class function orderedSetWithArray (array_: NSArray): id; message 'orderedSetWithArray:';
    class function orderedSetWithArray_range_copyItems (array_: NSArray; range: NSRange; flag: objcbool): id; message 'orderedSetWithArray:range:copyItems:';
    class function orderedSetWithSet (set_: NSSet): id; message 'orderedSetWithSet:';
    class function orderedSetWithSet_copyItems (set_: NSSet; flag: objcbool): id; message 'orderedSetWithSet:copyItems:';
    function initWithObject (object_: id): id; message 'initWithObject:';
    function initWithObjects (firstObj: id): id; varargs; message 'initWithObjects:';
    function initWithOrderedSet (set_: NSOrderedSet): id; message 'initWithOrderedSet:';
    function initWithOrderedSet_copyItems (set_: NSOrderedSet; flag: objcbool): id; message 'initWithOrderedSet:copyItems:';
    function initWithOrderedSet_range_copyItems (set_: NSOrderedSet; range: NSRange; flag: objcbool): id; message 'initWithOrderedSet:range:copyItems:';
    function initWithArray (array_: NSArray): id; message 'initWithArray:';
    function initWithArray_copyItems (set_: NSArray; flag: objcbool): id; message 'initWithArray:copyItems:';
    function initWithArray_range_copyItems (set_: NSArray; range: NSRange; flag: objcbool): id; message 'initWithArray:range:copyItems:';
    function initWithSet (set_: NSSet): id; message 'initWithSet:';
    function initWithSet_copyItems (set_: NSSet; flag: objcbool): id; message 'initWithSet:copyItems:';
  end;

type
  NSOrderedSetDiffing = objccategory external (NSOrderedSet)
    function differenceFromOrderedSet_withOptions_usingEquivalenceTest (other: NSOrderedSet; options: NSOrderedCollectionDifferenceCalculationOptions; block: NSOrderedSetDifferenceFromOrderedSetCallback): NSOrderedCollectionDifference; message 'differenceFromOrderedSet:withOptions:usingEquivalenceTest:';
    function differenceFromOrderedSet_withOptions (other: NSOrderedSet; options: NSOrderedCollectionDifferenceCalculationOptions): NSOrderedCollectionDifference; message 'differenceFromOrderedSet:withOptions:';
    function differenceFromOrderedSet (other: NSOrderedSet): NSOrderedCollectionDifference; message 'differenceFromOrderedSet:';
    function orderedSetByApplyingDifference (difference: NSOrderedCollectionDifference): NSOrderedSet; message 'orderedSetByApplyingDifference:';
  end;


type
  NSMutableOrderedSet = objcclass external (NSOrderedSet)
  public
    procedure insertObject_atIndex (object_: id; idx: NSUInteger); message 'insertObject:atIndex:';
    procedure removeObjectAtIndex (idx: NSUInteger); message 'removeObjectAtIndex:';
    procedure replaceObjectAtIndex_withObject (idx: NSUInteger; object_: id); message 'replaceObjectAtIndex:withObject:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCapacity (numItems: NSUInteger): id; message 'initWithCapacity:'; { NS_DESIGNATED_INITIALIZER }
  end;


type
  NSExtendedMutableOrderedSet = objccategory external (NSMutableOrderedSet)
    procedure addObject (object_: id); message 'addObject:';
    procedure addObjects_count (objects: id { variable size array of id }; count_: NSUInteger); message 'addObjects:count:';
    procedure addObjectsFromArray (array_: NSArray); message 'addObjectsFromArray:';
    procedure exchangeObjectAtIndex_withObjectAtIndex (idx1: NSUInteger; idx2: NSUInteger); message 'exchangeObjectAtIndex:withObjectAtIndex:';
    procedure moveObjectsAtIndexes_toIndex (indexes: NSIndexSet; idx: NSUInteger); message 'moveObjectsAtIndexes:toIndex:';
    procedure insertObjects_atIndexes (objects: NSArray; indexes: NSIndexSet); message 'insertObjects:atIndexes:';
    procedure setObject_atIndex (obj: id; idx: NSUInteger); message 'setObject:atIndex:';
    procedure setObject_atIndexedSubscript (obj: id; idx: NSUInteger); message 'setObject:atIndexedSubscript:'; { available in macos , ios , watchos , tvos  }
    procedure replaceObjectsInRange_withObjects_count (range: NSRange; objects: id { variable size array of id }; count_: NSUInteger); message 'replaceObjectsInRange:withObjects:count:';
    procedure replaceObjectsAtIndexes_withObjects (indexes: NSIndexSet; objects: NSArray); message 'replaceObjectsAtIndexes:withObjects:';
    procedure removeObjectsInRange (range: NSRange); message 'removeObjectsInRange:';
    procedure removeObjectsAtIndexes (indexes: NSIndexSet); message 'removeObjectsAtIndexes:';
    procedure removeAllObjects; message 'removeAllObjects';
    procedure removeObject (object_: id); message 'removeObject:';
    procedure removeObjectsInArray (array_: NSArray); message 'removeObjectsInArray:';
    procedure intersectOrderedSet (other: NSOrderedSet); message 'intersectOrderedSet:';
    procedure minusOrderedSet (other: NSOrderedSet); message 'minusOrderedSet:';
    procedure unionOrderedSet (other: NSOrderedSet); message 'unionOrderedSet:';
    procedure intersectSet (other: NSSet); message 'intersectSet:';
    procedure minusSet (other: NSSet); message 'minusSet:';
    procedure unionSet (other: NSSet); message 'unionSet:';
    {$if defined(NS_BLOCKS_AVAILABLE)}
    procedure sortUsingComparator (cmptr: NSComparator); message 'sortUsingComparator:';
    procedure sortWithOptions_usingComparator (opts: NSSortOptions; cmptr: NSComparator); message 'sortWithOptions:usingComparator:';
    procedure sortRange_options_usingComparator (range: NSRange; opts: NSSortOptions; cmptr: NSComparator); message 'sortRange:options:usingComparator:';
    {$endif}
  end;

type
  NSMutableOrderedSetCreation = objccategory external (NSMutableOrderedSet)
    class function orderedSetWithCapacity (numItems: NSUInteger): id; message 'orderedSetWithCapacity:';
  end;

type
  NSMutableOrderedSetDiffing = objccategory external (NSMutableOrderedSet)
    procedure applyDifference (difference: NSOrderedCollectionDifference); message 'applyDifference:';
  end;
{$endif}

