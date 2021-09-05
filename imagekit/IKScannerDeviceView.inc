{ Parsed from ImageKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Headers/IKScannerDeviceView.h }

{$ifdef TYPES}
type
  IKScannerDeviceViewPtr = ^IKScannerDeviceView;
  IKScannerDeviceViewDelegateProtocolPtr = ^IKScannerDeviceViewDelegateProtocol;
{$endif}

{$ifndef IKScannerView_h}
{$ifdef PROTOCOLS}

type
  IKScannerDeviceViewDelegateProtocol = objcprotocol external name 'IKScannerDeviceViewDelegate'
  optional
    procedure scannerDeviceView_didScanToURL_fileData_error (scannerDeviceView: IKScannerDeviceView; url: NSURL; data: NSData; error: NSError); message 'scannerDeviceView:didScanToURL:fileData:error:';
    procedure scannerDeviceView_didScanToURL_error (scannerDeviceView: IKScannerDeviceView; url: NSURL; error: NSError); message 'scannerDeviceView:didScanToURL:error:';
    procedure scannerDeviceView_didScanToBandData_scanInfo_error (scannerDeviceView: IKScannerDeviceView; data: ICScannerBandDataPtr; scanInfo: NSDictionary; error: NSError); message 'scannerDeviceView:didScanToBandData:scanInfo:error:';
    procedure scannerDeviceView_didEncounterError (scannerDeviceView: IKScannerDeviceView; error: NSError); message 'scannerDeviceView:didEncounterError:';
  end;
{$endif}

{$ifdef TYPES}
type
  IKScannerDeviceViewTransferMode = NSInteger;
  IKScannerDeviceViewTransferModePtr = ^IKScannerDeviceViewTransferMode;

const
  IKScannerDeviceViewTransferModeFileBased = 0;
  IKScannerDeviceViewTransferModeMemoryBased = 1;

type
  IKScannerDeviceViewDisplayMode = NSInteger;
  IKScannerDeviceViewDisplayModePtr = ^IKScannerDeviceViewDisplayMode;

const
  IKScannerDeviceViewDisplayModeNone = -1;
  IKScannerDeviceViewDisplayModeSimple = 0;
  IKScannerDeviceViewDisplayModeAdvanced = 1;
{$endif}

{$ifdef CLASSES}

type
  IKScannerDeviceView = objcclass external (NSView)
  private
    _privateData: id;
  public
    procedure setDelegate(newValue: IKScannerDeviceViewDelegateProtocol); message 'setDelegate:';
    function delegate: IKScannerDeviceViewDelegateProtocol; message 'delegate';
    procedure setScannerDevice(newValue: ICScannerDevicePtr); message 'setScannerDevice:';
    function scannerDevice: ICScannerDevicePtr; message 'scannerDevice';
    procedure setMode(newValue: IKScannerDeviceViewDisplayMode); message 'setMode:';
    function mode: IKScannerDeviceViewDisplayMode; message 'mode';
    procedure setHasDisplayModeSimple(newValue: objcbool); message 'setHasDisplayModeSimple:';
    function hasDisplayModeSimple: objcbool; message 'hasDisplayModeSimple';
    procedure setHasDisplayModeAdvanced(newValue: objcbool); message 'setHasDisplayModeAdvanced:';
    function hasDisplayModeAdvanced: objcbool; message 'hasDisplayModeAdvanced';
    procedure setTransferMode(newValue: IKScannerDeviceViewTransferMode); message 'setTransferMode:';
    function transferMode: IKScannerDeviceViewTransferMode; message 'transferMode';
    procedure setScanControlLabel(newValue: NSString); message 'setScanControlLabel:';
    function scanControlLabel: NSString; message 'scanControlLabel';
    procedure setOverviewControlLabel(newValue: NSString); message 'setOverviewControlLabel:';
    function overviewControlLabel: NSString; message 'overviewControlLabel';
    procedure setDisplaysDownloadsDirectoryControl(newValue: objcbool); message 'setDisplaysDownloadsDirectoryControl:';
    function displaysDownloadsDirectoryControl: objcbool; message 'displaysDownloadsDirectoryControl';
    procedure setDownloadsDirectory(newValue: NSURL); message 'setDownloadsDirectory:';
    function downloadsDirectory: NSURL; message 'downloadsDirectory';
    procedure setDocumentName(newValue: NSString); message 'setDocumentName:';
    function documentName: NSString; message 'documentName';
    procedure setDisplaysPostProcessApplicationControl(newValue: objcbool); message 'setDisplaysPostProcessApplicationControl:';
    function displaysPostProcessApplicationControl: objcbool; message 'displaysPostProcessApplicationControl';
    procedure setPostProcessApplication(newValue: NSURL); message 'setPostProcessApplication:';
    function postProcessApplication: NSURL; message 'postProcessApplication';
  end;
{$endif}

{$endif}
