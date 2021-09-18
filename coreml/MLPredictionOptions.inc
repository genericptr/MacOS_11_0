{ Parsed from CoreML.framework MLPredictionOptions.h }

{$ifdef TYPES}
type
  MLPredictionOptionsPtr = ^MLPredictionOptions;
{$endif}

{$ifdef CLASSES}

type
  MLPredictionOptions = objcclass external (NSObject)
  public
    procedure setUsesCPUOnly(newValue: objcbool); message 'setUsesCPUOnly:';
    function usesCPUOnly: objcbool; message 'usesCPUOnly';
  end;
{$endif}

