{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNContactVCardSerialization.h }

{$ifdef TYPES}
type
  CNContactVCardSerializationPtr = ^CNContactVCardSerialization;
{$endif}

{$ifdef CLASSES}

type
  CNContactVCardSerialization = objcclass external (NSObject)
  public
    class function descriptorForRequiredKeys: CNKeyDescriptorProtocol; message 'descriptorForRequiredKeys';
    class function dataWithContacts_error (contacts: NSArray; error: NSErrorPtr): NSData; message 'dataWithContacts:error:';
    class function contactsWithData_error (data: NSData; error: NSErrorPtr): NSArray; message 'contactsWithData:error:';
  end;
{$endif}

