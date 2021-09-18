{ Parsed from Contacts.framework CNContactsUserDefaults.h }

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

