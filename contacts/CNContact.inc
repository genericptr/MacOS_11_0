{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNContact.h }

{$ifdef TYPES}
type
  CNContactPtr = ^CNContact;
  CNKeyDescriptorProtocolPtr = ^CNKeyDescriptorProtocol;
{$endif}

{$ifdef TYPES}
type
  CNContactType = NSInteger;
  CNContactTypePtr = ^CNContactType;

const
  CNContactTypePerson = 0;
  CNContactTypeOrganization = 1;

type
  CNContactSortOrder = NSInteger;
  CNContactSortOrderPtr = ^CNContactSortOrder;

const
  CNContactSortOrderNone = 0;
  CNContactSortOrderUserDefault = 1;
  CNContactSortOrderGivenName = 2;
  CNContactSortOrderFamilyName = 3;
{$endif}

{$ifdef PROTOCOLS}

type
  CNKeyDescriptorProtocol = objcprotocol external name 'CNKeyDescriptor' (NSObjectProtocol, NSSecureCodingProtocol, NSCopyingProtocol)
  end;
{$endif}

{$ifdef CLASSES}

type
  Contacts = objccategory external (NSString)
  end;


type
  CNContact = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function contactType: CNContactType; message 'contactType';
    function namePrefix: NSString; message 'namePrefix';
    function givenName: NSString; message 'givenName';
    function middleName: NSString; message 'middleName';
    function familyName: NSString; message 'familyName';
    function previousFamilyName: NSString; message 'previousFamilyName';
    function nameSuffix: NSString; message 'nameSuffix';
    function nickname: NSString; message 'nickname';
    function organizationName: NSString; message 'organizationName';
    function departmentName: NSString; message 'departmentName';
    function jobTitle: NSString; message 'jobTitle';
    function phoneticGivenName: NSString; message 'phoneticGivenName';
    function phoneticMiddleName: NSString; message 'phoneticMiddleName';
    function phoneticFamilyName: NSString; message 'phoneticFamilyName';
    function phoneticOrganizationName: NSString; message 'phoneticOrganizationName'; { available in 10_12, 10_0 }
    function note: NSString; message 'note';
    function imageData: NSData; message 'imageData';
    function thumbnailImageData: NSData; message 'thumbnailImageData';
    function imageDataAvailable: objcbool; message 'imageDataAvailable'; { available in 10_12, 9_0 }
    function phoneNumbers: NSArray; message 'phoneNumbers';
    function emailAddresses: NSArray; message 'emailAddresses';
    function postalAddresses: NSArray; message 'postalAddresses';
    function urlAddresses: NSArray; message 'urlAddresses';
    function contactRelations: NSArray; message 'contactRelations';
    function socialProfiles: NSArray; message 'socialProfiles';
    function instantMessageAddresses: NSArray; message 'instantMessageAddresses';
    function birthday: NSDateComponents; message 'birthday';
    function nonGregorianBirthday: NSDateComponents; message 'nonGregorianBirthday';
    function dates: NSArray; message 'dates';
    function isKeyAvailable (key: NSString): objcbool; message 'isKeyAvailable:';
    function areKeysAvailable (keyDescriptors: NSArray): objcbool; message 'areKeysAvailable:';
    class function localizedStringForKey (key: NSString): NSString; message 'localizedStringForKey:';
    class function comparatorForNameSortOrder (sortOrder: CNContactSortOrder): NSComparator; message 'comparatorForNameSortOrder:';
    class function descriptorForAllComparatorKeys: CNKeyDescriptorProtocol; message 'descriptorForAllComparatorKeys';
    function isUnifiedWithContactWithIdentifier (contactIdentifier: NSString): objcbool; message 'isUnifiedWithContactWithIdentifier:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNContactPropertyNotFetchedExceptionName: NSString; cvar; external;
  CNContactIdentifierKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactNamePrefixKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactGivenNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactMiddleNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactFamilyNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactPreviousFamilyNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactNameSuffixKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactNicknameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactOrganizationNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactDepartmentNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactJobTitleKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactPhoneticGivenNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactPhoneticMiddleNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactPhoneticFamilyNameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactPhoneticOrganizationNameKey: NSString { available in 10_12, 10_0 }; cvar; external;
  CNContactBirthdayKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactNonGregorianBirthdayKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactNoteKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactImageDataKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactThumbnailImageDataKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactImageDataAvailableKey: NSString { available in 10_12, 9_0 }; cvar; external;
  CNContactTypeKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactPhoneNumbersKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactEmailAddressesKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactPostalAddressesKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactDatesKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactUrlAddressesKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactRelationsKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactSocialProfilesKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNContactInstantMessageAddressesKey: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

