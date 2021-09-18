{ Parsed from MetricKit.framework MXDiskWriteExceptionDiagnostic.h }

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

