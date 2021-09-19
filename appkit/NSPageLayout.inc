{ Parsed from AppKit.framework NSPageLayout.h }

{$ifdef TYPES}
type
  NSPageLayoutPtr = ^NSPageLayout;
{$endif}

{$ifdef CLASSES}

type
  NSPageLayout = objcclass external (NSObject)
  public
    class function pageLayout: NSPageLayout; message 'pageLayout';
    procedure addAccessoryController (accessoryController: NSViewController); message 'addAccessoryController:'; { available in macos 10.5 }
    procedure removeAccessoryController (accessoryController: NSViewController); message 'removeAccessoryController:'; { available in macos 10.5 }
    function accessoryControllers: NSArray; message 'accessoryControllers'; { available in macos 10.5 }
    procedure beginSheetWithPrintInfo_modalForWindow_delegate_didEndSelector_contextInfo (printInfo: NSPrintInfo; docWindow: NSWindow; delegate: id; didEndSelector: SEL; contextInfo: pointer); message 'beginSheetWithPrintInfo:modalForWindow:delegate:didEndSelector:contextInfo:';
    function runModalWithPrintInfo (printInfo: NSPrintInfo): NSInteger; message 'runModalWithPrintInfo:';
    function runModal: NSInteger; message 'runModal';
    function printInfo: NSPrintInfo; message 'printInfo';
  end;


type
  NSPageLayout_NSDeprecated = objccategory external name 'NSDeprecated' (NSPageLayout)
    procedure setAccessoryView (accessoryView: NSView); message 'setAccessoryView:'; deprecated;
    function accessoryView: NSView; message 'accessoryView'; deprecated;
    procedure readPrintInfo; message 'readPrintInfo'; deprecated;
    procedure writePrintInfo; message 'writePrintInfo'; deprecated;
  end;

type
  NSPageLayoutPanel = objccategory external (NSApplication)
    procedure runPageLayout (sender: id); message 'runPageLayout:';
  end;
{$endif}

