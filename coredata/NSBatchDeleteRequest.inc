{ Parsed from CoreData.framework NSBatchDeleteRequest.h }

{$ifdef TYPES}
type
  NSBatchDeleteRequestPtr = ^NSBatchDeleteRequest;
{$endif}

{$ifdef CLASSES}

type
  NSBatchDeleteRequest = objcclass external (NSPersistentStoreRequest)
  private
  public
    function init: id; message 'init';
    function initWithFetchRequest (fetch: NSFetchRequest): id; message 'initWithFetchRequest:'; { NS_DESIGNATED_INITIALIZER }
    function initWithObjectIDs (objects: NSArray): id; message 'initWithObjectIDs:';
    procedure setResultType(newValue: NSBatchDeleteRequestResultType); message 'setResultType:';
    function resultType: NSBatchDeleteRequestResultType; message 'resultType';
    function fetchRequest: NSFetchRequest; message 'fetchRequest';
  end;
{$endif}

