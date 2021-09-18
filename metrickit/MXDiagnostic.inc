{ Parsed from MetricKit.framework MXDiagnostic.h }

{$ifdef TYPES}
type
  MXDiagnosticPtr = ^MXDiagnostic;
{$endif}

{$ifdef CLASSES}

type
  MXDiagnostic = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function metaData: MXMetaData; message 'metaData';
    function applicationVersion: NSString; message 'applicationVersion';
    function JSONRepresentation: NSData; message 'JSONRepresentation';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

