{ Parsed from AVFAudio.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFAudio.framework/Headers/AVAudioSessionRoute.h }

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
  AVAudioSessionLocationUpper: AVAudioSessionLocation { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionLocationLower: AVAudioSessionLocation { available in ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVAudioSessionOrientation = NSString;
  AVAudioSessionOrientationPtr = ^AVAudioSessionOrientation;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioSessionOrientationTop: AVAudioSessionOrientation { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionOrientationBottom: AVAudioSessionOrientation { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionOrientationFront: AVAudioSessionOrientation { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionOrientationBack: AVAudioSessionOrientation { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionOrientationLeft: AVAudioSessionOrientation { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionOrientationRight: AVAudioSessionOrientation { available in ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVAudioSessionPolarPattern = NSString;
  AVAudioSessionPolarPatternPtr = ^AVAudioSessionPolarPattern;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioSessionPolarPatternOmnidirectional: AVAudioSessionPolarPattern { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionPolarPatternCardioid: AVAudioSessionPolarPattern { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionPolarPatternSubcardioid: AVAudioSessionPolarPattern { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionPolarPatternStereo: AVAudioSessionPolarPattern { unavailable in watchos, tvos, macos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVAudioSessionChannelDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function channelName: NSString; message 'channelName'; { unavailable in macos }
    function owningPortUID: NSString; message 'owningPortUID'; { unavailable in macos }
    function channelNumber: NSUInteger; message 'channelNumber'; { unavailable in macos }
    function channelLabel: AudioChannelLabel; message 'channelLabel'; { unavailable in macos }
  end;

type
  AVAudioSessionDataSourceDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function dataSourceID: NSNumber; message 'dataSourceID'; { unavailable in macos }
    function dataSourceName: NSString; message 'dataSourceName'; { unavailable in macos }
    function location: AVAudioSessionLocation; message 'location'; { unavailable in macos }
    function orientation: AVAudioSessionOrientation; message 'orientation'; { unavailable in macos }
    function supportedPolarPatterns: NSArray; message 'supportedPolarPatterns'; { unavailable in watchos, macos }
    function selectedPolarPattern: AVAudioSessionPolarPattern; message 'selectedPolarPattern'; { unavailable in watchos, macos }
    function preferredPolarPattern: AVAudioSessionPolarPattern; message 'preferredPolarPattern'; { unavailable in watchos, macos }
    function setPreferredPolarPattern_error (pattern: AVAudioSessionPolarPattern; outError: NSErrorPtr): objcbool; message 'setPreferredPolarPattern:error:'; { unavailable in watchos, macos }
  end;

type
  AVAudioSessionPortDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function portType: AVAudioSessionPort; message 'portType'; { unavailable in macos }
    function portName: NSString; message 'portName'; { unavailable in macos }
    function UID: NSString; message 'UID'; { unavailable in macos }
    function hasHardwareVoiceCallProcessing: objcbool; message 'hasHardwareVoiceCallProcessing'; { unavailable in macos }
    function channels: NSArray; message 'channels'; { unavailable in macos }
    function dataSources: NSArray; message 'dataSources'; { unavailable in watchos, macos }
    function selectedDataSource: AVAudioSessionDataSourceDescription; message 'selectedDataSource'; { unavailable in watchos, macos }
    function preferredDataSource: AVAudioSessionDataSourceDescription; message 'preferredDataSource'; { unavailable in watchos, macos }
    function setPreferredDataSource_error (dataSource: AVAudioSessionDataSourceDescription; outError: NSErrorPtr): objcbool; message 'setPreferredDataSource:error:'; { unavailable in watchos, macos }
  end;

type
  AVAudioSessionRouteDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function inputs: NSArray; message 'inputs'; { unavailable in macos }
    function outputs: NSArray; message 'outputs'; { unavailable in macos }
  end;
{$endif}

{$endif}

{$else}
{$endif}
