{ Parsed from CoreData.framework NSPersistentHistoryTransaction.h }

{$ifdef TYPES}
type
  NSPersistentHistoryTransactionPtr = ^NSPersistentHistoryTransaction;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentHistoryTransaction = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function entityDescriptionWithContext (context: NSManagedObjectContext): NSEntityDescription; message 'entityDescriptionWithContext:'; { available in macosx 10.15,ios 13.0,tvos 13.0,watchos 6.0 }
    class function entityDescription: NSEntityDescription; message 'entityDescription'; { available in macosx 10.15,ios 13.0,tvos 13.0,watchos 6.0 }
    class function fetchRequest: NSFetchRequest; message 'fetchRequest'; { available in macosx 10.15,ios 13.0,tvos 13.0,watchos 6.0 }
    function timestamp: NSDate; message 'timestamp';
    function changes: NSArray; message 'changes';
    function transactionNumber: cint64; message 'transactionNumber';
    function storeID: NSString; message 'storeID';
    function bundleID: NSString; message 'bundleID';
    function processID: NSString; message 'processID';
    function contextName: NSString; message 'contextName';
    function author: NSString; message 'author';
    function token: NSPersistentHistoryToken; message 'token';
    function objectIDNotification: NSNotification; message 'objectIDNotification';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

