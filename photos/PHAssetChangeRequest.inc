{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHAssetChangeRequest.h }

{ Types from PHAssetChangeRequest }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  PHAssetChangeRequestCanHandleAdjustmentDataCallback = reference to function (adjustmentData: PHAdjustmentData): objcbool; cblock; cdecl;
  PHAssetChangeRequestProgressHandlerCallback = reference to procedure (progress: double; stop: objcboolPtr); cblock; cdecl;
  PHAssetChangeRequestRequestContentEditingInputWithOptionsCallback = reference to procedure (contentEditingInput: PHContentEditingInput; info: NSDictionary); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  PHAssetChangeRequestPtr = ^PHAssetChangeRequest;
  PHContentEditingInputRequestOptionsPtr = ^PHContentEditingInputRequestOptions;
{$endif}

{$ifdef CLASSES}

type
  PHAssetChangeRequest = objcclass external (PHChangeRequest)
  public
    {$if defined(TARGET_OS_IPHONE) or defined(TARGET_OS_MACCATALYST)}
    class function creationRequestForAssetFromImage (image: UIImage): id; message 'creationRequestForAssetFromImage:';
    {$else}
    class function creationRequestForAssetFromImage (image: NSImage): id; message 'creationRequestForAssetFromImage:';
    {$endif}
    class function creationRequestForAssetFromImageAtFileURL (fileURL: NSURL): id; message 'creationRequestForAssetFromImageAtFileURL:';
    class function creationRequestForAssetFromVideoAtFileURL (fileURL: NSURL): id; message 'creationRequestForAssetFromVideoAtFileURL:';
    function placeholderForCreatedAsset: PHObjectPlaceholder; message 'placeholderForCreatedAsset';
    class procedure deleteAssets (assets: id); message 'deleteAssets:';
    class function changeRequestForAsset (asset: PHAsset): id; message 'changeRequestForAsset:';
    procedure setCreationDate(newValue: NSDate); message 'setCreationDate:';
    function creationDate: NSDate; message 'creationDate';
    procedure setLocation(newValue: CLLocation); message 'setLocation:';
    function location: CLLocation; message 'location';
    procedure setFavorite(newValue: objcbool); message 'setFavorite:';
    function isFavorite: objcbool; message 'isFavorite';
    procedure setHidden(newValue: objcbool); message 'setHidden:';
    function isHidden: objcbool; message 'isHidden';
    procedure setContentEditingOutput(newValue: PHContentEditingOutput); message 'setContentEditingOutput:';
    function contentEditingOutput: PHContentEditingOutput; message 'contentEditingOutput';
    procedure revertAssetContentToOriginal; message 'revertAssetContentToOriginal';
  end;
{$endif}

{$ifdef TYPES}
type
  PHContentEditingInputRequestID = NSUInteger;
  PHContentEditingInputRequestIDPtr = ^PHContentEditingInputRequestID;
{$endif}

{$ifdef CLASSES}

type
  PHContentEditingInputRequestOptions = objcclass external (NSObject)
  public
    procedure setCanHandleAdjustmentData(newValue: PHAssetChangeRequestCanHandleAdjustmentDataCallback); message 'setCanHandleAdjustmentData:';
    function canHandleAdjustmentData: PHAssetChangeRequestCanHandleAdjustmentDataCallback; message 'canHandleAdjustmentData';
    procedure setNetworkAccessAllowed(newValue: objcbool); message 'setNetworkAccessAllowed:';
    function isNetworkAccessAllowed: objcbool; message 'isNetworkAccessAllowed';
    procedure setProgressHandler(newValue: PHAssetChangeRequestProgressHandlerCallback); message 'setProgressHandler:';
    function progressHandler: PHAssetChangeRequestProgressHandlerCallback; message 'progressHandler';
  end;


type
  PHAsset_PHContentEditingInput = objccategory external name 'PHContentEditingInput' (PHAsset)
    function requestContentEditingInputWithOptions_completionHandler (options: PHContentEditingInputRequestOptions; completionHandler: PHAssetChangeRequestRequestContentEditingInputWithOptionsCallback): PHContentEditingInputRequestID; message 'requestContentEditingInputWithOptions:completionHandler:';
    procedure cancelContentEditingInputRequest (requestID: PHContentEditingInputRequestID); message 'cancelContentEditingInputRequest:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PHContentEditingInputResultIsInCloudKey: NSString; cvar; external;
  PHContentEditingInputCancelledKey: NSString; cvar; external;
  PHContentEditingInputErrorKey: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PHContentEditingOutput_PHAssetChangeRequest = objccategory external name 'PHAssetChangeRequest' (PHContentEditingOutput)
    function initWithPlaceholderForCreatedAsset (placeholderForCreatedAsset: PHObjectPlaceholder): id; message 'initWithPlaceholderForCreatedAsset:';
  end;
{$endif}

