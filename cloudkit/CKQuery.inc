{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKQuery.h }

{$ifdef TYPES}
type
  CKQueryPtr = ^CKQuery;
{$endif}

{$ifdef CLASSES}

type
  CKQuery = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordType_predicate (recordType: CKRecordType; predicate: NSPredicate): id; message 'initWithRecordType:predicate:'; { NS_DESIGNATED_INITIALIZER }
    function recordType: CKRecordType; message 'recordType';
    function predicate: NSPredicate; message 'predicate';
    procedure setSortDescriptors(newValue: NSArray); message 'setSortDescriptors:';
    function sortDescriptors: NSArray; message 'sortDescriptors';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

