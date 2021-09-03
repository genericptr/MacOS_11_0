{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSManagedObjectID.h }

{$ifdef TYPES}
type
  NSManagedObjectIDPtr = ^NSManagedObjectID;
{$endif}

{$ifdef CLASSES}

type
  NSManagedObjectID = objcclass external (NSObject, NSCopyingProtocol)
  private
  public
    function entity: NSEntityDescription; message 'entity';
    function persistentStore: NSPersistentStore; message 'persistentStore';
    function isTemporaryID: objcbool; message 'isTemporaryID';
    function URIRepresentation: NSURL; message 'URIRepresentation';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

