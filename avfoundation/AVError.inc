{ Parsed from AVFoundation.framework AVError.h }

{$if defined(__NULL_MACRO__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVFoundationErrorDomain: NSErrorDomain { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVErrorDeviceKey: NSString { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVErrorTimeKey: NSString { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVErrorFileSizeKey: NSString { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVErrorPIDKey: NSString { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVErrorRecordingSuccessfullyFinishedKey: NSString { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVErrorMediaTypeKey: NSString { available in macos 10.7, ios 4.3, tvos 9.0, watchos 1.0 }; cvar; external;
  AVErrorMediaSubTypeKey: NSString { available in macos 10.7, ios 4.3, tvos 9.0, watchos 1.0 }; cvar; external;
  AVErrorPresentationTimeStampKey: NSString { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVErrorPersistentTrackIDKey: NSString { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }; cvar; external;
  AVErrorFileTypeKey: NSString { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 }; cvar; external;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVErrorDiscontinuityFlagsKey: NSString { unavailable in ios, tvos, watchos } { available in macos 10.7 }; cvar; external;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AVError = NSErrorDomain;
  AVErrorPtr = ^AVError;

const
  AVErrorUnknown = -11800;
  AVErrorOutOfMemory = -11801;
  AVErrorSessionNotRunning = -11803;
  AVErrorDeviceAlreadyUsedByAnotherSession = -11804;
  AVErrorNoDataCaptured = -11805;
  AVErrorSessionConfigurationChanged = -11806;
  AVErrorDiskFull = -11807;
  AVErrorDeviceWasDisconnected = -11808;
  AVErrorMediaChanged = -11809;
  AVErrorMaximumDurationReached = -11810;
  AVErrorMaximumFileSizeReached = -11811;
  AVErrorMediaDiscontinuity = -11812;
  AVErrorMaximumNumberOfSamplesForFileFormatReached = -11813;
  AVErrorDeviceNotConnected = -11814;
  AVErrorDeviceInUseByAnotherApplication = -11815;
  AVErrorDeviceLockedForConfigurationByAnotherProcess = -11817;
  {$if defined(TARGET_OS_IPHONE)}
  AVErrorSessionWasInterrupted = -11818;
  AVErrorMediaServicesWereReset = -11819;
  {$endif}
  AVErrorExportFailed = -11820;
  AVErrorDecodeFailed = -11821;
  AVErrorInvalidSourceMedia = -11822;
  AVErrorFileAlreadyExists = -11823;
  AVErrorCompositionTrackSegmentsNotContiguous = -11824;
  AVErrorInvalidCompositionTrackSegmentDuration = -11825;
  AVErrorInvalidCompositionTrackSegmentSourceStartTime = -11826;
  AVErrorInvalidCompositionTrackSegmentSourceDuration = -11827;
  AVErrorFileFormatNotRecognized = -11828;
  AVErrorFileFailedToParse = -11829;
  AVErrorMaximumStillImageCaptureRequestsExceeded = -11830;
  AVErrorContentIsProtected = -11831;
  AVErrorNoImageAtTime = -11832;
  AVErrorDecoderNotFound = -11833;
  AVErrorEncoderNotFound = -11834;
  AVErrorContentIsNotAuthorized = -11835;
  AVErrorApplicationIsNotAuthorized = -11836;
  {$if defined(TARGET_OS_IPHONE)}
  AVErrorDeviceIsNotAvailableInBackground = -11837 { unavailable in watchos } { unavailable in macos };
  {$endif}
  AVErrorOperationNotSupportedForAsset = -11838;
  AVErrorDecoderTemporarilyUnavailable = -11839;
  AVErrorEncoderTemporarilyUnavailable = -11840;
  AVErrorInvalidVideoComposition = -11841;
  AVErrorReferenceForbiddenByReferencePolicy = -11842;
  AVErrorInvalidOutputURLPathExtension = -11843;
  AVErrorScreenCaptureFailed = -11844;
  AVErrorDisplayWasDisabled = -11845;
  AVErrorTorchLevelUnavailable = -11846;
  {$if defined(TARGET_OS_IPHONE)}
  AVErrorOperationInterrupted = -11847;
  {$endif}
  AVErrorIncompatibleAsset = -11848;
  AVErrorFailedToLoadMediaData = -11849;
  AVErrorServerIncorrectlyConfigured = -11850;
  AVErrorApplicationIsNotAuthorizedToUseDevice = -11852;
  AVErrorFailedToParse = -11853 { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 };
  AVErrorFileTypeDoesNotSupportSampleReferences = -11854 { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 };
  AVErrorUndecodableMediaData = -11855 { available in macos 10.10, ios 8.0, tvos 9.0, watchos 1.0 };
  AVErrorAirPlayControllerRequiresInternet = -11856 { available in macos 10.10, ios 8.3, tvos 9.0, watchos 1.3 };
  AVErrorAirPlayReceiverRequiresInternet = -11857 { available in macos 10.10, ios 8.3, tvos 9.0, watchos 1.3 };
  AVErrorVideoCompositorFailed = -11858 { available in macos 10.11, ios 9.0, tvos 9.0, watchos 2.0 };
  AVErrorRecordingAlreadyInProgress = -11859 { unavailable in macos } { available in ios 9.0, tvos 9.0, watchos 2.0 };
  AVErrorCreateContentKeyRequestFailed = -11860 { unavailable in ios, tvos } { unavailable in watchos };
  AVErrorUnsupportedOutputSettings = -11861 { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 };
  AVErrorOperationNotAllowed = -11862 { available in macos 10.12, ios 10.0, tvos 10.0, watchos 3.0 };
  AVErrorContentIsUnavailable = -11863 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  AVErrorFormatUnsupported = -11864 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  AVErrorMalformedDepth = -11865 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  AVErrorContentNotUpdated = -11866 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  AVErrorNoLongerPlayable = -11867 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  AVErrorNoCompatibleAlternatesForExternalDisplay = -11868 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  AVErrorNoSourceTrack = -11869 { available in macos 10.13.2, ios 11.2, tvos 11.2, watchos 4.2 };
  AVErrorExternalPlaybackNotSupportedForAsset = -11870 { available in macos 10.14, ios 12.0, tvos 12.0, watchos 5.0 };
  AVErrorOperationNotSupportedForPreset = -11871 { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 };
  AVErrorSessionHardwareCostOverage = -11872 { unavailable in macos } { unavailable in tvos, watchos };
  AVErrorUnsupportedDeviceActiveFormat = -11873 { unavailable in macos } { unavailable in tvos, watchos };
  AVErrorIncorrectlyConfigured = -11875 { available in macos 11.0, ios 14.0, tvos 14.0, watchos 7.0 };
  AVErrorSegmentStartedWithNonSyncSample = -11876 { available in macos 11.0, ios 14.0, tvos 14.0, watchos 7.0 };
  AVErrorRosettaNotInstalled = -11877 { available in macos 11.0, ios 14.0, tvos 14.0, watchos 7.0 };
{$endif}

{$else}
{$endif}
