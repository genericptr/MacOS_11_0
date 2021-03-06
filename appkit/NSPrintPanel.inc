{ Parsed from AppKit.framework NSPrintPanel.h }

{$ifdef TYPES}
type
  NSPrintPanelPtr = ^NSPrintPanel;
  NSPrintPanelAccessorizingProtocolPtr = ^NSPrintPanelAccessorizingProtocol;
{$endif}

{$ifdef TYPES}
type
  NSPrintPanelOptions = NSUInteger;
  NSPrintPanelOptionsPtr = ^NSPrintPanelOptions;

const
  NSPrintPanelShowsCopies = 1 shl 0;
  NSPrintPanelShowsPageRange = 1 shl 1;
  NSPrintPanelShowsPaperSize = 1 shl 2;
  NSPrintPanelShowsOrientation = 1 shl 3;
  NSPrintPanelShowsScaling = 1 shl 4;
  NSPrintPanelShowsPrintSelection = 1 shl 5 { available in macos 10.6 };
  NSPrintPanelShowsPageSetupAccessory = 1 shl 8;
  NSPrintPanelShowsPreview = 1 shl 17;

type
  NSPrintPanelJobStyleHint = NSString;
  NSPrintPanelJobStyleHintPtr = ^NSPrintPanelJobStyleHint;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPrintPhotoJobStyleHint: NSPrintPanelJobStyleHint; cvar; external;
  NSPrintAllPresetsJobStyleHint: NSPrintPanelJobStyleHint { available in macos 10.6 }; cvar; external;
  NSPrintNoPresetsJobStyleHint: NSPrintPanelJobStyleHint { available in macos 10.6 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSPrintPanelAccessorySummaryKey = NSString;
  NSPrintPanelAccessorySummaryKeyPtr = ^NSPrintPanelAccessorySummaryKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPrintPanelAccessorySummaryItemNameKey: NSPrintPanelAccessorySummaryKey { available in macos 10.5 }; cvar; external;
  NSPrintPanelAccessorySummaryItemDescriptionKey: NSPrintPanelAccessorySummaryKey { available in macos 10.5 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  NSPrintPanelAccessorizingProtocol = objcprotocol external name 'NSPrintPanelAccessorizing'
    function localizedSummaryItems: NSArray; message 'localizedSummaryItems';
  optional
    function keyPathsForValuesAffectingPreview: NSSet; message 'keyPathsForValuesAffectingPreview';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSPrintPanel = objcclass external (NSObject)
  public
    class function printPanel: NSPrintPanel; message 'printPanel';
    procedure addAccessoryController (accessoryController: NSViewController); message 'addAccessoryController:'; { available in macos 10.5 }
    procedure removeAccessoryController (accessoryController: NSViewController); message 'removeAccessoryController:'; { available in macos 10.5 }
    function accessoryControllers: NSArray; message 'accessoryControllers'; { available in macos 10.5 }
    procedure setOptions(newValue: NSPrintPanelOptions); message 'setOptions:'; { available in macos 10.5 }
    function options: NSPrintPanelOptions; message 'options'; { available in macos 10.5 }
    procedure setDefaultButtonTitle (defaultButtonTitle: NSString); message 'setDefaultButtonTitle:'; { available in macos 10.5 }
    function defaultButtonTitle: NSString; message 'defaultButtonTitle'; { available in macos 10.5 }
    procedure setHelpAnchor(newValue: NSHelpAnchorName); message 'setHelpAnchor:'; { available in macos 10.5 }
    function helpAnchor: NSHelpAnchorName; message 'helpAnchor'; { available in macos 10.5 }
    procedure setJobStyleHint(newValue: NSPrintPanelJobStyleHint); message 'setJobStyleHint:';
    function jobStyleHint: NSPrintPanelJobStyleHint; message 'jobStyleHint';
    procedure beginSheetWithPrintInfo_modalForWindow_delegate_didEndSelector_contextInfo (printInfo: NSPrintInfo; docWindow: NSWindow; delegate: id; didEndSelector: SEL; contextInfo: pointer); message 'beginSheetWithPrintInfo:modalForWindow:delegate:didEndSelector:contextInfo:';
    function runModalWithPrintInfo (printInfo: NSPrintInfo): NSInteger; message 'runModalWithPrintInfo:'; { available in macos 10.5 }
    function runModal: NSInteger; message 'runModal';
    function printInfo: NSPrintInfo; message 'printInfo'; { available in macos 10.5 }
  end;


type
  NSPrintPanel_NSDeprecated = objccategory external name 'NSDeprecated' (NSPrintPanel)
    procedure setAccessoryView (accessoryView: NSView); message 'setAccessoryView:'; deprecated 'Use -addAccessoryController instead';
    function accessoryView: NSView; message 'accessoryView'; deprecated 'Use -accessoryControllers instead. For compatibility this returns the view of the first accessory controller, or nil';
    procedure updateFromPrintInfo; message 'updateFromPrintInfo'; deprecated;
    procedure finalWritePrintInfo; message 'finalWritePrintInfo'; deprecated;
  end;
{$endif}

