{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXNetworkTransferMetric.h }

{$ifdef TYPES}
type
  MXNetworkTransferMetricPtr = ^MXNetworkTransferMetric;
{$endif}

{$ifdef CLASSES}

type
  MXNetworkTransferMetric = objcclass external (MXMetric)
  public
    function cumulativeWifiUpload: NSMeasurement; message 'cumulativeWifiUpload';
    function cumulativeWifiDownload: NSMeasurement; message 'cumulativeWifiDownload';
    function cumulativeCellularUpload: NSMeasurement; message 'cumulativeCellularUpload';
    function cumulativeCellularDownload: NSMeasurement; message 'cumulativeCellularDownload';
  end;
{$endif}

