{ Parsed from AVFAudio.framework AVAudioSession.h }

{$ifdef CALLBACKS}
type
  AVAudioSessionRequestRecordPermissionCallback = reference to procedure (granted: objcbool); cblock; cdecl;
  AVAudioSessionActivateWithOptionsCallback = reference to procedure (activated: objcbool; error: NSError); cblock; cdecl;
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
    class function sharedInstance: AVAudioSession; message 'sharedInstance'; { unavailable in macos } { available in ios 3.0, watchos 2.0, tvos 9.0 }
    function availableCategories: NSArray; message 'availableCategories'; { unavailable in macos } { available in ios 9.0, watchos 2.0, tvos 9.0 }
    function setCategory_error (category: AVAudioSessionCategory; outError: NSErrorPtr): objcbool; message 'setCategory:error:'; { unavailable in macos } { available in ios 3.0, watchos 2.0, tvos 9.0 }
    function setCategory_withOptions_error (category: AVAudioSessionCategory; options: AVAudioSessionCategoryOptions; outError: NSErrorPtr): objcbool; message 'setCategory:withOptions:error:'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function setCategory_mode_options_error (category: AVAudioSessionCategory; mode: AVAudioSessionMode; options: AVAudioSessionCategoryOptions; outError: NSErrorPtr): objcbool; message 'setCategory:mode:options:error:'; { unavailable in macos } { available in ios 10.0, watchos 3.0, tvos 10.0 }
    function setCategory_mode_routeSharingPolicy_options_error (category: AVAudioSessionCategory; mode: AVAudioSessionMode; policy: AVAudioSessionRouteSharingPolicy; options: AVAudioSessionCategoryOptions; outError: NSErrorPtr): objcbool; message 'setCategory:mode:routeSharingPolicy:options:error:'; { unavailable in macos } { available in ios 11.0, tvos 11.0, watchos 5.0 }
    function category: AVAudioSessionCategory; message 'category'; { unavailable in macos } { available in ios 3.0, watchos 2.0, tvos 9.0 }
    function categoryOptions: AVAudioSessionCategoryOptions; message 'categoryOptions'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function routeSharingPolicy: AVAudioSessionRouteSharingPolicy; message 'routeSharingPolicy'; { unavailable in macos } { available in ios 11.0, tvos 11.0, watchos 5.0 }
    function availableModes: NSArray; message 'availableModes'; { unavailable in macos } { available in ios 9.0, watchos 2.0, tvos 9.0 }
    function setMode_error (mode: AVAudioSessionMode; outError: NSErrorPtr): objcbool; message 'setMode:error:'; { unavailable in macos } { available in ios 5.0, watchos 2.0, tvos 9.0 }
    function mode: AVAudioSessionMode; message 'mode'; { unavailable in macos } { available in ios 5.0, watchos 2.0, tvos 9.0 }
    function setAllowHapticsAndSystemSoundsDuringRecording_error (inValue: objcbool; outError: NSErrorPtr): objcbool; message 'setAllowHapticsAndSystemSoundsDuringRecording:error:'; { unavailable in macos } { available in ios 13.0, watchos 6.0, tvos 13.0 }
    function allowHapticsAndSystemSoundsDuringRecording: objcbool; message 'allowHapticsAndSystemSoundsDuringRecording'; { unavailable in macos } { available in ios 13.0, watchos 6.0, tvos 13.0 }
    function recordPermission: AVAudioSessionRecordPermission; message 'recordPermission'; { unavailable in macos, tvos } { available in ios 8.0, watchos 4.0 }
    procedure requestRecordPermission (response: AVAudioSessionRequestRecordPermissionCallback); message 'requestRecordPermission:'; { unavailable in macos, tvos } { available in ios 7.0, watchos 4.0 }
    function overrideOutputAudioPort_error (portOverride: AVAudioSessionPortOverride; outError: NSErrorPtr): objcbool; message 'overrideOutputAudioPort:error:'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function setPreferredInput_error (inPort: AVAudioSessionPortDescription; outError: NSErrorPtr): objcbool; message 'setPreferredInput:error:'; { unavailable in watchos, macos } { available in ios 7.0, tvos 9.0 }
    function preferredInput: AVAudioSessionPortDescription; message 'preferredInput'; { unavailable in watchos, macos } { available in ios 7.0, tvos 9.0 }
    function setPrefersNoInterruptionsFromSystemAlerts_error (inValue: objcbool; outError: NSErrorPtr): objcbool; message 'setPrefersNoInterruptionsFromSystemAlerts:error:'; { unavailable in macos } { available in ios 14.5, watchos 7.3, tvos 14.5 }
    function prefersNoInterruptionsFromSystemAlerts: objcbool; message 'prefersNoInterruptionsFromSystemAlerts'; { unavailable in macos } { available in ios 14.5, watchos 7.3, tvos 14.5 }
  end;


