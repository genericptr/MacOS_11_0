{ Parsed from MetricKit.framework MXHistogram.h }

{$ifdef TYPES}
type
  MXHistogramBucketPtr = ^MXHistogramBucket;
  MXHistogramPtr = ^MXHistogram;
{$endif}

{$ifdef CLASSES}

type
  MXHistogramBucket = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function bucketStart: NSMeasurement; message 'bucketStart';
    function bucketEnd: NSMeasurement; message 'bucketEnd';
    function bucketCount: NSUInteger; message 'bucketCount';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  MXHistogram = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function totalBucketCount: NSUInteger; message 'totalBucketCount';
    function bucketEnumerator: NSEnumerator; message 'bucketEnumerator';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

