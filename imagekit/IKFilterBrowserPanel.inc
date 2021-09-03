{ Parsed from ImageKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Headers/IKFilterBrowserPanel.h }

{$ifdef TYPES}
type
  IKFilterBrowserPanelPtr = ^IKFilterBrowserPanel;
{$endif}

{$ifdef CLASSES}

type
  IKFilterBrowserPanel = objcclass external (NSPanel)
  private
    _filterBrowserView: id;
  public
    class function filterBrowserPanelWithStyleMask (styleMask: cuint): id; message 'filterBrowserPanelWithStyleMask:';
    function filterName: NSString; message 'filterName';
  end;


type
  IKFilterBrowserPanelRuntime = objccategory external (IKFilterBrowserPanel)
    procedure beginWithOptions_modelessDelegate_didEndSelector_contextInfo (inOptions: NSDictionary; modelessDelegate: id; didEndSelector: SEL; contextInfo: pointer); message 'beginWithOptions:modelessDelegate:didEndSelector:contextInfo:';
    procedure beginSheetWithOptions_modalForWindow_modalDelegate_didEndSelector_contextInfo (inOptions: NSDictionary; docWindow: NSWindowPtr; modalDelegate: id; didEndSelector: SEL; contextInfo: pointer); message 'beginSheetWithOptions:modalForWindow:modalDelegate:didEndSelector:contextInfo:';
    function runModalWithOptions (inOptions: NSDictionary): cint; message 'runModalWithOptions:';
    function filterBrowserViewWithOptions (inOptions: NSDictionary): IKFilterBrowserView; message 'filterBrowserViewWithOptions:';
    procedure finish (sender: id); message 'finish:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  IKFilterBrowserFilterSelectedNotification: NSString; cvar; external;
  IKFilterBrowserFilterDoubleClickNotification: NSString; cvar; external;
  IKFilterBrowserWillPreviewFilterNotification: NSString; cvar; external;
  IKFilterBrowserShowCategories: NSString; cvar; external;
  IKFilterBrowserShowPreview: NSString; cvar; external;
  IKFilterBrowserExcludeCategories: NSString; cvar; external;
  IKFilterBrowserExcludeFilters: NSString; cvar; external;
  IKFilterBrowserDefaultInputImage: NSString; cvar; external;
{$endif}

