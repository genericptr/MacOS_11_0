{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXMetaData.h }

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
    function platformArchitecture: NSString; message 'platformArchitecture'; { unavailable in macos, tvos, watchos }
    function JSONRepresentation: NSData; message 'JSONRepresentation';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation'; { unavailable in macos, tvos, watchos }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

