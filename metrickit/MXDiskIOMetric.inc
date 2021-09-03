{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXDiskIOMetric.h }

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

