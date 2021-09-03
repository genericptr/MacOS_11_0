{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXDiagnosticPayload.h }

{$ifdef TYPES}
type
  MXDiagnosticPayloadPtr = ^MXDiagnosticPayload;
{$endif}

{$ifdef CLASSES}

type
  MXDiagnosticPayload = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function cpuExceptionDiagnostics: NSArray; message 'cpuExceptionDiagnostics';
    function diskWriteExceptionDiagnostics: NSArray; message 'diskWriteExceptionDiagnostics';
    function hangDiagnostics: NSArray; message 'hangDiagnostics';
    function crashDiagnostics: NSArray; message 'crashDiagnostics';
    function timeStampBegin: NSDate; message 'timeStampBegin';
    function timeStampEnd: NSDate; message 'timeStampEnd';
    function JSONRepresentation: NSData; message 'JSONRepresentation';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

