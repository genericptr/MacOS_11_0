{ Parsed from AVFoundation.framework AVCaptureStillImageOutput.h }

{$ifdef CALLBACKS}
type
  AVCaptureStillImageOutputCaptureStillImageAsynchronouslyFromConnectionCallback = reference to procedure (imageDataSampleBuffer: CMSampleBufferRef; error: NSError); cblock; cdecl;
  AVCaptureStillImageOutputPrepareToCaptureStillImageBracketFromConnectionCallback = reference to procedure (prepared: objcbool; error: NSError); cblock; cdecl;
  AVCaptureStillImageOutputCaptureStillImageBracketAsynchronouslyFromConnectionCallback = reference to procedure (sampleBuffer: CMSampleBufferRef; stillImageSettings: AVCaptureBracketedStillImageSettings; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVCaptureStillImageOutputPtr = ^AVCaptureStillImageOutput;
  AVCaptureBracketedStillImageSettingsPtr = ^AVCaptureBracketedStillImageSettings;
  AVCaptureManualExposureBracketedStillImageSettingsPtr = ^AVCaptureManualExposureBracketedStillImageSettings;
  AVCaptureAutoExposureBracketedStillImageSettingsPtr = ^AVCaptureAutoExposureBracketedStillImageSettings;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVCaptureStillImageOutput = objcclass external (AVCaptureOutput)
  private
    _internal: AVCaptureStillImageOutputInternal;
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure setOutputSettings(newValue: NSDictionary); message 'setOutputSettings:';
    function outputSettings: NSDictionary; message 'outputSettings';
    function availableImageDataCVPixelFormatTypes: NSArray; message 'availableImageDataCVPixelFormatTypes';
    function availableImageDataCodecTypes: NSArray; message 'availableImageDataCodecTypes';
    function isStillImageStabilizationSupported: objcbool; message 'isStillImageStabilizationSupported'; { unavailable in macos } { available in ios 7.0, macCatalyst 14.0 }
    procedure setAutomaticallyEnablesStillImageStabilizationWhenAvailable(newValue: objcbool); message 'setAutomaticallyEnablesStillImageStabilizationWhenAvailable:'; { unavailable in macos } { available in ios 7.0, macCatalyst 14.0 }
    function automaticallyEnablesStillImageStabilizationWhenAvailable: objcbool; message 'automaticallyEnablesStillImageStabilizationWhenAvailable'; { unavailable in macos } { available in ios 7.0, macCatalyst 14.0 }
    function isStillImageStabilizationActive: objcbool; message 'isStillImageStabilizationActive'; { unavailable in macos } { available in ios 7.0, macCatalyst 14.0 }
    procedure setHighResolutionStillImageOutputEnabled(newValue: objcbool); message 'setHighResolutionStillImageOutputEnabled:'; { available in macos 10.14, ios 8.0, macCatalyst 14.0 }
    function isHighResolutionStillImageOutputEnabled: objcbool; message 'isHighResolutionStillImageOutputEnabled'; { available in macos 10.14, ios 8.0, macCatalyst 14.0 }
    function isCapturingStillImage: objcbool; message 'isCapturingStillImage'; { available in macos 10.8, ios 5.0, macCatalyst 14.0 }
    procedure captureStillImageAsynchronouslyFromConnection_completionHandler (connection: AVCaptureConnection; handler: AVCaptureStillImageOutputCaptureStillImageAsynchronouslyFromConnectionCallback); message 'captureStillImageAsynchronouslyFromConnection:completionHandler:';
    class function jpegStillImageNSDataRepresentation (jpegSampleBuffer: CMSampleBufferRef): NSData; message 'jpegStillImageNSDataRepresentation:';
  end;

type
  AVCaptureBracketedStillImageSettings = objcclass external (NSObject)
  end;

type
  AVCaptureManualExposureBracketedStillImageSettings = objcclass external (AVCaptureBracketedStillImageSettings)
  public
    class function manualExposureSettingsWithExposureDuration_ISO (duration: CMTime; ISO: single): id; message 'manualExposureSettingsWithExposureDuration:ISO:';
    function exposureDuration: CMTime; message 'exposureDuration';
    function ISO: single; message 'ISO';
  end;

type
  AVCaptureAutoExposureBracketedStillImageSettings = objcclass external (AVCaptureBracketedStillImageSettings)
  public
    class function autoExposureSettingsWithExposureTargetBias (exposureTargetBias: single): id; message 'autoExposureSettingsWithExposureTargetBias:';
    function exposureTargetBias: single; message 'exposureTargetBias';
  end;


type
  AVCaptureStillImageOutputBracketedCapture = objccategory external (AVCaptureStillImageOutput)
    function maxBracketedCaptureStillImageCount: NSUInteger; message 'maxBracketedCaptureStillImageCount'; { unavailable in macos }
    function isLensStabilizationDuringBracketedCaptureSupported: objcbool; message 'isLensStabilizationDuringBracketedCaptureSupported'; { unavailable in macos }
    procedure setLensStabilizationDuringBracketedCaptureEnabled(newValue: objcbool); message 'setLensStabilizationDuringBracketedCaptureEnabled:'; { unavailable in macos }
    function isLensStabilizationDuringBracketedCaptureEnabled: objcbool; message 'isLensStabilizationDuringBracketedCaptureEnabled'; { unavailable in macos }
    procedure prepareToCaptureStillImageBracketFromConnection_withSettingsArray_completionHandler (connection: AVCaptureConnection; settings: NSArray; handler: AVCaptureStillImageOutputPrepareToCaptureStillImageBracketFromConnectionCallback); message 'prepareToCaptureStillImageBracketFromConnection:withSettingsArray:completionHandler:'; { unavailable in macos }
    procedure captureStillImageBracketAsynchronouslyFromConnection_withSettingsArray_completionHandler (connection: AVCaptureConnection; settings: NSArray; handler: AVCaptureStillImageOutputCaptureStillImageBracketAsynchronouslyFromConnectionCallback); message 'captureStillImageBracketAsynchronouslyFromConnection:withSettingsArray:completionHandler:'; { unavailable in macos }
  end;
{$endif}

{$else}
{$endif}
