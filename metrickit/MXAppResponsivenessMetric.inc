{ Parsed from MetricKit.framework MXAppResponsivenessMetric.h }

{$ifdef TYPES}
type
  MXAppResponsivenessMetricPtr = ^MXAppResponsivenessMetric;
{$endif}

{$ifdef CLASSES}

type
  MXAppResponsivenessMetric = objcclass external (MXMetric)
  public
    function histogrammedApplicationHangTime: MXHistogram; message 'histogrammedApplicationHangTime';
  end;
{$endif}

