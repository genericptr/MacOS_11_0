{ Parsed from MetricKit.framework MXAnimationMetric.h }

{$ifdef TYPES}
type
  MXAnimationMetricPtr = ^MXAnimationMetric;
{$endif}

{$ifdef CLASSES}

type
  MXAnimationMetric = objcclass external (MXMetric)
  public
    function scrollHitchTimeRatio: NSMeasurement; message 'scrollHitchTimeRatio';
  end;
{$endif}

