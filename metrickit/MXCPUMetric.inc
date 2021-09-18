{ Parsed from MetricKit.framework MXCPUMetric.h }

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

