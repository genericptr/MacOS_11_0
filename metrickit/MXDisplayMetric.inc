{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXDisplayMetric.h }

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

