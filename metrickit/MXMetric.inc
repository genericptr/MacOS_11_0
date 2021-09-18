{ Parsed from MetricKit.framework MXMetric.h }

{$ifdef TYPES}
type
  MXMetricPtr = ^MXMetric;
{$endif}

{$ifdef CLASSES}

type
  MXMetric = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function JSONRepresentation: NSData; message 'JSONRepresentation';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation'; { unavailable in macos, tvos, watchos }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

