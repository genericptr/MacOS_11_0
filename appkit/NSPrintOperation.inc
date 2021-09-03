{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSPrintOperation.h }

{$ifdef TYPES}
type
  NSPrintOperationPtr = ^NSPrintOperation;
{$endif}

{$ifdef TYPES}
type
  NSPrintingPageOrder = NSInteger;
  NSPrintingPageOrderPtr = ^NSPrintingPageOrder;

const
  NSDescendingPageOrder = -1;
  NSSpecialPageOrder = 0;
  NSAscendingPageOrder = 1;
  NSUnknownPageOrder = 2;

type
  NSPrintRenderingQuality = NSInteger;
  NSPrintRenderingQualityPtr = ^NSPrintRenderingQuality;

const
  NSPrintRenderingQualityBest = 0;
  NSPrintRenderingQualityResponsive = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPrintOperationExistsException: NSExceptionName; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSPrintOperation = objcclass external (NSObject)
  private
  public
    class function printOperationWithView_printInfo (view: NSView; printInfo: NSPrintInfo): NSPrintOperation; message 'printOperationWithView:printInfo:';
    class function PDFOperationWithView_insideRect_toData_printInfo (view: NSView; rect: NSRect; data: NSMutableData; printInfo: NSPrintInfo): NSPrintOperation; message 'PDFOperationWithView:insideRect:toData:printInfo:';
    class function PDFOperationWithView_insideRect_toPath_printInfo (view: NSView; rect: NSRect; path: NSString; printInfo: NSPrintInfo): NSPrintOperation; message 'PDFOperationWithView:insideRect:toPath:printInfo:';
    class function EPSOperationWithView_insideRect_toData_printInfo (view: NSView; rect: NSRect; data: NSMutableData; printInfo: NSPrintInfo): NSPrintOperation; message 'EPSOperationWithView:insideRect:toData:printInfo:';
    class function EPSOperationWithView_insideRect_toPath_printInfo (view: NSView; rect: NSRect; path: NSString; printInfo: NSPrintInfo): NSPrintOperation; message 'EPSOperationWithView:insideRect:toPath:printInfo:';
    class function printOperationWithView (view: NSView): NSPrintOperation; message 'printOperationWithView:';
    class function PDFOperationWithView_insideRect_toData (view: NSView; rect: NSRect; data: NSMutableData): NSPrintOperation; message 'PDFOperationWithView:insideRect:toData:';
    class function EPSOperationWithView_insideRect_toData (view: NSView; rect: NSRect; data: NSMutableData): NSPrintOperation; message 'EPSOperationWithView:insideRect:toData:';
    class procedure setCurrentOperation(newValue: NSPrintOperation); message 'setCurrentOperation:';
    class function currentOperation: NSPrintOperation; message 'currentOperation';
    function isCopyingOperation: objcbool; message 'isCopyingOperation';
    function preferredRenderingQuality: NSPrintRenderingQuality; message 'preferredRenderingQuality'; { available in macos  }
    procedure setJobTitle(newValue: NSString); message 'setJobTitle:'; { available in macos  }
    function jobTitle: NSString; message 'jobTitle'; { available in macos  }
    procedure setShowsPrintPanel(newValue: objcbool); message 'setShowsPrintPanel:';
    function showsPrintPanel: objcbool; message 'showsPrintPanel';
    procedure setShowsProgressPanel(newValue: objcbool); message 'setShowsProgressPanel:';
    function showsProgressPanel: objcbool; message 'showsProgressPanel';
    procedure setPrintPanel(newValue: NSPrintPanel); message 'setPrintPanel:';
    function printPanel: NSPrintPanel; message 'printPanel';
    procedure setPDFPanel(newValue: NSPDFPanel); message 'setPDFPanel:'; { available in macos  }
    function PDFPanel: NSPDFPanel; message 'PDFPanel'; { available in macos  }
    procedure setCanSpawnSeparateThread(newValue: objcbool); message 'setCanSpawnSeparateThread:';
    function canSpawnSeparateThread: objcbool; message 'canSpawnSeparateThread';
    procedure setPageOrder(newValue: NSPrintingPageOrder); message 'setPageOrder:';
    function pageOrder: NSPrintingPageOrder; message 'pageOrder';
    procedure runOperationModalForWindow_delegate_didRunSelector_contextInfo (docWindow: NSWindow; delegate: id; didRunSelector: SEL; contextInfo: pointer); message 'runOperationModalForWindow:delegate:didRunSelector:contextInfo:';
    function runOperation: objcbool; message 'runOperation';
    function view: NSView; message 'view';
    procedure setPrintInfo(newValue: NSPrintInfo); message 'setPrintInfo:';
    function printInfo: NSPrintInfo; message 'printInfo';
    function context: NSGraphicsContext; message 'context';
    function pageRange: NSRange; message 'pageRange'; { available in macos  }
    function currentPage: NSInteger; message 'currentPage';
    function createContext: NSGraphicsContext; message 'createContext';
    procedure destroyContext; message 'destroyContext';
    function deliverResult: objcbool; message 'deliverResult';
    procedure cleanUpOperation; message 'cleanUpOperation';
  end;


type
  NSPrintOperation_NSDeprecated = objccategory external name 'NSDeprecated' (NSPrintOperation)
    procedure setAccessoryView (view_: NSView); message 'setAccessoryView:'; deprecated 'Use -[NSPrintPanel addAccessoryController:] and -[NSPrintPanel removeAccessoryController:] instead';
    function accessoryView: NSView; message 'accessoryView'; deprecated 'Use -[NSPrintPanel accessoryControllers] instead';
    procedure setJobStyleHint (hint: NSString); message 'setJobStyleHint:'; deprecated;
    function jobStyleHint: NSString; message 'jobStyleHint'; deprecated;
    procedure setShowPanels (flag: objcbool); message 'setShowPanels:'; deprecated 'Use -setShowsPrintPanel: and -setShowsProgressPanel: instead';
    function showPanels: objcbool; message 'showPanels'; deprecated 'Use -showsPrintPanel and -showsProgressPanel instead';
  end;
{$endif}

