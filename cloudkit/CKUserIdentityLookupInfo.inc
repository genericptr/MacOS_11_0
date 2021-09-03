{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKUserIdentityLookupInfo.h }

{$ifdef TYPES}
type
  CKUserIdentityLookupInfoPtr = ^CKUserIdentityLookupInfo;
{$endif}

{$ifdef CLASSES}

type
  CKUserIdentityLookupInfo = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function initWithEmailAddress (emailAddress: NSString): id; message 'initWithEmailAddress:';
    function initWithPhoneNumber (phoneNumber: NSString): id; message 'initWithPhoneNumber:';
    function initWithUserRecordID (userRecordID: CKRecordID): id; message 'initWithUserRecordID:';
    class function lookupInfosWithEmails (emails: NSArray): NSArray; message 'lookupInfosWithEmails:';
    class function lookupInfosWithPhoneNumbers (phoneNumbers: NSArray): NSArray; message 'lookupInfosWithPhoneNumbers:';
    class function lookupInfosWithRecordIDs (recordIDs: NSArray): NSArray; message 'lookupInfosWithRecordIDs:';
    function emailAddress: NSString; message 'emailAddress';
    function phoneNumber: NSString; message 'phoneNumber';
    function userRecordID: CKRecordID; message 'userRecordID';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

