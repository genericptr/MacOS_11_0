{ Parsed from CoreML.framework MLUpdateProgressHandlers.h }

{$ifdef CALLBACKS}
type
  MLUpdateProgressHandlersInitForEventsCallback = reference to procedure (context: MLUpdateContext); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  MLUpdateProgressHandlersPtr = ^MLUpdateProgressHandlers;
{$endif}

{$ifdef CLASSES}

type
  MLUpdateProgressHandlers = objcclass external (NSObject)
  public
    function initForEvents_progressHandler_completionHandler (interestedEvents: MLUpdateProgressEvent; progressHandler: MLUpdateProgressHandlersInitForEventsCallback; completionHandler: MLUpdateProgressHandlersInitForEventsCallback): id; message 'initForEvents:progressHandler:completionHandler:';
    function init: id; message 'init';
    class function new_: id; message 'new';
  end;
{$endif}

