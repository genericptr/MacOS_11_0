{ Parsed from ImageCaptureCore.framework ImageCaptureConstants.h }
{$ifdef FUNCTIONS}
function ICRunLoopMode: NSString; cdecl; external; { unavailable in ios }
{$endif}


{$ifdef TYPES}
type
  ICErrorDomain = NSErrorDomain;

  ICEXIFOrientationType = NSUInteger;
  ICEXIFOrientationTypePtr = ^ICEXIFOrientationType;

const
  ICEXIFOrientation1 = 1;
  ICEXIFOrientation2 = 2;
  ICEXIFOrientation3 = 3;
  ICEXIFOrientation4 = 4;
  ICEXIFOrientation5 = 5;
  ICEXIFOrientation6 = 6;
  ICEXIFOrientation7 = 7;
  ICEXIFOrientation8 = 8;

type
  ICReturnThumbnailErrorCode = ICErrorDomain;
  ICReturnThumbnailErrorCodePtr = ^ICReturnThumbnailErrorCode;

const
  ICReturnThumbnailNotAvailable = -21000;
  ICReturnThumbnailAlreadyFetching = -20999;
  ICReturnThumbnailCanceled = -20098;
  ICReturnThumbnailInvalid = -20097;

type
  ICReturnMetadataErrorCode = ICErrorDomain;
  ICReturnMetadataErrorCodePtr = ^ICReturnMetadataErrorCode;

const
  ICReturnMetadataNotAvailable = -20150;
  ICReturnMetadataAlreadyFetching = -20149;
  ICReturnMetadataCanceled = -20148;
  ICReturnMetadataInvalid = -20147;

type
  ICReturnConnectionErrorCode = ICErrorDomain;
  ICReturnConnectionErrorCodePtr = ^ICReturnConnectionErrorCode;

const
  ICReturnConnectionDriverExited = -21350;
  ICReturnConnectionClosedSessionSuddenly = -21349;
  ICReturnConnectionEjectedSuddenly = -21348;
  ICReturnConnectionSessionAlreadyOpen = -21347;
  ICReturnConnectionEjectFailed = -21346;
  ICReturnConnectionFailedToOpen = -21345;
  ICReturnConnectionFailedToOpenDevice = -21344;
  ICReturnConnectionNotAuthorizedToOpenDevice = -21343;

type
  ICReturnPTPDeviceErrorCode = ICErrorDomain;
  ICReturnPTPDeviceErrorCodePtr = ^ICReturnPTPDeviceErrorCode;

const
  ICReturnPTPFailedToSendCommand = -21250;
  ICReturnPTPNotAuthorizedToSendCommand = -21249;

type
  ICReturnDownloadErrorCode = ICErrorDomain;
  ICReturnDownloadErrorCodePtr = ^ICReturnDownloadErrorCode;

const
  ICReturnDownloadPathInvalid = -21100;
  ICReturnDownloadFileWritable = -21099;

type
  ICLegacyReturnCode = ICErrorDomain;
  ICLegacyReturnCodePtr = ^ICLegacyReturnCode;

const
  ICLegacyReturnCodeCommunicationErr = -9900;
  ICLegacyReturnCodeDeviceNotFoundErr = -9901;
  ICLegacyReturnCodeDeviceNotOpenErr = -9902;
  ICLegacyReturnCodeFileCorruptedErr = -9903;
  ICLegacyReturnCodeIOPendingErr = -9904;
  ICLegacyReturnCodeInvalidObjectErr = -9905;
  ICLegacyReturnCodeInvalidPropertyErr = -9906;
  ICLegacyReturnCodeIndexOutOfRangeErr = -9907;
  ICLegacyReturnCodePropertyTypeNotFoundErr = -9908;
  ICLegacyReturnCodeCannotYieldDevice = -9909;
  ICLegacyReturnCodeDataTypeNotFoundErr = -9910;
  ICLegacyReturnCodeDeviceMemoryAllocationErr = -9911;
  ICLegacyReturnCodeDeviceInternalErr = -9912;
  ICLegacyReturnCodeDeviceInvalidParamErr = -9913;
  ICLegacyReturnCodeDeviceAlreadyOpenErr = -9914;
  ICLegacyReturnCodeDeviceLocationIDNotFoundErr = -9915;
  ICLegacyReturnCodeDeviceGUIDNotFoundErr = -9916;
  ICLegacyReturnCodeDeviceIOServicePathNotFoundErr = -9917;
  ICLegacyReturnCodeDeviceUnsupportedErr = -9918;
  ICLegacyReturnCodeFrameworkInternalErr = -9919;
  ICLegacyReturnCodeExtensionInternalErr = -9920;
  ICLegacyReturnCodeInvalidSessionErr = -9921;

