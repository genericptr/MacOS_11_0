{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNContactsUserDefaults.h }

{$ifdef TYPES}
type
  CNContactsUserDefaultsPtr = ^CNContactsUserDefaults;
{$endif}

{$ifdef CLASSES}

type
  CNContactsUserDefaults = objcclass external (NSObject)
  public
    class function sharedDefaults: id; message 'sharedDefaults';
    function sortOrder: CNContactSortOrder; message 'sortOrder';
    function countryCode: NSString; message 'countryCode';
  end;
{$endif}

