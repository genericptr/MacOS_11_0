{ Parsed from MetricKit.framework MXAppLaunchMetric.h }

{$ifdef TYPES}
type
  MXAppLaunchMetricPtr = ^MXAppLaunchMetric;
{$endif}

{$ifdef CLASSES}

type
  MXAppLaunchMetric = objcclass external (MXMetric)
  public
    function histogrammedTimeToFirstDraw: MXHistogram; message 'histogrammedTimeToFirstDraw';
    function histogrammedApplicationResumeTime: MXHistogram; message 'histogrammedApplicationResumeTime';
  end;
{$endif}

