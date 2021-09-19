{ Parsed from AVFoundation.framework AVCaptureDevice.h }

{ Types from AVCaptureDeviceCenterStage }
{$ifdef TYPES}

type
  AVCaptureCenterStageControlMode = NSInteger;
type
  AVCaptureCenterStageControlModePtr = ^AVCaptureCenterStageControlMode;

const
  AVCaptureCenterStageControlModeUser = 0;
  AVCaptureCenterStageControlModeApp = 1;
  AVCaptureCenterStageControlModeCooperative = 2;
{$endif}


{$ifdef CALLBACKS}
type
  AVCaptureDeviceSetFocusModeLockedWithLensPositionCallback = reference to procedure (syncTime: CMTime); cblock; cdecl;
  AVCaptureDeviceSetExposureModeCustomWithDurationCallback = reference to procedure (syncTime: CMTime); cblock; cdecl;
  AVCaptureDeviceSetExposureTargetBiasCallback = reference to procedure (syncTime: CMTime); cblock; cdecl;
  AVCaptureDeviceSetWhiteBalanceModeLockedWithDeviceWhiteBalanceGainsCallback = reference to procedure (syncTime: CMTime); cblock; cdecl;
  AVCaptureDeviceRequestAccessForMediaTypeCallback = reference to procedure (granted: objcbool); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVCaptureDevicePtr = ^AVCaptureDevice;
  AVCaptureDeviceDiscoverySessionPtr = ^AVCaptureDeviceDiscoverySession;
  AVFrameRateRangePtr = ^AVFrameRateRange;
  AVCaptureDeviceFormatPtr = ^AVCaptureDeviceFormat;
  AVCaptureDeviceInputSourcePtr = ^AVCaptureDeviceInputSource;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVCaptureDeviceWasConnectedNotification: NSString { unavailable in tvos } { available in macos 10.7, ios 4.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureDeviceWasDisconnectedNotification: NSString { unavailable in tvos } { available in macos 10.7, ios 4.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureDeviceSubjectAreaDidChangeNotification: NSString { unavailable in macos, tvos } { available in ios 5.0, macCatalyst 14.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDevice = objcclass external (NSObject)
  private
    _internal: AVCaptureDeviceInternal;
  public
    class function devices: NSArray; message 'devices'; { unavailable in tvos }
    class function devicesWithMediaType (mediaType: AVMediaType): NSArray; message 'devicesWithMediaType:'; { unavailable in tvos }
    class function defaultDeviceWithMediaType (mediaType: AVMediaType): AVCaptureDevice; message 'defaultDeviceWithMediaType:';
    class function deviceWithUniqueID (deviceUniqueID: NSString): AVCaptureDevice; message 'deviceWithUniqueID:';
    function uniqueID: NSString; message 'uniqueID';
    function modelID: NSString; message 'modelID';
    function localizedName: NSString; message 'localizedName';
    function manufacturer: NSString; message 'manufacturer'; { unavailable in tvos } { unavailable in watchos }
    function transportType: cint32; message 'transportType'; { unavailable in ios, macCatalyst, watchos, tvos }
    function hasMediaType (mediaType: AVMediaType): objcbool; message 'hasMediaType:';
    function lockForConfiguration (outError: NSErrorPtr): objcbool; message 'lockForConfiguration:';
    procedure unlockForConfiguration; message 'unlockForConfiguration';
    function supportsAVCaptureSessionPreset (preset: AVCaptureSessionPreset): objcbool; message 'supportsAVCaptureSessionPreset:';
    function isConnected: objcbool; message 'isConnected';
    function isInUseByAnotherApplication: objcbool; message 'isInUseByAnotherApplication'; { unavailable in ios, watchos, tvos } { available in macCatalyst 14.0 }
    function isSuspended: objcbool; message 'isSuspended'; { unavailable in tvos } { unavailable in watchos }
    function linkedDevices: NSArray; message 'linkedDevices'; { unavailable in ios, macCatalyst, watchos, tvos }
    function formats: NSArray; message 'formats'; { unavailable in tvos } { available in ios 7.0, macCatalyst 14.0 }
    procedure setActiveFormat(newValue: AVCaptureDeviceFormat); message 'setActiveFormat:'; { unavailable in tvos } { available in ios 7.0, macCatalyst 14.0 }
    function activeFormat: AVCaptureDeviceFormat; message 'activeFormat'; { unavailable in tvos } { available in ios 7.0, macCatalyst 14.0 }
    procedure setActiveVideoMinFrameDuration(newValue: CMTime); message 'setActiveVideoMinFrameDuration:'; { unavailable in tvos } { available in ios 7.0, macCatalyst 14.0 }
    function activeVideoMinFrameDuration: CMTime; message 'activeVideoMinFrameDuration'; { unavailable in tvos } { available in ios 7.0, macCatalyst 14.0 }
    procedure setActiveVideoMaxFrameDuration(newValue: CMTime); message 'setActiveVideoMaxFrameDuration:'; { unavailable in tvos } { available in macos 10.9, ios 7.0, macCatalyst 14.0 }
    function activeVideoMaxFrameDuration: CMTime; message 'activeVideoMaxFrameDuration'; { unavailable in tvos } { available in macos 10.9, ios 7.0, macCatalyst 14.0 }
    function inputSources: NSArray; message 'inputSources'; { unavailable in ios, macCatalyst, watchos, tvos }
    procedure setActiveInputSource(newValue: AVCaptureDeviceInputSource); message 'setActiveInputSource:'; { unavailable in ios, macCatalyst, watchos, tvos }
    function activeInputSource: AVCaptureDeviceInputSource; message 'activeInputSource'; { unavailable in ios, macCatalyst, watchos, tvos }
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureDevicePosition = NSInteger;
  AVCaptureDevicePositionPtr = ^AVCaptureDevicePosition;

const
  AVCaptureDevicePositionUnspecified = 0;
  AVCaptureDevicePositionBack = 1;
  AVCaptureDevicePositionFront = 2;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDevice_AVCaptureDevicePosition = objccategory external name 'AVCaptureDevicePosition' (AVCaptureDevice)
    function position: AVCaptureDevicePosition; message 'position';
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureDeviceType = NSString { unavailable in tvos } { available in macos 10.15, ios 10.0, macCatalyst 14.0 };
  AVCaptureDeviceTypePtr = ^AVCaptureDeviceType { unavailable in tvos } { available in macos 10.15, ios 10.0, macCatalyst 14.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVCaptureDeviceTypeExternalUnknown: AVCaptureDeviceType { unavailable in ios, macCatalyst, watchos, tvos } { available in macos 10.15 }; cvar; external;
  AVCaptureDeviceTypeBuiltInMicrophone: AVCaptureDeviceType { unavailable in tvos } { available in macos 10.15, ios 10.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureDeviceTypeBuiltInWideAngleCamera: AVCaptureDeviceType { unavailable in tvos } { available in macos 10.15, ios 10.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureDeviceTypeBuiltInTelephotoCamera: AVCaptureDeviceType { unavailable in macos, tvos } { available in ios 10.0, macCatalyst 14.0 }; cvar; external;
  AVCaptureDeviceTypeBuiltInUltraWideCamera: AVCaptureDeviceType { unavailable in macos, tvos } { unavailable in watchos }; cvar; external;
  AVCaptureDeviceTypeBuiltInDualCamera: AVCaptureDeviceType { unavailable in macos, tvos } { available in ios 10.2, macCatalyst 14.0 }; cvar; external;
  AVCaptureDeviceTypeBuiltInDualWideCamera: AVCaptureDeviceType { unavailable in macos, tvos } { unavailable in watchos }; cvar; external;
  AVCaptureDeviceTypeBuiltInTripleCamera: AVCaptureDeviceType { unavailable in macos, tvos } { unavailable in watchos }; cvar; external;
  AVCaptureDeviceTypeBuiltInTrueDepthCamera: AVCaptureDeviceType { unavailable in macos, tvos } { available in ios 11.1, macCatalyst 14.0 }; cvar; external;
  AVCaptureDeviceTypeBuiltInDuoCamera: AVCaptureDeviceType { unavailable in macos } { unavailable in tvos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDevice_AVCaptureDeviceType = objccategory external name 'AVCaptureDeviceType' (AVCaptureDevice)
    function deviceType: AVCaptureDeviceType; message 'deviceType'; { unavailable in tvos } { available in macos 10.15, ios 10.0, macCatalyst 14.0 }
    class function defaultDeviceWithDeviceType_mediaType_position (deviceType_: AVCaptureDeviceType; mediaType: AVMediaType; position: AVCaptureDevicePosition): AVCaptureDevice; message 'defaultDeviceWithDeviceType:mediaType:position:'; { unavailable in tvos } { available in macos 10.15, ios 10.0, macCatalyst 14.0 }
  end;

type
  AVCaptureDeviceSystemPressure = objccategory external (AVCaptureDevice)
    function systemPressureState: AVCaptureSystemPressureState; message 'systemPressureState'; { unavailable in macos, tvos } { unavailable in watchos }
  end;

type
  AVCaptureDeviceVirtual = objccategory external (AVCaptureDevice)
    function isVirtualDevice: objcbool; message 'isVirtualDevice'; { unavailable in macos, tvos } { unavailable in watchos }
    function constituentDevices: NSArray; message 'constituentDevices'; { unavailable in macos, tvos } { unavailable in watchos }
    function virtualDeviceSwitchOverVideoZoomFactors: NSArray; message 'virtualDeviceSwitchOverVideoZoomFactors'; { unavailable in macos, tvos } { unavailable in watchos }
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureFlashMode = NSInteger;
  AVCaptureFlashModePtr = ^AVCaptureFlashMode;

const
  AVCaptureFlashModeOff = 0;
  AVCaptureFlashModeOn = 1;
  AVCaptureFlashModeAuto = 2;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceFlash = objccategory external (AVCaptureDevice)
    function hasFlash: objcbool; message 'hasFlash';
    function isFlashAvailable: objcbool; message 'isFlashAvailable'; { unavailable in tvos } { available in macos 10.15, ios 5.0, macCatalyst 14.0 }
    function isFlashActive: objcbool; message 'isFlashActive'; { unavailable in macos } { unavailable in tvos }
    function isFlashModeSupported (flashMode: AVCaptureFlashMode): objcbool; message 'isFlashModeSupported:'; { unavailable in tvos }
    procedure setFlashMode(newValue: AVCaptureFlashMode); message 'setFlashMode:'; { unavailable in tvos }
    function flashMode: AVCaptureFlashMode; message 'flashMode'; { unavailable in tvos }
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureTorchMode = NSInteger;
  AVCaptureTorchModePtr = ^AVCaptureTorchMode;

const
  AVCaptureTorchModeOff = 0;
  AVCaptureTorchModeOn = 1;
  AVCaptureTorchModeAuto = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVCaptureMaxAvailableTorchLevel: single { unavailable in tvos } { available in macos 10.15, ios 6.0, macCatalyst 14.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceTorch = objccategory external (AVCaptureDevice)
    function hasTorch: objcbool; message 'hasTorch';
    function isTorchAvailable: objcbool; message 'isTorchAvailable'; { unavailable in tvos } { available in macos 10.15, ios 5.0, macCatalyst 14.0 }
    function isTorchActive: objcbool; message 'isTorchActive'; { unavailable in tvos } { available in macos 10.15, ios 6.0, macCatalyst 14.0 }
    function torchLevel: single; message 'torchLevel'; { unavailable in tvos } { available in macos 10.15, ios 5.0, macCatalyst 14.0 }
    function isTorchModeSupported (torchMode: AVCaptureTorchMode): objcbool; message 'isTorchModeSupported:';
    procedure setTorchMode(newValue: AVCaptureTorchMode); message 'setTorchMode:';
    function torchMode: AVCaptureTorchMode; message 'torchMode';
    function setTorchModeOnWithLevel_error (torchLevel_: single; outError: NSErrorPtr): objcbool; message 'setTorchModeOnWithLevel:error:'; { unavailable in tvos } { available in macos 10.15, ios 6.0, macCatalyst 14.0 }
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureFocusMode = NSInteger;
  AVCaptureFocusModePtr = ^AVCaptureFocusMode;

const
  AVCaptureFocusModeLocked = 0;
  AVCaptureFocusModeAutoFocus = 1;
  AVCaptureFocusModeContinuousAutoFocus = 2;

type
  AVCaptureAutoFocusRangeRestriction = NSInteger;
  AVCaptureAutoFocusRangeRestrictionPtr = ^AVCaptureAutoFocusRangeRestriction;

const
  AVCaptureAutoFocusRangeRestrictionNone = 0;
  AVCaptureAutoFocusRangeRestrictionNear = 1;
  AVCaptureAutoFocusRangeRestrictionFar = 2;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceFocus = objccategory external (AVCaptureDevice)
    function isFocusModeSupported (focusMode: AVCaptureFocusMode): objcbool; message 'isFocusModeSupported:';
    function isLockingFocusWithCustomLensPositionSupported: objcbool; message 'isLockingFocusWithCustomLensPositionSupported'; { unavailable in macos, tvos } { available in ios 10.0, macCatalyst 14.0 }
    procedure setFocusMode(newValue: AVCaptureFocusMode); message 'setFocusMode:';
    function focusMode: AVCaptureFocusMode; message 'focusMode';
    function isFocusPointOfInterestSupported: objcbool; message 'isFocusPointOfInterestSupported';
    procedure setFocusPointOfInterest(newValue: CGPoint); message 'setFocusPointOfInterest:';
    function focusPointOfInterest: CGPoint; message 'focusPointOfInterest';
    function isAdjustingFocus: objcbool; message 'isAdjustingFocus';
    function isAutoFocusRangeRestrictionSupported: objcbool; message 'isAutoFocusRangeRestrictionSupported'; { unavailable in macos, tvos } { available in ios 7.0, macCatalyst 14.0 }
    procedure setAutoFocusRangeRestriction(newValue: AVCaptureAutoFocusRangeRestriction); message 'setAutoFocusRangeRestriction:'; { unavailable in macos, tvos } { available in ios 7.0, macCatalyst 14.0 }
    function autoFocusRangeRestriction: AVCaptureAutoFocusRangeRestriction; message 'autoFocusRangeRestriction'; { unavailable in macos, tvos } { available in ios 7.0, macCatalyst 14.0 }
    function isSmoothAutoFocusSupported: objcbool; message 'isSmoothAutoFocusSupported'; { unavailable in macos, tvos } { available in ios 7.0, macCatalyst 14.0 }
    procedure setSmoothAutoFocusEnabled(newValue: objcbool); message 'setSmoothAutoFocusEnabled:'; { unavailable in macos, tvos } { available in ios 7.0, macCatalyst 14.0 }
    function isSmoothAutoFocusEnabled: objcbool; message 'isSmoothAutoFocusEnabled'; { unavailable in macos, tvos } { available in ios 7.0, macCatalyst 14.0 }
    function lensPosition: single; message 'lensPosition'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    procedure setFocusModeLockedWithLensPosition_completionHandler (lensPosition_: single; handler: AVCaptureDeviceSetFocusModeLockedWithLensPositionCallback); message 'setFocusModeLockedWithLensPosition:completionHandler:'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureExposureMode = NSInteger;
  AVCaptureExposureModePtr = ^AVCaptureExposureMode;

const
  AVCaptureExposureModeLocked = 0;
  AVCaptureExposureModeAutoExpose = 1;
  AVCaptureExposureModeContinuousAutoExposure = 2;
  AVCaptureExposureModeCustom = 3 { available in macos 10.15, ios 8.0, macCatalyst 14.0 };
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceExposure = objccategory external (AVCaptureDevice)
    function isExposureModeSupported (exposureMode: AVCaptureExposureMode): objcbool; message 'isExposureModeSupported:';
    procedure setExposureMode(newValue: AVCaptureExposureMode); message 'setExposureMode:';
    function exposureMode: AVCaptureExposureMode; message 'exposureMode';
    function isExposurePointOfInterestSupported: objcbool; message 'isExposurePointOfInterestSupported';
    procedure setExposurePointOfInterest(newValue: CGPoint); message 'setExposurePointOfInterest:';
    function exposurePointOfInterest: CGPoint; message 'exposurePointOfInterest';
    procedure setActiveMaxExposureDuration(newValue: CMTime); message 'setActiveMaxExposureDuration:'; { unavailable in macos, tvos } { unavailable in watchos }
    function activeMaxExposureDuration: CMTime; message 'activeMaxExposureDuration'; { unavailable in macos, tvos } { unavailable in watchos }
    function isAdjustingExposure: objcbool; message 'isAdjustingExposure';
    function lensAperture: single; message 'lensAperture'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function exposureDuration: CMTime; message 'exposureDuration'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function ISO: single; message 'ISO'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    procedure setExposureModeCustomWithDuration_ISO_completionHandler (duration: CMTime; ISO_: single; handler: AVCaptureDeviceSetExposureModeCustomWithDurationCallback); message 'setExposureModeCustomWithDuration:ISO:completionHandler:'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function exposureTargetOffset: single; message 'exposureTargetOffset'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function exposureTargetBias: single; message 'exposureTargetBias'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function minExposureTargetBias: single; message 'minExposureTargetBias'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function maxExposureTargetBias: single; message 'maxExposureTargetBias'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    procedure setExposureTargetBias_completionHandler (bias: single; handler: AVCaptureDeviceSetExposureTargetBiasCallback); message 'setExposureTargetBias:completionHandler:'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
  end;

type
  AVCaptureDeviceToneMapping = objccategory external (AVCaptureDevice)
    procedure setGlobalToneMappingEnabled(newValue: objcbool); message 'setGlobalToneMappingEnabled:'; { unavailable in macos, tvos } { unavailable in watchos }
    function isGlobalToneMappingEnabled: objcbool; message 'isGlobalToneMappingEnabled'; { unavailable in macos, tvos } { unavailable in watchos }
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureWhiteBalanceMode = NSInteger;
  AVCaptureWhiteBalanceModePtr = ^AVCaptureWhiteBalanceMode;

const
  AVCaptureWhiteBalanceModeLocked = 0;
  AVCaptureWhiteBalanceModeAutoWhiteBalance = 1;
  AVCaptureWhiteBalanceModeContinuousAutoWhiteBalance = 2;

type
  AVCaptureWhiteBalanceGains = record
    redGain: single;
    greenGain: single;
    blueGain: single;
  end;
type
  AVCaptureWhiteBalanceGainsPtr = ^AVCaptureWhiteBalanceGains;
type
  AVCaptureWhiteBalanceChromaticityValues = record
    x: single;
    y: single;
  end;
type
  AVCaptureWhiteBalanceChromaticityValuesPtr = ^AVCaptureWhiteBalanceChromaticityValues;
type
  AVCaptureWhiteBalanceTemperatureAndTintValues = record
    temperature: single;
    tint: single;
  end;
type
  AVCaptureWhiteBalanceTemperatureAndTintValuesPtr = ^AVCaptureWhiteBalanceTemperatureAndTintValues;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceWhiteBalance = objccategory external (AVCaptureDevice)
    function isWhiteBalanceModeSupported (whiteBalanceMode: AVCaptureWhiteBalanceMode): objcbool; message 'isWhiteBalanceModeSupported:';
    function isLockingWhiteBalanceWithCustomDeviceGainsSupported: objcbool; message 'isLockingWhiteBalanceWithCustomDeviceGainsSupported'; { unavailable in macos, tvos } { available in ios 10.0, macCatalyst 14.0 }
    procedure setWhiteBalanceMode(newValue: AVCaptureWhiteBalanceMode); message 'setWhiteBalanceMode:';
    function whiteBalanceMode: AVCaptureWhiteBalanceMode; message 'whiteBalanceMode';
    function isAdjustingWhiteBalance: objcbool; message 'isAdjustingWhiteBalance';
    function deviceWhiteBalanceGains: AVCaptureWhiteBalanceGains; message 'deviceWhiteBalanceGains'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function grayWorldDeviceWhiteBalanceGains: AVCaptureWhiteBalanceGains; message 'grayWorldDeviceWhiteBalanceGains'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function maxWhiteBalanceGain: single; message 'maxWhiteBalanceGain'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    procedure setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains_completionHandler (whiteBalanceGains: AVCaptureWhiteBalanceGains; handler: AVCaptureDeviceSetWhiteBalanceModeLockedWithDeviceWhiteBalanceGainsCallback); message 'setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:completionHandler:'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function chromaticityValuesForDeviceWhiteBalanceGains (whiteBalanceGains: AVCaptureWhiteBalanceGains): AVCaptureWhiteBalanceChromaticityValues; message 'chromaticityValuesForDeviceWhiteBalanceGains:'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function deviceWhiteBalanceGainsForChromaticityValues (chromaticityValues: AVCaptureWhiteBalanceChromaticityValues): AVCaptureWhiteBalanceGains; message 'deviceWhiteBalanceGainsForChromaticityValues:'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function temperatureAndTintValuesForDeviceWhiteBalanceGains (whiteBalanceGains: AVCaptureWhiteBalanceGains): AVCaptureWhiteBalanceTemperatureAndTintValues; message 'temperatureAndTintValuesForDeviceWhiteBalanceGains:'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function deviceWhiteBalanceGainsForTemperatureAndTintValues (tempAndTintValues: AVCaptureWhiteBalanceTemperatureAndTintValues): AVCaptureWhiteBalanceGains; message 'deviceWhiteBalanceGainsForTemperatureAndTintValues:'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
  end;

type
  AVCaptureDeviceSubjectAreaChangeMonitoring = objccategory external (AVCaptureDevice)
    procedure setSubjectAreaChangeMonitoringEnabled(newValue: objcbool); message 'setSubjectAreaChangeMonitoringEnabled:'; { unavailable in macos, tvos } { available in ios 5.0, macCatalyst 14.0 }
    function isSubjectAreaChangeMonitoringEnabled: objcbool; message 'isSubjectAreaChangeMonitoringEnabled'; { unavailable in macos, tvos } { available in ios 5.0, macCatalyst 14.0 }
  end;

type
  AVCaptureDeviceLowLightBoost = objccategory external (AVCaptureDevice)
    function isLowLightBoostSupported: objcbool; message 'isLowLightBoostSupported'; { unavailable in macos, tvos } { available in ios 6.0, macCatalyst 14.0 }
    function isLowLightBoostEnabled: objcbool; message 'isLowLightBoostEnabled'; { unavailable in macos, tvos } { available in ios 6.0, macCatalyst 14.0 }
    procedure setAutomaticallyEnablesLowLightBoostWhenAvailable(newValue: objcbool); message 'setAutomaticallyEnablesLowLightBoostWhenAvailable:'; { unavailable in macos, tvos } { available in ios 6.0, macCatalyst 14.0 }
    function automaticallyEnablesLowLightBoostWhenAvailable: objcbool; message 'automaticallyEnablesLowLightBoostWhenAvailable'; { unavailable in macos, tvos } { available in ios 6.0, macCatalyst 14.0 }
  end;

type
  AVCaptureDeviceVideoZoom = objccategory external (AVCaptureDevice)
    procedure setVideoZoomFactor(newValue: CGFloat); message 'setVideoZoomFactor:'; { unavailable in macos, tvos } { available in ios 7.0, macCatalyst 14.0 }
    function videoZoomFactor: CGFloat; message 'videoZoomFactor'; { unavailable in macos, tvos } { available in ios 7.0, macCatalyst 14.0 }
    procedure rampToVideoZoomFactor_withRate (factor: CGFloat; rate: single); message 'rampToVideoZoomFactor:withRate:'; { unavailable in macos, tvos } { available in ios 7.0, macCatalyst 14.0 }
    function isRampingVideoZoom: objcbool; message 'isRampingVideoZoom'; { unavailable in macos, tvos } { available in ios 7.0, macCatalyst 14.0 }
    procedure cancelVideoZoomRamp; message 'cancelVideoZoomRamp'; { unavailable in macos } { available in ios 7.0, macCatalyst 14.0 }
    function dualCameraSwitchOverVideoZoomFactor: CGFloat; message 'dualCameraSwitchOverVideoZoomFactor'; { unavailable in macos } { unavailable in tvos }
  end;
{$endif}

{$ifdef TYPES}
type
  AVAuthorizationStatus = NSInteger;
  AVAuthorizationStatusPtr = ^AVAuthorizationStatus;

const
  AVAuthorizationStatusNotDetermined = 0;
  AVAuthorizationStatusRestricted = 1;
  AVAuthorizationStatusDenied = 2;
  AVAuthorizationStatusAuthorized = 3;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceAuthorization = objccategory external (AVCaptureDevice)
    class function authorizationStatusForMediaType (mediaType: AVMediaType): AVAuthorizationStatus; message 'authorizationStatusForMediaType:'; { unavailable in tvos } { available in macos 10.14, ios 7.0, macCatalyst 14.0 }
    class procedure requestAccessForMediaType_completionHandler (mediaType: AVMediaType; handler: AVCaptureDeviceRequestAccessForMediaTypeCallback); message 'requestAccessForMediaType:completionHandler:'; { unavailable in tvos } { available in macos 10.14, ios 7.0, macCatalyst 14.0 }
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureDeviceTransportControlsSpeed = single { unavailable in ios, macCatalyst, watchos, tvos } { available in macos 10.7 };
  AVCaptureDeviceTransportControlsSpeedPtr = ^AVCaptureDeviceTransportControlsSpeed { unavailable in ios, macCatalyst, watchos, tvos } { available in macos 10.7 };
  AVCaptureDeviceTransportControlsPlaybackMode = NSInteger;
  AVCaptureDeviceTransportControlsPlaybackModePtr = ^AVCaptureDeviceTransportControlsPlaybackMode;

const
  AVCaptureDeviceTransportControlsNotPlayingMode = 0;
  AVCaptureDeviceTransportControlsPlayingMode = 1;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceTransportControls = objccategory external (AVCaptureDevice)
    function transportControlsSupported: objcbool; message 'transportControlsSupported'; { unavailable in ios, macCatalyst, watchos, tvos }
    function transportControlsPlaybackMode: AVCaptureDeviceTransportControlsPlaybackMode; message 'transportControlsPlaybackMode'; { unavailable in ios, macCatalyst, watchos, tvos }
    function transportControlsSpeed: AVCaptureDeviceTransportControlsSpeed; message 'transportControlsSpeed'; { unavailable in ios, macCatalyst, watchos, tvos }
    procedure setTransportControlsPlaybackMode_speed (mode: AVCaptureDeviceTransportControlsPlaybackMode; speed: AVCaptureDeviceTransportControlsSpeed); message 'setTransportControlsPlaybackMode:speed:'; { unavailable in ios, macCatalyst, watchos, tvos }
  end;

type
  AVCaptureDeviceHighDynamicRangeSupport = objccategory external (AVCaptureDevice)
    procedure setAutomaticallyAdjustsVideoHDREnabled(newValue: objcbool); message 'setAutomaticallyAdjustsVideoHDREnabled:'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function automaticallyAdjustsVideoHDREnabled: objcbool; message 'automaticallyAdjustsVideoHDREnabled'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    procedure setVideoHDREnabled(newValue: objcbool); message 'setVideoHDREnabled:'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function isVideoHDREnabled: objcbool; message 'isVideoHDREnabled'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureColorSpace = NSInteger;
  AVCaptureColorSpacePtr = ^AVCaptureColorSpace;

const
  AVCaptureColorSpace_sRGB = 0;
  AVCaptureColorSpace_P3_D65 = 1;
  AVCaptureColorSpace_HLG_BT2020 = 2 { unavailable in macos, tvos } { unavailable in watchos };
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceColorSpaceSupport = objccategory external (AVCaptureDevice)
    procedure setActiveColorSpace(newValue: AVCaptureColorSpace); message 'setActiveColorSpace:'; { unavailable in tvos } { available in macos 10.15, ios 10.0, macCatalyst 14.0 }
    function activeColorSpace: AVCaptureColorSpace; message 'activeColorSpace'; { unavailable in tvos } { available in macos 10.15, ios 10.0, macCatalyst 14.0 }
  end;

type
  AVCaptureDeviceDepthSupport = objccategory external (AVCaptureDevice)
    procedure setActiveDepthDataFormat(newValue: AVCaptureDeviceFormat); message 'setActiveDepthDataFormat:'; { unavailable in macos, tvos } { available in ios 11.0, macCatalyst 14.0 }
    function activeDepthDataFormat: AVCaptureDeviceFormat; message 'activeDepthDataFormat'; { unavailable in macos, tvos } { available in ios 11.0, macCatalyst 14.0 }
    procedure setActiveDepthDataMinFrameDuration(newValue: CMTime); message 'setActiveDepthDataMinFrameDuration:'; { unavailable in macos, tvos } { available in ios 12.0, macCatalyst 14.0 }
    function activeDepthDataMinFrameDuration: CMTime; message 'activeDepthDataMinFrameDuration'; { unavailable in macos, tvos } { available in ios 12.0, macCatalyst 14.0 }
    function minAvailableVideoZoomFactor: CGFloat; message 'minAvailableVideoZoomFactor'; { unavailable in macos, tvos } { available in ios 11.0, macCatalyst 14.0 }
    function maxAvailableVideoZoomFactor: CGFloat; message 'maxAvailableVideoZoomFactor'; { unavailable in macos, tvos } { available in ios 11.0, macCatalyst 14.0 }
  end;

type
  AVCaptureDeviceGeometricDistortionCorrection = objccategory external (AVCaptureDevice)
    function isGeometricDistortionCorrectionSupported: objcbool; message 'isGeometricDistortionCorrectionSupported'; { unavailable in macos, tvos } { unavailable in watchos }
    procedure setGeometricDistortionCorrectionEnabled(newValue: objcbool); message 'setGeometricDistortionCorrectionEnabled:'; { unavailable in macos, tvos } { unavailable in watchos }
    function isGeometricDistortionCorrectionEnabled: objcbool; message 'isGeometricDistortionCorrectionEnabled'; { unavailable in macos, tvos } { unavailable in watchos }
  end;

type
  AVCaptureDeviceCalibration = objccategory external (AVCaptureDevice)
    class function extrinsicMatrixFromDevice_toDevice (fromDevice: AVCaptureDevice; toDevice: AVCaptureDevice): NSData; message 'extrinsicMatrixFromDevice:toDevice:'; { unavailable in macos, tvos } { unavailable in watchos }
  end;

type
  AVCaptureDeviceCenterStage = objccategory external (AVCaptureDevice)
    class procedure setCenterStageControlMode(newValue: AVCaptureCenterStageControlMode); message 'setCenterStageControlMode:'; { unavailable in macos, tvos } { unavailable in watchos }
    class function centerStageControlMode: AVCaptureCenterStageControlMode; message 'centerStageControlMode'; { unavailable in macos, tvos } { unavailable in watchos }
    class procedure setCenterStageEnabled(newValue: objcbool); message 'setCenterStageEnabled:'; { unavailable in macos, tvos } { unavailable in watchos }
    class function isCenterStageEnabled: objcbool; message 'isCenterStageEnabled'; { unavailable in macos, tvos } { unavailable in watchos }
    function isCenterStageActive: objcbool; message 'isCenterStageActive'; { unavailable in macos, tvos } { unavailable in watchos }
  end;


type
  AVCaptureDeviceDiscoverySession = objcclass external (NSObject)
  public
    class function discoverySessionWithDeviceTypes_mediaType_position (deviceTypes: NSArray; mediaType: AVMediaType; position: AVCaptureDevicePosition): id; message 'discoverySessionWithDeviceTypes:mediaType:position:';
    function devices: NSArray; message 'devices';
    function supportedMultiCamDeviceSets: NSArray; message 'supportedMultiCamDeviceSets'; { unavailable in macos, tvos } { unavailable in watchos }
  end;

type
  AVFrameRateRange = objcclass external (NSObject)
  private
    _internal: AVFrameRateRangeInternal;
  public
    function minFrameRate: Float64; message 'minFrameRate';
    function maxFrameRate: Float64; message 'maxFrameRate';
    function maxFrameDuration: CMTime; message 'maxFrameDuration';
    function minFrameDuration: CMTime; message 'minFrameDuration';
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureVideoStabilizationMode = NSInteger;
  AVCaptureVideoStabilizationModePtr = ^AVCaptureVideoStabilizationMode;

const
  AVCaptureVideoStabilizationModeOff = 0;
  AVCaptureVideoStabilizationModeStandard = 1;
  AVCaptureVideoStabilizationModeCinematic = 2;
  AVCaptureVideoStabilizationModeCinematicExtended = 3 { unavailable in tvos } { unavailable in watchos };
  AVCaptureVideoStabilizationModeAuto = -1;

type
  AVCaptureAutoFocusSystem = NSInteger;
  AVCaptureAutoFocusSystemPtr = ^AVCaptureAutoFocusSystem;

const
  AVCaptureAutoFocusSystemNone = 0;
  AVCaptureAutoFocusSystemContrastDetection = 1;
  AVCaptureAutoFocusSystemPhaseDetection = 2;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceFormat = objcclass external (NSObject)
  private
    _internal: AVCaptureDeviceFormatInternal;
  public
    function mediaType: AVMediaType; message 'mediaType';
    function formatDescription: CMFormatDescriptionRef; message 'formatDescription';
    function videoSupportedFrameRateRanges: NSArray; message 'videoSupportedFrameRateRanges';
    function videoFieldOfView: single; message 'videoFieldOfView'; { unavailable in macos }
    function isVideoBinned: objcbool; message 'isVideoBinned'; { unavailable in macos }
    function isVideoStabilizationModeSupported (videoStabilizationMode: AVCaptureVideoStabilizationMode): objcbool; message 'isVideoStabilizationModeSupported:'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function isVideoStabilizationSupported: objcbool; message 'isVideoStabilizationSupported'; { unavailable in macos } { unavailable in tvos }
    function videoMaxZoomFactor: CGFloat; message 'videoMaxZoomFactor'; { unavailable in macos }
    function videoZoomFactorUpscaleThreshold: CGFloat; message 'videoZoomFactorUpscaleThreshold'; { unavailable in macos }
    function minExposureDuration: CMTime; message 'minExposureDuration'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function maxExposureDuration: CMTime; message 'maxExposureDuration'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function minISO: single; message 'minISO'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function maxISO: single; message 'maxISO'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function isGlobalToneMappingSupported: objcbool; message 'isGlobalToneMappingSupported'; { unavailable in macos, tvos } { unavailable in watchos }
    function isVideoHDRSupported: objcbool; message 'isVideoHDRSupported'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function highResolutionStillImageDimensions: CMVideoDimensions; message 'highResolutionStillImageDimensions'; { unavailable in macos, tvos } { available in ios 8.0, macCatalyst 14.0 }
    function isHighestPhotoQualitySupported: objcbool; message 'isHighestPhotoQualitySupported'; { unavailable in macos, tvos } { unavailable in watchos }
    function autoFocusSystem: AVCaptureAutoFocusSystem; message 'autoFocusSystem'; { unavailable in tvos } { available in macos 10.15, ios 8.0, macCatalyst 14.0 }
    function supportedColorSpaces: NSArray; message 'supportedColorSpaces'; { unavailable in tvos } { available in macos 10.15, ios 10.0, macCatalyst 14.0 }
    function videoMinZoomFactorForDepthDataDelivery: CGFloat; message 'videoMinZoomFactorForDepthDataDelivery'; { unavailable in macos, tvos } { available in ios 11.0, macCatalyst 14.0 }
    function videoMaxZoomFactorForDepthDataDelivery: CGFloat; message 'videoMaxZoomFactorForDepthDataDelivery'; { unavailable in macos, tvos } { available in ios 11.0, macCatalyst 14.0 }
    function supportedDepthDataFormats: NSArray; message 'supportedDepthDataFormats'; { unavailable in macos, tvos } { available in ios 11.0, macCatalyst 14.0 }
    function unsupportedCaptureOutputClasses: NSArray; message 'unsupportedCaptureOutputClasses'; { unavailable in macos, tvos } { available in ios 11.0, macCatalyst 14.0 }
  end;


type
  AVCaptureDeviceFormatDepthDataAdditions = objccategory external (AVCaptureDeviceFormat)
    function isPortraitEffectsMatteStillImageDeliverySupported: objcbool; message 'isPortraitEffectsMatteStillImageDeliverySupported'; { unavailable in macos, tvos } { unavailable in watchos }
  end;

type
  AVCaptureDeviceFormatMultiCamAdditions = objccategory external (AVCaptureDeviceFormat)
    function isMultiCamSupported: objcbool; message 'isMultiCamSupported'; { unavailable in macos, tvos } { unavailable in watchos }
  end;

type
  AVCaptureDeviceFormatGeometricDistortionCorrection = objccategory external (AVCaptureDeviceFormat)
    function geometricDistortionCorrectedVideoFieldOfView: single; message 'geometricDistortionCorrectedVideoFieldOfView'; { unavailable in macos, tvos } { unavailable in watchos }
  end;

type
  AVCaptureDeviceFormatCenterStage = objccategory external (AVCaptureDeviceFormat)
    function isCenterStageSupported: objcbool; message 'isCenterStageSupported'; { unavailable in macos, tvos } { unavailable in watchos }
    function videoMinZoomFactorForCenterStage: CGFloat; message 'videoMinZoomFactorForCenterStage'; { unavailable in macos, tvos } { unavailable in watchos }
    function videoMaxZoomFactorForCenterStage: CGFloat; message 'videoMaxZoomFactorForCenterStage'; { unavailable in macos, tvos } { unavailable in watchos }
    function videoFrameRateRangeForCenterStage: AVFrameRateRange; message 'videoFrameRateRangeForCenterStage'; { unavailable in macos, tvos } { unavailable in watchos }
  end;


type
  AVCaptureDeviceInputSource = objcclass external (NSObject)
  private
    _internal: AVCaptureDeviceInputSourceInternal;
  public
    function inputSourceID: NSString; message 'inputSourceID';
    function localizedName: NSString; message 'localizedName';
  end;
{$endif}

{$else}
{$endif}
