{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXAppLaunchMetric.h }

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

