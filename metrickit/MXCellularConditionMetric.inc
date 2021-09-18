{ Parsed from MetricKit.framework MXCellularConditionMetric.h }

{$ifdef TYPES}
type
  MXCellularConditionMetricPtr = ^MXCellularConditionMetric;
{$endif}

{$ifdef CLASSES}

type
  MXCellularConditionMetric = objcclass external (MXMetric)
  public
    function histogrammedCellularConditionTime: MXHistogram; message 'histogrammedCellularConditionTime';
  end;
{$endif}

