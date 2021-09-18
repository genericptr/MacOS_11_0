{ Parsed from MetricKit.framework MXCPUExceptionDiagnostic.h }

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

