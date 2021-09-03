{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSPersistentCloudKitContainer.h }

{$ifdef TYPES}
type
  NSPersistentCloudKitContainerPtr = ^NSPersistentCloudKitContainer;
{$endif}

{$ifdef TYPES}
type
  NSPersistentCloudKitContainerSchemaInitializationOptions = NSUInteger;
  NSPersistentCloudKitContainerSchemaInitializationOptionsPtr = ^NSPersistentCloudKitContainerSchemaInitializationOptions;

const
  NSPersistentCloudKitContainerSchemaInitializationOptionsNone = 0;
  NSPersistentCloudKitContainerSchemaInitializationOptionsDryRun = 1 shl 1;
  NSPersistentCloudKitContainerSchemaInitializationOptionsPrintSchema = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentCloudKitContainer = objcclass external (NSPersistentContainer)
  public
    function initializeCloudKitSchemaWithOptions_error (options: NSPersistentCloudKitContainerSchemaInitializationOptions; error: NSErrorPtr): objcbool; message 'initializeCloudKitSchemaWithOptions:error:';
    function recordForManagedObjectID (managedObjectID: NSManagedObjectID): CKRecord; message 'recordForManagedObjectID:';
    function recordsForManagedObjectIDs (managedObjectIDs: NSArray): NSDictionary; message 'recordsForManagedObjectIDs:';
    function recordIDForManagedObjectID (managedObjectID: NSManagedObjectID): CKRecordID; message 'recordIDForManagedObjectID:';
    function recordIDsForManagedObjectIDs (managedObjectIDs: NSArray): NSDictionary; message 'recordIDsForManagedObjectIDs:';
    function canUpdateRecordForManagedObjectWithID (objectID: NSManagedObjectID): objcbool; message 'canUpdateRecordForManagedObjectWithID:';
    function canDeleteRecordForManagedObjectWithID (objectID: NSManagedObjectID): objcbool; message 'canDeleteRecordForManagedObjectWithID:';
    function canModifyManagedObjectsInStore (store: NSPersistentStore): objcbool; message 'canModifyManagedObjectsInStore:'; { available in macosx ,ios ,tvos ,watchos  }
  end;
{$endif}
