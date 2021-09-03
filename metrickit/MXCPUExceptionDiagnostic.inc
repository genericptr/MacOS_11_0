{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXCPUExceptionDiagnostic.h }

{$ifdef TYPES}
type
  MXCPUExceptionDiagnosticPtr = ^MXCPUExceptionDiagnostic;
{$endif}

{$ifdef CLASSES}

type
  MXCPUExceptionDiagnostic = objcclass external (MXDiagnostic)
  public
    function callStackTree: MXCallStackTree; message 'callStackTree';
    function totalCPUTime: NSMeasurement; message 'totalCPUTime';
    function totalSampledTime: NSMeasurement; message 'totalSampledTime';
  end;
{$endif}

