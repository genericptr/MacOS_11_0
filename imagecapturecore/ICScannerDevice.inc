{ Parsed from ImageCaptureCore.framework ICScannerDevice.h }

{$ifdef TYPES}
type
  ICScannerDevicePtr = ^ICScannerDevice;
  ICScannerDeviceDelegateProtocolPtr = ^ICScannerDeviceDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICButtonTypeScan: NSString { unavailable in ios }; cvar; external;
  ICButtonTypeMail: NSString { unavailable in ios }; cvar; external;
  ICButtonTypeCopy: NSString { unavailable in ios }; cvar; external;
  ICButtonTypeWeb: NSString { unavailable in ios }; cvar; external;
  ICButtonTypePrint: NSString { unavailable in ios }; cvar; external;
  ICButtonTypeTransfer: NSString { unavailable in ios }; cvar; external;
  ICScannerStatusWarmingUp: NSString { unavailable in ios }; cvar; external;
  ICScannerStatusWarmUpDone: NSString { unavailable in ios }; cvar; external;
  ICScannerStatusRequestsOverviewScan: NSString { unavailable in ios }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ICScannerTransferMode = NSUInteger;
  ICScannerTransferModePtr = ^ICScannerTransferMode;

const
  ICScannerTransferModeFileBased = 0;
  ICScannerTransferModeMemoryBased = 1;
{$endif}

{$ifdef PROTOCOLS}

type
  ICScannerDeviceDelegateProtocol = objcprotocol external name 'ICScannerDeviceDelegate' (ICDeviceDelegateProtocol)
  optional
    procedure scannerDeviceDidBecomeAvailable (scanner: ICScannerDevice); message 'scannerDeviceDidBecomeAvailable:'; { unavailable in ios }
    procedure scannerDevice_didSelectFunctionalUnit_error (scanner: ICScannerDevice; functionalUnit: ICScannerFunctionalUnit; error: NSError); message 'scannerDevice:didSelectFunctionalUnit:error:'; { unavailable in ios }
    procedure scannerDevice_didScanToURL_data_didScanToURL_didScanToBandData (scanner: ICScannerDevice; url: NSURL; data: NSData; for_: id; for_5: id); message 'scannerDevice:didScanToURL:data:didScanToURL:didScanToBandData:'; { unavailable in ios }
    procedure scannerDevice_didScanToURL (scanner: ICScannerDevice; url: NSURL); message 'scannerDevice:didScanToURL:'; { unavailable in ios }
    procedure scannerDevice_didScanToBandData (scanner: ICScannerDevice; data: ICScannerBandData); message 'scannerDevice:didScanToBandData:'; { unavailable in ios }
    procedure scannerDevice_didCompleteOverviewScanWithError (scanner: ICScannerDevice; error: NSError); message 'scannerDevice:didCompleteOverviewScanWithError:'; { unavailable in ios }
    procedure scannerDevice_didCompleteScanWithError (scanner: ICScannerDevice; error: NSError); message 'scannerDevice:didCompleteScanWithError:'; { unavailable in ios }
  end;
{$endif}

{$ifdef CLASSES}

type
  ICScannerDevice = objcclass external (ICDevice)
  private
    _scannerProperties: id;
  public
    function availableFunctionalUnitTypes: NSArray; message 'availableFunctionalUnitTypes'; { unavailable in ios }
    function selectedFunctionalUnit: ICScannerFunctionalUnit; message 'selectedFunctionalUnit'; { unavailable in ios }
    procedure setTransferMode(newValue: ICScannerTransferMode); message 'setTransferMode:'; { unavailable in ios }
    function transferMode: ICScannerTransferMode; message 'transferMode'; { unavailable in ios }
    procedure setMaxMemoryBandSize(newValue: UInt32); message 'setMaxMemoryBandSize:'; { unavailable in ios }
    function maxMemoryBandSize: UInt32; message 'maxMemoryBandSize'; { unavailable in ios }
    procedure setDownloadsDirectory(newValue: NSURL); message 'setDownloadsDirectory:'; { unavailable in ios }
    function downloadsDirectory: NSURL; message 'downloadsDirectory'; { unavailable in ios }
    procedure setDocumentName(newValue: NSString); message 'setDocumentName:'; { unavailable in ios }
    function documentName: NSString; message 'documentName'; { unavailable in ios }
    procedure setDocumentUTI(newValue: NSString); message 'setDocumentUTI:'; { unavailable in ios }
    function documentUTI: NSString; message 'documentUTI'; { unavailable in ios }
    procedure setDefaultUsername(newValue: NSString); message 'setDefaultUsername:'; { unavailable in ios }
    function defaultUsername: NSString; message 'defaultUsername'; { unavailable in ios }
    procedure requestOpenSessionWithCredentials_password (username: NSString; password: NSString); message 'requestOpenSessionWithCredentials:password:'; { unavailable in ios }
    procedure requestSelectFunctionalUnit (type_: ICScannerFunctionalUnitType); message 'requestSelectFunctionalUnit:'; { unavailable in ios }
    procedure requestOverviewScan; message 'requestOverviewScan'; { unavailable in ios }
    procedure requestScan; message 'requestScan'; { unavailable in ios }
    procedure cancelScan; message 'cancelScan'; { unavailable in ios }
  end;
{$endif}

