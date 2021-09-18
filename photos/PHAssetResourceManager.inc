{ Parsed from Photos.framework PHAssetResourceManager.h }

{$ifdef CALLBACKS}
type
  PHAssetResourceManagerRequestDataForAssetResourceCallback = reference to procedure (data: NSData); cblock; cdecl;
  PHAssetResourceManagerWriteDataForAssetResourceCallback = reference to procedure (error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  PHAssetResourceRequestOptionsPtr = ^PHAssetResourceRequestOptions;
  PHAssetResourceManagerPtr = ^PHAssetResourceManager;
{$endif}

{$ifdef TYPES}
type
  PHAssetResourceDataRequestID = cint32;
  PHAssetResourceDataRequestIDPtr = ^PHAssetResourceDataRequestID;

const
  PHInvalidAssetResourceDataRequestID = 0;

type
  PHAssetResourceProgressHandler = reference to procedure (progress: double); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  PHAssetResourceRequestOptions = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setNetworkAccessAllowed(newValue: objcbool); message 'setNetworkAccessAllowed:';
    function isNetworkAccessAllowed: objcbool; message 'isNetworkAccessAllowed';
    procedure setProgressHandler(newValue: PHAssetResourceProgressHandler); message 'setProgressHandler:';
    function progressHandler: PHAssetResourceProgressHandler; message 'progressHandler';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  PHAssetResourceManager = objcclass external (NSObject)
  public
    class function defaultManager: PHAssetResourceManager; message 'defaultManager';
    function requestDataForAssetResource_options_dataReceivedHandler_completionHandler (resource: PHAssetResource; options: PHAssetResourceRequestOptions; handler: PHAssetResourceManagerRequestDataForAssetResourceCallback; completionHandler: PHAssetResourceManagerRequestDataForAssetResourceCallback): PHAssetResourceDataRequestID; message 'requestDataForAssetResource:options:dataReceivedHandler:completionHandler:';
    procedure writeDataForAssetResource_toFile_options_completionHandler (resource: PHAssetResource; fileURL: NSURL; options: PHAssetResourceRequestOptions; completionHandler: PHAssetResourceManagerWriteDataForAssetResourceCallback); message 'writeDataForAssetResource:toFile:options:completionHandler:';
    procedure cancelDataRequest (requestID: PHAssetResourceDataRequestID); message 'cancelDataRequest:';
  end;
{$endif}

