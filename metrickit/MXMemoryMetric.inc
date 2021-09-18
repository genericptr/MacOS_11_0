{ Parsed from MetricKit.framework MXMemoryMetric.h }

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

