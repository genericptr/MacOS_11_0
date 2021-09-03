{ Parsed from QuickLookUI.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Headers/QLPreviewPanel.h }

{$ifdef TYPES}
type
  QLPreviewPanelPtr = ^QLPreviewPanel;
  QLPreviewPanelDataSourceProtocolPtr = ^QLPreviewPanelDataSourceProtocol;
  QLPreviewPanelDelegateProtocolPtr = ^QLPreviewPanelDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  QLPreviewPanel = objcclass external (NSPanel)
  private
    _reserved: QLPreviewPanelReserved;
  public
    class function sharedPreviewPanel: QLPreviewPanel; message 'sharedPreviewPanel';
    class function sharedPreviewPanelExists: objcbool; message 'sharedPreviewPanelExists';
    function currentController: id; message 'currentController';
    procedure updateController; message 'updateController';
    procedure setDataSource(newValue: id); message 'setDataSource:';
    function dataSource: id; message 'dataSource';
    procedure reloadData; message 'reloadData';
    procedure refreshCurrentPreviewItem; message 'refreshCurrentPreviewItem';
    procedure setCurrentPreviewItemIndex(newValue: NSInteger); message 'setCurrentPreviewItemIndex:';
    function currentPreviewItemIndex: NSInteger; message 'currentPreviewItemIndex';
    function currentPreviewItem: id; message 'currentPreviewItem';
    procedure setDisplayState(newValue: id); message 'setDisplayState:';
    function displayState: id; message 'displayState';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function enterFullScreenMode_withOptions (screen: NSScreenPtr; options: NSDictionary): objcbool; message 'enterFullScreenMode:withOptions:';
    procedure exitFullScreenModeWithOptions (options: NSDictionary); message 'exitFullScreenModeWithOptions:';
    function isInFullScreenMode: objcbool; message 'isInFullScreenMode';
  end;


type
  QLPreviewPanelController = objccategory external (NSObject)
    function acceptsPreviewPanelControl (panel: QLPreviewPanel): objcbool; message 'acceptsPreviewPanelControl:';
    procedure beginPreviewPanelControl (panel: QLPreviewPanel); message 'beginPreviewPanelControl:';
    procedure endPreviewPanelControl (panel: QLPreviewPanel); message 'endPreviewPanelControl:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  QLPreviewPanelDataSourceProtocol = objcprotocol external name 'QLPreviewPanelDataSource'
  required
    function numberOfPreviewItemsInPreviewPanel (panel: QLPreviewPanel): NSInteger; message 'numberOfPreviewItemsInPreviewPanel:';
    function previewPanel_previewItemAtIndex (panel: QLPreviewPanel; index: NSInteger): id; message 'previewPanel:previewItemAtIndex:';
  end;

type
  QLPreviewPanelDelegateProtocol = objcprotocol external name 'QLPreviewPanelDelegate' (NSWindowDelegateProtocol)
  optional
    function previewPanel_handleEvent (panel: QLPreviewPanel; event: NSEventPtr): objcbool; message 'previewPanel:handleEvent:';
    function previewPanel_sourceFrameOnScreenForPreviewItem (panel: QLPreviewPanel; item: id): NSRect; message 'previewPanel:sourceFrameOnScreenForPreviewItem:';
    function previewPanel_transitionImageForPreviewItem_contentRect (panel: QLPreviewPanel; item: id; contentRect: NSRectPtr): id; message 'previewPanel:transitionImageForPreviewItem:contentRect:';
  end;
{$endif}

