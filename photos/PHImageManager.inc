{ Parsed from Photos.framework PHImageManager.h }

{ Types from PHImageManager }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  PHImageManagerRequestImageForAssetCallback = reference to procedure (result_: UIImage; info: NSDictionary); cblock; cdecl;
  PHImageManagerRequestImageDataForAssetCallback = reference to procedure (imageData: NSData; dataUTI: NSString; orientation: UIImageOrientation; info: NSDictionary); cblock; cdecl;
  PHImageManagerRequestImageDataAndOrientationForAssetCallback = reference to procedure (imageData: NSData; dataUTI: NSString; orientation: CGImagePropertyOrientation; info: NSDictionary); cblock; cdecl;
  PHImageManagerRequestLivePhotoForAssetCallback = reference to procedure (livePhoto: PHLivePhoto; info: NSDictionary); cblock; cdecl;
  PHImageManagerRequestPlayerItemForVideoCallback = reference to procedure (playerItem: AVPlayerItem; info: NSDictionary); cblock; cdecl;
  PHImageManagerRequestExportSessionForVideoCallback = reference to procedure (exportSession: AVAssetExportSession; info: NSDictionary); cblock; cdecl;
  PHImageManagerRequestAVAssetForVideoCallback = reference to procedure (asset: AVAsset; audioMix: AVAudioMix; info: NSDictionary); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  PHImageRequestOptionsPtr = ^PHImageRequestOptions;
  PHLivePhotoRequestOptionsPtr = ^PHLivePhotoRequestOptions;
  PHVideoRequestOptionsPtr = ^PHVideoRequestOptions;
  PHImageManagerPtr = ^PHImageManager;
  PHCachingImageManagerPtr = ^PHCachingImageManager;
{$endif}

{$ifdef TYPES}
type
  UIImageOrientation = NSInteger;
  UIImageOrientationPtr = ^UIImageOrientation;
  PHImageRequestOptionsVersion = NSInteger;
  PHImageRequestOptionsVersionPtr = ^PHImageRequestOptionsVersion;

const
  PHImageRequestOptionsVersionCurrent = 0;
  PHImageRequestOptionsVersionUnadjusted = 1;
  PHImageRequestOptionsVersionOriginal = 2;

type
  PHImageRequestOptionsDeliveryMode = NSInteger;
  PHImageRequestOptionsDeliveryModePtr = ^PHImageRequestOptionsDeliveryMode;

const
  PHImageRequestOptionsDeliveryModeOpportunistic = 0;
  PHImageRequestOptionsDeliveryModeHighQualityFormat = 1;
  PHImageRequestOptionsDeliveryModeFastFormat = 2;

type
  PHImageRequestOptionsResizeMode = NSInteger;
  PHImageRequestOptionsResizeModePtr = ^PHImageRequestOptionsResizeMode;

const
  PHImageRequestOptionsResizeModeNone = 0;
  PHImageRequestOptionsResizeModeFast = 1;
  PHImageRequestOptionsResizeModeExact = 2;

