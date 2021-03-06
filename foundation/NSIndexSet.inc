{ Parsed from Foundation.framework NSIndexSet.h }

{$ifdef CALLBACKS}
type
  NSIndexSetEnumerateIndexesUsingBlockCallback = reference to procedure (idx: NSUInteger; stop: objcboolPtr); cblock; cdecl;
  NSIndexSetEnumerateIndexesWithOptionsCallback = reference to procedure (idx: NSUInteger; stop: objcboolPtr); cblock; cdecl;
  NSIndexSetEnumerateIndexesInRangeCallback = reference to procedure (idx: NSUInteger; stop: objcboolPtr); cblock; cdecl;
  NSIndexSetIndexPassingTestCallback = reference to function (idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSIndexSetIndexWithOptionsCallback = reference to function (idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSIndexSetIndexInRangeCallback = reference to function (idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSIndexSetIndexesPassingTestCallback = reference to function (idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSIndexSetIndexesWithOptionsCallback = reference to function (idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSIndexSetIndexesInRangeCallback = reference to function (idx: NSUInteger; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSIndexSetEnumerateRangesUsingBlockCallback = reference to procedure (range: NSRange; stop: objcboolPtr); cblock; cdecl;
  NSIndexSetEnumerateRangesWithOptionsCallback = reference to procedure (range: NSRange; stop: objcboolPtr); cblock; cdecl;
  NSIndexSetEnumerateRangesInRangeCallback = reference to procedure (range: NSRange; stop: objcboolPtr); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSIndexSetPtr = ^NSIndexSet;
  NSMutableIndexSetPtr = ^NSMutableIndexSet;
{$endif}

{$ifdef CLASSES}

type
  NSIndexSet = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  private
    _indexSetFlags: bitpacked record
      case byte of
        0: (_anonBitField__indexSetFlags0: cuint);
        1: (
          _isEmpty: 0..1;
          _hasSingleRange: 0..1;
          _cacheValid: 0..1;
          _reservedArrayBinderController: 0..((1 shl 29)-1);
        );
      end;
    _internal: record
      case longint of
        0: (
          _singleRange: record
            _range: NSRange;
          end;
        );
        1: (
          _multipleRanges: record
            _data: pointer;
            _reserved: pointer;
          end;
        );
    end;
  public
    class function indexSet: id; message 'indexSet';
    class function indexSetWithIndex (value: NSUInteger): id; message 'indexSetWithIndex:';
    class function indexSetWithIndexesInRange (range: NSRange): id; message 'indexSetWithIndexesInRange:';
    function initWithIndexesInRange (range: NSRange): id; message 'initWithIndexesInRange:'; { NS_DESIGNATED_INITIALIZER }
    function initWithIndexSet (indexSet_: NSIndexSet): id; message 'initWithIndexSet:'; { NS_DESIGNATED_INITIALIZER }
    function initWithIndex (value: NSUInteger): id; message 'initWithIndex:';
    function isEqualToIndexSet (indexSet_: NSIndexSet): objcbool; message 'isEqualToIndexSet:';
    function count: NSUInteger; message 'count';
    function firstIndex: NSUInteger; message 'firstIndex';
    function lastIndex: NSUInteger; message 'lastIndex';
    function indexGreaterThanIndex (value: NSUInteger): NSUInteger; message 'indexGreaterThanIndex:';
    function indexLessThanIndex (value: NSUInteger): NSUInteger; message 'indexLessThanIndex:';
    function indexGreaterThanOrEqualToIndex (value: NSUInteger): NSUInteger; message 'indexGreaterThanOrEqualToIndex:';
    function indexLessThanOrEqualToIndex (value: NSUInteger): NSUInteger; message 'indexLessThanOrEqualToIndex:';
    function getIndexes_maxCount_inIndexRange (indexBuffer: NSUIntegerPtr; bufferSize: NSUInteger; range: NSRangePointer): NSUInteger; message 'getIndexes:maxCount:inIndexRange:';
    function countOfIndexesInRange (range: NSRange): NSUInteger; message 'countOfIndexesInRange:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function containsIndex (value: NSUInteger): objcbool; message 'containsIndex:';
    function containsIndexesInRange (range: NSRange): objcbool; message 'containsIndexesInRange:';
    function containsIndexes (indexSet_: NSIndexSet): objcbool; message 'containsIndexes:';
    function intersectsIndexesInRange (range: NSRange): objcbool; message 'intersectsIndexesInRange:';
    procedure enumerateIndexesUsingBlock (block: NSIndexSetEnumerateIndexesUsingBlockCallback); message 'enumerateIndexesUsingBlock:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure enumerateIndexesWithOptions_usingBlock (opts: NSEnumerationOptions; block: NSIndexSetEnumerateIndexesWithOptionsCallback); message 'enumerateIndexesWithOptions:usingBlock:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure enumerateIndexesInRange_options_usingBlock (range: NSRange; opts: NSEnumerationOptions; block: NSIndexSetEnumerateIndexesInRangeCallback); message 'enumerateIndexesInRange:options:usingBlock:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function indexPassingTest (predicate: NSIndexSetIndexPassingTestCallback): NSUInteger; message 'indexPassingTest:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function indexWithOptions_passingTest (opts: NSEnumerationOptions; predicate: NSIndexSetIndexWithOptionsCallback): NSUInteger; message 'indexWithOptions:passingTest:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function indexInRange_options_passingTest (range: NSRange; opts: NSEnumerationOptions; predicate: NSIndexSetIndexInRangeCallback): NSUInteger; message 'indexInRange:options:passingTest:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function indexesPassingTest (predicate: NSIndexSetIndexesPassingTestCallback): NSIndexSet; message 'indexesPassingTest:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function indexesWithOptions_passingTest (opts: NSEnumerationOptions; predicate: NSIndexSetIndexesWithOptionsCallback): NSIndexSet; message 'indexesWithOptions:passingTest:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function indexesInRange_options_passingTest (range: NSRange; opts: NSEnumerationOptions; predicate: NSIndexSetIndexesInRangeCallback): NSIndexSet; message 'indexesInRange:options:passingTest:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure enumerateRangesUsingBlock (block: NSIndexSetEnumerateRangesUsingBlockCallback); message 'enumerateRangesUsingBlock:'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    procedure enumerateRangesWithOptions_usingBlock (opts: NSEnumerationOptions; block: NSIndexSetEnumerateRangesWithOptionsCallback); message 'enumerateRangesWithOptions:usingBlock:'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    procedure enumerateRangesInRange_options_usingBlock (range: NSRange; opts: NSEnumerationOptions; block: NSIndexSetEnumerateRangesInRangeCallback); message 'enumerateRangesInRange:options:usingBlock:'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  NSMutableIndexSet = objcclass external (NSIndexSet)
  private
    _reserved: pointer;
  public
    procedure addIndexes (indexSet_: NSIndexSet); message 'addIndexes:';
    procedure removeIndexes (indexSet_: NSIndexSet); message 'removeIndexes:';
    procedure removeAllIndexes; message 'removeAllIndexes';
    procedure addIndex (value: NSUInteger); message 'addIndex:';
    procedure removeIndex (value: NSUInteger); message 'removeIndex:';
    procedure addIndexesInRange (range: NSRange); message 'addIndexesInRange:';
    procedure removeIndexesInRange (range: NSRange); message 'removeIndexesInRange:';
    procedure shiftIndexesStartingAtIndex_by (index: NSUInteger; delta: NSInteger); message 'shiftIndexesStartingAtIndex:by:';
  end;
{$endif}

