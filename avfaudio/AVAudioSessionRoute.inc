{ Parsed from AVFAudio.framework AVAudioSessionRoute.h }

{$ifdef TYPES}
type
  AVAudioSessionChannelDescriptionPtr = ^AVAudioSessionChannelDescription;
  AVAudioSessionDataSourceDescriptionPtr = ^AVAudioSessionDataSourceDescription;
  AVAudioSessionPortDescriptionPtr = ^AVAudioSessionPortDescription;
  AVAudioSessionRouteDescriptionPtr = ^AVAudioSessionRouteDescription;
{$endif}

{$if defined(__NULL_MACRO__)}

{$ifndef AudioSession_AVAudioSessionRoute_h}
{$ifdef TYPES}
type
  AVAudioSessionLocation = NSString;
  AVAudioSessionLocationPtr = ^AVAudioSessionLocation;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioSessionLocationUpper: AVAudioSessionLocation { available in ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionLocationLower: AVAudioSessionLocation { available in ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVAudioSessionOrientation = NSString;
  AVAudioSessionOrientationPtr = ^AVAudioSessionOrientation;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioSessionOrientationTop: AVAudioSessionOrientation { available in ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionOrientationBottom: AVAudioSessionOrientation { available in ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionOrientationFront: AVAudioSessionOrientation { available in ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionOrientationBack: AVAudioSessionOrientation { available in ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionOrientationLeft: AVAudioSessionOrientation { available in ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionOrientationRight: AVAudioSessionOrientation { available in ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVAudioSessionPolarPattern = NSString;
  AVAudioSessionPolarPatternPtr = ^AVAudioSessionPolarPattern;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioSessionPolarPatternOmnidirectional: AVAudioSessionPolarPattern { available in ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPolarPatternCardioid: AVAudioSessionPolarPattern { available in ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPolarPatternSubcardioid: AVAudioSessionPolarPattern { available in ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPolarPatternStereo: AVAudioSessionPolarPattern { unavailable in watchos, tvos, macos } { available in ios 14.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVAudioSessionChannelDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function channelName: NSString; message 'channelName'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function owningPortUID: NSString; message 'owningPortUID'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function channelNumber: NSUInteger; message 'channelNumber'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function channelLabel: AudioChannelLabel; message 'channelLabel'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
  end;

type
  AVAudioSessionDataSourceDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function dataSourceID: NSNumber; message 'dataSourceID'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function dataSourceName: NSString; message 'dataSourceName'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function location: AVAudioSessionLocation; message 'location'; { unavailable in macos } { available in ios 7.0, watchos 2.0, tvos 9.0 }
    function orientation: AVAudioSessionOrientation; message 'orientation'; { unavailable in macos } { available in ios 7.0, watchos 2.0, tvos 9.0 }
    function supportedPolarPatterns: NSArray; message 'supportedPolarPatterns'; { unavailable in watchos, macos } { available in ios 7.0, tvos 9.0 }
    function selectedPolarPattern: AVAudioSessionPolarPattern; message 'selectedPolarPattern'; { unavailable in watchos, macos } { available in ios 7.0, tvos 9.0 }
    function preferredPolarPattern: AVAudioSessionPolarPattern; message 'preferredPolarPattern'; { unavailable in watchos, macos } { available in ios 7.0, tvos 9.0 }
    function setPreferredPolarPattern_error (pattern: AVAudioSessionPolarPattern; outError: NSErrorPtr): objcbool; message 'setPreferredPolarPattern:error:'; { unavailable in watchos, macos } { available in ios 7.0, tvos 9.0 }
  end;

type
  AVAudioSessionPortDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function portType: AVAudioSessionPort; message 'portType'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function portName: NSString; message 'portName'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function UID: NSString; message 'UID'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function hasHardwareVoiceCallProcessing: objcbool; message 'hasHardwareVoiceCallProcessing'; { unavailable in macos } { available in ios 10.0, watchos 3.0, tvos 10.0 }
    function channels: NSArray; message 'channels'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function dataSources: NSArray; message 'dataSources'; { unavailable in watchos, macos } { available in ios 7.0, tvos 9.0 }
    function selectedDataSource: AVAudioSessionDataSourceDescription; message 'selectedDataSource'; { unavailable in watchos, macos } { available in ios 7.0, tvos 9.0 }
    function preferredDataSource: AVAudioSessionDataSourceDescription; message 'preferredDataSource'; { unavailable in watchos, macos } { available in ios 7.0, tvos 9.0 }
    function setPreferredDataSource_error (dataSource: AVAudioSessionDataSourceDescription; outError: NSErrorPtr): objcbool; message 'setPreferredDataSource:error:'; { unavailable in watchos, macos } { available in ios 7.0, tvos 9.0 }
  end;

type
  AVAudioSessionRouteDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function inputs: NSArray; message 'inputs'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function outputs: NSArray; message 'outputs'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

{$endif}

{$else}
{$endif}
