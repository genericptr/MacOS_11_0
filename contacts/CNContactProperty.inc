{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNContactProperty.h }

{$ifdef TYPES}
type
  CNContactPropertyPtr = ^CNContactProperty;
{$endif}

{$ifdef CLASSES}

type
  CNContactProperty = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function contact: CNContact; message 'contact';
    function key: NSString; message 'key';
    function value: id; message 'value';
    function identifier: NSString; message 'identifier';
    function label_: NSString; message 'label';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

