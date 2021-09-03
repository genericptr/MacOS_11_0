{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSBatchDeleteRequest.h }

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

