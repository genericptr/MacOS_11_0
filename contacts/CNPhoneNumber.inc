{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNPhoneNumber.h }

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
  CNLabelPhoneNumberiPhone: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelPhoneNumberAppleWatch: NSString { available in macos , ios , watchos  }; cvar; external;
  CNLabelPhoneNumberMobile: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelPhoneNumberMain: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelPhoneNumberHomeFax: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelPhoneNumberWorkFax: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelPhoneNumberOtherFax: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelPhoneNumberPager: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

