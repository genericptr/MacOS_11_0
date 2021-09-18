{ Parsed from PhotosUI.framework PHContentEditingController.h }

{$ifdef CALLBACKS}
type
  PHContentEditingControllerFinishContentEditingWithCompletionHandlerCallback = reference to procedure (param1: PHContentEditingOutput); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  PHContentEditingControllerProtocolPtr = ^PHContentEditingControllerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  PHContentEditingControllerProtocol = objcprotocol external name 'PHContentEditingController' (NSObjectProtocol)
  required
    function canHandleAdjustmentData (adjustmentData: PHAdjustmentData): objcbool; message 'canHandleAdjustmentData:';
    procedure startContentEditingWithInput_placeholderImage (contentEditingInput: PHContentEditingInput; placeholderImage: NSImage); message 'startContentEditingWithInput:placeholderImage:';
    procedure finishContentEditingWithCompletionHandler (completionHandler: PHContentEditingControllerFinishContentEditingWithCompletionHandlerCallback); message 'finishContentEditingWithCompletionHandler:';
    procedure cancelContentEditing; message 'cancelContentEditing';
    function shouldShowCancelConfirmation: objcbool; message 'shouldShowCancelConfirmation';
  end;
{$endif}

