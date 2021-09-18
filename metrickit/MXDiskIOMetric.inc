{ Parsed from MetricKit.framework MXDiskIOMetric.h }

{$ifdef TYPES}
type
  MXDiskIOMetricPtr = ^MXDiskIOMetric;
{$endif}

{$ifdef CLASSES}

type
  MXDiskIOMetric = objcclass external (MXMetric)
  public
    function cumulativeLogicalWrites: NSMeasurement; message 'cumulativeLogicalWrites';
  end;
{$endif}

