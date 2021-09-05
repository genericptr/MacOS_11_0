{ Parsed from ImageKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Headers/IKDeviceBrowserView.h }

{$ifdef TYPES}
type
  IKDeviceBrowserViewPtr = ^IKDeviceBrowserView;
  IKDeviceBrowserViewDelegateProtocolPtr = ^IKDeviceBrowserViewDelegateProtocol;
{$endif}

{$ifndef IKDeviceBrowserView_h}
{$ifdef PROTOCOLS}

type
  IKDeviceBrowserViewDelegateProtocol = objcprotocol external name 'IKDeviceBrowserViewDelegate'
  required
    procedure deviceBrowserView_selectionDidChange (deviceBrowserView: IKDeviceBrowserView; device: ICDevice); message 'deviceBrowserView:selectionDidChange:';
  optional
    procedure deviceBrowserView_didEncounterError (deviceBrowserView: IKDeviceBrowserView; error: NSError); message 'deviceBrowserView:didEncounterError:';
  end;
{$endif}

{$ifdef TYPES}
type
  IKDeviceBrowserViewDisplayMode = NSInteger;
  IKDeviceBrowserViewDisplayModePtr = ^IKDeviceBrowserViewDisplayMode;

const
  IKDeviceBrowserViewDisplayModeTable = 0;
  IKDeviceBrowserViewDisplayModeOutline = 1;
  IKDeviceBrowserViewDisplayModeIcon = 2;
{$endif}

{$ifdef CLASSES}

type
  IKDeviceBrowserView = objcclass external (NSView)
  private
    _privateData: id;
  public
    procedure setDelegate(newValue: IKDeviceBrowserViewDelegateProtocol); message 'setDelegate:';
    function delegate: IKDeviceBrowserViewDelegateProtocol; message 'delegate';
    procedure setDisplaysLocalCameras(newValue: objcbool); message 'setDisplaysLocalCameras:';
    function displaysLocalCameras: objcbool; message 'displaysLocalCameras';
    procedure setDisplaysNetworkCameras(newValue: objcbool); message 'setDisplaysNetworkCameras:';
    function displaysNetworkCameras: objcbool; message 'displaysNetworkCameras';
    procedure setDisplaysLocalScanners(newValue: objcbool); message 'setDisplaysLocalScanners:';
    function displaysLocalScanners: objcbool; message 'displaysLocalScanners';
    procedure setDisplaysNetworkScanners(newValue: objcbool); message 'setDisplaysNetworkScanners:';
    function displaysNetworkScanners: objcbool; message 'displaysNetworkScanners';
    procedure setMode(newValue: IKDeviceBrowserViewDisplayMode); message 'setMode:';
    function mode: IKDeviceBrowserViewDisplayMode; message 'mode';
    function selectedDevice: ICDevice; message 'selectedDevice';
  end;
{$endif}

{$endif}
