{ Parsed from ReplayKit.framework RPError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  RPRecordingErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  RPRecordingErrorCode = NSInteger;
  RPRecordingErrorCodePtr = ^RPRecordingErrorCode;

const
  RPRecordingErrorUnknown = -5800;
  RPRecordingErrorUserDeclined = -5801;
  RPRecordingErrorDisabled = -5802;
  RPRecordingErrorFailedToStart = -5803;
  RPRecordingErrorFailed = -5804;
  RPRecordingErrorInsufficientStorage = -5805;
  RPRecordingErrorInterrupted = -5806;
  RPRecordingErrorContentResize = -5807;
  RPRecordingErrorBroadcastInvalidSession = -5808;
  RPRecordingErrorSystemDormancy = -5809;
  RPRecordingErrorEntitlements = -5810;
  RPRecordingErrorActivePhoneCall = -5811;
  RPRecordingErrorFailedToSave = -5812;
  RPRecordingErrorCarPlay = -5813;
  RPRecordingErrorFailedApplicationConnectionInvalid = -5814;
  RPRecordingErrorFailedApplicationConnectionInterrupted = -5815;
  RPRecordingErrorFailedNoMatchingApplicationContext = -5816;
  RPRecordingErrorFailedMediaServicesFailure = -5817;
  RPRecordingErrorVideoMixingFailure = -5818;
  RPRecordingErrorBroadcastSetupFailed = -5819;
  RPRecordingErrorFailedToObtainURL = -5820;
  RPRecordingErrorFailedIncorrectTimeStamps = -5821;
  RPRecordingErrorFailedToProcessFirstSample = -5822;
  RPRecordingErrorFailedAssetWriterFailedToSave = -5823;
  RPRecordingErrorFailedNoAssetWriter = -5824;
  RPRecordingErrorFailedAssetWriterInWrongState = -5825;
  RPRecordingErrorFailedAssetWriterExportFailed = -5826;
  RPRecordingErrorFailedToRemoveFile = -5827;
  RPRecordingErrorFailedAssetWriterExportCanceled = -5828;
  RPRecordingErrorAttemptToStopNonRecording = -5829;
  RPRecordingErrorAttemptToStartInRecordingState = -5830;
  RPRecordingErrorPhotoFailure = -5831;
  RPRecordingErrorRecordingInvalidSession = -5832;
  RPRecordingErrorFailedToStartCaptureStack = -5833;
  RPRecordingErrorInvalidParameter = -5834;
  RPRecordingErrorFilePermissions = -5835;
  RPRecordingErrorCodeSuccessful = 0;
{$endif}

