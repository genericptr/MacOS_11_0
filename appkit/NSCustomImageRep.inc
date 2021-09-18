{ Parsed from AppKit.framework NSCustomImageRep.h }

{$ifdef CALLBACKS}
type
  NSCustomImageRepInitWithSizeCallback = reference to function (dstRect: NSRect): objcbool; cblock; cdecl;
  NSCustomImageRepDrawingHandlerCallback = reference to function (param1: NSRect): objcbool; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSCustomImageRepPtr = ^NSCustomImageRep;
{$endif}

{$ifdef CLASSES}

type
  NSCustomImageRep = objcclass external (NSImageRep)
  public
    function initWithSize_flipped_drawingHandler (size_: NSSize; drawingHandlerShouldBeCalledWithFlippedContext: objcbool; drawingHandler: NSCustomImageRepInitWithSizeCallback): id; message 'initWithSize:flipped:drawingHandler:'; { available in macos  }
    procedure setDrawingHandler(newValue: NSCustomImageRepDrawingHandlerCallback); message 'setDrawingHandler:'; { available in macos  }
    function drawingHandler: NSCustomImageRepDrawingHandlerCallback; message 'drawingHandler'; { available in macos  }
    function initWithDrawSelector_delegate (selector: SEL; delegate: id): id; message 'initWithDrawSelector:delegate:';
    function drawSelector: SEL; message 'drawSelector';
    function delegate: id; message 'delegate';
  end;
{$endif}

