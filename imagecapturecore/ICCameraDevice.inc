{ Parsed from ImageCaptureCore.framework ICCameraDevice.h }

{$ifdef CALLBACKS}
type
  ICCameraDeviceRequestDeleteFilesCallback = reference to procedure (param1: NSDictionary); cblock; cdecl;
  ICCameraDevicePtpEventHandlerCallback = reference to procedure (eventData: NSData); cblock; cdecl;
  ICCameraDeviceRequestSendPTPCommandCallback = reference to procedure (responseData: NSData; ptpResponseData: NSData; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  ICCameraDevicePtr = ^ICCameraDevice;
  ICCameraDeviceDelegateProtocolPtr = ^ICCameraDeviceDelegateProtocol;
  ICCameraDeviceDownloadDelegateProtocolPtr = ^ICCameraDeviceDownloadDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICCameraDeviceCanTakePicture: ICDeviceCapability { available in macos 10.4, ios 13.0 }; cvar; external;
  ICCameraDeviceCanTakePictureUsingShutterReleaseOnCamera: ICDeviceCapability { available in macos 10.4, ios 13.0 }; cvar; external;
  ICCameraDeviceCanDeleteOneFile: ICDeviceCapability { available in macos 10.4, ios 13.0 }; cvar; external;
  ICCameraDeviceCanDeleteAllFiles: ICDeviceCapability { available in macos 10.4, ios 13.0 }; cvar; external;
  ICCameraDeviceCanSyncClock: ICDeviceCapability { available in macos 10.4, ios 13.0 }; cvar; external;
  ICCameraDeviceCanReceiveFile: ICDeviceCapability { available in macos 10.4, ios 13.0 }; cvar; external;
  ICCameraDeviceCanAcceptPTPCommands: ICDeviceCapability { available in macos 10.4, ios 13.0 }; cvar; external;
  ICCameraDeviceSupportsHEIF: ICDeviceCapability { available in macos 10.11, ios 14.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ICUploadOption = NSString { available in macos (10.4 };
  ICUploadOptionPtr = ^ICUploadOption { available in macos (10.15 };
  ICDeleteResult = NSString { available in macos (10.15), ios (13.0) };
  ICDeleteResultPtr = ^ICDeleteResult { available in macos (10.15), ios (13.0) };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICDeleteSuccessful: ICDeleteResult { available in macos 10.15, ios 13.0 }; cvar; external;
  ICDeleteCanceled: ICDeleteResult { available in macos , ios  }; cvar; external;
  ICDeleteFailed: ICDeleteResult { available in macos , ios  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ICDeleteError = NSString { available in macos (10.15), ios (13.0) };
  ICDeleteErrorPtr = ^ICDeleteError { available in macos (10.15), ios (13.0) };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICDeleteErrorReadOnly: ICDeleteError { available in macos 10.15, ios 13.0 }; cvar; external;
  ICDeleteErrorFileMissing: ICDeleteError { available in macos , ios  }; cvar; external;
  ICDeleteErrorDeviceMissing: ICDeleteError { available in macos , ios  }; cvar; external;
  ICDeleteErrorCanceled: ICDeleteError { available in macos , ios  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ICMediaPresentation = NSUInteger;
  ICMediaPresentationPtr = ^ICMediaPresentation;

const
  ICMediaPresentationConvertedAssets = 1;
  ICMediaPresentationOriginalAssets = 2;
{$endif}

{$ifdef CLASSES}

type
  ICCameraDevice = objcclass external (ICDevice)
  public
    function contentCatalogPercentCompleted: NSUInteger; message 'contentCatalogPercentCompleted'; { available in macos 10.4, ios 13.0 }
    function contents: NSArray; message 'contents'; { available in macos 10.4, ios 13.0 }
    function mediaFiles: NSArray; message 'mediaFiles'; { available in macos 10.4, ios 13.0 }
    function isEjectable: objcbool; message 'isEjectable'; { available in macos 10.4, ios 13.0 }
    function isLocked: objcbool; message 'isLocked'; { available in macos 10.4 }
    function isAccessRestrictedAppleDevice: objcbool; message 'isAccessRestrictedAppleDevice'; { available in macos 10.11, ios 14.0 }
    function iCloudPhotosEnabled: objcbool; message 'iCloudPhotosEnabled'; { available in macos 10.11, ios 14.0 }
    function mountPoint: NSString; message 'mountPoint'; { unavailable in ios }
    procedure setMediaPresentation(newValue: ICMediaPresentation); message 'setMediaPresentation:'; { available in macos 10.4 }
    function mediaPresentation: ICMediaPresentation; message 'mediaPresentation'; { available in macos 10.4, ios 13.0 }
    function filesOfType (fileUTType: NSString): NSArray; message 'filesOfType:'; { available in macos 10.4 }
    procedure requestReadDataFromFile_atOffset_length_readDelegate_didReadDataSelector_contextInfo (file_: ICCameraFile; offset: off_t; length: off_t; readDelegate: id; selector: SEL; contextInfo: pointer); message 'requestReadDataFromFile:atOffset:length:readDelegate:didReadDataSelector:contextInfo:'; { unavailable in ios }
    procedure requestDownloadFile_options_downloadDelegate_didDownloadSelector_contextInfo (file_: ICCameraFile; options: NSDictionary; downloadDelegate: ICCameraDeviceDownloadDelegateProtocol; selector: SEL; contextInfo: pointer); message 'requestDownloadFile:options:downloadDelegate:didDownloadSelector:contextInfo:'; { available in macos 10.15, ios 13.0 }
    procedure cancelDownload; message 'cancelDownload'; { unavailable in ios } { available in macos 10.4 }
    procedure requestDeleteFiles (files: NSArray); message 'requestDeleteFiles:'; { available in macos 10.4 }
    function requestDeleteFiles_deleteFailed_completion (files: NSArray; deleteFailed: ICCameraDeviceRequestDeleteFilesCallback; completion: ICCameraDeviceRequestDeleteFilesCallback): NSProgress; message 'requestDeleteFiles:deleteFailed:completion:'; { available in macos 10.4 }
    procedure cancelDelete; message 'cancelDelete'; { unavailable in ios }
    procedure requestSyncClock; message 'requestSyncClock'; { unavailable in ios }
    function timeOffset: NSTimeInterval; message 'timeOffset'; { available in macos 10.4 }
    function batteryLevelAvailable: objcbool; message 'batteryLevelAvailable'; { available in macos 10.4 }
    function batteryLevel: NSUInteger; message 'batteryLevel'; { available in macos 10.4 }
    procedure requestUploadFile_options_uploadDelegate_didUploadSelector_contextInfo (fileURL: NSURL; options: NSDictionary; uploadDelegate: id; selector: SEL; contextInfo: pointer); message 'requestUploadFile:options:uploadDelegate:didUploadSelector:contextInfo:'; { unavailable in ios } { available in macos 10.4 }
    function tetheredCaptureEnabled: objcbool; message 'tetheredCaptureEnabled'; { available in macos 10.4 }
    procedure requestEnableTethering; message 'requestEnableTethering'; { unavailable in macos } { available in ios 13.0 }
    procedure requestDisableTethering; message 'requestDisableTethering'; { unavailable in macos } { available in ios 13.0 }
    procedure requestTakePicture; message 'requestTakePicture'; { unavailable in ios } { available in macos 10.4 }
    procedure setPtpEventHandler(newValue: ICCameraDevicePtpEventHandlerCallback); message 'setPtpEventHandler:'; { unavailable in macos) IC_AVAILABLE(ios  }
    function ptpEventHandler: ICCameraDevicePtpEventHandlerCallback; message 'ptpEventHandler'; { unavailable in macos) IC_AVAILABLE(ios  }
    procedure requestSendPTPCommand_outData_sendCommandDelegate_didSendCommandSelector_contextInfo (command: NSData; data: NSData; sendCommandDelegate: id; selector: SEL; contextInfo: pointer); message 'requestSendPTPCommand:outData:sendCommandDelegate:didSendCommandSelector:contextInfo:'; { unavailable in ios }
    procedure requestSendPTPCommand_outData_completion (ptpCommand: NSData; ptpData: NSData; completion: ICCameraDeviceRequestSendPTPCommandCallback); message 'requestSendPTPCommand:outData:completion:'; { available in macos , ios  }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  ICCameraDeviceDelegateProtocol = objcprotocol external name 'ICCameraDeviceDelegate' (ICDeviceDelegateProtocol)
    procedure cameraDevice_didAddItems (camera: ICCameraDevice; items: NSArray); message 'cameraDevice:didAddItems:'; { available in macos 10.15, ios 13.0 }
    procedure cameraDevice_didRemoveItems (camera: ICCameraDevice; items: NSArray); message 'cameraDevice:didRemoveItems:'; { available in macos 10.4, ios 13.0 }
    procedure cameraDevice_didReceiveThumbnail_forItem_error (camera: ICCameraDevice; thumbnail: CGImageRef; item: ICCameraItem; error: NSError); message 'cameraDevice:didReceiveThumbnail:forItem:error:'; { available in macos 10.4, ios 13.0 }
    procedure cameraDevice_didReceiveMetadata_forItem_error (camera: ICCameraDevice; metadata: NSDictionary; item: ICCameraItem; error: NSError); message 'cameraDevice:didReceiveMetadata:forItem:error:'; { available in macos 10.4, ios 13.0 }
    procedure cameraDevice_didRenameItems (camera: ICCameraDevice; items: NSArray); message 'cameraDevice:didRenameItems:'; { available in macos 10.4, ios 13.0 }
    procedure cameraDeviceDidChangeCapability (camera: ICCameraDevice); message 'cameraDeviceDidChangeCapability:'; { available in macos , ios  }
    procedure cameraDevice_didReceivePTPEvent (camera: ICCameraDevice; eventData: NSData); message 'cameraDevice:didReceivePTPEvent:'; { available in macos , ios  }
    procedure deviceDidBecomeReadyWithCompleteContentCatalog (device: ICCameraDevice); message 'deviceDidBecomeReadyWithCompleteContentCatalog:'; { available in macos , ios  }
    procedure cameraDeviceDidRemoveAccessRestriction (device: ICDevice); message 'cameraDeviceDidRemoveAccessRestriction:';
    procedure cameraDeviceDidEnableAccessRestriction (device: ICDevice); message 'cameraDeviceDidEnableAccessRestriction:';
  optional
    function cameraDevice_shouldGetThumbnailOfItem (cameraDevice: ICCameraDevice; item: ICCameraItem): objcbool; message 'cameraDevice:shouldGetThumbnailOfItem:'; { available in macos , ios  }
    function cameraDevice_shouldGetMetadataOfItem (cameraDevice: ICCameraDevice; item: ICCameraItem): objcbool; message 'cameraDevice:shouldGetMetadataOfItem:'; { available in macos , ios  }
    procedure cameraDevice_didCompleteDeleteFilesWithError (camera: ICCameraDevice; error: NSError); message 'cameraDevice:didCompleteDeleteFilesWithError:'; { available in macos , ios  }
    procedure cameraDevice_didAddItem (camera: ICCameraDevice; item: ICCameraItem); message 'cameraDevice:didAddItem:'; deprecated 'in "Implement cameraDevice:didAddItems:", ';
    procedure cameraDevice_didRemoveItem (camera: ICCameraDevice; item: ICCameraItem); message 'cameraDevice:didRemoveItem:'; deprecated 'in "Implement cameraDevice:didRemoveItems:", ';
    procedure cameraDevice_didReceiveThumbnailForItem (camera: ICCameraDevice; item: ICCameraItem); message 'cameraDevice:didReceiveThumbnailForItem:'; deprecated 'in "Implement cameraDevice:didReceiveThumbnail:forItem:error:", ';
    procedure cameraDevice_didReceiveMetadataForItem (camera: ICCameraDevice; item: ICCameraItem); message 'cameraDevice:didReceiveMetadataForItem:'; deprecated 'in "Implement cameraDevice:didReceiveMetadata:forItem:error:", ';
  end;

type
  ICCameraDeviceDownloadDelegateProtocol = objcprotocol external name 'ICCameraDeviceDownloadDelegate' (NSObjectProtocol)
  optional
    procedure didDownloadFile_error_options_contextInfo (file_: ICCameraFile; error: NSError; options: NSDictionary; contextInfo: pointer); message 'didDownloadFile:error:options:contextInfo:'; { available in macos  }
    procedure didReceiveDownloadProgressForFile_downloadedBytes_maxBytes (file_: ICCameraFile; downloadedBytes: off_t; maxBytes: off_t); message 'didReceiveDownloadProgressForFile:downloadedBytes:maxBytes:'; { available in macos , ios  }
  end;
{$endif}

