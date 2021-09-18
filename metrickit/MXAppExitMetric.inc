{ Parsed from MetricKit.framework MXAppExitMetric.h }

{$ifdef TYPES}
type
  MXForegroundExitDataPtr = ^MXForegroundExitData;
  MXBackgroundExitDataPtr = ^MXBackgroundExitData;
  MXAppExitMetricPtr = ^MXAppExitMetric;
{$endif}

{$ifdef CLASSES}

type
  MXForegroundExitData = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function cumulativeNormalAppExitCount: NSUInteger; message 'cumulativeNormalAppExitCount';
    function cumulativeMemoryResourceLimitExitCount: NSUInteger; message 'cumulativeMemoryResourceLimitExitCount';
    function cumulativeBadAccessExitCount: NSUInteger; message 'cumulativeBadAccessExitCount';
    function cumulativeAbnormalExitCount: NSUInteger; message 'cumulativeAbnormalExitCount';
    function cumulativeIllegalInstructionExitCount: NSUInteger; message 'cumulativeIllegalInstructionExitCount';
    function cumulativeAppWatchdogExitCount: NSUInteger; message 'cumulativeAppWatchdogExitCount';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  MXBackgroundExitData = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function cumulativeNormalAppExitCount: NSUInteger; message 'cumulativeNormalAppExitCount';
    function cumulativeMemoryResourceLimitExitCount: NSUInteger; message 'cumulativeMemoryResourceLimitExitCount';
    function cumulativeCPUResourceLimitExitCount: NSUInteger; message 'cumulativeCPUResourceLimitExitCount';
    function cumulativeMemoryPressureExitCount: NSUInteger; message 'cumulativeMemoryPressureExitCount';
    function cumulativeBadAccessExitCount: NSUInteger; message 'cumulativeBadAccessExitCount';
    function cumulativeAbnormalExitCount: NSUInteger; message 'cumulativeAbnormalExitCount';
    function cumulativeIllegalInstructionExitCount: NSUInteger; message 'cumulativeIllegalInstructionExitCount';
    function cumulativeAppWatchdogExitCount: NSUInteger; message 'cumulativeAppWatchdogExitCount';
    function cumulativeSuspendedWithLockedFileExitCount: NSUInteger; message 'cumulativeSuspendedWithLockedFileExitCount';
    function cumulativeBackgroundTaskAssertionTimeoutExitCount: NSUInteger; message 'cumulativeBackgroundTaskAssertionTimeoutExitCount';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  MXAppExitMetric = objcclass external (MXMetric)
  public
    function foregroundExitData: MXForegroundExitData; message 'foregroundExitData';
    function backgroundExitData: MXBackgroundExitData; message 'backgroundExitData';
  end;
{$endif}