type
  ICReturnCode = ICErrorDomain;
  ICReturnCodePtr = ^ICReturnCode;

const
  ICReturnSuccess = 0;
  ICReturnInvalidParam = -9922;
  ICReturnCommunicationTimedOut = -9923;
  ICReturnScanOperationCanceled = -9924;
  ICReturnScannerInUseByLocalUser = -9925;
  ICReturnScannerInUseByRemoteUser = -9926;
  ICReturnDeviceFailedToOpenSession = -9927;
  ICReturnDeviceFailedToCloseSession = -9928;
  ICReturnScannerFailedToSelectFunctionalUnit = -9929;
  ICReturnScannerFailedToCompleteOverviewScan = -9930;
  ICReturnScannerFailedToCompleteScan = -9931;
  ICReturnReceivedUnsolicitedScannerStatusInfo = -9932;
  ICReturnReceivedUnsolicitedScannerErrorInfo = -9933;
  ICReturnDownloadFailed = -9934;
  ICReturnUploadFailed = -9935;
  ICReturnFailedToCompletePassThroughCommand = -9936;
  ICReturnDownloadCanceled = -9937;
  ICReturnFailedToEnabeTethering = -9938;
  ICReturnFailedToDisabeTethering = -9939;
  ICReturnFailedToCompleteSendMessageRequest = -9940;
  ICReturnDeleteFilesFailed = -9941;
  ICReturnDeleteFilesCanceled = -9942;
  ICReturnDeviceIsPasscodeLocked = -9943;
  ICReturnDeviceFailedToTakePicture = -9944;
  ICReturnDeviceSoftwareNotInstalled = -9945;
  ICReturnDeviceSoftwareIsBeingInstalled = -9946;
  ICReturnDeviceSoftwareInstallationCompleted = -9947;
  ICReturnDeviceSoftwareInstallationCanceled = -9948;
  ICReturnDeviceSoftwareInstallationFailed = -9949;
  ICReturnDeviceSoftwareNotAvailable = -9950;
  ICReturnDeviceCouldNotPair = -9951;
  ICReturnDeviceCouldNotUnpair = -9952;
  ICReturnDeviceNeedsCredentials = -9953;
  ICReturnDeviceIsBusyEnumerating = -9954;
  ICReturnDeviceCommandGeneralFailure = -9955;
  ICReturnDeviceFailedToCompleteTransfer = -9956;
  ICReturnDeviceFailedToSendData = -9957;
  ICReturnSessionNotOpened = -9958;
  ICReturnExFATVolumeInvalid = 21200;
  ICReturnMultiErrorDictionary = -30000;

type
  ICReturnObjectErrorCode = ICErrorDomain;
  ICReturnObjectErrorCodePtr = ^ICReturnObjectErrorCode;

const
  ICReturnCodeObjectDoesNotExist = -21450;
  ICReturnCodeObjectDataOffsetInvalid = -21449;
  ICReturnCodeObjectCouldNotBeRead = -21448;
  ICReturnCodeObjectDataEmpty = -21447;
  ICReturnCodeObjectDataRequestTooLarge = -21446;

const
  ICReturnDeviceIsAccessRestrictedAppleDevice = ICReturnDeviceIsPasscodeLocked;
  ICReturnFailedToEnableTethering = ICReturnFailedToEnabeTethering;
  ICReturnFailedToDisableTethering = ICReturnFailedToDisabeTethering;
{$endif}

