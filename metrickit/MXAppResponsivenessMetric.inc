{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXAppResponsivenessMetric.h }

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

