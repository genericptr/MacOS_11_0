{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXGPUMetric.h }

{$ifdef TYPES}
type
  MXGPUMetricPtr = ^MXGPUMetric;
{$endif}

{$ifdef CLASSES}

type
  MXGPUMetric = objcclass external (MXMetric)
  public
    function cumulativeGPUTime: NSMeasurement; message 'cumulativeGPUTime';
  end;
{$endif}

