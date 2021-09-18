{ Parsed from ImageCaptureCore.framework ICCameraItem.h }

{$ifdef TYPES}
type
  ICCameraItemPtr = ^ICCameraItem;
{$endif}

{$ifdef TYPES}
type
  ICCameraItemMetadataOption = NSString { available in macos , ios  };
  ICCameraItemMetadataOptionPtr = ^ICCameraItemMetadataOption { available in macos , ios  };
  ICCameraItemThumbnailOption = NSString { available in macos , ios  };
  ICCameraItemThumbnailOptionPtr = ^ICCameraItemThumbnailOption { available in macos , ios  };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICImageSourceThumbnailMaxPixelSize: ICCameraItemThumbnailOption { available in macos , ios  }; cvar; external;
  ICImageSourceShouldCache: ICCameraItemThumbnailOption { available in macos , ios  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ICDownloadOption = NSString { available in macos , ios  };
  ICDownloadOptionPtr = ^ICDownloadOption { available in macos , ios  };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICDownloadsDirectoryURL: ICDownloadOption { available in macos , ios  }; cvar; external;
  ICSaveAsFilename: ICDownloadOption { available in macos , ios  }; cvar; external;
  ICSavedFilename: ICDownloadOption { available in macos , ios  }; cvar; external;
  ICSavedAncillaryFiles: ICDownloadOption { available in macos , ios  }; cvar; external;
  ICOverwrite: ICDownloadOption { available in macos , ios  }; cvar; external;
  ICDeleteAfterSuccessfulDownload: ICDownloadOption { available in macos , ios  }; cvar; external;
  ICDownloadSidecarFiles: ICDownloadOption { available in macos , ios  }; cvar; external;
  ICTruncateAfterSuccessfulDownload: ICDownloadOption { available in macos , ios  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  ICCameraItem = objcclass external (NSObject)
  private
  public
    function device: ICCameraDevice; message 'device'; { available in macos , ios  }
    function parentFolder: ICCameraFolder; message 'parentFolder'; { available in macos ,ios  }
    function name: NSString; message 'name'; { available in macos ,ios  }
    function UTI: NSString; message 'UTI'; { available in macos ,ios  }
    function fileSystemPath: NSString; message 'fileSystemPath'; { unavailable in ios }
    function isLocked: objcbool; message 'isLocked'; { available in macos ,ios  }
    function isRaw: objcbool; message 'isRaw'; { available in macos , ios  }
    function isInTemporaryStore: objcbool; message 'isInTemporaryStore'; { available in macos , ios  }
    function creationDate: NSDate; message 'creationDate'; { available in macos , ios  }
    function modificationDate: NSDate; message 'modificationDate'; { available in macos , ios  }
    function thumbnail: CGImageRef; message 'thumbnail'; { available in macos , ios  }
    function metadata: NSDictionary; message 'metadata'; { available in macos , ios  }
    function userData: NSMutableDictionary; message 'userData'; { available in macos , ios  }
    function ptpObjectHandle: cuint; message 'ptpObjectHandle'; { available in macos , ios  }
    function wasAddedAfterContentCatalogCompleted: objcbool; message 'wasAddedAfterContentCatalogCompleted'; { available in macos ,ios  }
    procedure requestThumbnail; message 'requestThumbnail'; { available in macos , ios  }
    procedure requestMetadata; message 'requestMetadata'; { available in macos , ios  }
    procedure flushThumbnailCache; message 'flushThumbnailCache'; { available in macos , ios  }
    procedure flushMetadataCache; message 'flushMetadataCache'; { available in macos , ios  }
    function thumbnailIfAvailable: CGImageRef; message 'thumbnailIfAvailable';
    function largeThumbnailIfAvailable: CGImageRef; message 'largeThumbnailIfAvailable';
    function metadataIfAvailable: NSDictionary; message 'metadataIfAvailable';
  end;
{$endif}

