{ Parsed from ReplayKit.framework RPBroadcastConfiguration.h }

{$ifdef TYPES}
type
  RPBroadcastConfigurationPtr = ^RPBroadcastConfiguration;
{$endif}

{$if  not defined(TARGET_OS_OSX)}
{$ifdef CLASSES}

type
  RPBroadcastConfiguration = objcclass external (NSObject, NSCodingProtocol, NSSecureCodingProtocol)
  public
    procedure setClipDuration(newValue: NSTimeInterval); message 'setClipDuration:';
    function clipDuration: NSTimeInterval; message 'clipDuration';
    procedure setVideoCompressionProperties(newValue: NSDictionary); message 'setVideoCompressionProperties:';
    function videoCompressionProperties: NSDictionary; message 'videoCompressionProperties';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$endif}
