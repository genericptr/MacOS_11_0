{ Parsed from MetricKit.framework MXDisplayMetric.h }

{$ifdef TYPES}
type
  MXDisplayMetricPtr = ^MXDisplayMetric;
{$endif}

{$ifdef CLASSES}

type
  MXDisplayMetric = objcclass external (MXMetric)
  public
    function averagePixelLuminance: MXAverage; message 'averagePixelLuminance';
  end;
{$endif}

