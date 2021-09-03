{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVError.h }

{$if defined(__NULL_MACRO__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVFoundationErrorDomain: NSErrorDomain { available in macos , ios , tvos , watchos  }; cvar; external;
  AVErrorDeviceKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVErrorTimeKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVErrorFileSizeKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVErrorPIDKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVErrorRecordingSuccessfullyFinishedKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVErrorMediaTypeKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVErrorMediaSubTypeKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVErrorPresentationTimeStampKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVErrorPersistentTrackIDKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
  AVErrorFileTypeKey: NSString { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVErrorDiscontinuityFlagsKey: NSString { unavailable in ios, tvos, watchos }; cvar; external;
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
  AVErrorDeviceIsNotAvailableInBackground = -11837 { unavailable in watchos };
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
  AVErrorFailedToParse = -11853 { available in macos , ios , tvos , watchos  };
  AVErrorFileTypeDoesNotSupportSampleReferences = -11854 { available in macos , ios , tvos , watchos  };
  AVErrorUndecodableMediaData = -11855 { available in macos , ios , tvos , watchos  };
  AVErrorAirPlayControllerRequiresInternet = -11856 { available in macos , ios , tvos , watchos  };
  AVErrorAirPlayReceiverRequiresInternet = -11857 { available in macos , ios , tvos , watchos  };
  AVErrorVideoCompositorFailed = -11858 { available in macos , ios , tvos , watchos  };
  AVErrorRecordingAlreadyInProgress = -11859 { unavailable in macos };
  AVErrorCreateContentKeyRequestFailed = -11860 { unavailable in ios, tvos };
  AVErrorUnsupportedOutputSettings = -11861 { available in macos , ios , tvos , watchos  };
  AVErrorOperationNotAllowed = -11862 { available in macos , ios , tvos , watchos  };
  AVErrorContentIsUnavailable = -11863 { available in macos , ios , tvos , watchos  };
  AVErrorFormatUnsupported = -11864 { available in macos , ios , tvos , watchos  };
  AVErrorMalformedDepth = -11865 { available in macos , ios , tvos , watchos  };
  AVErrorContentNotUpdated = -11866 { available in macos , ios , tvos , watchos  };
  AVErrorNoLongerPlayable = -11867 { available in macos , ios , tvos , watchos  };
  AVErrorNoCompatibleAlternatesForExternalDisplay = -11868 { available in macos , ios , tvos , watchos  };
  AVErrorNoSourceTrack = -11869 { available in macos , ios , tvos , watchos  };
  AVErrorExternalPlaybackNotSupportedForAsset = -11870 { available in macos , ios , tvos , watchos  };
  AVErrorOperationNotSupportedForPreset = -11871 { available in macos , ios , tvos , watchos  };
  AVErrorSessionHardwareCostOverage = -11872 { unavailable in macos };
  AVErrorUnsupportedDeviceActiveFormat = -11873 { unavailable in macos };
  AVErrorIncorrectlyConfigured = -11875 { available in macos , ios , tvos , watchos  };
  AVErrorSegmentStartedWithNonSyncSample = -11876 { available in macos , ios , tvos , watchos  };
  AVErrorRosettaNotInstalled = -11877 { available in macos , ios , tvos , watchos  };
{$endif}

{$else}
{$endif}
