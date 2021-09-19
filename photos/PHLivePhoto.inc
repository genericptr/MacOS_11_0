{ Parsed from Photos.framework PHLivePhoto.h }

{ Types from PHLivePhoto }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  PHLivePhotoRequestLivePhotoWithResourceFileURLsCallback = reference to procedure (livePhoto: PHLivePhoto; info: NSDictionary); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  PHLivePhotoPtr = ^PHLivePhoto;
{$endif}

{$ifdef TYPES}
type
  PHLivePhotoRequestID = cint32;
  PHLivePhotoRequestIDPtr = ^PHLivePhotoRequestID;

const
  PHLivePhotoRequestIDInvalid = 0;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PHLivePhotoInfoErrorKey: NSString; cvar; external;
  PHLivePhotoInfoIsDegradedKey: NSString; cvar; external;
  PHLivePhotoInfoCancelledKey: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PHLivePhoto = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: id; message 'init';
    function size: CGSize; message 'size'; { available in macos 10.12 }
    {$if defined(TARGET_OS_IPHONE) or defined(TARGET_OS_MACCATALYST)}
    class function requestLivePhotoWithResourceFileURLs_placeholderImage_targetSize_contentMode_resultHandler (fileURLs: NSArray; image: UIImage; targetSize: CGSize; contentMode: PHImageContentMode; resultHandler: PHLivePhotoRequestLivePhotoWithResourceFileURLsCallback): PHLivePhotoRequestID; message 'requestLivePhotoWithResourceFileURLs:placeholderImage:targetSize:contentMode:resultHandler:';
    {$else}
    class function requestLivePhotoWithResourceFileURLs_placeholderImage_targetSize_contentMode_resultHandler (fileURLs: NSArray; image: NSImage; targetSize: CGSize; contentMode: PHImageContentMode; resultHandler: PHLivePhotoRequestLivePhotoWithResourceFileURLsCallback): PHLivePhotoRequestID; message 'requestLivePhotoWithResourceFileURLs:placeholderImage:targetSize:contentMode:resultHandler:';
    {$endif}
    class procedure cancelLivePhotoRequestWithRequestID (requestID: PHLivePhotoRequestID); message 'cancelLivePhotoRequestWithRequestID:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  PHLivePhoto_NSItemProvider = objccategory external name 'NSItemProvider' (PHLivePhoto)
  end;
{$endif}

