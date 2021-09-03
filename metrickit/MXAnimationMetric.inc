{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXAnimationMetric.h }

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

