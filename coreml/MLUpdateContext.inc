{ Parsed from CoreML.framework MLUpdateContext.h }

{$ifdef TYPES}
type
  MLUpdateContextPtr = ^MLUpdateContext;
{$endif}

{$ifdef CLASSES}

type
  MLUpdateContext = objcclass external (NSObject)
  public
    function task: MLUpdateTask; message 'task';
    function model: MLModel; message 'model';
    function event: MLUpdateProgressEvent; message 'event';
    function metrics: NSDictionary; message 'metrics';
    function parameters: NSDictionary; message 'parameters';
  end;
{$endif}

