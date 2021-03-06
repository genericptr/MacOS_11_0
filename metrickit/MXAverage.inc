{ Parsed from MetricKit.framework MXAverage.h }

{$ifdef TYPES}
type
  MXAveragePtr = ^MXAverage;
{$endif}

{$ifdef CLASSES}

type
  MXAverage = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function averageMeasurement: NSMeasurement; message 'averageMeasurement';
    function sampleCount: NSInteger; message 'sampleCount';
    function standardDeviation: double; message 'standardDeviation';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

