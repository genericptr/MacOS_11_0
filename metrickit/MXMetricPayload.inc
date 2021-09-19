{ Parsed from MetricKit.framework MXMetricPayload.h }

{$ifdef TYPES}
type
  MXMetricPayloadPtr = ^MXMetricPayload;
{$endif}

{$ifdef CLASSES}

type
  MXMetricPayload = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function latestApplicationVersion: NSString; message 'latestApplicationVersion';
    function includesMultipleApplicationVersions: objcbool; message 'includesMultipleApplicationVersions';
    function timeStampBegin: NSDate; message 'timeStampBegin';
    function timeStampEnd: NSDate; message 'timeStampEnd';
    function cpuMetrics: MXCPUMetric; message 'cpuMetrics';
    function gpuMetrics: MXGPUMetric; message 'gpuMetrics';
    function cellularConditionMetrics: MXCellularConditionMetric; message 'cellularConditionMetrics';
    function applicationTimeMetrics: MXAppRunTimeMetric; message 'applicationTimeMetrics';
    function locationActivityMetrics: MXLocationActivityMetric; message 'locationActivityMetrics';
    function networkTransferMetrics: MXNetworkTransferMetric; message 'networkTransferMetrics';
    function applicationLaunchMetrics: MXAppLaunchMetric; message 'applicationLaunchMetrics';
    function applicationResponsivenessMetrics: MXAppResponsivenessMetric; message 'applicationResponsivenessMetrics';
    function diskIOMetrics: MXDiskIOMetric; message 'diskIOMetrics';
    function memoryMetrics: MXMemoryMetric; message 'memoryMetrics';
    function displayMetrics: MXDisplayMetric; message 'displayMetrics';
    function animationMetrics: MXAnimationMetric; message 'animationMetrics'; { unavailable in macos, tvos, watchos } { available in ios 14.0 }
    function applicationExitMetrics: MXAppExitMetric; message 'applicationExitMetrics'; { unavailable in macos, tvos, watchos } { available in ios 14.0 }
    function signpostMetrics: NSArray; message 'signpostMetrics';
    function metaData: MXMetaData; message 'metaData';
    function JSONRepresentation: NSData; message 'JSONRepresentation';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation'; { unavailable in macos, tvos, watchos }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

