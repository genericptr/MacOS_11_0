{ Parsed from Foundation.framework NSCharacterSet.h }

{$ifdef TYPES}
type
  NSCharacterSetPtr = ^NSCharacterSet;
  NSMutableCharacterSetPtr = ^NSMutableCharacterSet;
{$endif}

{$ifdef TYPES}
const
  NSOpenStepUnicodeReservedBase = $F400;
{$endif}

{$ifdef CLASSES}

type
  NSCharacterSet = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    class function controlCharacterSet: NSCharacterSet; message 'controlCharacterSet';
    class function whitespaceCharacterSet: NSCharacterSet; message 'whitespaceCharacterSet';
    class function whitespaceAndNewlineCharacterSet: NSCharacterSet; message 'whitespaceAndNewlineCharacterSet';
    class function decimalDigitCharacterSet: NSCharacterSet; message 'decimalDigitCharacterSet';
    class function letterCharacterSet: NSCharacterSet; message 'letterCharacterSet';
    class function lowercaseLetterCharacterSet: NSCharacterSet; message 'lowercaseLetterCharacterSet';
    class function uppercaseLetterCharacterSet: NSCharacterSet; message 'uppercaseLetterCharacterSet';
    class function nonBaseCharacterSet: NSCharacterSet; message 'nonBaseCharacterSet';
    class function alphanumericCharacterSet: NSCharacterSet; message 'alphanumericCharacterSet';
    class function decomposableCharacterSet: NSCharacterSet; message 'decomposableCharacterSet';
    class function illegalCharacterSet: NSCharacterSet; message 'illegalCharacterSet';
    class function punctuationCharacterSet: NSCharacterSet; message 'punctuationCharacterSet';
    class function capitalizedLetterCharacterSet: NSCharacterSet; message 'capitalizedLetterCharacterSet';
    class function symbolCharacterSet: NSCharacterSet; message 'symbolCharacterSet';
    class function newlineCharacterSet: NSCharacterSet; message 'newlineCharacterSet'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    class function characterSetWithRange (aRange: NSRange): NSCharacterSet; message 'characterSetWithRange:';
    class function characterSetWithCharactersInString (aString: NSString): NSCharacterSet; message 'characterSetWithCharactersInString:';
    class function characterSetWithBitmapRepresentation (data: NSData): NSCharacterSet; message 'characterSetWithBitmapRepresentation:';
    class function characterSetWithContentsOfFile (fName: NSString): NSCharacterSet; message 'characterSetWithContentsOfFile:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function characterIsMember (aCharacter: unichar): objcbool; message 'characterIsMember:';
    function bitmapRepresentation: NSData; message 'bitmapRepresentation';
    function invertedSet: NSCharacterSet; message 'invertedSet';
    function longCharacterIsMember (theLongChar: UTF32Char): objcbool; message 'longCharacterIsMember:';
    function isSupersetOfSet (theOtherSet: NSCharacterSet): objcbool; message 'isSupersetOfSet:';
    function hasMemberInPlane (thePlane: cuint8): objcbool; message 'hasMemberInPlane:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  NSMutableCharacterSet = objcclass external (NSCharacterSet, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure addCharactersInRange (aRange: NSRange); message 'addCharactersInRange:';
    procedure removeCharactersInRange (aRange: NSRange); message 'removeCharactersInRange:';
    procedure addCharactersInString (aString: NSString); message 'addCharactersInString:';
    procedure removeCharactersInString (aString: NSString); message 'removeCharactersInString:';
    procedure formUnionWithCharacterSet (otherSet: NSCharacterSet); message 'formUnionWithCharacterSet:';
    procedure formIntersectionWithCharacterSet (otherSet: NSCharacterSet); message 'formIntersectionWithCharacterSet:';
    procedure invert; message 'invert';
    class function controlCharacterSet_: NSMutableCharacterSet; message 'controlCharacterSet';
    class function whitespaceCharacterSet_: NSMutableCharacterSet; message 'whitespaceCharacterSet';
    class function whitespaceAndNewlineCharacterSet_: NSMutableCharacterSet; message 'whitespaceAndNewlineCharacterSet';
    class function decimalDigitCharacterSet_: NSMutableCharacterSet; message 'decimalDigitCharacterSet';
    class function letterCharacterSet_: NSMutableCharacterSet; message 'letterCharacterSet';
    class function lowercaseLetterCharacterSet_: NSMutableCharacterSet; message 'lowercaseLetterCharacterSet';
    class function uppercaseLetterCharacterSet_: NSMutableCharacterSet; message 'uppercaseLetterCharacterSet';
    class function nonBaseCharacterSet_: NSMutableCharacterSet; message 'nonBaseCharacterSet';
    class function alphanumericCharacterSet_: NSMutableCharacterSet; message 'alphanumericCharacterSet';
    class function decomposableCharacterSet_: NSMutableCharacterSet; message 'decomposableCharacterSet';
    class function illegalCharacterSet_: NSMutableCharacterSet; message 'illegalCharacterSet';
    class function punctuationCharacterSet_: NSMutableCharacterSet; message 'punctuationCharacterSet';
    class function capitalizedLetterCharacterSet_: NSMutableCharacterSet; message 'capitalizedLetterCharacterSet';
    class function symbolCharacterSet_: NSMutableCharacterSet; message 'symbolCharacterSet';
    class function newlineCharacterSet_: NSMutableCharacterSet; message 'newlineCharacterSet'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    class function characterSetWithRange (aRange: NSRange): NSMutableCharacterSet; message 'characterSetWithRange:';
    class function characterSetWithCharactersInString (aString: NSString): NSMutableCharacterSet; message 'characterSetWithCharactersInString:';
    class function characterSetWithBitmapRepresentation (data: NSData): NSMutableCharacterSet; message 'characterSetWithBitmapRepresentation:';
    class function characterSetWithContentsOfFile (fName: NSString): NSMutableCharacterSet; message 'characterSetWithContentsOfFile:';
  end;
{$endif}

