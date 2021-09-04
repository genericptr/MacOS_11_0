{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHLivePhotoEditingContext.h }

{$ifdef CALLBACKS}
type
  PHLivePhotoEditingContextPrepareLivePhotoForPlaybackWithTargetSizeCallback = reference to procedure (livePhoto: PHLivePhoto; error: NSError); cblock; cdecl;
  PHLivePhotoEditingContextSaveLivePhotoToOutputCallback = reference to procedure (success: objcbool; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  PHLivePhotoEditingContextPtr = ^PHLivePhotoEditingContext;
  PHLivePhotoFrameProtocolPtr = ^PHLivePhotoFrameProtocol;
{$endif}

{$ifdef TYPES}
type
  PHLivePhotoFrameProcessingBlock = reference to function (frame: id; error: NSErrorPtr): CIImage; cblock; cdecl;
  PHLivePhotoEditingOption = NSString;
  PHLivePhotoEditingOptionPtr = ^PHLivePhotoEditingOption;
{$endif}

{$ifdef CLASSES}

type
  PHLivePhotoEditingContext = objcclass external (NSObject)
  public
    function initWithLivePhotoEditingInput (livePhotoInput: PHContentEditingInput): id; message 'initWithLivePhotoEditingInput:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init';
    function fullSizeImage: CIImage; message 'fullSizeImage';
    function duration: CMTime; message 'duration';
    function photoTime: CMTime; message 'photoTime';
    procedure setFrameProcessor(newValue: PHLivePhotoFrameProcessingBlock); message 'setFrameProcessor:';
    function frameProcessor: PHLivePhotoFrameProcessingBlock; message 'frameProcessor';
    procedure setAudioVolume(newValue: single); message 'setAudioVolume:';
    function audioVolume: single; message 'audioVolume';
    function orientation: CGImagePropertyOrientation; message 'orientation';
    procedure prepareLivePhotoForPlaybackWithTargetSize_options_completionHandler (targetSize: CGSize; options: NSDictionary; handler: PHLivePhotoEditingContextPrepareLivePhotoForPlaybackWithTargetSizeCallback); message 'prepareLivePhotoForPlaybackWithTargetSize:options:completionHandler:';
    procedure saveLivePhotoToOutput_options_completionHandler (output: PHContentEditingOutput; options: NSDictionary; handler: PHLivePhotoEditingContextSaveLivePhotoToOutputCallback); message 'saveLivePhotoToOutput:options:completionHandler:';
    procedure cancel; message 'cancel';
  end;
{$endif}

{$ifdef TYPES}
type
  PHLivePhotoFrameType = NSInteger;
  PHLivePhotoFrameTypePtr = ^PHLivePhotoFrameType;

const
  PHLivePhotoFrameTypePhoto = 0;
  PHLivePhotoFrameTypeVideo = 1;
{$endif}

{$ifdef PROTOCOLS}

type
  PHLivePhotoFrameProtocol = objcprotocol external name 'PHLivePhotoFrame'
    function image: CIImage; message 'image';
    function time: CMTime; message 'time';
    function type_: PHLivePhotoFrameType; message 'type';
    function renderScale: CGFloat; message 'renderScale';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PHLivePhotoShouldRenderAtPlaybackTime: PHLivePhotoEditingOption { available in ios , tvos  }; cvar; external;
  PHLivePhotoEditingErrorDomain: NSString { unavailable in ios, tvos, macCatalyst }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  PHLivePhotoEditingErrorCode = NSInteger;
  PHLivePhotoEditingErrorCodePtr = ^PHLivePhotoEditingErrorCode;

const
  PHLivePhotoEditingErrorCodeUnknown = 0 deprecated 'replace with PHPhotosErrorInvalid';
  PHLivePhotoEditingErrorCodeAborted = 1 deprecated 'replace with PHPhotosErrorUserCancelled';
{$endif}

