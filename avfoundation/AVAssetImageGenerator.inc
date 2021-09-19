{ Parsed from AVFoundation.framework AVAssetImageGenerator.h }

{ Types from AVAssetImageGenerator }

{$ifdef TYPES}
type
  AVAssetImageGeneratorPtr = ^AVAssetImageGenerator;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVAssetImageGeneratorApertureMode = NSString;
  AVAssetImageGeneratorApertureModePtr = ^AVAssetImageGeneratorApertureMode;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetImageGeneratorApertureModeCleanAperture: AVAssetImageGeneratorApertureMode { unavailable in watchos }; cvar; external;
  AVAssetImageGeneratorApertureModeProductionAperture: AVAssetImageGeneratorApertureMode { unavailable in watchos }; cvar; external;
  AVAssetImageGeneratorApertureModeEncodedPixels: AVAssetImageGeneratorApertureMode { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVAssetImageGeneratorResult = NSInteger;
  AVAssetImageGeneratorResultPtr = ^AVAssetImageGeneratorResult;
  
type
  AVAssetImageGeneratorCompletionHandler = reference to procedure (requestedTime: CMTime; image: CGImageRef; actualTime: CMTime; result_: AVAssetImageGeneratorResult; error: NSError); cblock; cdecl;

const
  AVAssetImageGeneratorSucceeded = 0;
  AVAssetImageGeneratorFailed = 1;
  AVAssetImageGeneratorCancelled = 2;
{$endif}

{$ifdef CLASSES}

type
  AVAssetImageGenerator = objcclass external (NSObject)
  private
    _priv: AVAssetImageGeneratorInternal;
  public
    function asset: AVAsset; message 'asset'; { unavailable in watchos }
    procedure setAppliesPreferredTrackTransform(newValue: objcbool); message 'setAppliesPreferredTrackTransform:';
    function appliesPreferredTrackTransform: objcbool; message 'appliesPreferredTrackTransform';
    procedure setMaximumSize(newValue: CGSize); message 'setMaximumSize:';
    function maximumSize: CGSize; message 'maximumSize';
    procedure setApertureMode(newValue: AVAssetImageGeneratorApertureMode); message 'setApertureMode:';
    function apertureMode: AVAssetImageGeneratorApertureMode; message 'apertureMode';
    procedure setVideoComposition(newValue: AVVideoComposition); message 'setVideoComposition:';
    function videoComposition: AVVideoComposition; message 'videoComposition';
    function customVideoCompositor: id; message 'customVideoCompositor'; { unavailable in watchos }
    procedure setRequestedTimeToleranceBefore(newValue: CMTime); message 'setRequestedTimeToleranceBefore:'; { unavailable in watchos }
    function requestedTimeToleranceBefore: CMTime; message 'requestedTimeToleranceBefore'; { unavailable in watchos }
    procedure setRequestedTimeToleranceAfter(newValue: CMTime); message 'setRequestedTimeToleranceAfter:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function requestedTimeToleranceAfter: CMTime; message 'requestedTimeToleranceAfter'; { unavailable in watchos } { available in macos 10.7, ios 5.0, tvos 9.0 }
    class function assetImageGeneratorWithAsset (asset_: AVAsset): id; message 'assetImageGeneratorWithAsset:';
    function initWithAsset (asset_: AVAsset): id; message 'initWithAsset:'; { NS_DESIGNATED_INITIALIZER }
    function copyCGImageAtTime_actualTime_error (requestedTime: CMTime; actualTime: CMTimePtr; outError: NSErrorPtr): CGImageRef; message 'copyCGImageAtTime:actualTime:error:'; { CF_RETURNS_RETAINED }
    procedure generateCGImagesAsynchronouslyForTimes_completionHandler (requestedTimes: NSArray; handler: AVAssetImageGeneratorCompletionHandler); message 'generateCGImagesAsynchronouslyForTimes:completionHandler:';
    procedure cancelAllCGImageGeneration; message 'cancelAllCGImageGeneration';
  end;
{$endif}

{$else}
{$endif}
