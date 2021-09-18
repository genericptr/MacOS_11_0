{ Parsed from MetricKit.framework MXHangDiagnostic.h }

{$ifdef TYPES}
type
  MXHangDiagnosticPtr = ^MXHangDiagnostic;
{$endif}

{$ifdef CLASSES}

type
  MXHangDiagnostic = objcclass external (MXDiagnostic)
  public
    function callStackTree: MXCallStackTree; message 'callStackTree';
    function hangDuration: NSMeasurement; message 'hangDuration';
  end;
{$endif}

