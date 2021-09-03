{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXLocationActivityMetric.h }

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

