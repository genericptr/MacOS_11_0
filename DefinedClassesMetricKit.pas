{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesMetricKit;
interface

type
  MXAnimationMetric = objcclass external;
  MXAppExitMetric = objcclass external;
  MXAppLaunchMetric = objcclass external;
  MXAppResponsivenessMetric = objcclass external;
  MXAppRunTimeMetric = objcclass external;
  MXAverage = objcclass external;
  MXBackgroundExitData = objcclass external;
  MXCPUExceptionDiagnostic = objcclass external;
  MXCPUMetric = objcclass external;
  MXCallStackTree = objcclass external;
  MXCellularConditionMetric = objcclass external;
  MXCrashDiagnostic = objcclass external;
  MXDiagnostic = objcclass external;
  MXDiagnosticPayload = objcclass external;
  MXDiskIOMetric = objcclass external;
  MXDiskWriteExceptionDiagnostic = objcclass external;
  MXDisplayMetric = objcclass external;
  MXForegroundExitData = objcclass external;
  MXGPUMetric = objcclass external;
  MXHangDiagnostic = objcclass external;
  MXHistogram = objcclass external;
  MXHistogramBucket = objcclass external;
  MXLocationActivityMetric = objcclass external;
  MXMemoryMetric = objcclass external;
  MXMetaData = objcclass external;
  MXMetric = objcclass external;
  MXMetricManager = objcclass external;
  MXMetricPayload = objcclass external;
  MXNetworkTransferMetric = objcclass external;
  MXSignpostIntervalData = objcclass external;
  MXSignpostMetric = objcclass external;
  MXUnitAveragePixelLuminance = objcclass external;
  MXUnitSignalBars = objcclass external;
  MXMetricManagerSubscriberProtocol = objcprotocol external name 'MXMetricManagerSubscriber';

implementation
end.
