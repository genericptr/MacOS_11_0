{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNMutableContact.h }

{$ifdef TYPES}
type
  CNMutableContactPtr = ^CNMutableContact;
{$endif}

{$ifdef CLASSES}

type
  CNMutableContact = objcclass external (CNContact)
  public
    procedure setContactType(newValue: CNContactType); message 'setContactType:';
    function contactType: CNContactType; message 'contactType';
    procedure setNamePrefix(newValue: NSString); message 'setNamePrefix:';
    function namePrefix: NSString; message 'namePrefix';
    procedure setGivenName(newValue: NSString); message 'setGivenName:';
    function givenName: NSString; message 'givenName';
    procedure setMiddleName(newValue: NSString); message 'setMiddleName:';
    function middleName: NSString; message 'middleName';
    procedure setFamilyName(newValue: NSString); message 'setFamilyName:';
    function familyName: NSString; message 'familyName';
    procedure setPreviousFamilyName(newValue: NSString); message 'setPreviousFamilyName:';
    function previousFamilyName: NSString; message 'previousFamilyName';
    procedure setNameSuffix(newValue: NSString); message 'setNameSuffix:';
    function nameSuffix: NSString; message 'nameSuffix';
    procedure setNickname(newValue: NSString); message 'setNickname:';
    function nickname: NSString; message 'nickname';
    procedure setOrganizationName(newValue: NSString); message 'setOrganizationName:';
    function organizationName: NSString; message 'organizationName';
    procedure setDepartmentName(newValue: NSString); message 'setDepartmentName:';
    function departmentName: NSString; message 'departmentName';
    procedure setJobTitle(newValue: NSString); message 'setJobTitle:';
    function jobTitle: NSString; message 'jobTitle';
    procedure setPhoneticGivenName(newValue: NSString); message 'setPhoneticGivenName:';
    function phoneticGivenName: NSString; message 'phoneticGivenName';
    procedure setPhoneticMiddleName(newValue: NSString); message 'setPhoneticMiddleName:';
    function phoneticMiddleName: NSString; message 'phoneticMiddleName';
    procedure setPhoneticFamilyName(newValue: NSString); message 'setPhoneticFamilyName:';
    function phoneticFamilyName: NSString; message 'phoneticFamilyName';
    procedure setPhoneticOrganizationName(newValue: NSString); message 'setPhoneticOrganizationName:';
    function phoneticOrganizationName: NSString; message 'phoneticOrganizationName';
    procedure setNote(newValue: NSString); message 'setNote:';
    function note: NSString; message 'note';
    procedure setImageData(newValue: NSData); message 'setImageData:';
    function imageData: NSData; message 'imageData';
    procedure setPhoneNumbers(newValue: NSArray); message 'setPhoneNumbers:';
    function phoneNumbers: NSArray; message 'phoneNumbers';
    procedure setEmailAddresses(newValue: NSArray); message 'setEmailAddresses:';
    function emailAddresses: NSArray; message 'emailAddresses';
    procedure setPostalAddresses(newValue: NSArray); message 'setPostalAddresses:';
    function postalAddresses: NSArray; message 'postalAddresses';
    procedure setUrlAddresses(newValue: NSArray); message 'setUrlAddresses:';
    function urlAddresses: NSArray; message 'urlAddresses';
    procedure setContactRelations(newValue: NSArray); message 'setContactRelations:';
    function contactRelations: NSArray; message 'contactRelations';
    procedure setSocialProfiles(newValue: NSArray); message 'setSocialProfiles:';
    function socialProfiles: NSArray; message 'socialProfiles';
    procedure setInstantMessageAddresses(newValue: NSArray); message 'setInstantMessageAddresses:';
    function instantMessageAddresses: NSArray; message 'instantMessageAddresses';
    procedure setBirthday(newValue: NSDateComponents); message 'setBirthday:';
    function birthday: NSDateComponents; message 'birthday';
    procedure setNonGregorianBirthday(newValue: NSDateComponents); message 'setNonGregorianBirthday:';
    function nonGregorianBirthday: NSDateComponents; message 'nonGregorianBirthday';
    procedure setDates(newValue: NSArray); message 'setDates:';
    function dates: NSArray; message 'dates';
  end;
{$endif}

