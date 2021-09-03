{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXHangDiagnostic.h }

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