type
  Activation = objccategory external (AVAudioSession)
    function setActive_error (active: objcbool; outError: NSErrorPtr): objcbool; message 'setActive:error:'; { unavailable in macos } { available in ios 3.0, watchos 2.0, tvos 9.0 }
    function setActive_withOptions_error (active: objcbool; options: AVAudioSessionSetActiveOptions; outError: NSErrorPtr): objcbool; message 'setActive:withOptions:error:'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    procedure activateWithOptions_completionHandler (options: AVAudioSessionActivationOptions; handler: AVAudioSessionActivateWithOptionsCallback); message 'activateWithOptions:completionHandler:'; { unavailable in ios, tvos } { unavailable in macos, macCatalyst }
  end;

type
  AVAudioSessionHardwareConfiguration = objccategory external (AVAudioSession)
    function setPreferredSampleRate_error (sampleRate: double; outError: NSErrorPtr): objcbool; message 'setPreferredSampleRate:error:'; { unavailable in watchos, macos } { available in ios 6.0, tvos 9.0 }
    function preferredSampleRate: double; message 'preferredSampleRate'; { unavailable in watchos, macos } { available in ios 6.0, tvos 9.0 }
    function setPreferredIOBufferDuration_error (duration: NSTimeInterval; outError: NSErrorPtr): objcbool; message 'setPreferredIOBufferDuration:error:'; { unavailable in watchos, macos } { available in ios 3.0, tvos 9.0 }
    function preferredIOBufferDuration: NSTimeInterval; message 'preferredIOBufferDuration'; { unavailable in watchos, macos } { available in ios 3.0, tvos 9.0 }
    function setPreferredInputNumberOfChannels_error (count: NSInteger; outError: NSErrorPtr): objcbool; message 'setPreferredInputNumberOfChannels:error:'; { unavailable in watchos, macos } { available in ios 7.0, tvos 9.0 }
    function preferredInputNumberOfChannels: NSInteger; message 'preferredInputNumberOfChannels'; { unavailable in watchos, macos } { available in ios 7.0, tvos 9.0 }
    function setPreferredOutputNumberOfChannels_error (count: NSInteger; outError: NSErrorPtr): objcbool; message 'setPreferredOutputNumberOfChannels:error:'; { unavailable in watchos, macos } { available in ios 7.0, tvos 9.0 }
    function preferredOutputNumberOfChannels: NSInteger; message 'preferredOutputNumberOfChannels'; { unavailable in watchos, macos } { available in ios 7.0, tvos 9.0 }
    function setPreferredInputOrientation_error (orientation: AVAudioStereoOrientation; outError: NSErrorPtr): objcbool; message 'setPreferredInputOrientation:error:'; { unavailable in watchos, tvos, macos } { available in ios 14.0 }
    function preferredInputOrientation: AVAudioStereoOrientation; message 'preferredInputOrientation'; { unavailable in watchos, tvos, macos } { available in ios 14.0 }
    function inputOrientation: AVAudioStereoOrientation; message 'inputOrientation'; { unavailable in watchos, tvos, macos } { available in ios 14.0 }
    function maximumInputNumberOfChannels: NSInteger; message 'maximumInputNumberOfChannels'; { unavailable in macos } { available in ios 7.0, watchos 2.0, tvos 9.0 }
    function maximumOutputNumberOfChannels: NSInteger; message 'maximumOutputNumberOfChannels'; { unavailable in macos } { available in ios 7.0, watchos 2.0, tvos 9.0 }
    function setInputGain_error (gain: single; outError: NSErrorPtr): objcbool; message 'setInputGain:error:'; { unavailable in watchos, macos } { available in ios 6.0, tvos 9.0 }
    function inputGain: single; message 'inputGain'; { unavailable in watchos, macos } { available in ios 6.0, tvos 9.0 }
    function isInputGainSettable: objcbool; message 'isInputGainSettable'; { unavailable in watchos, macos } { available in ios 6.0, tvos 9.0 }
    function isInputAvailable: objcbool; message 'isInputAvailable'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function inputDataSources: NSArray; message 'inputDataSources'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function inputDataSource: AVAudioSessionDataSourceDescription; message 'inputDataSource'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function setInputDataSource_error (dataSource: AVAudioSessionDataSourceDescription; outError: NSErrorPtr): objcbool; message 'setInputDataSource:error:'; { unavailable in watchos, macos } { available in ios 6.0, tvos 9.0 }
    function outputDataSources: NSArray; message 'outputDataSources'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function outputDataSource: AVAudioSessionDataSourceDescription; message 'outputDataSource'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function setOutputDataSource_error (dataSource: AVAudioSessionDataSourceDescription; outError: NSErrorPtr): objcbool; message 'setOutputDataSource:error:'; { unavailable in watchos, macos } { available in ios 6.0, tvos 9.0 }
    function sampleRate: double; message 'sampleRate'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function inputNumberOfChannels: NSInteger; message 'inputNumberOfChannels'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function outputNumberOfChannels: NSInteger; message 'outputNumberOfChannels'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function inputLatency: NSTimeInterval; message 'inputLatency'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function outputLatency: NSTimeInterval; message 'outputLatency'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function IOBufferDuration: NSTimeInterval; message 'IOBufferDuration'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
  end;

