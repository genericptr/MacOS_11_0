{ Parsed from Foundation.framework NSSortDescriptor.h }

{$ifdef TYPES}
type
  NSSortDescriptorPtr = ^NSSortDescriptor;
{$endif}

{$ifdef CLASSES}

type
  NSSortDescriptor = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _sortDescriptorFlags: NSUInteger;
    _key: NSString;
    _selector: SEL;
    _selectorOrBlock: id;
  public
    class function sortDescriptorWithKey_ascending (key: NSString; ascending: objcbool): id; message 'sortDescriptorWithKey:ascending:'; { available in macos , ios , watchos , tvos  }
    class function sortDescriptorWithKey_ascending_selector (key: NSString; ascending: objcbool; selector: SEL): id; message 'sortDescriptorWithKey:ascending:selector:'; { available in macos , ios , watchos , tvos  }
    function initWithKey_ascending (key: NSString; ascending: objcbool): id; message 'initWithKey:ascending:';
    function initWithKey_ascending_selector (key: NSString; ascending: objcbool; selector: SEL): id; message 'initWithKey:ascending:selector:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function key: NSString; message 'key';
    function ascending: objcbool; message 'ascending';
    function selector: SEL; message 'selector';
    procedure allowEvaluation; message 'allowEvaluation'; { available in macos , ios , watchos , tvos  }
    class function sortDescriptorWithKey_ascending_comparator (key_: NSString; ascending_: objcbool; cmptr: NSComparator): id; message 'sortDescriptorWithKey:ascending:comparator:'; { available in macos , ios , watchos , tvos  }
    function initWithKey_ascending_comparator (key_: NSString; ascending_: objcbool; cmptr: NSComparator): id; message 'initWithKey:ascending:comparator:'; { available in macos , ios , watchos , tvos  }
    function comparator: NSComparator; message 'comparator'; { available in macos , ios , watchos , tvos  }
    function compareObject_toObject (object1: id; object2: id): NSComparisonResult; message 'compareObject:toObject:';
    function reversedSortDescriptor: id; message 'reversedSortDescriptor';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSSet_NSSortDescriptorSorting = objccategory external name 'NSSortDescriptorSorting' (NSSet)
    function sortedArrayUsingDescriptors (sortDescriptors: NSArray): NSArray; message 'sortedArrayUsingDescriptors:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSArray_NSSortDescriptorSorting = objccategory external name 'NSSortDescriptorSorting' (NSArray)
    function sortedArrayUsingDescriptors (sortDescriptors: NSArray): NSArray; message 'sortedArrayUsingDescriptors:';
  end;

type
  NSSortDescriptorSorting = objccategory external (NSMutableArray)
    procedure sortUsingDescriptors (sortDescriptors: NSArray); message 'sortUsingDescriptors:';
  end;

type
  NSOrderedSet_NSKeyValueSorting = objccategory external name 'NSKeyValueSorting' (NSOrderedSet)
    function sortedArrayUsingDescriptors (sortDescriptors: NSArray): NSArray; message 'sortedArrayUsingDescriptors:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSKeyValueSorting = objccategory external (NSMutableOrderedSet)
    procedure sortUsingDescriptors (sortDescriptors: NSArray); message 'sortUsingDescriptors:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

