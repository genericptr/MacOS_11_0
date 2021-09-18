{ Parsed from Foundation.framework NSKeyValueCoding.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  NSUndefinedKeyException: NSExceptionName; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSKeyValueOperator = NSString;
  NSKeyValueOperatorPtr = ^NSKeyValueOperator;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAverageKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSCountKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSDistinctUnionOfArraysKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSDistinctUnionOfObjectsKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSDistinctUnionOfSetsKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSMaximumKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSMinimumKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSSumKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSUnionOfArraysKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSUnionOfObjectsKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSUnionOfSetsKeyValueOperator: NSKeyValueOperator; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSObject_NSKeyValueCoding = objccategory external name 'NSKeyValueCoding' (NSObject)
    class function accessInstanceVariablesDirectly: objcbool; message 'accessInstanceVariablesDirectly';
    function valueForKey (key: NSString): id; message 'valueForKey:';
    procedure setValue_forKey (value: id; key: NSString); message 'setValue:forKey:';
    function validateValue_forKey_error (ioValue: idPtr; inKey: NSString; outError: NSErrorPtr): objcbool; message 'validateValue:forKey:error:';
    function mutableArrayValueForKey (key: NSString): NSMutableArray; message 'mutableArrayValueForKey:';
    function mutableOrderedSetValueForKey (key: NSString): NSMutableOrderedSet; message 'mutableOrderedSetValueForKey:'; { available in macos , ios , watchos , tvos  }
    function mutableSetValueForKey (key: NSString): NSMutableSet; message 'mutableSetValueForKey:';
    function valueForKeyPath (keyPath: NSString): id; message 'valueForKeyPath:';
    procedure setValue_forKeyPath (value: id; keyPath: NSString); message 'setValue:forKeyPath:';
    function validateValue_forKeyPath_error (ioValue: idPtr; inKeyPath: NSString; outError: NSErrorPtr): objcbool; message 'validateValue:forKeyPath:error:';
    function mutableArrayValueForKeyPath (keyPath: NSString): NSMutableArray; message 'mutableArrayValueForKeyPath:';
    function mutableOrderedSetValueForKeyPath (keyPath: NSString): NSMutableOrderedSet; message 'mutableOrderedSetValueForKeyPath:'; { available in macos , ios , watchos , tvos  }
    function mutableSetValueForKeyPath (keyPath: NSString): NSMutableSet; message 'mutableSetValueForKeyPath:';
    function valueForUndefinedKey (key: NSString): id; message 'valueForUndefinedKey:';
    procedure setValue_forUndefinedKey (value: id; key: NSString); message 'setValue:forUndefinedKey:';
    procedure setNilValueForKey (key: NSString); message 'setNilValueForKey:';
    function dictionaryWithValuesForKeys (keys: NSArray): NSDictionary; message 'dictionaryWithValuesForKeys:';
    procedure setValuesForKeysWithDictionary (keyedValues: NSDictionary); message 'setValuesForKeysWithDictionary:';
  end;

type
  NSArray_NSKeyValueCoding = objccategory external name 'NSKeyValueCoding' (NSArray)
    function valueForKey (key: NSString): id; message 'valueForKey:';
    procedure setValue_forKey (value: id; key: NSString); message 'setValue:forKey:';
  end;

type
  NSDictionary_NSKeyValueCoding = objccategory external name 'NSKeyValueCoding' (NSDictionary)
    function valueForKey (key: NSString): id; message 'valueForKey:';
  end;

type
  NSMutableDictionary_NSKeyValueCoding = objccategory external name 'NSKeyValueCoding' (NSMutableDictionary)
    procedure setValue_forKey (value: id; key: NSString); message 'setValue:forKey:';
  end;

type
  NSOrderedSet_NSKeyValueCoding = objccategory external name 'NSKeyValueCoding' (NSOrderedSet)
    function valueForKey (key: NSString): id; message 'valueForKey:'; { available in macos , ios , watchos , tvos  }
    procedure setValue_forKey (value: id; key: NSString); message 'setValue:forKey:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSKeyValueCoding = objccategory external (NSSet)
    function valueForKey (key: NSString): id; message 'valueForKey:';
    procedure setValue_forKey (value: id; key: NSString); message 'setValue:forKey:';
  end;
{$endif}

{$if defined(TARGET_OS_OSX)}
{$ifdef CLASSES}

type
  NSDeprecatedKeyValueCoding = objccategory external (NSObject)
    class function useStoredAccessor: objcbool; message 'useStoredAccessor'; deprecated 'Legacy KVC API';
    function storedValueForKey (key: NSString): id; message 'storedValueForKey:'; deprecated 'Legacy KVC API';
    procedure takeStoredValue_forKey (value: id; key: NSString); message 'takeStoredValue:forKey:'; deprecated 'Legacy KVC API';
    procedure takeValue_forKey (value: id; key: NSString); message 'takeValue:forKey:'; deprecated 'Legacy KVC API';
    procedure takeValue_forKeyPath (value: id; keyPath: NSString); message 'takeValue:forKeyPath:'; deprecated 'Legacy KVC API';
    function handleQueryWithUnboundKey (key: NSString): id; message 'handleQueryWithUnboundKey:'; deprecated 'Legacy KVC API';
    procedure handleTakeValue_forUnboundKey (value: id; key: NSString); message 'handleTakeValue:forUnboundKey:'; deprecated 'Legacy KVC API';
    procedure unableToSetNilForKey (key: NSString); message 'unableToSetNilForKey:'; deprecated 'Legacy KVC API';
    function valuesForKeys (keys: NSArray): NSDictionary; message 'valuesForKeys:'; deprecated 'Legacy KVC API';
    procedure takeValuesFromDictionary (properties: NSDictionary); message 'takeValuesFromDictionary:'; deprecated 'Legacy KVC API';
  end;
{$endif}

{$endif}
