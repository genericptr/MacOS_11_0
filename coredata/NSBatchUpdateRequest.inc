{ Parsed from CoreData.framework NSBatchUpdateRequest.h }

{$ifdef TYPES}
type
  NSBatchUpdateRequestPtr = ^NSBatchUpdateRequest;
{$endif}

{$ifdef CLASSES}

type
  NSBatchUpdateRequest = objcclass external (NSPersistentStoreRequest)
  private
  public
    class function batchUpdateRequestWithEntityName (entityName: NSString): id; message 'batchUpdateRequestWithEntityName:';
    function initWithEntityName (entityName: NSString): id; message 'initWithEntityName:'; { NS_DESIGNATED_INITIALIZER }
    function initWithEntity (entity: NSEntityDescription): id; message 'initWithEntity:'; { NS_DESIGNATED_INITIALIZER }
    function entityName: NSString; message 'entityName';
    function entity: NSEntityDescription; message 'entity';
    procedure setPredicate(newValue: NSPredicate); message 'setPredicate:';
    function predicate: NSPredicate; message 'predicate';
    procedure setIncludesSubentities(newValue: objcbool); message 'setIncludesSubentities:';
    function includesSubentities: objcbool; message 'includesSubentities';
    procedure setResultType(newValue: NSBatchUpdateRequestResultType); message 'setResultType:';
    function resultType: NSBatchUpdateRequestResultType; message 'resultType';
    procedure setPropertiesToUpdate(newValue: NSDictionary); message 'setPropertiesToUpdate:';
    function propertiesToUpdate: NSDictionary; message 'propertiesToUpdate';
  end;
{$endif}

