{ Parsed from CoreML.framework MLModelCollection.h }

{$ifdef CALLBACKS}
type
  MLModelCollectionBeginAccessingModelCollectionWithIdentifierCallback = reference to procedure (modelCollection: MLModelCollection; error: NSError); cblock; cdecl;
  MLModelCollectionEndAccessingModelCollectionWithIdentifierCallback = reference to procedure (success: objcbool; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  MLModelCollectionPtr = ^MLModelCollection;
{$endif}

{$ifdef CLASSES}

type
  MLModelCollection = objcclass external (NSObject)
  public
    function identifier: NSString; message 'identifier';
    function entries: NSDictionary; message 'entries';
    function deploymentID: NSString; message 'deploymentID';
    class function beginAccessingModelCollectionWithIdentifier_completionHandler (identifier_: NSString; completionHandler: MLModelCollectionBeginAccessingModelCollectionWithIdentifierCallback): NSProgress; message 'beginAccessingModelCollectionWithIdentifier:completionHandler:';
    class procedure endAccessingModelCollectionWithIdentifier_completionHandler (identifier_: NSString; completionHandler: MLModelCollectionEndAccessingModelCollectionWithIdentifierCallback); message 'endAccessingModelCollectionWithIdentifier:completionHandler:';
    function init: id; message 'init';
    class function new_: id; message 'new';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MLModelCollectionDidChangeNotification: NSNotificationName; cvar; external;
{$endif}

