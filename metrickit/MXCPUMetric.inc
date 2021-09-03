{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXCPUMetric.h }

{$ifdef TYPES}
type
  MXCPUMetricPtr = ^MXCPUMetric;
{$endif}

{$ifdef CLASSES}

type
  MXCPUMetric = objcclass external (MXMetric)
  public
    function cumulativeCPUTime: NSMeasurement; message 'cumulativeCPUTime';
    function cumulativeCPUInstructions: NSMeasurement; message 'cumulativeCPUInstructions'; { unavailable in macos, tvos, watchos }
  end;
{$endif}

