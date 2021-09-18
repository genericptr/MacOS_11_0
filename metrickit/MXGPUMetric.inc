{ Parsed from MetricKit.framework MXGPUMetric.h }

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

