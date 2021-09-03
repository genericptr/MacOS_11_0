{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXAppRunTimeMetric.h }

{$ifdef TYPES}
type
  MXAppRunTimeMetricPtr = ^MXAppRunTimeMetric;
{$endif}

{$ifdef CLASSES}

type
  MXAppRunTimeMetric = objcclass external (MXMetric)
  public
    function cumulativeForegroundTime: NSMeasurement; message 'cumulativeForegroundTime';
    function cumulativeBackgroundTime: NSMeasurement; message 'cumulativeBackgroundTime';
    function cumulativeBackgroundAudioTime: NSMeasurement; message 'cumulativeBackgroundAudioTime';
    function cumulativeBackgroundLocationTime: NSMeasurement; message 'cumulativeBackgroundLocationTime';
  end;
{$endif}

