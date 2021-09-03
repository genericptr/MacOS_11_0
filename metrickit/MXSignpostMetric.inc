{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXSignpostMetric.h }

{$ifdef TYPES}
type
  MXSignpostIntervalDataPtr = ^MXSignpostIntervalData;
  MXSignpostMetricPtr = ^MXSignpostMetric;
{$endif}

{$ifdef CLASSES}

type
  MXSignpostIntervalData = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function histogrammedSignpostDuration: MXHistogram; message 'histogrammedSignpostDuration';
    function cumulativeCPUTime: NSMeasurement; message 'cumulativeCPUTime';
    function averageMemory: MXAverage; message 'averageMemory';
    function cumulativeLogicalWrites: NSMeasurement; message 'cumulativeLogicalWrites';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  MXSignpostMetric = objcclass external (MXMetric)
  public
    function signpostName: NSString; message 'signpostName';
    function signpostCategory: NSString; message 'signpostCategory';
    function signpostIntervalData: MXSignpostIntervalData; message 'signpostIntervalData';
    function totalCount: NSUInteger; message 'totalCount';
  end;
{$endif}

