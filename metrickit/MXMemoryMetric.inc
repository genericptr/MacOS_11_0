{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXMemoryMetric.h }

{$ifdef TYPES}
type
  MXMemoryMetricPtr = ^MXMemoryMetric;
{$endif}

{$ifdef CLASSES}

type
  MXMemoryMetric = objcclass external (MXMetric)
  public
    function peakMemoryUsage: NSMeasurement; message 'peakMemoryUsage';
    function averageSuspendedMemory: MXAverage; message 'averageSuspendedMemory';
  end;
{$endif}

