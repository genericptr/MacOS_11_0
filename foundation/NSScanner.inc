{ Parsed from Foundation.framework NSScanner.h }

{$ifdef TYPES}
type
  NSScannerPtr = ^NSScanner;
{$endif}

{$ifdef CLASSES}

type
  NSScanner = objcclass external (NSObject, NSCopyingProtocol)
  public
    function string_: NSString; message 'string';
    procedure setScanLocation(newValue: NSUInteger); message 'setScanLocation:';
    function scanLocation: NSUInteger; message 'scanLocation';
    procedure setCharactersToBeSkipped(newValue: NSCharacterSet); message 'setCharactersToBeSkipped:';
    function charactersToBeSkipped: NSCharacterSet; message 'charactersToBeSkipped';
    procedure setCaseSensitive(newValue: objcbool); message 'setCaseSensitive:';
    function caseSensitive: objcbool; message 'caseSensitive';
    procedure setLocale(newValue: id); message 'setLocale:';
    function locale: id; message 'locale';
    function initWithString (string_: NSString): id; message 'initWithString:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;


type
  NSExtendedScanner = objccategory external (NSScanner)
    function scanInt (result_: pcint): objcbool; message 'scanInt:';
    function scanInteger (result_: NSIntegerPtr): objcbool; message 'scanInteger:'; { available in macos , ios , watchos , tvos  }
    function scanLongLong (result_: pclonglong): objcbool; message 'scanLongLong:';
    function scanUnsignedLongLong (result_: pculonglong): objcbool; message 'scanUnsignedLongLong:'; { available in macos , ios , watchos , tvos  }
    function scanFloat (result_: psingle): objcbool; message 'scanFloat:';
    function scanDouble (result_: pdouble): objcbool; message 'scanDouble:';
    function scanHexInt (result_: pcuint): objcbool; message 'scanHexInt:';
    function scanHexLongLong (result_: pculonglong): objcbool; message 'scanHexLongLong:';
    function scanHexFloat (result_: psingle): objcbool; message 'scanHexFloat:';
    function scanHexDouble (result_: pdouble): objcbool; message 'scanHexDouble:';
    function scanString_intoString (string_: NSString; result_: NSStringPtr): objcbool; message 'scanString:intoString:';
    function scanCharactersFromSet_intoString (set_: NSCharacterSet; result_: NSStringPtr): objcbool; message 'scanCharactersFromSet:intoString:';
    function scanUpToString_intoString (string_: NSString; result_: NSStringPtr): objcbool; message 'scanUpToString:intoString:';
    function scanUpToCharactersFromSet_intoString (set_: NSCharacterSet; result_: NSStringPtr): objcbool; message 'scanUpToCharactersFromSet:intoString:';
    function isAtEnd: objcbool; message 'isAtEnd';
    class function scannerWithString (string_: NSString): id; message 'scannerWithString:';
    class function localizedScannerWithString (string_: NSString): id; message 'localizedScannerWithString:';
  end;
{$endif}

