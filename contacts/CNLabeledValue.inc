{ Parsed from Contacts.framework CNLabeledValue.h }

{$ifdef TYPES}
type
  CNLabeledValuePtr = ^CNLabeledValue;
{$endif}

{$ifdef CLASSES}

type
  CNLabeledValue = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function label_: NSString; message 'label';
    function value: id; message 'value';
    class function labeledValueWithLabel_value (label_: NSString; value_: id): id; message 'labeledValueWithLabel:value:';
    function initWithLabel_value (label_: NSString; value_: id): id; message 'initWithLabel:value:';
    function labeledValueBySettingLabel (label_: NSString): id; message 'labeledValueBySettingLabel:';
    function labeledValueBySettingValue (value_: id): id; message 'labeledValueBySettingValue:';
    function labeledValueBySettingLabel_value (label_: NSString; value_: id): id; message 'labeledValueBySettingLabel:value:';
    class function localizedStringForLabel (label_: NSString): NSString; message 'localizedStringForLabel:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNLabelHome: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNLabelWork: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNLabelSchool: NSString { available in macos 10.15, ios 13.0 }; cvar; external;
  CNLabelOther: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNLabelEmailiCloud: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNLabelURLAddressHomePage: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  CNLabelDateAnniversary: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
{$endif}

