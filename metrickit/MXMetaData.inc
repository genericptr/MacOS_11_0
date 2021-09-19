{ Parsed from MetricKit.framework MXMetaData.h }

{$ifdef TYPES}
type
  MXMetaDataPtr = ^MXMetaData;
{$endif}

{$ifdef CLASSES}

type
  MXMetaData = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function regionFormat: NSString; message 'regionFormat';
    function osVersion: NSString; message 'osVersion';
    function deviceType: NSString; message 'deviceType';
    function applicationBuildVersion: NSString; message 'applicationBuildVersion';
    function platformArchitecture: NSString; message 'platformArchitecture'; { unavailable in macos, tvos, watchos } { available in ios 14.0 }
    function JSONRepresentation: NSData; message 'JSONRepresentation';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation'; { unavailable in macos, tvos, watchos }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