type
  Observation = objccategory external (AVAudioSession)
    function isOtherAudioPlaying: objcbool; message 'isOtherAudioPlaying'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function secondaryAudioShouldBeSilencedHint: objcbool; message 'secondaryAudioShouldBeSilencedHint'; { unavailable in macos } { available in ios 8.0, watchos 2.0, tvos 9.0 }
    function outputVolume: single; message 'outputVolume'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function promptStyle: AVAudioSessionPromptStyle; message 'promptStyle'; { unavailable in macos } { available in ios 13.0, watchos 6.0, tvos 13.0 }
  end;

type
  RoutingConfiguration = objccategory external (AVAudioSession)
    function availableInputs: NSArray; message 'availableInputs'; { unavailable in macos } { available in ios 7.0, watchos 2.0, tvos 9.0 }
    function currentRoute: AVAudioSessionRouteDescription; message 'currentRoute'; { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }
    function setAggregatedIOPreference_error (inIOType: AVAudioSessionIOType; outError: NSErrorPtr): objcbool; message 'setAggregatedIOPreference:error:'; { unavailable in tvos, watchos, macos } { available in ios 10.0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioSessionInterruptionNotification: NSNotificationName { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionRouteChangeNotification: NSNotificationName { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionMediaServicesWereLostNotification: NSNotificationName { available in ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionMediaServicesWereResetNotification: NSNotificationName { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionSilenceSecondaryAudioHintNotification: NSNotificationName { available in ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionInterruptionTypeKey: NSString { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionInterruptionOptionKey: NSString { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionInterruptionReasonKey: NSString { unavailable in tvos, macos } { available in ios 14.5, watchos 7.3 }; cvar; external;
  AVAudioSessionInterruptionWasSuspendedKey: NSString deprecated 'No longer supported - see AVAudioSessionInterruptionReasonKey'; cvar; external;
  AVAudioSessionRouteChangeReasonKey: NSString { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionRouteChangePreviousRouteKey: NSString { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionSilenceSecondaryAudioHintTypeKey: NSString { available in ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$endif}

{$else}
{$endif}
