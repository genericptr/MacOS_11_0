{ Parsed from AVFAudio.framework AVAudioSessionTypes.h }

{$if defined(__NULL_MACRO__)}

{$ifndef AudioSession_AVAudioSessionTypes_h}
{$ifdef TYPES}
type
  AVAudioSessionPort = NSString;
  AVAudioSessionPortPtr = ^AVAudioSessionPort;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioSessionPortLineIn: AVAudioSessionPort { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPortBuiltInMic: AVAudioSessionPort { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPortHeadsetMic: AVAudioSessionPort { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPortLineOut: AVAudioSessionPort { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPortHeadphones: AVAudioSessionPort { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPortBluetoothA2DP: AVAudioSessionPort { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPortBuiltInReceiver: AVAudioSessionPort { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPortBuiltInSpeaker: AVAudioSessionPort { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPortHDMI: AVAudioSessionPort { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPortAirPlay: AVAudioSessionPort { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPortBluetoothLE: AVAudioSessionPort { unavailable in macos } { available in ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPortBluetoothHFP: AVAudioSessionPort { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPortUSBAudio: AVAudioSessionPort { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPortCarAudio: AVAudioSessionPort { unavailable in macos } { available in ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionPortVirtual: AVAudioSessionPort { unavailable in macos } { available in ios 14.0, watchos 7.0, tvos 14.0 }; cvar; external;
  AVAudioSessionPortPCI: AVAudioSessionPort { unavailable in macos } { available in ios 14.0, watchos 7.0, tvos 14.0 }; cvar; external;
  AVAudioSessionPortFireWire: AVAudioSessionPort { unavailable in macos } { available in ios 14.0, watchos 7.0, tvos 14.0 }; cvar; external;
  AVAudioSessionPortDisplayPort: AVAudioSessionPort { unavailable in macos } { available in ios 14.0, watchos 7.0, tvos 14.0 }; cvar; external;
  AVAudioSessionPortAVB: AVAudioSessionPort { unavailable in macos } { available in ios 14.0, watchos 7.0, tvos 14.0 }; cvar; external;
  AVAudioSessionPortThunderbolt: AVAudioSessionPort { unavailable in macos } { available in ios 14.0, watchos 7.0, tvos 14.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVAudioSessionCategory = NSString;
  AVAudioSessionCategoryPtr = ^AVAudioSessionCategory;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioSessionCategoryAmbient: AVAudioSessionCategory { unavailable in macos } { available in ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionCategorySoloAmbient: AVAudioSessionCategory { unavailable in macos } { available in ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionCategoryPlayback: AVAudioSessionCategory { unavailable in macos } { available in ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionCategoryRecord: AVAudioSessionCategory { unavailable in macos } { available in ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionCategoryPlayAndRecord: AVAudioSessionCategory { unavailable in macos } { available in ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionCategoryAudioProcessing: AVAudioSessionCategory { unavailable in watchos, tvos } { unavailable in macos }; cvar; external;
  AVAudioSessionCategoryMultiRoute: AVAudioSessionCategory { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVAudioSessionMode = NSString;
  AVAudioSessionModePtr = ^AVAudioSessionMode;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioSessionModeDefault: AVAudioSessionMode { unavailable in macos } { available in ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionModeVoiceChat: AVAudioSessionMode { unavailable in macos } { available in ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionModeGameChat: AVAudioSessionMode { unavailable in macos } { available in ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionModeVideoRecording: AVAudioSessionMode { unavailable in macos } { available in ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionModeMeasurement: AVAudioSessionMode { unavailable in macos } { available in ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionModeMoviePlayback: AVAudioSessionMode { unavailable in macos } { available in ios 6.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionModeVideoChat: AVAudioSessionMode { unavailable in macos } { available in ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionModeSpokenAudio: AVAudioSessionMode { unavailable in macos } { available in ios 9.0, watchos 2.0, tvos 9.0 }; cvar; external;
  AVAudioSessionModeVoicePrompt: AVAudioSessionMode { unavailable in macos } { available in ios 12.0, watchos 5.0, tvos 12.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVAudioSessionActivationOptions = NSUInteger;
  AVAudioSessionActivationOptionsPtr = ^AVAudioSessionActivationOptions;

const
  AVAudioSessionActivationOptionNone = 0;

type
  AVAudioSessionPortOverride = NSUInteger;
  AVAudioSessionPortOverridePtr = ^AVAudioSessionPortOverride;

const
  AVAudioSessionPortOverrideNone = 0;
  AVAudioSessionPortOverrideSpeaker = 'spkr' { unavailable in tvos, watchos, macos };

type
  AVAudioSessionRouteChangeReason = NSUInteger;
  AVAudioSessionRouteChangeReasonPtr = ^AVAudioSessionRouteChangeReason;

const
  AVAudioSessionRouteChangeReasonUnknown = 0;
  AVAudioSessionRouteChangeReasonNewDeviceAvailable = 1;
  AVAudioSessionRouteChangeReasonOldDeviceUnavailable = 2;
  AVAudioSessionRouteChangeReasonCategoryChange = 3;
  AVAudioSessionRouteChangeReasonOverride = 4;
  AVAudioSessionRouteChangeReasonWakeFromSleep = 6;
  AVAudioSessionRouteChangeReasonNoSuitableRouteForCategory = 7;
  AVAudioSessionRouteChangeReasonRouteConfigurationChange = 8;

type
  AVAudioSessionCategoryOptions = NSUInteger;
  AVAudioSessionCategoryOptionsPtr = ^AVAudioSessionCategoryOptions;

const
  AVAudioSessionCategoryOptionMixWithOthers = $1;
  AVAudioSessionCategoryOptionDuckOthers = $2;
  AVAudioSessionCategoryOptionAllowBluetooth = $4 { unavailable in tvos, watchos, macos };
  AVAudioSessionCategoryOptionDefaultToSpeaker = $8 { unavailable in tvos, watchos, macos };
  AVAudioSessionCategoryOptionInterruptSpokenAudioAndMixWithOthers = $11 { unavailable in macos } { available in ios 9.0, watchos 2.0, tvos 9.0 };
  AVAudioSessionCategoryOptionAllowBluetoothA2DP = $20 { unavailable in macos } { available in ios 10.0, watchos 3.0, tvos 10.0 };
  AVAudioSessionCategoryOptionAllowAirPlay = $40 { unavailable in watchos, macos } { available in ios 10.0, tvos 10.0 };
  AVAudioSessionCategoryOptionOverrideMutedMicrophoneInterruption = $80 { unavailable in tvos, macos } { available in ios 14.5, watchos 7.3 };

type
  AVAudioSessionInterruptionType = NSUInteger;
  AVAudioSessionInterruptionTypePtr = ^AVAudioSessionInterruptionType;

const
  AVAudioSessionInterruptionTypeBegan = 1;
  AVAudioSessionInterruptionTypeEnded = 0;

type
  AVAudioSessionInterruptionOptions = NSUInteger;
  AVAudioSessionInterruptionOptionsPtr = ^AVAudioSessionInterruptionOptions;

const
  AVAudioSessionInterruptionOptionShouldResume = 1;

type
  AVAudioSessionInterruptionReason = NSUInteger;
  AVAudioSessionInterruptionReasonPtr = ^AVAudioSessionInterruptionReason;

const
  AVAudioSessionInterruptionReasonDefault = 0;
  AVAudioSessionInterruptionReasonAppWasSuspended = 1;
  AVAudioSessionInterruptionReasonBuiltInMicMuted = 2;

type
  AVAudioSessionSetActiveOptions = NSUInteger;
  AVAudioSessionSetActiveOptionsPtr = ^AVAudioSessionSetActiveOptions;

const
  AVAudioSessionSetActiveOptionNotifyOthersOnDeactivation = 1;

type
  AVAudioSessionSilenceSecondaryAudioHintType = NSUInteger;
  AVAudioSessionSilenceSecondaryAudioHintTypePtr = ^AVAudioSessionSilenceSecondaryAudioHintType;

const
  AVAudioSessionSilenceSecondaryAudioHintTypeBegin = 1;
  AVAudioSessionSilenceSecondaryAudioHintTypeEnd = 0;

type
  AVAudioSessionIOType = NSUInteger;
  AVAudioSessionIOTypePtr = ^AVAudioSessionIOType;

const
  AVAudioSessionIOTypeNotSpecified = 0;
  AVAudioSessionIOTypeAggregated = 1;

type
  AVAudioSessionRouteSharingPolicy = NSUInteger;
  AVAudioSessionRouteSharingPolicyPtr = ^AVAudioSessionRouteSharingPolicy;

const
  AVAudioSessionRouteSharingPolicyDefault = 0;
  AVAudioSessionRouteSharingPolicyLongFormAudio = 1;
  AVAudioSessionRouteSharingPolicyLongForm = AVAudioSessionRouteSharingPolicyLongFormAudio { unavailable in macos };
  AVAudioSessionRouteSharingPolicyIndependent = 2;
  AVAudioSessionRouteSharingPolicyLongFormVideo = 3 { unavailable in watchos, tvos, macos } { available in ios 13.0 };

type
  AVAudioSessionPromptStyle = NSUInteger;
  AVAudioSessionPromptStylePtr = ^AVAudioSessionPromptStyle;

const
  AVAudioSessionPromptStyleNone = 'none';
  AVAudioSessionPromptStyleShort = 'shrt';
  AVAudioSessionPromptStyleNormal = 'nrml';

type
  AVAudioStereoOrientation = NSInteger;
  AVAudioStereoOrientationPtr = ^AVAudioStereoOrientation;

const
  AVAudioStereoOrientationNone = 0;
  AVAudioStereoOrientationPortrait = 1;
  AVAudioStereoOrientationPortraitUpsideDown = 2;
  AVAudioStereoOrientationLandscapeRight = 3;
  AVAudioStereoOrientationLandscapeLeft = 4;

type
  AVAudioSessionRecordPermission = NSUInteger;
  AVAudioSessionRecordPermissionPtr = ^AVAudioSessionRecordPermission;

const
  AVAudioSessionRecordPermissionUndetermined = 'undt';
  AVAudioSessionRecordPermissionDenied = 'deny';
  AVAudioSessionRecordPermissionGranted = 'grnt';
{$endif}

{$endif}

{$else}
{$endif}
