{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXCellularConditionMetric.h }

{$ifdef TYPES}
type
  MXCellularConditionMetricPtr = ^MXCellularConditionMetric;
{$endif}

{$ifdef CLASSES}

type
  MXCellularConditionMetric = objcclass external (MXMetric)
  public
    function histogrammedCellularConditionTime: MXHistogram; message 'histogrammedCellularConditionTime';
  end;
{$endif}

