{ Parsed from CoreData.framework NSPersistentHistoryChangeRequest.h }

{$ifdef TYPES}
type
  NSPersistentHistoryChangeRequestPtr = ^NSPersistentHistoryChangeRequest;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentHistoryChangeRequest = objcclass external (NSPersistentStoreRequest)
  private
  public
    class function fetchHistoryAfterDate (date: NSDate): id; message 'fetchHistoryAfterDate:';
    class function fetchHistoryAfterToken (token: NSPersistentHistoryToken): id; message 'fetchHistoryAfterToken:';
    class function fetchHistoryAfterTransaction (transaction: NSPersistentHistoryTransaction): id; message 'fetchHistoryAfterTransaction:';
    class function fetchHistoryWithFetchRequest (fetchRequest: NSFetchRequest): id; message 'fetchHistoryWithFetchRequest:'; { available in macosx ,ios ,tvos ,watchos  }
    class function deleteHistoryBeforeDate (date: NSDate): id; message 'deleteHistoryBeforeDate:';
    class function deleteHistoryBeforeToken (token: NSPersistentHistoryToken): id; message 'deleteHistoryBeforeToken:';
    class function deleteHistoryBeforeTransaction (transaction: NSPersistentHistoryTransaction): id; message 'deleteHistoryBeforeTransaction:';
    procedure setResultType(newValue: NSPersistentHistoryResultType); message 'setResultType:';
    function resultType: NSPersistentHistoryResultType; message 'resultType';
    function token: NSPersistentHistoryToken; message 'token';
    procedure setFetchRequest(newValue: NSFetchRequest); message 'setFetchRequest:'; { available in macosx ,ios ,tvos ,watchos  }
    function fetchRequest: NSFetchRequest; message 'fetchRequest'; { available in macosx ,ios ,tvos ,watchos  }
  end;
{$endif}

