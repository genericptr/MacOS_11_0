{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNPostalAddressFormatter.h }

{$ifdef TYPES}
type
  CNPostalAddressFormatterPtr = ^CNPostalAddressFormatter;
{$endif}

{$ifdef TYPES}
type
  CNPostalAddressFormatterStyle = NSInteger;
  CNPostalAddressFormatterStylePtr = ^CNPostalAddressFormatterStyle;

const
  CNPostalAddressFormatterStyleMailingAddress = 0;
{$endif}

{$ifdef CLASSES}

type
  CNPostalAddressFormatter = objcclass external (NSFormatter)
  public
    class function stringFromPostalAddress_style (postalAddress: CNPostalAddress; style: CNPostalAddressFormatterStyle): NSString; message 'stringFromPostalAddress:style:';
    class function attributedStringFromPostalAddress_style_withDefaultAttributes (postalAddress: CNPostalAddress; style: CNPostalAddressFormatterStyle; attributes: NSDictionary): NSAttributedString; message 'attributedStringFromPostalAddress:style:withDefaultAttributes:';
    procedure setStyle(newValue: CNPostalAddressFormatterStyle); message 'setStyle:';
    function style: CNPostalAddressFormatterStyle; message 'style';
    function stringFromPostalAddress (postalAddress: CNPostalAddress): NSString; message 'stringFromPostalAddress:';
    function attributedStringFromPostalAddress_withDefaultAttributes (postalAddress: CNPostalAddress; attributes: NSDictionary): NSAttributedString; message 'attributedStringFromPostalAddress:withDefaultAttributes:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNPostalAddressPropertyAttribute: NSString; cvar; external;
  CNPostalAddressLocalizedPropertyNameAttribute: NSString; cvar; external;
{$endif}

