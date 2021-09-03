{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSObjectController.h }

{$ifdef TYPES}
type
  NSObjectControllerPtr = ^NSObjectController;
{$endif}

{$ifdef CLASSES}

type
  NSObjectController = objcclass external (NSController)
  public
    function initWithContent (content: id): id; message 'initWithContent:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setContent(newValue: id); message 'setContent:';
    function content: id; message 'content';
    function selection: id; message 'selection';
    function selectedObjects: NSArray; message 'selectedObjects';
    procedure setAutomaticallyPreparesContent(newValue: objcbool); message 'setAutomaticallyPreparesContent:';
    function automaticallyPreparesContent: objcbool; message 'automaticallyPreparesContent';
    procedure prepareContent; message 'prepareContent';
    procedure setObjectClass(newValue: pobjc_class); message 'setObjectClass:';
    function objectClass: pobjc_class; message 'objectClass';
    function newObject: id; message 'newObject';
    procedure addObject (object_: id); message 'addObject:';
    procedure removeObject (object_: id); message 'removeObject:';
    procedure setEditable(newValue: objcbool); message 'setEditable:';
    function isEditable: objcbool; message 'isEditable';
    procedure add (sender: id); message 'add:';
    function canAdd: objcbool; message 'canAdd';
    procedure remove (sender: id); message 'remove:';
    function canRemove: objcbool; message 'canRemove';
    function validateUserInterfaceItem (item: id): objcbool; message 'validateUserInterfaceItem:';
  end;


type
  NSManagedController = objccategory external (NSObjectController)
    procedure setManagedObjectContext(newValue: NSManagedObjectContext); message 'setManagedObjectContext:';
    function managedObjectContext: NSManagedObjectContext; message 'managedObjectContext';
    procedure setEntityName(newValue: NSString); message 'setEntityName:';
    function entityName: NSString; message 'entityName';
    procedure setFetchPredicate(newValue: NSPredicate); message 'setFetchPredicate:';
    function fetchPredicate: NSPredicate; message 'fetchPredicate';
    function fetchWithRequest_merge_error (fetchRequest: NSFetchRequest; merge: objcbool; error: NSErrorPtr): objcbool; message 'fetchWithRequest:merge:error:';
    procedure fetch (sender: id); message 'fetch:';
    procedure setUsesLazyFetching(newValue: objcbool); message 'setUsesLazyFetching:'; { available in macos  }
    function usesLazyFetching: objcbool; message 'usesLazyFetching'; { available in macos  }
    function defaultFetchRequest: NSFetchRequest; message 'defaultFetchRequest'; { available in macos  }
  end;
{$endif}

