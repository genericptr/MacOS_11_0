{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKUserIdentity.h }

{$ifdef TYPES}
type
  CKUserIdentityPtr = ^CKUserIdentity;
{$endif}

{$ifdef CLASSES}

type
  CKUserIdentity = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function lookupInfo: CKUserIdentityLookupInfo; message 'lookupInfo';
    function nameComponents: NSPersonNameComponents; message 'nameComponents';
    function userRecordID: CKRecordID; message 'userRecordID';
    function contactIdentifiers: NSArray; message 'contactIdentifiers'; { unavailable in tvos }
    function hasiCloudAccount: objcbool; message 'hasiCloudAccount';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