type
  PHAssetImageProgressHandler = reference to procedure (progress: double; error: NSError; stop: objcboolPtr; info: NSDictionary); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  PHImageRequestOptions = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setVersion(newValue: PHImageRequestOptionsVersion); message 'setVersion:';
    function version: PHImageRequestOptionsVersion; message 'version';
    procedure setDeliveryMode(newValue: PHImageRequestOptionsDeliveryMode); message 'setDeliveryMode:';
    function deliveryMode: PHImageRequestOptionsDeliveryMode; message 'deliveryMode';
    procedure setResizeMode(newValue: PHImageRequestOptionsResizeMode); message 'setResizeMode:';
    function resizeMode: PHImageRequestOptionsResizeMode; message 'resizeMode';
    procedure setNormalizedCropRect(newValue: CGRect); message 'setNormalizedCropRect:';
    function normalizedCropRect: CGRect; message 'normalizedCropRect';
    procedure setNetworkAccessAllowed(newValue: objcbool); message 'setNetworkAccessAllowed:';
    function isNetworkAccessAllowed: objcbool; message 'isNetworkAccessAllowed';
    procedure setSynchronous(newValue: objcbool); message 'setSynchronous:';
    function isSynchronous: objcbool; message 'isSynchronous';
    procedure setProgressHandler(newValue: PHAssetImageProgressHandler); message 'setProgressHandler:';
    function progressHandler: PHAssetImageProgressHandler; message 'progressHandler';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  PHLivePhotoRequestOptions = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setVersion(newValue: PHImageRequestOptionsVersion); message 'setVersion:';
    function version: PHImageRequestOptionsVersion; message 'version';
    procedure setDeliveryMode(newValue: PHImageRequestOptionsDeliveryMode); message 'setDeliveryMode:';
    function deliveryMode: PHImageRequestOptionsDeliveryMode; message 'deliveryMode';
    procedure setNetworkAccessAllowed(newValue: objcbool); message 'setNetworkAccessAllowed:';
    function isNetworkAccessAllowed: objcbool; message 'isNetworkAccessAllowed';
    procedure setProgressHandler(newValue: PHAssetImageProgressHandler); message 'setProgressHandler:';
    function progressHandler: PHAssetImageProgressHandler; message 'progressHandler';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef TYPES}
type
  PHVideoRequestOptionsVersion = NSInteger;
  PHVideoRequestOptionsVersionPtr = ^PHVideoRequestOptionsVersion;

const
  PHVideoRequestOptionsVersionCurrent = 0;
  PHVideoRequestOptionsVersionOriginal = 1;

type
  PHVideoRequestOptionsDeliveryMode = NSInteger;
  PHVideoRequestOptionsDeliveryModePtr = ^PHVideoRequestOptionsDeliveryMode;

const
  PHVideoRequestOptionsDeliveryModeAutomatic = 0;
  PHVideoRequestOptionsDeliveryModeHighQualityFormat = 1;
  PHVideoRequestOptionsDeliveryModeMediumQualityFormat = 2;
  PHVideoRequestOptionsDeliveryModeFastFormat = 3;

type
  PHAssetVideoProgressHandler = reference to procedure (progress: double; error: NSError; stop: objcboolPtr; info: NSDictionary); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  PHVideoRequestOptions = objcclass external (NSObject)
  public
    procedure setNetworkAccessAllowed(newValue: objcbool); message 'setNetworkAccessAllowed:';
    function isNetworkAccessAllowed: objcbool; message 'isNetworkAccessAllowed';
    procedure setVersion(newValue: PHVideoRequestOptionsVersion); message 'setVersion:';
    function version: PHVideoRequestOptionsVersion; message 'version';
    procedure setDeliveryMode(newValue: PHVideoRequestOptionsDeliveryMode); message 'setDeliveryMode:';
    function deliveryMode: PHVideoRequestOptionsDeliveryMode; message 'deliveryMode';
    procedure setProgressHandler(newValue: PHAssetVideoProgressHandler); message 'setProgressHandler:';
    function progressHandler: PHAssetVideoProgressHandler; message 'progressHandler';
  end;
{$endif}

{$ifdef TYPES}
type
  PHImageRequestID = cint32;
  PHImageRequestIDPtr = ^PHImageRequestID;

