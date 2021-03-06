{ Parsed from Contacts.framework CNPhoneNumber.h }

{$ifdef TYPES}
type
  CNPhoneNumberPtr = ^CNPhoneNumber;
{$endif}

{$ifdef CLASSES}

type
  CNPhoneNumber = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function phoneNumberWithStringValue (stringValue: NSString): id; message 'phoneNumberWithStringValue:';
    function initWithStringValue (string_: NSString): id; message 'initWithStringValue:';
    function init: id; message 'init'; deprecated 'in 10_11, 10_13, 9_0, 11_0, "Use initWithStringValue:"';
    class function new_: id; message 'new'; deprecated 'in 10_11, 10_13, 9_0, 11_0, "Use phoneNumberWithStringValue:"';
    function stringValue: NSString; message 'stringValue';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNLabelPhoneNumberiPhone: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNLabelPhoneNumberAppleWatch: NSString { available in macos 11.1, ios 14.3, watchos 7.2 }; cvar; external;
  CNLabelPhoneNumberMobile: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNLabelPhoneNumberMain: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNLabelPhoneNumberHomeFax: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNLabelPhoneNumberWorkFax: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNLabelPhoneNumberOtherFax: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNLabelPhoneNumberPager: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
{$endif}

