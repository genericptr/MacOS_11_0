{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSArray.h }

{ Types from NSExtendedArray }
{$ifdef TYPES}

type
  NSBinarySearchingOptions = NSUInteger;
type
  NSBinarySearchingOptionsPtr = ^NSBinarySearchingOptions;

const
  NSBinarySearchingFirstEqual = 1 shl 8;
  NSBinarySearchingLastEqual = 1 shl 9;
  NSBinarySearchingInsertionIndex = 1 shl 10;
{$endif}


{$ifdef CALLBACKS}
type
  NSArraySortedArrayUsingFunctionComparatorCallback = function (param1: id; param2: id; param3: pointer): NSInteger; cdecl;
  NSArrayEnumerateObjectsUsingBlockCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): pointer; cblock; cdecl;
  NSArrayEnumerateObjectsWithOptionsCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): pointer; cblock; cdecl;
  NSArrayEnumerateObjectsAtIndexesCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): pointer; cblock; cdecl;
  NSArrayIndexOfObjectPassingTestCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSArrayIndexOfObjectWithOptionsCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSArrayIndexOfObjectAtIndexesCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSArrayIndexesOfObjectsPassingTestCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSArrayIndexesOfObjectsWithOptionsCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSArrayIndexesOfObjectsAtIndexesCallback = reference to function (obj: id; idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSArrayDifferenceFromArrayCallback = reference to function (obj1: id; obj2: id): objcbool; cblock; cdecl;
  NSArraySortUsingFunctionCompareCallback = function (param1: id; param2: id; param3: pointer): NSInteger; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSArrayPtr = ^NSArray;
  NSMutableArrayPtr = ^NSMutableArray;
{$endif}

{$ifdef CLASSES}

type
  NSArray = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol, NSFastEnumerationProtocol)
  public
    function count: NSUInteger; message 'count';
    function objectAtIndex (index: NSUInteger): id; message 'objectAtIndex:';
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
  NSExtendedArray = objccategory external (NSArray)
    function arrayByAddingObject (anObject: id): NSArray; message 'arrayByAddingObject:';
    function arrayByAddingObjectsFromArray (otherArray: NSArray): NSArray; message 'arrayByAddingObjectsFromArray:';
    function componentsJoinedByString (separator: NSString): NSString; message 'componentsJoinedByString:';
    function containsObject (anObject: id): objcbool; message 'containsObject:';
    function description: NSString; message 'description';
    function descriptionWithLocale (locale: id): NSString; message 'descriptionWithLocale:';
    function descriptionWithLocale_indent (locale: id; level: NSUInteger): NSString; message 'descriptionWithLocale:indent:';
    function firstObjectCommonWithArray (otherArray: NSArray): id; message 'firstObjectCommonWithArray:';
    procedure getObjects_range (objects: id { variable size array of id }; range: NSRange); message 'getObjects:range:';
    function indexOfObject (anObject: id): NSUInteger; message 'indexOfObject:';
    function indexOfObject_inRange (anObject: id; range: NSRange): NSUInteger; message 'indexOfObject:inRange:';
    function indexOfObjectIdenticalTo (anObject: id): NSUInteger; message 'indexOfObjectIdenticalTo:';
    function indexOfObjectIdenticalTo_inRange (anObject: id; range: NSRange): NSUInteger; message 'indexOfObjectIdenticalTo:inRange:';
    function isEqualToArray (otherArray: NSArray): objcbool; message 'isEqualToArray:';
    function firstObject: id; message 'firstObject'; { available in macos , ios , watchos , tvos  }
    function lastObject: id; message 'lastObject';
    function objectEnumerator: NSEnumerator; message 'objectEnumerator';
    function reverseObjectEnumerator: NSEnumerator; message 'reverseObjectEnumerator';
    function sortedArrayHint: NSData; message 'sortedArrayHint';
    function sortedArrayUsingFunction_context (comparator: NSArraySortedArrayUsingFunctionComparatorCallback; context: pointer): NSArray; message 'sortedArrayUsingFunction:context:';
    function sortedArrayUsingFunction_context_hint (comparator: NSArraySortedArrayUsingFunctionComparatorCallback; context: pointer; hint: NSData): NSArray; message 'sortedArrayUsingFunction:context:hint:';
    function sortedArrayUsingSelector (comparator: SEL): NSArray; message 'sortedArrayUsingSelector:';
    function subarrayWithRange (range: NSRange): NSArray; message 'subarrayWithRange:';
    function writeToURL_error (url: NSURL; error: NSErrorPtr): objcbool; message 'writeToURL:error:'; { available in macos , ios , watchos , tvos  }
    procedure makeObjectsPerformSelector (aSelector: SEL); message 'makeObjectsPerformSelector:';
    procedure makeObjectsPerformSelector_withObject (aSelector: SEL; argument: id); message 'makeObjectsPerformSelector:withObject:';
    function objectsAtIndexes (indexes: NSIndexSet): NSArray; message 'objectsAtIndexes:';
    function objectAtIndexedSubscript (idx: NSUInteger): id; message 'objectAtIndexedSubscript:'; { available in macos , ios , watchos , tvos  }
    procedure enumerateObjectsUsingBlock (block: NSArrayEnumerateObjectsUsingBlockCallback); message 'enumerateObjectsUsingBlock:'; { available in macos , ios , watchos , tvos  }
    procedure enumerateObjectsWithOptions_usingBlock (opts: NSEnumerationOptions; block: NSArrayEnumerateObjectsWithOptionsCallback); message 'enumerateObjectsWithOptions:usingBlock:'; { available in macos , ios , watchos , tvos  }
    procedure enumerateObjectsAtIndexes_options_usingBlock (s: NSIndexSet; opts: NSEnumerationOptions; block: NSArrayEnumerateObjectsAtIndexesCallback); message 'enumerateObjectsAtIndexes:options:usingBlock:'; { available in macos , ios , watchos , tvos  }
    function indexOfObjectPassingTest (predicate: NSArrayIndexOfObjectPassingTestCallback): NSUInteger; message 'indexOfObjectPassingTest:'; { available in macos , ios , watchos , tvos  }
    function indexOfObjectWithOptions_passingTest (opts: NSEnumerationOptions; predicate: NSArrayIndexOfObjectWithOptionsCallback): NSUInteger; message 'indexOfObjectWithOptions:passingTest:'; { available in macos , ios , watchos , tvos  }
    function indexOfObjectAtIndexes_options_passingTest (s: NSIndexSet; opts: NSEnumerationOptions; predicate: NSArrayIndexOfObjectAtIndexesCallback): NSUInteger; message 'indexOfObjectAtIndexes:options:passingTest:'; { available in macos , ios , watchos , tvos  }
    function indexesOfObjectsPassingTest (predicate: NSArrayIndexesOfObjectsPassingTestCallback): NSIndexSet; message 'indexesOfObjectsPassingTest:'; { available in macos , ios , watchos , tvos  }
    function indexesOfObjectsWithOptions_passingTest (opts: NSEnumerationOptions; predicate: NSArrayIndexesOfObjectsWithOptionsCallback): NSIndexSet; message 'indexesOfObjectsWithOptions:passingTest:'; { available in macos , ios , watchos , tvos  }
    function indexesOfObjectsAtIndexes_options_passingTest (s: NSIndexSet; opts: NSEnumerationOptions; predicate: NSArrayIndexesOfObjectsAtIndexesCallback): NSIndexSet; message 'indexesOfObjectsAtIndexes:options:passingTest:'; { available in macos , ios , watchos , tvos  }
    function sortedArrayUsingComparator (cmptr: NSComparator): NSArray; message 'sortedArrayUsingComparator:'; { available in macos , ios , watchos , tvos  }
    function sortedArrayWithOptions_usingComparator (opts: NSSortOptions; cmptr: NSComparator): NSArray; message 'sortedArrayWithOptions:usingComparator:'; { available in macos , ios , watchos , tvos  }
    function indexOfObject_inSortedRange_options_usingComparator (obj: id; r: NSRange; opts: NSBinarySearchingOptions; cmp: NSComparator): NSUInteger; message 'indexOfObject:inSortedRange:options:usingComparator:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSArrayCreation = objccategory external (NSArray)
    class function array_: id; message 'array';
    class function arrayWithObject (anObject: id): id; message 'arrayWithObject:';
    class function arrayWithObjects_count (objects: id { variable size array of id }; cnt: NSUInteger): id; message 'arrayWithObjects:count:';
    class function arrayWithObjects (firstObj: id): id; varargs; message 'arrayWithObjects:';
    class function arrayWithArray (array__: NSArray): id; message 'arrayWithArray:';
    function initWithObjects (firstObj: id): id; varargs; message 'initWithObjects:';
    function initWithArray (array__: NSArray): id; message 'initWithArray:';
    function initWithArray_copyItems (array__: NSArray; flag: objcbool): id; message 'initWithArray:copyItems:';
    function initWithContentsOfURL_error (url: NSURL; error: NSErrorPtr): NSArray; message 'initWithContentsOfURL:error:'; { available in macos , ios , watchos , tvos  }
    class function arrayWithContentsOfURL_error (url: NSURL; error: NSErrorPtr): NSArray; message 'arrayWithContentsOfURL:error:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSArrayDiffing = objccategory external (NSArray)
    function differenceFromArray_withOptions_usingEquivalenceTest (other: NSArray; options: NSOrderedCollectionDifferenceCalculationOptions; block: NSArrayDifferenceFromArrayCallback): NSOrderedCollectionDifference; message 'differenceFromArray:withOptions:usingEquivalenceTest:';
    function differenceFromArray_withOptions (other: NSArray; options: NSOrderedCollectionDifferenceCalculationOptions): NSOrderedCollectionDifference; message 'differenceFromArray:withOptions:';
    function differenceFromArray (other: NSArray): NSOrderedCollectionDifference; message 'differenceFromArray:';
    function arrayByApplyingDifference (difference: NSOrderedCollectionDifference): NSArray; message 'arrayByApplyingDifference:';
  end;