const
  PHInvalidImageRequestID = 0;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PHImageManagerMaximumSize: CGSize; cvar; external;
  PHImageResultIsInCloudKey: NSString; cvar; external;
  PHImageResultIsDegradedKey: NSString; cvar; external;
  PHImageResultRequestIDKey: NSString; cvar; external;
  PHImageCancelledKey: NSString; cvar; external;
  PHImageErrorKey: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PHImageManager = objcclass external (NSObject)
  public
    class function defaultManager: PHImageManager; message 'defaultManager';
    {$if defined(TARGET_OS_IPHONE) or defined(TARGET_OS_MACCATALYST)}
    function requestImageForAsset_targetSize_contentMode_options_resultHandler (asset: PHAsset; targetSize: CGSize; contentMode: PHImageContentMode; options: PHImageRequestOptions; resultHandler: PHImageManagerRequestImageForAssetCallback): PHImageRequestID; message 'requestImageForAsset:targetSize:contentMode:options:resultHandler:';
    {$else}
    function requestImageForAsset_targetSize_contentMode_options_resultHandler (asset: PHAsset; targetSize: CGSize; contentMode: PHImageContentMode; options: PHImageRequestOptions; resultHandler: PHImageManagerRequestImageForAssetCallback): PHImageRequestID; message 'requestImageForAsset:targetSize:contentMode:options:resultHandler:';
    {$endif}
    function requestImageDataForAsset_options_resultHandler (asset: PHAsset; options: PHImageRequestOptions; resultHandler: PHImageManagerRequestImageDataForAssetCallback): PHImageRequestID; message 'requestImageDataForAsset:options:resultHandler:'; { unavailable in macos }
    function requestImageDataAndOrientationForAsset_options_resultHandler (asset: PHAsset; options: PHImageRequestOptions; resultHandler: PHImageManagerRequestImageDataAndOrientationForAssetCallback): PHImageRequestID; message 'requestImageDataAndOrientationForAsset:options:resultHandler:'; { available in macos , ios , tvos  }
    procedure cancelImageRequest (requestID: PHImageRequestID); message 'cancelImageRequest:';
    function requestLivePhotoForAsset_targetSize_contentMode_options_resultHandler (asset: PHAsset; targetSize: CGSize; contentMode: PHImageContentMode; options: PHLivePhotoRequestOptions; resultHandler: PHImageManagerRequestLivePhotoForAssetCallback): PHImageRequestID; message 'requestLivePhotoForAsset:targetSize:contentMode:options:resultHandler:'; { available in macos , ios  }
    function requestPlayerItemForVideo_options_resultHandler (asset: PHAsset; options: PHVideoRequestOptions; resultHandler: PHImageManagerRequestPlayerItemForVideoCallback): PHImageRequestID; message 'requestPlayerItemForVideo:options:resultHandler:'; { available in macos  }
    function requestExportSessionForVideo_options_exportPreset_resultHandler (asset: PHAsset; options: PHVideoRequestOptions; exportPreset: NSString; resultHandler: PHImageManagerRequestExportSessionForVideoCallback): PHImageRequestID; message 'requestExportSessionForVideo:options:exportPreset:resultHandler:'; { available in macos  }
    function requestAVAssetForVideo_options_resultHandler (asset: PHAsset; options: PHVideoRequestOptions; resultHandler: PHImageManagerRequestAVAssetForVideoCallback): PHImageRequestID; message 'requestAVAssetForVideo:options:resultHandler:'; { available in macos  }
  end;

type
  PHCachingImageManager = objcclass external (PHImageManager)
  public
    procedure setAllowsCachingHighQualityImages(newValue: objcbool); message 'setAllowsCachingHighQualityImages:';
    function allowsCachingHighQualityImages: objcbool; message 'allowsCachingHighQualityImages';
    procedure startCachingImagesForAssets_targetSize_contentMode_options (assets: NSArray; targetSize: CGSize; contentMode: PHImageContentMode; options: PHImageRequestOptions); message 'startCachingImagesForAssets:targetSize:contentMode:options:';
    procedure stopCachingImagesForAssets_targetSize_contentMode_options (assets: NSArray; targetSize: CGSize; contentMode: PHImageContentMode; options: PHImageRequestOptions); message 'stopCachingImagesForAssets:targetSize:contentMode:options:';
    procedure stopCachingImagesForAllAssets; message 'stopCachingImagesForAllAssets';
  end;
{$endif}

