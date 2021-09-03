{ Parsed from ImageCaptureCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ImageCaptureCore.framework/Headers/ICCameraFile.h }

{$ifdef CALLBACKS}
type
  ICCameraFileRequestThumbnailDataWithOptionsCallback = reference to function (param1: NSData; param2: NSError): pointer; cblock; cdecl;
  ICCameraFileRequestMetadataDictionaryWithOptionsCallback = reference to function (param1: NSDictionary; param2: NSError): pointer; cblock; cdecl;
  ICCameraFileRequestDownloadWithOptionsCallback = reference to function (filename: NSString; error: NSError): pointer; cblock; cdecl;
  ICCameraFileRequestReadDataAtOffsetCallback = reference to function (param1: NSData; param2: NSError): pointer; cblock; cdecl;
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
    function width: NSInteger; message 'width'; { available in macos , ios  }
    function height: NSInteger; message 'height'; { available in macos , ios  }
    function originalFilename: NSString; message 'originalFilename'; { available in macos , ios  }
    function createdFilename: NSString; message 'createdFilename'; { available in macos , ios  }
    function fileSize: off_t; message 'fileSize'; { available in macos , ios  }
    procedure setOrientation(newValue: ICEXIFOrientationType); message 'setOrientation:'; { available in macos , ios  }
    function orientation: ICEXIFOrientationType; message 'orientation'; { available in macos , ios  }
    function duration: double; message 'duration'; { available in macos , ios  }
    function highFramerate: objcbool; message 'highFramerate'; { available in macos , ios  }
    function timeLapse: objcbool; message 'timeLapse'; { available in macos , ios  }
    function firstPicked: objcbool; message 'firstPicked'; { available in macos , ios  }
    function originatingAssetID: NSString; message 'originatingAssetID'; { available in macos , ios  }
    function groupUUID: NSString; message 'groupUUID'; { available in macos , ios  }
    function gpsString: NSString; message 'gpsString'; { available in macos , ios  }
    function relatedUUID: NSString; message 'relatedUUID'; { available in macos , ios  }
    function burstUUID: NSString; message 'burstUUID'; { available in macos , ios  }
    function burstFavorite: objcbool; message 'burstFavorite'; { available in macos , ios  }
    function burstPicked: objcbool; message 'burstPicked'; { available in macos , ios  }
    function sidecarFiles: NSArray; message 'sidecarFiles'; { available in macos , ios  }
    function pairedRawImage: ICCameraFile; message 'pairedRawImage'; { available in macos , ios  }
    function fileCreationDate: NSDate; message 'fileCreationDate'; { available in macos , ios  }
    function fileModificationDate: NSDate; message 'fileModificationDate'; { available in macos , ios  }
    function exifCreationDate: NSDate; message 'exifCreationDate'; { available in macos , ios  }
    function exifModificationDate: NSDate; message 'exifModificationDate'; { available in macos , ios  }
    procedure requestThumbnailDataWithOptions_completion (options: NSDictionary; completion: ICCameraFileRequestThumbnailDataWithOptionsCallback); message 'requestThumbnailDataWithOptions:completion:'; { available in macos , ios  }
    procedure requestMetadataDictionaryWithOptions_completion (options: NSDictionary; completion: ICCameraFileRequestMetadataDictionaryWithOptionsCallback); message 'requestMetadataDictionaryWithOptions:completion:'; { available in macos , ios  }
    function requestDownloadWithOptions_completion (options: NSDictionary; completion: ICCameraFileRequestDownloadWithOptionsCallback): NSProgress; message 'requestDownloadWithOptions:completion:'; { available in macos , ios  }
    procedure requestReadDataAtOffset_length_completion (offset: off_t; length: off_t; completion: ICCameraFileRequestReadDataAtOffsetCallback); message 'requestReadDataAtOffset:length:completion:'; { available in macos , ios  }
  end;
{$endif}

