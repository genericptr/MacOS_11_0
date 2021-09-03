{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXDiskWriteExceptionDiagnostic.h }

{$ifdef TYPES}
type
  MXDiskWriteExceptionDiagnosticPtr = ^MXDiskWriteExceptionDiagnostic;
{$endif}

{$ifdef CLASSES}

type
  MXDiskWriteExceptionDiagnostic = objcclass external (MXDiagnostic)
  public
    function callStackTree: MXCallStackTree; message 'callStackTree';
    function totalWritesCaused: NSMeasurement; message 'totalWritesCaused';
  end;
{$endif}

