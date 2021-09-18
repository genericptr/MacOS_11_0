{ Parsed from CoreHaptics.framework CHHapticErrors.h }
{$ifdef TYPES}
type
  CoreHapticsErrorDomain = NSErrorDomain; // 'com.apple.CoreHaptics'
  CHHapticErrorCode = NSInteger;

const
  CHHapticErrorCodeEngineNotRunning = -4805;
  CHHapticErrorCodeOperationNotPermitted = -4806;
  CHHapticErrorCodeEngineStartTimeout = -4808;
  CHHapticErrorCodeNotSupported = -4809;
  CHHapticErrorCodeServerInitFailed = -4810;
  CHHapticErrorCodeServerInterrupted = -4811;
  CHHapticErrorCodeInvalidPatternPlayer = -4812;
  CHHapticErrorCodeInvalidPatternData = -4813;
  CHHapticErrorCodeInvalidPatternDictionary = -4814;
  CHHapticErrorCodeInvalidAudioSession = -4815;
  CHHapticErrorCodeInvalidParameterType = -4820;
  CHHapticErrorCodeInvalidEventType = -4821;
  CHHapticErrorCodeInvalidEventTime = -4822;
  CHHapticErrorCodeInvalidEventDuration = -4823;
  CHHapticErrorCodeInvalidAudioResource = -4824;
  CHHapticErrorCodeResourceNotAvailable = -4825;
  CHHapticErrorCodeBadEventEntry = -4830;
  CHHapticErrorCodeBadParameterEntry = -4831;
  CHHapticErrorCodeInvalidTime = -4840;
  CHHapticErrorCodeUnknownError = -4898;
  CHHapticErrorCodeMemoryError = -4899;
{$endif}

