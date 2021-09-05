{ Parsed from ImageKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Headers/IKCameraDeviceView.h }

{$ifdef TYPES}
type
  IKCameraDeviceViewPtr = ^IKCameraDeviceView;
  IKCameraDeviceViewDelegateProtocolPtr = ^IKCameraDeviceViewDelegateProtocol;
{$endif}

{$ifndef IKCameraDeviceView_h}
{$ifdef PROTOCOLS}

type
  IKCameraDeviceViewDelegateProtocol = objcprotocol external name 'IKCameraDeviceViewDelegate'
  optional
    procedure cameraDeviceViewSelectionDidChange (cameraDeviceView: IKCameraDeviceView); message 'cameraDeviceViewSelectionDidChange:';
    procedure cameraDeviceView_didDownloadFile_location_fileData_error (cameraDeviceView: IKCameraDeviceView; file_: ICCameraFilePtr; url: NSURL; data: NSData; error: NSError); message 'cameraDeviceView:didDownloadFile:location:fileData:error:';
    procedure cameraDeviceView_didEncounterError (cameraDeviceView: IKCameraDeviceView; error: NSError); message 'cameraDeviceView:didEncounterError:';
  end;
{$endif}

{$ifdef TYPES}
type
  IKCameraDeviceViewDisplayMode = NSInteger;
  IKCameraDeviceViewDisplayModePtr = ^IKCameraDeviceViewDisplayMode;

const
  IKCameraDeviceViewDisplayModeNone = -1;
  IKCameraDeviceViewDisplayModeTable = 0;
  IKCameraDeviceViewDisplayModeIcon = 1;

type
  IKCameraDeviceViewTransferMode = NSInteger;
  IKCameraDeviceViewTransferModePtr = ^IKCameraDeviceViewTransferMode;

const
  IKCameraDeviceViewTransferModeFileBased = 0;
  IKCameraDeviceViewTransferModeMemoryBased = 1;
{$endif}

{$ifdef CLASSES}

type
  IKCameraDeviceView = objcclass external (NSView)
  private
    _privateData: id;
  public
    procedure setDelegate(newValue: IKCameraDeviceViewDelegateProtocol); message 'setDelegate:';
    function delegate: IKCameraDeviceViewDelegateProtocol; message 'delegate';
    procedure setCameraDevice(newValue: ICCameraDevicePtr); message 'setCameraDevice:';
    function cameraDevice: ICCameraDevicePtr; message 'cameraDevice';
    procedure setMode(newValue: IKCameraDeviceViewDisplayMode); message 'setMode:';
    function mode: IKCameraDeviceViewDisplayMode; message 'mode';
    procedure setHasDisplayModeTable(newValue: objcbool); message 'setHasDisplayModeTable:';
    function hasDisplayModeTable: objcbool; message 'hasDisplayModeTable';
    procedure setHasDisplayModeIcon(newValue: objcbool); message 'setHasDisplayModeIcon:';
    function hasDisplayModeIcon: objcbool; message 'hasDisplayModeIcon';
    procedure setDownloadAllControlLabel(newValue: NSString); message 'setDownloadAllControlLabel:';
    function downloadAllControlLabel: NSString; message 'downloadAllControlLabel';
    procedure setDownloadSelectedControlLabel(newValue: NSString); message 'setDownloadSelectedControlLabel:';
    function downloadSelectedControlLabel: NSString; message 'downloadSelectedControlLabel';
    procedure setIconSize(newValue: NSUInteger); message 'setIconSize:';
    function iconSize: NSUInteger; message 'iconSize';
    procedure setTransferMode(newValue: IKCameraDeviceViewTransferMode); message 'setTransferMode:';
    function transferMode: IKCameraDeviceViewTransferMode; message 'transferMode';
    procedure setDisplaysDownloadsDirectoryControl(newValue: objcbool); message 'setDisplaysDownloadsDirectoryControl:';
    function displaysDownloadsDirectoryControl: objcbool; message 'displaysDownloadsDirectoryControl';
    procedure setDownloadsDirectory(newValue: NSURL); message 'setDownloadsDirectory:';
    function downloadsDirectory: NSURL; message 'downloadsDirectory';
    procedure setDisplaysPostProcessApplicationControl(newValue: objcbool); message 'setDisplaysPostProcessApplicationControl:';
    function displaysPostProcessApplicationControl: objcbool; message 'displaysPostProcessApplicationControl';
    procedure setPostProcessApplication(newValue: NSURL); message 'setPostProcessApplication:';
    function postProcessApplication: NSURL; message 'postProcessApplication';
    function canRotateSelectedItemsLeft: objcbool; message 'canRotateSelectedItemsLeft';
    function canRotateSelectedItemsRight: objcbool; message 'canRotateSelectedItemsRight';
    function canDeleteSelectedItems: objcbool; message 'canDeleteSelectedItems';
    function canDownloadSelectedItems: objcbool; message 'canDownloadSelectedItems';
    function selectedIndexes: NSIndexSet; message 'selectedIndexes';
    procedure selectIndexes_byExtendingSelection (indexes: NSIndexSet; extend: objcbool); message 'selectIndexes:byExtendingSelection:';
    procedure rotateLeft (sender: id); message 'rotateLeft:';
    procedure rotateRight (sender: id); message 'rotateRight:';
    procedure deleteSelectedItems (sender: id); message 'deleteSelectedItems:';
    procedure downloadSelectedItems (sender: id); message 'downloadSelectedItems:';
    procedure downloadAllItems (sender: id); message 'downloadAllItems:';
  end;
{$endif}

{$endif}