type
  NSArray_NSDeprecated = objccategory external name 'NSDeprecated' (NSArray)
    procedure getObjects (objects: id { variable size array of id }); message 'getObjects:';
    class function arrayWithContentsOfFile (path: NSString): NSArray; message 'arrayWithContentsOfFile:'; deprecated 'replace with arrayWithContentsOfURL:error:';
    class function arrayWithContentsOfURL (url: NSURL): NSArray; message 'arrayWithContentsOfURL:'; deprecated 'replace with arrayWithContentsOfURL:error:';
    function initWithContentsOfFile (path: NSString): NSArray; message 'initWithContentsOfFile:'; deprecated 'replace with initWithContentsOfURL:error:';
    function initWithContentsOfURL (url: NSURL): NSArray; message 'initWithContentsOfURL:'; deprecated 'replace with initWithContentsOfURL:error:';
    function writeToFile_atomically (path: NSString; useAuxiliaryFile: objcbool): objcbool; message 'writeToFile:atomically:'; deprecated 'replace with writeToURL:error:';
    function writeToURL_atomically (url: NSURL; atomically: objcbool): objcbool; message 'writeToURL:atomically:'; deprecated 'replace with writeToURL:error:';
  end;


type
  NSMutableArray = objcclass external (NSArray)
  public
    procedure addObject (anObject: id); message 'addObject:';
    procedure insertObject_atIndex (anObject: id; index: NSUInteger); message 'insertObject:atIndex:';
    procedure removeLastObject; message 'removeLastObject';
    procedure removeObjectAtIndex (index: NSUInteger); message 'removeObjectAtIndex:';
    procedure replaceObjectAtIndex_withObject (index: NSUInteger; anObject: id); message 'replaceObjectAtIndex:withObject:';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCapacity (numItems: NSUInteger): id; message 'initWithCapacity:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
  end;


