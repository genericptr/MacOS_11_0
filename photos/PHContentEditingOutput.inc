{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHContentEditingOutput.h }

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

