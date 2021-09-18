{ Parsed from Contacts.framework CNContactFormatter.h }

{$ifdef TYPES}
type
  CNContactFormatterPtr = ^CNContactFormatter;
{$endif}

{$ifdef TYPES}
type
  CNContactFormatterStyle = NSInteger;
  CNContactFormatterStylePtr = ^CNContactFormatterStyle;

const
  CNContactFormatterStyleFullName = 0;
  CNContactFormatterStylePhoneticFullName = 1;

type
  CNContactDisplayNameOrder = NSInteger;
  CNContactDisplayNameOrderPtr = ^CNContactDisplayNameOrder;

const
  CNContactDisplayNameOrderUserDefault = 0;
  CNContactDisplayNameOrderGivenNameFirst = 1;
  CNContactDisplayNameOrderFamilyNameFirst = 2;
{$endif}

{$ifdef CLASSES}

type
  CNContactFormatter = objcclass external (NSFormatter, NSSecureCodingProtocol)
  public
    class function descriptorForRequiredKeysForStyle (style: CNContactFormatterStyle): id; message 'descriptorForRequiredKeysForStyle:';
    class function descriptorForRequiredKeysForNameOrder: CNKeyDescriptorProtocol; message 'descriptorForRequiredKeysForNameOrder';
    class function descriptorForRequiredKeysForDelimiter: CNKeyDescriptorProtocol; message 'descriptorForRequiredKeysForDelimiter';
    class function stringFromContact_style (contact: CNContact; style: CNContactFormatterStyle): NSString; message 'stringFromContact:style:';
    class function attributedStringFromContact_style_defaultAttributes (contact: CNContact; style: CNContactFormatterStyle; attributes: NSDictionary): NSAttributedString; message 'attributedStringFromContact:style:defaultAttributes:';
    class function nameOrderForContact (contact: CNContact): CNContactDisplayNameOrder; message 'nameOrderForContact:';
    class function delimiterForContact (contact: CNContact): NSString; message 'delimiterForContact:';
    procedure setStyle(newValue: CNContactFormatterStyle); message 'setStyle:';
    function style: CNContactFormatterStyle; message 'style';
    function stringFromContact (contact: CNContact): NSString; message 'stringFromContact:';
    function attributedStringFromContact_defaultAttributes (contact: CNContact; attributes: NSDictionary): NSAttributedString; message 'attributedStringFromContact:defaultAttributes:';

    { Adopted protocols }
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNContactPropertyAttribute: NSString; cvar; external;
{$endif}