type
  NSExtendedMutableArray = objccategory external (NSMutableArray)
    procedure addObjectsFromArray (otherArray: NSArray); message 'addObjectsFromArray:';
    procedure exchangeObjectAtIndex_withObjectAtIndex (idx1: NSUInteger; idx2: NSUInteger); message 'exchangeObjectAtIndex:withObjectAtIndex:';
    procedure removeAllObjects; message 'removeAllObjects';
    procedure removeObject_inRange (anObject: id; range: NSRange); message 'removeObject:inRange:';
    procedure removeObject (anObject: id); message 'removeObject:';
    procedure removeObjectIdenticalTo_inRange (anObject: id; range: NSRange); message 'removeObjectIdenticalTo:inRange:';
    procedure removeObjectIdenticalTo (anObject: id); message 'removeObjectIdenticalTo:';
    procedure removeObjectsFromIndices_numIndices (indices: NSUIntegerPtr; cnt: NSUInteger); message 'removeObjectsFromIndices:numIndices:'; deprecated 'Not supported';
    procedure removeObjectsInArray (otherArray: NSArray); message 'removeObjectsInArray:';
    procedure removeObjectsInRange (range: NSRange); message 'removeObjectsInRange:';
    procedure replaceObjectsInRange_withObjectsFromArray_range (range: NSRange; otherArray: NSArray; otherRange: NSRange); message 'replaceObjectsInRange:withObjectsFromArray:range:';
    procedure replaceObjectsInRange_withObjectsFromArray (range: NSRange; otherArray: NSArray); message 'replaceObjectsInRange:withObjectsFromArray:';
    procedure setArray (otherArray: NSArray); message 'setArray:';
    procedure sortUsingFunction_context (compare: NSArraySortUsingFunctionCompareCallback; context: pointer); message 'sortUsingFunction:context:';
    procedure sortUsingSelector (comparator: SEL); message 'sortUsingSelector:';
    procedure insertObjects_atIndexes (objects: NSArray; indexes: NSIndexSet); message 'insertObjects:atIndexes:';
    procedure removeObjectsAtIndexes (indexes: NSIndexSet); message 'removeObjectsAtIndexes:';
    procedure replaceObjectsAtIndexes_withObjects (indexes: NSIndexSet; objects: NSArray); message 'replaceObjectsAtIndexes:withObjects:';
    procedure setObject_atIndexedSubscript (obj: id; idx: NSUInteger); message 'setObject:atIndexedSubscript:'; { available in macos , ios , watchos , tvos  }
    procedure sortUsingComparator (cmptr: NSComparator); message 'sortUsingComparator:'; { available in macos , ios , watchos , tvos  }
    procedure sortWithOptions_usingComparator (opts: NSSortOptions; cmptr: NSComparator); message 'sortWithOptions:usingComparator:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSMutableArrayCreation = objccategory external (NSMutableArray)
    class function arrayWithCapacity (numItems: NSUInteger): id; message 'arrayWithCapacity:';
    class function arrayWithContentsOfFile (path: NSString): NSMutableArray; message 'arrayWithContentsOfFile:';
    class function arrayWithContentsOfURL (url: NSURL): NSMutableArray; message 'arrayWithContentsOfURL:';
    function initWithContentsOfFile (path: NSString): NSMutableArray; message 'initWithContentsOfFile:';
    function initWithContentsOfURL (url: NSURL): NSMutableArray; message 'initWithContentsOfURL:';
  end;

type
  NSMutableArrayDiffing = objccategory external (NSMutableArray)
    procedure applyDifference (difference: NSOrderedCollectionDifference); message 'applyDifference:';
  end;
{$endif}

