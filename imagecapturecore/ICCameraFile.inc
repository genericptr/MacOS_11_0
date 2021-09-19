{ Parsed from ImageCaptureCore.framework ICCameraFile.h }

{$ifdef CALLBACKS}
type
  ICCameraFileRequestThumbnailDataWithOptionsCallback = reference to procedure (param1: NSData; param2: NSError); cblock; cdecl;
  ICCameraFileRequestMetadataDictionaryWithOptionsCallback = reference to procedure (param1: NSDictionary; param2: NSError); cblock; cdecl;
  ICCameraFileRequestDownloadWithOptionsCallback = reference to procedure (filename: NSString; error: NSError); cblock; cdecl;
  ICCameraFileRequestReadDataAtOffsetCallback = reference to procedure (param1: NSData; param2: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  ICCameraFilePtr = ^ICCameraFile;
{$endif}

{$ifdef CLASSES}

type
  ICCameraFile = objcclass external (ICCameraItem)
  private
  public
    function width: NSInteger; message 'width'; { available in macos 10.4, ios 13.0 }
    function height: NSInteger; message 'height'; { available in macos 10.4, ios 13.0 }
    function originalFilename: NSString; message 'originalFilename'; { available in macos 10.4, ios 13.0 }
    function createdFilename: NSString; message 'createdFilename'; { available in macos 10.4, ios 13.0 }
    function fileSize: off_t; message 'fileSize'; { available in macos 10.4, ios 13.0 }
    procedure setOrientation(newValue: ICEXIFOrientationType); message 'setOrientation:'; { available in macos 10.4, ios 13.0 }
    function orientation: ICEXIFOrientationType; message 'orientation'; { available in macos 10.4, ios 13.0 }
    function duration: double; message 'duration'; { available in macos 10.4, ios 13.0 }
    function highFramerate: objcbool; message 'highFramerate'; { available in macos 10.4, ios 13.0 }
    function timeLapse: objcbool; message 'timeLapse'; { available in macos 10.4, ios 13.0 }
    function firstPicked: objcbool; message 'firstPicked'; { available in macos 10.13, ios 13.0 }
    function originatingAssetID: NSString; message 'originatingAssetID'; { available in macos 10.4, ios 13.0 }
    function groupUUID: NSString; message 'groupUUID'; { available in macos 10.13, ios 13.0 }
    function gpsString: NSString; message 'gpsString'; { available in macos 10.4, ios 13.0 }
    function relatedUUID: NSString; message 'relatedUUID'; { available in macos 10.11, ios 13.0 }
    function burstUUID: NSString; message 'burstUUID'; { available in macos 10.4, ios 13.0 }
    function burstFavorite: objcbool; message 'burstFavorite'; { available in macos 10.10, ios 13.0 }
    function burstPicked: objcbool; message 'burstPicked'; { available in macos 10.10, ios 13.0 }
    function sidecarFiles: NSArray; message 'sidecarFiles'; { available in macos 10.4, ios 13.0 }
    function pairedRawImage: ICCameraFile; message 'pairedRawImage'; { available in macos 10.4, ios 13.0 }
    function fileCreationDate: NSDate; message 'fileCreationDate'; { available in macos 10.4, ios 13.0 }
    function fileModificationDate: NSDate; message 'fileModificationDate'; { available in macos 10.4, ios 13.0 }
    function exifCreationDate: NSDate; message 'exifCreationDate'; { available in macos 10.4, ios 13.0 }
    function exifModificationDate: NSDate; message 'exifModificationDate'; { available in macos 10.4, ios 13.0 }
    procedure requestThumbnailDataWithOptions_completion (options: NSDictionary; completion: ICCameraFileRequestThumbnailDataWithOptionsCallback); message 'requestThumbnailDataWithOptions:completion:'; { available in macos 10.15, ios 13.0 }
    procedure requestMetadataDictionaryWithOptions_completion (options: NSDictionary; completion: ICCameraFileRequestMetadataDictionaryWithOptionsCallback); message 'requestMetadataDictionaryWithOptions:completion:'; { available in macos 10.15, ios 13.0 }
    function requestDownloadWithOptions_completion (options: NSDictionary; completion: ICCameraFileRequestDownloadWithOptionsCallback): NSProgress; message 'requestDownloadWithOptions:completion:'; { available in macos 10.15, ios 13.0 }
    procedure requestReadDataAtOffset_length_completion (offset: off_t; length: off_t; completion: ICCameraFileRequestReadDataAtOffsetCallback); message 'requestReadDataAtOffset:length:completion:'; { available in macos 10.15, ios 13.0 }
  end;
{$endif}

