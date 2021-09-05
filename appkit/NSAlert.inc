{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSAlert.h }

{$ifdef CALLBACKS}
type
  NSAlertBeginSheetModalForWindowCallback = reference to procedure (returnCode: NSModalResponse); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSAlertPtr = ^NSAlert;
  NSAlertDelegateProtocolPtr = ^NSAlertDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSAlertStyle = NSUInteger;
  NSAlertStylePtr = ^NSAlertStyle;

const
  NSAlertStyleWarning = 0;
  NSAlertStyleInformational = 1;
  NSAlertStyleCritical = 2;

const
  NSAlertFirstButtonReturn = 1000;
  NSAlertSecondButtonReturn = 1001;
  NSAlertThirdButtonReturn = 1002;
{$endif}

{$ifdef CLASSES}

type
  NSAlert = objcclass external (NSObject)
  public
    class function alertWithError (error: NSError): NSAlert; message 'alertWithError:';
    procedure setMessageText(newValue: NSString); message 'setMessageText:';
    function messageText: NSString; message 'messageText';
    procedure setInformativeText(newValue: NSString); message 'setInformativeText:';
    function informativeText: NSString; message 'informativeText';
    procedure setIcon(newValue: NSImage); message 'setIcon:';
    function icon: NSImage; message 'icon';
    function addButtonWithTitle (title: NSString): NSButton; message 'addButtonWithTitle:';
    function buttons: NSArray; message 'buttons';
    procedure setShowsHelp(newValue: objcbool); message 'setShowsHelp:';
    function showsHelp: objcbool; message 'showsHelp';
    procedure setHelpAnchor(newValue: NSHelpAnchorName); message 'setHelpAnchor:';
    function helpAnchor: NSHelpAnchorName; message 'helpAnchor';
    procedure setAlertStyle(newValue: NSAlertStyle); message 'setAlertStyle:';
    function alertStyle: NSAlertStyle; message 'alertStyle';
    procedure setDelegate(newValue: NSAlertDelegateProtocol); message 'setDelegate:';
    function delegate: NSAlertDelegateProtocol; message 'delegate';
    procedure setShowsSuppressionButton(newValue: objcbool); message 'setShowsSuppressionButton:'; { available in macos  }
    function showsSuppressionButton: objcbool; message 'showsSuppressionButton'; { available in macos  }
    function suppressionButton: NSButton; message 'suppressionButton'; { available in macos  }
    procedure setAccessoryView(newValue: NSView); message 'setAccessoryView:'; { available in macos  }
    function accessoryView: NSView; message 'accessoryView'; { available in macos  }
    procedure layout; message 'layout'; { available in macos  }
    function runModal: NSModalResponse; message 'runModal';
    procedure beginSheetModalForWindow_completionHandler (sheetWindow: NSWindow; handler: NSAlertBeginSheetModalForWindowCallback); message 'beginSheetModalForWindow:completionHandler:'; { available in macos  }
    function window: NSWindow; message 'window';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSAlertDelegateProtocol = objcprotocol external name 'NSAlertDelegate' (NSObjectProtocol)
  optional
    function alertShowHelp (alert: NSAlert): objcbool; message 'alertShowHelp:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSAlertDeprecated = objccategory external (NSAlert)
    class function alertWithMessageText_defaultButton_alternateButton_otherButton_informativeTextWithFormat (message_: NSString; defaultButton: NSString; alternateButton: NSString; otherButton: NSString; format: NSString): NSAlert; varargs; message 'alertWithMessageText:defaultButton:alternateButton:otherButton:informativeTextWithFormat:'; deprecated 'Use -init instead';
    procedure beginSheetModalForWindow_modalDelegate_didEndSelector_contextInfo (window_: NSWindow; delegate_: id; didEndSelector: SEL; contextInfo: pointer); message 'beginSheetModalForWindow:modalDelegate:didEndSelector:contextInfo:'; deprecated 'Use -beginSheetModalForWindow:completionHandler: instead';
  end;
{$endif}

{$ifdef TYPES}
const
  NSWarningAlertStyle = NSAlertStyleWarning deprecated 'replace with NSAlertStyleWarning';
  NSInformationalAlertStyle = NSAlertStyleInformational deprecated 'replace with NSAlertStyleInformational';
  NSCriticalAlertStyle = NSAlertStyleCritical deprecated 'replace with NSAlertStyleCritical';
{$endif}

