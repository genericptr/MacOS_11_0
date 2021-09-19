{ Parsed from ImageCaptureCore.framework ICCameraItem.h }

{$ifdef TYPES}
type
  ICCameraItemPtr = ^ICCameraItem;
{$endif}

{$ifdef TYPES}
type
  ICCameraItemMetadataOption = NSString { available in macos 10.15, ios 13.0 };
  ICCameraItemMetadataOptionPtr = ^ICCameraItemMetadataOption { available in macos 10.15, ios 13.0 };
  ICCameraItemThumbnailOption = NSString { available in macos 10.15, ios 13.0 };
  ICCameraItemThumbnailOptionPtr = ^ICCameraItemThumbnailOption { available in macos 10.15, ios 13.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICImageSourceThumbnailMaxPixelSize: ICCameraItemThumbnailOption { available in macos 10.15, ios 13.0 }; cvar; external;
  ICImageSourceShouldCache: ICCameraItemThumbnailOption { available in macos 10.15, ios 13.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ICDownloadOption = NSString { available in macos 10.4, ios 13.0 };
  ICDownloadOptionPtr = ^ICDownloadOption { available in macos 10.4, ios 13.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICDownloadsDirectoryURL: ICDownloadOption { available in macos 10.4, ios 13.0 }; cvar; external;
  ICSaveAsFilename: ICDownloadOption { available in macos 10.4, ios 13.0 }; cvar; external;
  ICSavedFilename: ICDownloadOption { available in macos 10.4, ios 13.0 }; cvar; external;
  ICSavedAncillaryFiles: ICDownloadOption { available in macos 10.4, ios 13.0 }; cvar; external;
  ICOverwrite: ICDownloadOption { available in macos 10.4, ios 13.0 }; cvar; external;
  ICDeleteAfterSuccessfulDownload: ICDownloadOption { available in macos 10.4, ios 13.0 }; cvar; external;
  ICDownloadSidecarFiles: ICDownloadOption { available in macos 10.4, ios 13.0 }; cvar; external;
  ICTruncateAfterSuccessfulDownload: ICDownloadOption { available in macos 11.0, ios 14.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  ICCameraItem = objcclass external (NSObject)
  private
  public
    function device: ICCameraDevice; message 'device'; { available in macos 10.4, ios 13.0 }
    function parentFolder: ICCameraFolder; message 'parentFolder'; { available in macos 10.4,ios 13.0 }
    function name: NSString; message 'name'; { available in macos 10.4,ios 13.0 }
    function UTI: NSString; message 'UTI'; { available in macos 10.4,ios 13.0 }
    function fileSystemPath: NSString; message 'fileSystemPath'; { unavailable in ios } { available in macos 10.4 }
    function isLocked: objcbool; message 'isLocked'; { available in macos 10.4,ios 13.0 }
    function isRaw: objcbool; message 'isRaw'; { available in macos 10.4, ios 13.0 }
    function isInTemporaryStore: objcbool; message 'isInTemporaryStore'; { available in macos 10.4, ios 13.0 }
    function creationDate: NSDate; message 'creationDate'; { available in macos 10.4, ios 13.0 }
    function modificationDate: NSDate; message 'modificationDate'; { available in macos 10.4, ios 13.0 }
    function thumbnail: CGImageRef; message 'thumbnail'; { available in macos 10.4, ios 13.0 }
    function metadata: NSDictionary; message 'metadata'; { available in macos 10.4, ios 13.0 }
    function userData: NSMutableDictionary; message 'userData'; { available in macos 10.4, ios 13.0 }
    function ptpObjectHandle: cuint; message 'ptpObjectHandle'; { available in macos 10.4, ios 13.0 }
    function wasAddedAfterContentCatalogCompleted: objcbool; message 'wasAddedAfterContentCatalogCompleted'; { available in macos 10.4,ios 13.0 }
    procedure requestThumbnail; message 'requestThumbnail'; { available in macos 10.15, ios 13.0 }
    procedure requestMetadata; message 'requestMetadata'; { available in macos 10.15, ios 13.0 }
    procedure flushThumbnailCache; message 'flushThumbnailCache'; { available in macos 10.15, ios 13.0 }
    procedure flushMetadataCache; message 'flushMetadataCache'; { available in macos 10.15, ios 13.0 }
    function thumbnailIfAvailable: CGImageRef; message 'thumbnailIfAvailable';
    function largeThumbnailIfAvailable: CGImageRef; message 'largeThumbnailIfAvailable';
    function metadataIfAvailable: NSDictionary; message 'metadataIfAvailable';
  end;
{$endif}

