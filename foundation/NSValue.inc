{ Parsed from Foundation.framework NSValue.h }

{$ifdef TYPES}
type
  NSValuePtr = ^NSValue;
  NSNumberPtr = ^NSNumber;
{$endif}

{$ifdef CLASSES}

type
  NSValue = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure getValue_size (value: pointer; size: NSUInteger); message 'getValue:size:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function objCType: PChar; message 'objCType';
    function initWithBytes_objCType (value: pointer; type_: PChar): id; message 'initWithBytes:objCType:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSValueCreation = objccategory external (NSValue)
    class function valueWithBytes_objCType (value: pointer; type_: PChar): NSValue; message 'valueWithBytes:objCType:';
    class function value_withObjCType (value: pointer; type_: PChar): NSValue; message 'value:withObjCType:';
  end;

type
  NSValueExtensionMethods = objccategory external (NSValue)
    class function valueWithNonretainedObject (anObject: id): NSValue; message 'valueWithNonretainedObject:';
    function nonretainedObjectValue: id; message 'nonretainedObjectValue';
    class function valueWithPointer (pointer_: pointer): NSValue; message 'valueWithPointer:';
    function pointerValue: pointer; message 'pointerValue';
    function isEqualToValue (value: NSValue): objcbool; message 'isEqualToValue:';
  end;


type
  NSNumber = objcclass external (NSValue)
  public
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithChar (value: char): NSNumber; message 'initWithChar:'; { NS_DESIGNATED_INITIALIZER }
    function initWithUnsignedChar (value: char): NSNumber; message 'initWithUnsignedChar:'; { NS_DESIGNATED_INITIALIZER }
    function initWithShort (value: cshort): NSNumber; message 'initWithShort:'; { NS_DESIGNATED_INITIALIZER }
    function initWithUnsignedShort (value: cushort): NSNumber; message 'initWithUnsignedShort:'; { NS_DESIGNATED_INITIALIZER }
    function initWithInt (value: cint): NSNumber; message 'initWithInt:'; { NS_DESIGNATED_INITIALIZER }
    function initWithUnsignedInt (value: cuint): NSNumber; message 'initWithUnsignedInt:'; { NS_DESIGNATED_INITIALIZER }
    function initWithLong (value: clong): NSNumber; message 'initWithLong:'; { NS_DESIGNATED_INITIALIZER }
    function initWithUnsignedLong (value: culong): NSNumber; message 'initWithUnsignedLong:'; { NS_DESIGNATED_INITIALIZER }
    function initWithLongLong (value: clonglong): NSNumber; message 'initWithLongLong:'; { NS_DESIGNATED_INITIALIZER }
    function initWithUnsignedLongLong (value: culonglong): NSNumber; message 'initWithUnsignedLongLong:'; { NS_DESIGNATED_INITIALIZER }
    function initWithFloat (value: single): NSNumber; message 'initWithFloat:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDouble (value: double): NSNumber; message 'initWithDouble:'; { NS_DESIGNATED_INITIALIZER }
    function initWithBool (value: objcbool): NSNumber; message 'initWithBool:'; { NS_DESIGNATED_INITIALIZER }
    function initWithInteger (value: NSInteger): NSNumber; message 'initWithInteger:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function initWithUnsignedInteger (value: NSUInteger): NSNumber; message 'initWithUnsignedInteger:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function charValue: char; message 'charValue';
    function unsignedCharValue: char; message 'unsignedCharValue';
    function shortValue: cshort; message 'shortValue';
    function unsignedShortValue: cushort; message 'unsignedShortValue';
    function intValue: cint; message 'intValue';
    function unsignedIntValue: cuint; message 'unsignedIntValue';
    function longValue: clong; message 'longValue';
    function unsignedLongValue: culong; message 'unsignedLongValue';
    function longLongValue: clonglong; message 'longLongValue';
    function unsignedLongLongValue: culonglong; message 'unsignedLongLongValue';
    function floatValue: single; message 'floatValue';
    function doubleValue: double; message 'doubleValue';
    function boolValue: objcbool; message 'boolValue';
    function integerValue: NSInteger; message 'integerValue'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function unsignedIntegerValue: NSUInteger; message 'unsignedIntegerValue'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function stringValue: NSString; message 'stringValue';
    function compare (otherNumber: NSNumber): NSComparisonResult; message 'compare:';
    function isEqualToNumber (number: NSNumber): objcbool; message 'isEqualToNumber:';
    function descriptionWithLocale (locale: id): NSString; message 'descriptionWithLocale:';
  end;


type
  NSNumberCreation = objccategory external (NSNumber)
    class function numberWithChar (value: char): NSNumber; message 'numberWithChar:';
    class function numberWithUnsignedChar (value: char): NSNumber; message 'numberWithUnsignedChar:';
    class function numberWithShort (value: cshort): NSNumber; message 'numberWithShort:';
    class function numberWithUnsignedShort (value: cushort): NSNumber; message 'numberWithUnsignedShort:';
    class function numberWithInt (value: cint): NSNumber; message 'numberWithInt:';
    class function numberWithUnsignedInt (value: cuint): NSNumber; message 'numberWithUnsignedInt:';
    class function numberWithLong (value: clong): NSNumber; message 'numberWithLong:';
    class function numberWithUnsignedLong (value: culong): NSNumber; message 'numberWithUnsignedLong:';
    class function numberWithLongLong (value: clonglong): NSNumber; message 'numberWithLongLong:';
    class function numberWithUnsignedLongLong (value: culonglong): NSNumber; message 'numberWithUnsignedLongLong:';
    class function numberWithFloat (value: single): NSNumber; message 'numberWithFloat:';
    class function numberWithDouble (value: double): NSNumber; message 'numberWithDouble:';
    class function numberWithBool (value: objcbool): NSNumber; message 'numberWithBool:';
    class function numberWithInteger (value: NSInteger): NSNumber; message 'numberWithInteger:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    class function numberWithUnsignedInteger (value: NSUInteger): NSNumber; message 'numberWithUnsignedInteger:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
  end;

type
  NSValue_NSDeprecated = objccategory external name 'NSDeprecated' (NSValue)
    procedure getValue (value: pointer); message 'getValue:'; deprecated 'replace with getValue:size:';
  end;
{$endif}

