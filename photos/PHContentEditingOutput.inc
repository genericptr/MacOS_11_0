{ Parsed from Photos.framework PHContentEditingOutput.h }

{$ifdef TYPES}
type
  PHContentEditingOutputPtr = ^PHContentEditingOutput;
{$endif}

{$ifdef CLASSES}

type
  PHContentEditingOutput = objcclass external (NSObject)
  public
    function initWithContentEditingInput (contentEditingInput: PHContentEditingInput): id; message 'initWithContentEditingInput:';
    procedure setAdjustmentData(newValue: PHAdjustmentData); message 'setAdjustmentData:';
    function adjustmentData: PHAdjustmentData; message 'adjustmentData';
    function renderedContentURL: NSURL; message 'renderedContentURL';
  end;
{$endif}

