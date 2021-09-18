{ Parsed from AVFoundation.framework AVCapturePhotoOutput.h }

{ Types from AVCapturePhotoOutput }
{$ifdef TYPES}

type
  AVCapturePhotoQualityPrioritization = NSInteger;
type
  AVCapturePhotoQualityPrioritizationPtr = ^AVCapturePhotoQualityPrioritization;

const
  AVCapturePhotoQualityPrioritizationSpeed = 1;
  AVCapturePhotoQualityPrioritizationBalanced = 2;
  AVCapturePhotoQualityPrioritizationQuality = 3;
{$endif}


{$ifdef CALLBACKS}
type
  AVCapturePhotoOutputSetPreparedPhotoSettingsArrayCallback = reference to procedure (prepared: objcbool; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVCapturePhotoOutputPtr = ^AVCapturePhotoOutput;
  AVCapturePhotoSettingsPtr = ^AVCapturePhotoSettings;
  AVCapturePhotoBracketSettingsPtr = ^AVCapturePhotoBracketSettings;
  AVCaptureResolvedPhotoSettingsPtr = ^AVCaptureResolvedPhotoSettings;
  AVCapturePhotoPtr = ^AVCapturePhoto;
  AVCapturePhotoCaptureDelegateProtocolPtr = ^AVCapturePhotoCaptureDelegateProtocol;
  AVCapturePhotoFileDataRepresentationCustomizerProtocolPtr = ^AVCapturePhotoFileDataRepresentationCustomizerProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVCapturePhotoOutput = objcclass external (AVCaptureOutput)
  private
    _internal: AVCapturePhotoOutputInternal;
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure capturePhotoWithSettings_delegate (settings: AVCapturePhotoSettings; delegate: AVCapturePhotoCaptureDelegateProtocol); message 'capturePhotoWithSettings:delegate:';
    function preparedPhotoSettingsArray: NSArray; message 'preparedPhotoSettingsArray'; { unavailable in macos }
    procedure setPreparedPhotoSettingsArray_completionHandler (preparedPhotoSettingsArray_: NSArray; completionHandler: AVCapturePhotoOutputSetPreparedPhotoSettingsArrayCallback); message 'setPreparedPhotoSettingsArray:completionHandler:'; { unavailable in macos }
    function availablePhotoPixelFormatTypes: NSArray; message 'availablePhotoPixelFormatTypes';
    function availablePhotoCodecTypes: NSArray; message 'availablePhotoCodecTypes';
    function isAppleProRAWSupported: objcbool; message 'isAppleProRAWSupported'; { unavailable in macos, tvos }
    procedure setAppleProRAWEnabled(newValue: objcbool); message 'setAppleProRAWEnabled:'; { unavailable in macos, tvos }
    function isAppleProRAWEnabled: objcbool; message 'isAppleProRAWEnabled'; { unavailable in macos, tvos }
    class function isBayerRAWPixelFormat (pixelFormat: OSType): objcbool; message 'isBayerRAWPixelFormat:'; { unavailable in macos, tvos }
    class function isAppleProRAWPixelFormat (pixelFormat: OSType): objcbool; message 'isAppleProRAWPixelFormat:'; { unavailable in macos, tvos }
    function availableRawPhotoPixelFormatTypes: NSArray; message 'availableRawPhotoPixelFormatTypes'; { unavailable in macos }
    function availablePhotoFileTypes: NSArray; message 'availablePhotoFileTypes'; { unavailable in tvos }
    function availableRawPhotoFileTypes: NSArray; message 'availableRawPhotoFileTypes'; { unavailable in macos, tvos }
    function supportedPhotoPixelFormatTypesForFileType (fileType: AVFileType): NSArray; message 'supportedPhotoPixelFormatTypesForFileType:'; { unavailable in tvos }
    function supportedPhotoCodecTypesForFileType (fileType: AVFileType): NSArray; message 'supportedPhotoCodecTypesForFileType:'; { unavailable in tvos }
    function supportedRawPhotoPixelFormatTypesForFileType (fileType: AVFileType): NSArray; message 'supportedRawPhotoPixelFormatTypesForFileType:'; { unavailable in macos, tvos }
    procedure setMaxPhotoQualityPrioritization(newValue: AVCapturePhotoQualityPrioritization); message 'setMaxPhotoQualityPrioritization:'; { unavailable in macos, tvos }
    function maxPhotoQualityPrioritization: AVCapturePhotoQualityPrioritization; message 'maxPhotoQualityPrioritization'; { unavailable in macos, tvos }
    function isStillImageStabilizationSupported: objcbool; message 'isStillImageStabilizationSupported'; { unavailable in macos }
    function isStillImageStabilizationScene: objcbool; message 'isStillImageStabilizationScene'; { unavailable in macos }
    function isVirtualDeviceFusionSupported: objcbool; message 'isVirtualDeviceFusionSupported'; { unavailable in macos, tvos }
    function isDualCameraFusionSupported: objcbool; message 'isDualCameraFusionSupported'; { unavailable in macos }
    function isVirtualDeviceConstituentPhotoDeliverySupported: objcbool; message 'isVirtualDeviceConstituentPhotoDeliverySupported'; { unavailable in macos, tvos }
    function isDualCameraDualPhotoDeliverySupported: objcbool; message 'isDualCameraDualPhotoDeliverySupported'; { unavailable in macos }
    procedure setVirtualDeviceConstituentPhotoDeliveryEnabled(newValue: objcbool); message 'setVirtualDeviceConstituentPhotoDeliveryEnabled:'; { unavailable in macos, tvos }
    function isVirtualDeviceConstituentPhotoDeliveryEnabled: objcbool; message 'isVirtualDeviceConstituentPhotoDeliveryEnabled'; { unavailable in macos, tvos }
    procedure setDualCameraDualPhotoDeliveryEnabled(newValue: objcbool); message 'setDualCameraDualPhotoDeliveryEnabled:'; { unavailable in macos }
    function isDualCameraDualPhotoDeliveryEnabled: objcbool; message 'isDualCameraDualPhotoDeliveryEnabled'; { unavailable in macos }
    function isCameraCalibrationDataDeliverySupported: objcbool; message 'isCameraCalibrationDataDeliverySupported'; { unavailable in macos, tvos }
    function supportedFlashModes: NSArray; message 'supportedFlashModes'; { unavailable in macos }
    function isAutoRedEyeReductionSupported: objcbool; message 'isAutoRedEyeReductionSupported'; { unavailable in macos, tvos }
    function isFlashScene: objcbool; message 'isFlashScene'; { unavailable in macos }
    procedure setPhotoSettingsForSceneMonitoring(newValue: AVCapturePhotoSettings); message 'setPhotoSettingsForSceneMonitoring:'; { unavailable in macos }
    function photoSettingsForSceneMonitoring: AVCapturePhotoSettings; message 'photoSettingsForSceneMonitoring'; { unavailable in macos }
    procedure setHighResolutionCaptureEnabled(newValue: objcbool); message 'setHighResolutionCaptureEnabled:'; { unavailable in macos }
    function isHighResolutionCaptureEnabled: objcbool; message 'isHighResolutionCaptureEnabled'; { unavailable in macos }
    function maxBracketedCapturePhotoCount: NSUInteger; message 'maxBracketedCapturePhotoCount'; { unavailable in macos }
    function isLensStabilizationDuringBracketedCaptureSupported: objcbool; message 'isLensStabilizationDuringBracketedCaptureSupported'; { unavailable in macos }
    function isLivePhotoCaptureSupported: objcbool; message 'isLivePhotoCaptureSupported'; { unavailable in macos }
    procedure setLivePhotoCaptureEnabled(newValue: objcbool); message 'setLivePhotoCaptureEnabled:'; { unavailable in macos }
    function isLivePhotoCaptureEnabled: objcbool; message 'isLivePhotoCaptureEnabled'; { unavailable in macos }
    procedure setLivePhotoCaptureSuspended(newValue: objcbool); message 'setLivePhotoCaptureSuspended:'; { unavailable in macos }
    function isLivePhotoCaptureSuspended: objcbool; message 'isLivePhotoCaptureSuspended'; { unavailable in macos }
    procedure setLivePhotoAutoTrimmingEnabled(newValue: objcbool); message 'setLivePhotoAutoTrimmingEnabled:'; { unavailable in macos }
    function isLivePhotoAutoTrimmingEnabled: objcbool; message 'isLivePhotoAutoTrimmingEnabled'; { unavailable in macos }
    function availableLivePhotoVideoCodecTypes: NSArray; message 'availableLivePhotoVideoCodecTypes'; { unavailable in macos, tvos }
    class function JPEGPhotoDataRepresentationForJPEGSampleBuffer_previewPhotoSampleBuffer (JPEGSampleBuffer: CMSampleBufferRef; previewPhotoSampleBuffer: CMSampleBufferRef): NSData; message 'JPEGPhotoDataRepresentationForJPEGSampleBuffer:previewPhotoSampleBuffer:'; { unavailable in macos }
    class function DNGPhotoDataRepresentationForRawSampleBuffer_previewPhotoSampleBuffer (rawSampleBuffer: CMSampleBufferRef; previewPhotoSampleBuffer: CMSampleBufferRef): NSData; message 'DNGPhotoDataRepresentationForRawSampleBuffer:previewPhotoSampleBuffer:'; { unavailable in macos }
    function isContentAwareDistortionCorrectionSupported: objcbool; message 'isContentAwareDistortionCorrectionSupported'; { unavailable in macos, tvos }
    procedure setContentAwareDistortionCorrectionEnabled(newValue: objcbool); message 'setContentAwareDistortionCorrectionEnabled:'; { unavailable in macos, tvos }
    function isContentAwareDistortionCorrectionEnabled: objcbool; message 'isContentAwareDistortionCorrectionEnabled'; { unavailable in macos, tvos }
  end;


type
  AVCapturePhotoOutputDepthDataDeliverySupport = objccategory external (AVCapturePhotoOutput)
    function isDepthDataDeliverySupported: objcbool; message 'isDepthDataDeliverySupported'; { unavailable in macos, tvos }
    procedure setDepthDataDeliveryEnabled(newValue: objcbool); message 'setDepthDataDeliveryEnabled:'; { unavailable in macos, tvos }
    function isDepthDataDeliveryEnabled: objcbool; message 'isDepthDataDeliveryEnabled'; { unavailable in macos, tvos }
    function isPortraitEffectsMatteDeliverySupported: objcbool; message 'isPortraitEffectsMatteDeliverySupported'; { unavailable in macos, tvos }
    procedure setPortraitEffectsMatteDeliveryEnabled(newValue: objcbool); message 'setPortraitEffectsMatteDeliveryEnabled:'; { unavailable in macos, tvos }
    function isPortraitEffectsMatteDeliveryEnabled: objcbool; message 'isPortraitEffectsMatteDeliveryEnabled'; { unavailable in macos, tvos }
    function availableSemanticSegmentationMatteTypes: NSArray; message 'availableSemanticSegmentationMatteTypes'; { unavailable in macos, tvos }
    procedure setEnabledSemanticSegmentationMatteTypes(newValue: NSArray); message 'setEnabledSemanticSegmentationMatteTypes:'; { unavailable in macos, tvos }
    function enabledSemanticSegmentationMatteTypes: NSArray; message 'enabledSemanticSegmentationMatteTypes'; { unavailable in macos, tvos }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVCapturePhotoCaptureDelegateProtocol = objcprotocol external name 'AVCapturePhotoCaptureDelegate' (NSObjectProtocol)
  optional
    procedure captureOutput_willBeginCaptureForResolvedSettings (output: AVCapturePhotoOutput; resolvedSettings: AVCaptureResolvedPhotoSettings); message 'captureOutput:willBeginCaptureForResolvedSettings:';
    procedure captureOutput_willCapturePhotoForResolvedSettings (output: AVCapturePhotoOutput; resolvedSettings: AVCaptureResolvedPhotoSettings); message 'captureOutput:willCapturePhotoForResolvedSettings:';
    procedure captureOutput_didCapturePhotoForResolvedSettings (output: AVCapturePhotoOutput; resolvedSettings: AVCaptureResolvedPhotoSettings); message 'captureOutput:didCapturePhotoForResolvedSettings:';
    procedure captureOutput_didFinishProcessingPhoto_error (output: AVCapturePhotoOutput; photo: AVCapturePhoto; error: NSError); message 'captureOutput:didFinishProcessingPhoto:error:'; { unavailable in tvos }
    procedure captureOutput_didFinishProcessingPhotoSampleBuffer_previewPhotoSampleBuffer_resolvedSettings_bracketSettings_error (output: AVCapturePhotoOutput; photoSampleBuffer: CMSampleBufferRef; previewPhotoSampleBuffer: CMSampleBufferRef; resolvedSettings: AVCaptureResolvedPhotoSettings; bracketSettings: AVCaptureBracketedStillImageSettings; error: NSError); message 'captureOutput:didFinishProcessingPhotoSampleBuffer:previewPhotoSampleBuffer:resolvedSettings:bracketSettings:error:'; { unavailable in macos }
    procedure captureOutput_didFinishProcessingRawPhotoSampleBuffer_previewPhotoSampleBuffer_resolvedSettings_bracketSettings_error (output: AVCapturePhotoOutput; rawSampleBuffer: CMSampleBufferRef; previewPhotoSampleBuffer: CMSampleBufferRef; resolvedSettings: AVCaptureResolvedPhotoSettings; bracketSettings: AVCaptureBracketedStillImageSettings; error: NSError); message 'captureOutput:didFinishProcessingRawPhotoSampleBuffer:previewPhotoSampleBuffer:resolvedSettings:bracketSettings:error:'; { unavailable in macos }
    procedure captureOutput_didFinishRecordingLivePhotoMovieForEventualFileAtURL_resolvedSettings (output: AVCapturePhotoOutput; outputFileURL: NSURL; resolvedSettings: AVCaptureResolvedPhotoSettings); message 'captureOutput:didFinishRecordingLivePhotoMovieForEventualFileAtURL:resolvedSettings:'; { unavailable in macos }
    procedure captureOutput_didFinishProcessingLivePhotoToMovieFileAtURL_duration_photoDisplayTime_resolvedSettings_error (output: AVCapturePhotoOutput; outputFileURL: NSURL; duration: CMTime; photoDisplayTime: CMTime; resolvedSettings: AVCaptureResolvedPhotoSettings; error: NSError); message 'captureOutput:didFinishProcessingLivePhotoToMovieFileAtURL:duration:photoDisplayTime:resolvedSettings:error:'; { unavailable in macos }
    procedure captureOutput_didFinishCaptureForResolvedSettings_error (output: AVCapturePhotoOutput; resolvedSettings: AVCaptureResolvedPhotoSettings; error: NSError); message 'captureOutput:didFinishCaptureForResolvedSettings:error:';
  end;
{$endif}

{$ifdef CLASSES}

type
  AVCapturePhotoSettings = objcclass external (NSObject, NSCopyingProtocol)
  private
    _internal: AVCapturePhotoSettingsInternal;
  public
    class function photoSettings: id; message 'photoSettings';
    class function photoSettingsWithFormat (format: NSDictionary): id; message 'photoSettingsWithFormat:';
    class function photoSettingsWithRawPixelFormatType (rawPixelFormatType: OSType): id; message 'photoSettingsWithRawPixelFormatType:'; { unavailable in macos }
    class function photoSettingsWithRawPixelFormatType_processedFormat (rawPixelFormatType: OSType; processedFormat: NSDictionary): id; message 'photoSettingsWithRawPixelFormatType:processedFormat:'; { unavailable in macos }
    class function photoSettingsWithRawPixelFormatType_rawFileType_processedFormat_processedFileType (rawPixelFormatType: OSType; rawFileType: AVFileType; processedFormat: NSDictionary; processedFileType: AVFileType): id; message 'photoSettingsWithRawPixelFormatType:rawFileType:processedFormat:processedFileType:'; { unavailable in macos, tvos }
    class function photoSettingsFromPhotoSettings (photoSettings_: AVCapturePhotoSettings): id; message 'photoSettingsFromPhotoSettings:';
    function uniqueID: cint64; message 'uniqueID';
    function format: NSDictionary; message 'format';
    function processedFileType: AVFileType; message 'processedFileType'; { unavailable in tvos }
    function rawPhotoPixelFormatType: OSType; message 'rawPhotoPixelFormatType'; { unavailable in macos }
    function rawFileType: AVFileType; message 'rawFileType'; { unavailable in macos, tvos }
    procedure setFlashMode(newValue: AVCaptureFlashMode); message 'setFlashMode:'; { unavailable in macos }
    function flashMode: AVCaptureFlashMode; message 'flashMode'; { unavailable in macos }
    procedure setAutoRedEyeReductionEnabled(newValue: objcbool); message 'setAutoRedEyeReductionEnabled:'; { unavailable in macos, tvos }
    function isAutoRedEyeReductionEnabled: objcbool; message 'isAutoRedEyeReductionEnabled'; { unavailable in macos, tvos }
    procedure setPhotoQualityPrioritization(newValue: AVCapturePhotoQualityPrioritization); message 'setPhotoQualityPrioritization:'; { unavailable in macos, tvos }
    function photoQualityPrioritization: AVCapturePhotoQualityPrioritization; message 'photoQualityPrioritization'; { unavailable in macos, tvos }
    procedure setAutoStillImageStabilizationEnabled(newValue: objcbool); message 'setAutoStillImageStabilizationEnabled:'; { unavailable in macos }
    function isAutoStillImageStabilizationEnabled: objcbool; message 'isAutoStillImageStabilizationEnabled'; { unavailable in macos }
    procedure setAutoVirtualDeviceFusionEnabled(newValue: objcbool); message 'setAutoVirtualDeviceFusionEnabled:'; { unavailable in macos, tvos }
    function isAutoVirtualDeviceFusionEnabled: objcbool; message 'isAutoVirtualDeviceFusionEnabled'; { unavailable in macos, tvos }
    procedure setAutoDualCameraFusionEnabled(newValue: objcbool); message 'setAutoDualCameraFusionEnabled:'; { unavailable in macos }
    function isAutoDualCameraFusionEnabled: objcbool; message 'isAutoDualCameraFusionEnabled'; { unavailable in macos }
    procedure setVirtualDeviceConstituentPhotoDeliveryEnabledDevices(newValue: NSArray); message 'setVirtualDeviceConstituentPhotoDeliveryEnabledDevices:'; { unavailable in macos, tvos }
    function virtualDeviceConstituentPhotoDeliveryEnabledDevices: NSArray; message 'virtualDeviceConstituentPhotoDeliveryEnabledDevices'; { unavailable in macos, tvos }
    procedure setDualCameraDualPhotoDeliveryEnabled(newValue: objcbool); message 'setDualCameraDualPhotoDeliveryEnabled:'; { unavailable in macos }
    function isDualCameraDualPhotoDeliveryEnabled: objcbool; message 'isDualCameraDualPhotoDeliveryEnabled'; { unavailable in macos }
    procedure setHighResolutionPhotoEnabled(newValue: objcbool); message 'setHighResolutionPhotoEnabled:'; { unavailable in macos }
    function isHighResolutionPhotoEnabled: objcbool; message 'isHighResolutionPhotoEnabled'; { unavailable in macos }
    procedure setDepthDataDeliveryEnabled(newValue: objcbool); message 'setDepthDataDeliveryEnabled:'; { unavailable in macos, tvos }
    function isDepthDataDeliveryEnabled: objcbool; message 'isDepthDataDeliveryEnabled'; { unavailable in macos, tvos }
    procedure setEmbedsDepthDataInPhoto(newValue: objcbool); message 'setEmbedsDepthDataInPhoto:'; { unavailable in macos, tvos }
    function embedsDepthDataInPhoto: objcbool; message 'embedsDepthDataInPhoto'; { unavailable in macos, tvos }
    procedure setDepthDataFiltered(newValue: objcbool); message 'setDepthDataFiltered:'; { unavailable in macos, tvos }
    function isDepthDataFiltered: objcbool; message 'isDepthDataFiltered'; { unavailable in macos, tvos }
    procedure setCameraCalibrationDataDeliveryEnabled(newValue: objcbool); message 'setCameraCalibrationDataDeliveryEnabled:'; { unavailable in macos, tvos }
    function isCameraCalibrationDataDeliveryEnabled: objcbool; message 'isCameraCalibrationDataDeliveryEnabled'; { unavailable in macos, tvos }
    procedure setPortraitEffectsMatteDeliveryEnabled(newValue: objcbool); message 'setPortraitEffectsMatteDeliveryEnabled:'; { unavailable in macos, tvos }
    function isPortraitEffectsMatteDeliveryEnabled: objcbool; message 'isPortraitEffectsMatteDeliveryEnabled'; { unavailable in macos, tvos }
    procedure setEmbedsPortraitEffectsMatteInPhoto(newValue: objcbool); message 'setEmbedsPortraitEffectsMatteInPhoto:'; { unavailable in macos, tvos }
    function embedsPortraitEffectsMatteInPhoto: objcbool; message 'embedsPortraitEffectsMatteInPhoto'; { unavailable in macos, tvos }
    procedure setEnabledSemanticSegmentationMatteTypes(newValue: NSArray); message 'setEnabledSemanticSegmentationMatteTypes:'; { unavailable in macos, tvos }
    function enabledSemanticSegmentationMatteTypes: NSArray; message 'enabledSemanticSegmentationMatteTypes'; { unavailable in macos, tvos }
    procedure setEmbedsSemanticSegmentationMattesInPhoto(newValue: objcbool); message 'setEmbedsSemanticSegmentationMattesInPhoto:'; { unavailable in macos, tvos }
    function embedsSemanticSegmentationMattesInPhoto: objcbool; message 'embedsSemanticSegmentationMattesInPhoto'; { unavailable in macos, tvos }
    procedure setMetadata(newValue: NSDictionary); message 'setMetadata:'; { unavailable in macos, tvos }
    function metadata: NSDictionary; message 'metadata'; { unavailable in macos, tvos }
    procedure setLivePhotoMovieFileURL(newValue: NSURL); message 'setLivePhotoMovieFileURL:'; { unavailable in macos }
    function livePhotoMovieFileURL: NSURL; message 'livePhotoMovieFileURL'; { unavailable in macos }
    procedure setLivePhotoVideoCodecType(newValue: AVVideoCodecType); message 'setLivePhotoVideoCodecType:'; { unavailable in macos, tvos }
    function livePhotoVideoCodecType: AVVideoCodecType; message 'livePhotoVideoCodecType'; { unavailable in macos, tvos }
    procedure setLivePhotoMovieMetadata(newValue: NSArray); message 'setLivePhotoMovieMetadata:'; { unavailable in macos }
    function livePhotoMovieMetadata: NSArray; message 'livePhotoMovieMetadata'; { unavailable in macos }
    function availablePreviewPhotoPixelFormatTypes: NSArray; message 'availablePreviewPhotoPixelFormatTypes'; { unavailable in macos }
    procedure setPreviewPhotoFormat(newValue: NSDictionary); message 'setPreviewPhotoFormat:'; { unavailable in macos }
    function previewPhotoFormat: NSDictionary; message 'previewPhotoFormat'; { unavailable in macos }
    function availableEmbeddedThumbnailPhotoCodecTypes: NSArray; message 'availableEmbeddedThumbnailPhotoCodecTypes'; { unavailable in macos, tvos }
    procedure setEmbeddedThumbnailPhotoFormat(newValue: NSDictionary); message 'setEmbeddedThumbnailPhotoFormat:'; { unavailable in macos, tvos }
    function embeddedThumbnailPhotoFormat: NSDictionary; message 'embeddedThumbnailPhotoFormat'; { unavailable in macos, tvos }
    function availableRawEmbeddedThumbnailPhotoCodecTypes: NSArray; message 'availableRawEmbeddedThumbnailPhotoCodecTypes'; { unavailable in macos, tvos }
    procedure setRawEmbeddedThumbnailPhotoFormat(newValue: NSDictionary); message 'setRawEmbeddedThumbnailPhotoFormat:'; { unavailable in macos, tvos }
    function rawEmbeddedThumbnailPhotoFormat: NSDictionary; message 'rawEmbeddedThumbnailPhotoFormat'; { unavailable in macos, tvos }
    procedure setAutoContentAwareDistortionCorrectionEnabled(newValue: objcbool); message 'setAutoContentAwareDistortionCorrectionEnabled:'; { unavailable in macos, tvos }
    function isAutoContentAwareDistortionCorrectionEnabled: objcbool; message 'isAutoContentAwareDistortionCorrectionEnabled'; { unavailable in macos, tvos }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  AVCapturePhotoBracketSettings = objcclass external (AVCapturePhotoSettings)
  private
    _bracketSettingsInternal: AVCapturePhotoBracketSettingsInternal;
  public
    class function photoBracketSettingsWithRawPixelFormatType_processedFormat_bracketedSettings (rawPixelFormatType: OSType; processedFormat: NSDictionary; bracketedSettings: NSArray): id; message 'photoBracketSettingsWithRawPixelFormatType:processedFormat:bracketedSettings:';
    class function photoBracketSettingsWithRawPixelFormatType_rawFileType_processedFormat_processedFileType_bracketedSettings (rawPixelFormatType: OSType; rawFileType_: AVFileType; processedFormat: NSDictionary; processedFileType_: AVFileType; bracketedSettings: NSArray): id; message 'photoBracketSettingsWithRawPixelFormatType:rawFileType:processedFormat:processedFileType:bracketedSettings:'; { unavailable in tvos }
    function bracketedSettings: NSArray; message 'bracketedSettings';
    procedure setLensStabilizationEnabled(newValue: objcbool); message 'setLensStabilizationEnabled:';
    function isLensStabilizationEnabled: objcbool; message 'isLensStabilizationEnabled';
  end;

type
  AVCaptureResolvedPhotoSettings = objcclass external (NSObject)
  private
    _internal: AVCaptureResolvedPhotoSettingsInternal;
  public
    function uniqueID: cint64; message 'uniqueID';
    function photoDimensions: CMVideoDimensions; message 'photoDimensions';
    function rawPhotoDimensions: CMVideoDimensions; message 'rawPhotoDimensions'; { unavailable in macos }
    function previewDimensions: CMVideoDimensions; message 'previewDimensions'; { unavailable in macos }
    function embeddedThumbnailDimensions: CMVideoDimensions; message 'embeddedThumbnailDimensions'; { unavailable in macos, tvos }
    function rawEmbeddedThumbnailDimensions: CMVideoDimensions; message 'rawEmbeddedThumbnailDimensions'; { unavailable in macos, tvos }
    function portraitEffectsMatteDimensions: CMVideoDimensions; message 'portraitEffectsMatteDimensions'; { unavailable in macos, tvos }
    function dimensionsForSemanticSegmentationMatteOfType (semanticSegmentationMatteType: AVSemanticSegmentationMatteType): CMVideoDimensions; message 'dimensionsForSemanticSegmentationMatteOfType:'; { unavailable in macos, tvos }
    function livePhotoMovieDimensions: CMVideoDimensions; message 'livePhotoMovieDimensions'; { unavailable in macos }
    function isFlashEnabled: objcbool; message 'isFlashEnabled'; { unavailable in macos }
    function isRedEyeReductionEnabled: objcbool; message 'isRedEyeReductionEnabled'; { unavailable in macos, tvos }
    function isStillImageStabilizationEnabled: objcbool; message 'isStillImageStabilizationEnabled'; { unavailable in macos }
    function isVirtualDeviceFusionEnabled: objcbool; message 'isVirtualDeviceFusionEnabled'; { unavailable in macos, tvos }
    function isDualCameraFusionEnabled: objcbool; message 'isDualCameraFusionEnabled'; { unavailable in macos }
    function expectedPhotoCount: NSUInteger; message 'expectedPhotoCount'; { unavailable in tvos }
    function photoProcessingTimeRange: CMTimeRange; message 'photoProcessingTimeRange'; { unavailable in macos, tvos }
    function isContentAwareDistortionCorrectionEnabled: objcbool; message 'isContentAwareDistortionCorrectionEnabled'; { unavailable in macos, tvos }
  end;

type
  AVCapturePhoto = objcclass external (NSObject)
  private
    _internal: AVCapturePhotoInternal;
  public
    function timestamp: CMTime; message 'timestamp';
    function isRawPhoto: objcbool; message 'isRawPhoto'; { unavailable in macos }
    function pixelBuffer: CVPixelBufferRef; message 'pixelBuffer';
    function previewPixelBuffer: CVPixelBufferRef; message 'previewPixelBuffer'; { unavailable in macos }
    function embeddedThumbnailPhotoFormat: NSDictionary; message 'embeddedThumbnailPhotoFormat'; { unavailable in macos }
    function depthData: AVDepthData; message 'depthData'; { unavailable in macos }
    function portraitEffectsMatte: AVPortraitEffectsMatte; message 'portraitEffectsMatte'; { unavailable in macos, tvos }
    function semanticSegmentationMatteForType (semanticSegmentationMatteType: AVSemanticSegmentationMatteType): AVSemanticSegmentationMatte; message 'semanticSegmentationMatteForType:'; { unavailable in macos, tvos }
    function metadata: NSDictionary; message 'metadata'; { unavailable in macos }
    function cameraCalibrationData: AVCameraCalibrationData; message 'cameraCalibrationData'; { unavailable in macos }
    function resolvedSettings: AVCaptureResolvedPhotoSettings; message 'resolvedSettings';
    function photoCount: NSInteger; message 'photoCount';
    function sourceDeviceType: AVCaptureDeviceType; message 'sourceDeviceType'; { unavailable in macos }
  end;


type
  AVCapturePhotoConversions = objccategory external (AVCapturePhoto)
    function fileDataRepresentation: NSData; message 'fileDataRepresentation'; { unavailable in tvos }
    function fileDataRepresentationWithCustomizer (customizer: AVCapturePhotoFileDataRepresentationCustomizerProtocol): NSData; message 'fileDataRepresentationWithCustomizer:'; { unavailable in macos, tvos }
    function fileDataRepresentationWithReplacementMetadata_replacementEmbeddedThumbnailPhotoFormat_replacementEmbeddedThumbnailPixelBuffer_replacementDepthData (replacementMetadata: NSDictionary; replacementEmbeddedThumbnailPhotoFormat: NSDictionary; replacementEmbeddedThumbnailPixelBuffer: CVPixelBufferRef; replacementDepthData: AVDepthData): NSData; message 'fileDataRepresentationWithReplacementMetadata:replacementEmbeddedThumbnailPhotoFormat:replacementEmbeddedThumbnailPixelBuffer:replacementDepthData:'; { unavailable in macos }
    function CGImageRepresentation: CGImageRef; message 'CGImageRepresentation'; { unavailable in tvos }
    function previewCGImageRepresentation: CGImageRef; message 'previewCGImageRepresentation'; { unavailable in macos, tvos }
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureLensStabilizationStatus = NSInteger;
  AVCaptureLensStabilizationStatusPtr = ^AVCaptureLensStabilizationStatus;

const
  AVCaptureLensStabilizationStatusUnsupported = 0;
  AVCaptureLensStabilizationStatusOff = 1;
  AVCaptureLensStabilizationStatusActive = 2;
  AVCaptureLensStabilizationStatusOutOfRange = 3;
  AVCaptureLensStabilizationStatusUnavailable = 4;
{$endif}

{$ifdef CLASSES}

type
  AVCapturePhotoBracketedCapture = objccategory external (AVCapturePhoto)
    function bracketSettings: AVCaptureBracketedStillImageSettings; message 'bracketSettings'; { unavailable in macos, tvos }
    function sequenceCount: NSInteger; message 'sequenceCount'; { unavailable in macos, tvos }
    function lensStabilizationStatus: AVCaptureLensStabilizationStatus; message 'lensStabilizationStatus'; { unavailable in macos, tvos }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVCapturePhotoFileDataRepresentationCustomizerProtocol = objcprotocol external name 'AVCapturePhotoFileDataRepresentationCustomizer' (NSObjectProtocol)
  optional
    function replacementMetadataForPhoto (photo: AVCapturePhoto): NSDictionary; message 'replacementMetadataForPhoto:';
    function replacementEmbeddedThumbnailPixelBufferWithPhotoFormat_forPhoto (replacementEmbeddedThumbnailPhotoFormatOut: NSDictionaryPtr; photo: AVCapturePhoto): CVPixelBufferRef; message 'replacementEmbeddedThumbnailPixelBufferWithPhotoFormat:forPhoto:';
    function replacementDepthDataForPhoto (photo: AVCapturePhoto): AVDepthData; message 'replacementDepthDataForPhoto:';
    function replacementPortraitEffectsMatteForPhoto (photo: AVCapturePhoto): AVPortraitEffectsMatte; message 'replacementPortraitEffectsMatteForPhoto:';
    function replacementSemanticSegmentationMatteOfType_forPhoto (semanticSegmentationMatteType: AVSemanticSegmentationMatteType; photo: AVCapturePhoto): AVSemanticSegmentationMatte; message 'replacementSemanticSegmentationMatteOfType:forPhoto:'; { unavailable in tvos }
    function replacementAppleProRAWCompressionSettingsForPhoto_defaultSettings_maximumBitDepth (photo: AVCapturePhoto; defaultSettings: NSDictionary; maximumBitDepth: NSInteger): NSDictionary; message 'replacementAppleProRAWCompressionSettingsForPhoto:defaultSettings:maximumBitDepth:'; { unavailable in macos, tvos }
  end;
{$endif}

{$else}
{$endif}
