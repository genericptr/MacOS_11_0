{ Parsed from AppKit.framework NSPersistentDocument.h }

{$ifdef TYPES}
type
  NSPersistentDocumentPtr = ^NSPersistentDocument;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentDocument = objcclass external (NSDocument)
  public
    procedure setManagedObjectContext(newValue: NSManagedObjectContext); message 'setManagedObjectContext:';
    function managedObjectContext: NSManagedObjectContext; message 'managedObjectContext';
    function managedObjectModel: NSManagedObjectModel; message 'managedObjectModel';
    function configurePersistentStoreCoordinatorForURL_ofType_modelConfiguration_storeOptions_error (url: NSURL; fileType_: NSString; configuration: NSString; storeOptions: NSDictionary; error: NSErrorPtr): objcbool; message 'configurePersistentStoreCoordinatorForURL:ofType:modelConfiguration:storeOptions:error:'; { available in macos 10.5 }
    function persistentStoreTypeForFileType (fileType_: NSString): NSString; message 'persistentStoreTypeForFileType:';
    function writeToURL_ofType_forSaveOperation_originalContentsURL_error (absoluteURL: NSURL; typeName: NSString; saveOperation: NSSaveOperationType; absoluteOriginalContentsURL: NSURL; error: NSErrorPtr): objcbool; message 'writeToURL:ofType:forSaveOperation:originalContentsURL:error:';
    function readFromURL_ofType_error (absoluteURL: NSURL; typeName: NSString; error: NSErrorPtr): objcbool; message 'readFromURL:ofType:error:';
    function revertToContentsOfURL_ofType_error (inAbsoluteURL: NSURL; inTypeName: NSString; outError: NSErrorPtr): objcbool; message 'revertToContentsOfURL:ofType:error:';
  end;


type
  NSPersistentDocument_NSDeprecated = objccategory external name 'NSDeprecated' (NSPersistentDocument)
    function configurePersistentStoreCoordinatorForURL_ofType_error (url: NSURL; fileType_: NSString; error: NSErrorPtr): objcbool; message 'configurePersistentStoreCoordinatorForURL:ofType:error:'; deprecated;
  end;
{$endif}

