{ Parsed from MetricKit.framework MXLocationActivityMetric.h }

{$ifdef TYPES}
type
  MXLocationActivityMetricPtr = ^MXLocationActivityMetric;
{$endif}

{$ifdef CLASSES}

type
  MXLocationActivityMetric = objcclass external (MXMetric)
  public
    function cumulativeBestAccuracyTime: NSMeasurement; message 'cumulativeBestAccuracyTime';
    function cumulativeBestAccuracyForNavigationTime: NSMeasurement; message 'cumulativeBestAccuracyForNavigationTime';
    function cumulativeNearestTenMetersAccuracyTime: NSMeasurement; message 'cumulativeNearestTenMetersAccuracyTime';
    function cumulativeHundredMetersAccuracyTime: NSMeasurement; message 'cumulativeHundredMetersAccuracyTime';
    function cumulativeKilometerAccuracyTime: NSMeasurement; message 'cumulativeKilometerAccuracyTime';
    function cumulativeThreeKilometersAccuracyTime: NSMeasurement; message 'cumulativeThreeKilometersAccuracyTime';
  end;
{$endif}

