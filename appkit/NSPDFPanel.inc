{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSPDFPanel.h }

{$ifdef CALLBACKS}
type
  NSPDFPanelBeginSheetWithPDFInfoCallback = reference to procedure (param1: NSInteger); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSPDFPanelPtr = ^NSPDFPanel;
{$endif}

{$ifdef TYPES}
type
  NSPDFPanelOptions = NSInteger;
  NSPDFPanelOptionsPtr = ^NSPDFPanelOptions;

const
  NSPDFPanelShowsPaperSize = 1 shl 2;
  NSPDFPanelShowsOrientation = 1 shl 3;
  NSPDFPanelRequestsParentDirectory = 1 shl 24;
{$endif}

{$ifdef CLASSES}

type
  NSPDFPanel = objcclass external (NSObject)
  public
    class function panel: NSPDFPanel; message 'panel';
    procedure setAccessoryController(newValue: NSViewController); message 'setAccessoryController:';
    function accessoryController: NSViewController; message 'accessoryController';
    procedure setOptions(newValue: NSPDFPanelOptions); message 'setOptions:';
    function options: NSPDFPanelOptions; message 'options';
    procedure setDefaultFileName(newValue: NSString); message 'setDefaultFileName:';
    function defaultFileName: NSString; message 'defaultFileName';
    procedure beginSheetWithPDFInfo_modalForWindow_completionHandler (pdfInfo: NSPDFInfo; docWindow: NSWindow; completionHandler: NSPDFPanelBeginSheetWithPDFInfoCallback); message 'beginSheetWithPDFInfo:modalForWindow:completionHandler:';
  end;
{$endif}

