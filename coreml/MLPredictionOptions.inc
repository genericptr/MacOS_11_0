{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLPredictionOptions.h }

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

