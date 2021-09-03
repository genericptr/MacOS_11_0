{ Parsed from AVFAudio.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFAudio.framework/Headers/AVAudioSession.h }

{$ifdef CALLBACKS}
type
  AVAudioSessionRequestRecordPermissionCallback = reference to function (granted: objcbool): pointer; cblock; cdecl;
  AVAudioSessionActivateWithOptionsCallback = reference to function (activated: objcbool; error: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVAudioSessionPtr = ^AVAudioSession;
{$endif}

{$if defined(__NULL_MACRO__)}

{$ifndef AudioSession_AVAudioSession_h}
{$ifdef CLASSES}

type
  AVAudioSession = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    class function sharedInstance: AVAudioSession; message 'sharedInstance'; { unavailable in macos }
    function availableCategories: NSArray; message 'availableCategories'; { unavailable in macos }
    function setCategory_error (category: AVAudioSessionCategory; outError: NSErrorPtr): objcbool; message 'setCategory:error:'; { unavailable in macos }
    function setCategory_withOptions_error (category: AVAudioSessionCategory; options: AVAudioSessionCategoryOptions; outError: NSErrorPtr): objcbool; message 'setCategory:withOptions:error:'; { unavailable in macos }
    function setCategory_mode_options_error (category: AVAudioSessionCategory; mode: AVAudioSessionMode; options: AVAudioSessionCategoryOptions; outError: NSErrorPtr): objcbool; message 'setCategory:mode:options:error:'; { unavailable in macos }
    function setCategory_mode_routeSharingPolicy_options_error (category: AVAudioSessionCategory; mode: AVAudioSessionMode; policy: AVAudioSessionRouteSharingPolicy; options: AVAudioSessionCategoryOptions; outError: NSErrorPtr): objcbool; message 'setCategory:mode:routeSharingPolicy:options:error:'; { unavailable in macos }
    function category: AVAudioSessionCategory; message 'category'; { unavailable in macos }
    function categoryOptions: AVAudioSessionCategoryOptions; message 'categoryOptions'; { unavailable in macos }
    function routeSharingPolicy: AVAudioSessionRouteSharingPolicy; message 'routeSharingPolicy'; { unavailable in macos }
    function availableModes: NSArray; message 'availableModes'; { unavailable in macos }
    function setMode_error (mode: AVAudioSessionMode; outError: NSErrorPtr): objcbool; message 'setMode:error:'; { unavailable in macos }
    function mode: AVAudioSessionMode; message 'mode'; { unavailable in macos }
    function setAllowHapticsAndSystemSoundsDuringRecording_error (inValue: objcbool; outError: NSErrorPtr): objcbool; message 'setAllowHapticsAndSystemSoundsDuringRecording:error:'; { unavailable in macos }
    function allowHapticsAndSystemSoundsDuringRecording: objcbool; message 'allowHapticsAndSystemSoundsDuringRecording'; { unavailable in macos }
    function recordPermission: AVAudioSessionRecordPermission; message 'recordPermission'; { unavailable in macos, tvos }
    procedure requestRecordPermission (response: AVAudioSessionRequestRecordPermissionCallback); message 'requestRecordPermission:'; { unavailable in macos, tvos }
    function overrideOutputAudioPort_error (portOverride: AVAudioSessionPortOverride; outError: NSErrorPtr): objcbool; message 'overrideOutputAudioPort:error:'; { unavailable in macos }
    function setPreferredInput_error (inPort: AVAudioSessionPortDescription; outError: NSErrorPtr): objcbool; message 'setPreferredInput:error:'; { unavailable in watchos, macos }
    function preferredInput: AVAudioSessionPortDescription; message 'preferredInput'; { unavailable in watchos, macos }
    function setPrefersNoInterruptionsFromSystemAlerts_error (inValue: objcbool; outError: NSErrorPtr): objcbool; message 'setPrefersNoInterruptionsFromSystemAlerts:error:'; { unavailable in macos }
    function prefersNoInterruptionsFromSystemAlerts: objcbool; message 'prefersNoInterruptionsFromSystemAlerts'; { unavailable in macos }
  end;


type
  Activation = objccategory external (AVAudioSession)
    function setActive_error (active: objcbool; outError: NSErrorPtr): objcbool; message 'setActive:error:'; { unavailable in macos }
    function setActive_withOptions_error (active: objcbool; options: AVAudioSessionSetActiveOptions; outError: NSErrorPtr): objcbool; message 'setActive:withOptions:error:'; { unavailable in macos }
    procedure activateWithOptions_completionHandler (options: AVAudioSessionActivationOptions; handler: AVAudioSessionActivateWithOptionsCallback); message 'activateWithOptions:completionHandler:'; { unavailable in ios, tvos }
  end;

type
  AVAudioSessionHardwareConfiguration = objccategory external (AVAudioSession)
    function setPreferredSampleRate_error (sampleRate: double; outError: NSErrorPtr): objcbool; message 'setPreferredSampleRate:error:'; { unavailable in watchos, macos }
    function preferredSampleRate: double; message 'preferredSampleRate'; { unavailable in watchos, macos }
    function setPreferredIOBufferDuration_error (duration: NSTimeInterval; outError: NSErrorPtr): objcbool; message 'setPreferredIOBufferDuration:error:'; { unavailable in watchos, macos }
    function preferredIOBufferDuration: NSTimeInterval; message 'preferredIOBufferDuration'; { unavailable in watchos, macos }
    function setPreferredInputNumberOfChannels_error (count: NSInteger; outError: NSErrorPtr): objcbool; message 'setPreferredInputNumberOfChannels:error:'; { unavailable in watchos, macos }
    function preferredInputNumberOfChannels: NSInteger; message 'preferredInputNumberOfChannels'; { unavailable in watchos, macos }
    function setPreferredOutputNumberOfChannels_error (count: NSInteger; outError: NSErrorPtr): objcbool; message 'setPreferredOutputNumberOfChannels:error:'; { unavailable in watchos, macos }
    function preferredOutputNumberOfChannels: NSInteger; message 'preferredOutputNumberOfChannels'; { unavailable in watchos, macos }
    function setPreferredInputOrientation_error (orientation: AVAudioStereoOrientation; outError: NSErrorPtr): objcbool; message 'setPreferredInputOrientation:error:'; { unavailable in watchos, tvos, macos }
    function preferredInputOrientation: AVAudioStereoOrientation; message 'preferredInputOrientation'; { unavailable in watchos, tvos, macos }
    function inputOrientation: AVAudioStereoOrientation; message 'inputOrientation'; { unavailable in watchos, tvos, macos }
    function maximumInputNumberOfChannels: NSInteger; message 'maximumInputNumberOfChannels'; { unavailable in macos }
    function maximumOutputNumberOfChannels: NSInteger; message 'maximumOutputNumberOfChannels'; { unavailable in macos }
    function setInputGain_error (gain: single; outError: NSErrorPtr): objcbool; message 'setInputGain:error:'; { unavailable in watchos, macos }
    function inputGain: single; message 'inputGain'; { unavailable in watchos, macos }
    function isInputGainSettable: objcbool; message 'isInputGainSettable'; { unavailable in watchos, macos }
    function isInputAvailable: objcbool; message 'isInputAvailable'; { unavailable in macos }
    function inputDataSources: NSArray; message 'inputDataSources'; { unavailable in macos }
    function inputDataSource: AVAudioSessionDataSourceDescription; message 'inputDataSource'; { unavailable in macos }
    function setInputDataSource_error (dataSource: AVAudioSessionDataSourceDescription; outError: NSErrorPtr): objcbool; message 'setInputDataSource:error:'; { unavailable in watchos, macos }
    function outputDataSources: NSArray; message 'outputDataSources'; { unavailable in macos }
    function outputDataSource: AVAudioSessionDataSourceDescription; message 'outputDataSource'; { unavailable in macos }
    function setOutputDataSource_error (dataSource: AVAudioSessionDataSourceDescription; outError: NSErrorPtr): objcbool; message 'setOutputDataSource:error:'; { unavailable in watchos, macos }
    function sampleRate: double; message 'sampleRate'; { unavailable in macos }
    function inputNumberOfChannels: NSInteger; message 'inputNumberOfChannels'; { unavailable in macos }
    function outputNumberOfChannels: NSInteger; message 'outputNumberOfChannels'; { unavailable in macos }
    function inputLatency: NSTimeInterval; message 'inputLatency'; { unavailable in macos }
    function outputLatency: NSTimeInterval; message 'outputLatency'; { unavailable in macos }
    function IOBufferDuration: NSTimeInterval; message 'IOBufferDuration'; { unavailable in macos }
  end;

type
  Observation = objccategory external (AVAudioSession)
    function isOtherAudioPlaying: objcbool; message 'isOtherAudioPlaying'; { unavailable in macos }
    function secondaryAudioShouldBeSilencedHint: objcbool; message 'secondaryAudioShouldBeSilencedHint'; { unavailable in macos }
    function outputVolume: single; message 'outputVolume'; { unavailable in macos }
    function promptStyle: AVAudioSessionPromptStyle; message 'promptStyle'; { unavailable in macos }
  end;

type
  RoutingConfiguration = objccategory external (AVAudioSession)
    function availableInputs: NSArray; message 'availableInputs'; { unavailable in macos }
    function currentRoute: AVAudioSessionRouteDescription; message 'currentRoute'; { unavailable in macos }
    function setAggregatedIOPreference_error (inIOType: AVAudioSessionIOType; outError: NSErrorPtr): objcbool; message 'setAggregatedIOPreference:error:'; { unavailable in tvos, watchos, macos }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioSessionInterruptionNotification: NSNotificationName { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionRouteChangeNotification: NSNotificationName { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionMediaServicesWereLostNotification: NSNotificationName { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionMediaServicesWereResetNotification: NSNotificationName { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionSilenceSecondaryAudioHintNotification: NSNotificationName { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionInterruptionTypeKey: NSString { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionInterruptionOptionKey: NSString { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionInterruptionReasonKey: NSString { unavailable in tvos, macos }; cvar; external;
  AVAudioSessionInterruptionWasSuspendedKey: NSString deprecated 'No longer supported - see AVAudioSessionInterruptionReasonKey'; cvar; external;
  AVAudioSessionRouteChangeReasonKey: NSString { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionRouteChangePreviousRouteKey: NSString { available in ios , watchos , tvos  }; cvar; external;
  AVAudioSessionSilenceSecondaryAudioHintTypeKey: NSString { available in ios , watchos , tvos  }; cvar; external;
{$endif}

{$endif}

{$else}
{$endif}
