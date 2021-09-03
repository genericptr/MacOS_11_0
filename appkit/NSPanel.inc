{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSPanel.h }

{$ifdef TYPES}
type
  NSPanelPtr = ^NSPanel;
{$endif}

{$ifdef CLASSES}

type
  NSPanel = objcclass external (NSWindow)
  public
    procedure setFloatingPanel(newValue: objcbool); message 'setFloatingPanel:';
    function isFloatingPanel: objcbool; message 'isFloatingPanel';
    procedure setBecomesKeyOnlyIfNeeded(newValue: objcbool); message 'setBecomesKeyOnlyIfNeeded:';
    function becomesKeyOnlyIfNeeded: objcbool; message 'becomesKeyOnlyIfNeeded';
    procedure setWorksWhenModal(newValue: objcbool); message 'setWorksWhenModal:';
    function worksWhenModal: objcbool; message 'worksWhenModal';
  end;
{$endif}

{$ifdef FUNCTIONS}
function NSRunAlertPanelRelativeToWindow(title: NSString; msgFormat: NSString; defaultButton: NSString; alternateButton: NSString; otherButton: NSString; docWindow: NSWindow): NSInteger; varargs; cdecl; external; deprecated 'Use NSAlert, and present it with -[NSAlert beginSheetModalForWindow:completionHandler:] instead';
function NSRunInformationalAlertPanelRelativeToWindow(title: NSString; msgFormat: NSString; defaultButton: NSString; alternateButton: NSString; otherButton: NSString; docWindow: NSWindow): NSInteger; varargs; cdecl; external; deprecated 'Use NSAlert with a style of NSAlertStyleInformational, and present it with -[NSAlert beginSheetModalForWindow:completionHandler:] instead';
function NSRunCriticalAlertPanelRelativeToWindow(title: NSString; msgFormat: NSString; defaultButton: NSString; alternateButton: NSString; otherButton: NSString; docWindow: NSWindow): NSInteger; varargs; cdecl; external; deprecated 'Use NSAlert with a style of NSAlertStyleCritical, and present it with -[NSAlert beginSheetModalForWindow:completionHandler:] instead';
function NSRunAlertPanel(title: NSString; msgFormat: NSString; defaultButton: NSString; alternateButton: NSString; otherButton: NSString): NSInteger; varargs; cdecl; external; deprecated 'Use NSAlert instead';
function NSRunInformationalAlertPanel(title: NSString; msgFormat: NSString; defaultButton: NSString; alternateButton: NSString; otherButton: NSString): NSInteger; varargs; cdecl; external; deprecated 'Use NSAlert with a style of NSAlertStyleInformational, and present it with -[NSAlert runModal] instead';
function NSRunCriticalAlertPanel(title: NSString; msgFormat: NSString; defaultButton: NSString; alternateButton: NSString; otherButton: NSString): NSInteger; varargs; cdecl; external; deprecated 'Use NSAlert with a style of NSAlertStyleCritical, and present it with -[NSAlert runModal] instead';
function NSBeginAlertSheet(title: NSString; defaultButton: NSString; alternateButton: NSString; otherButton: NSString; docWindow: NSWindow; modalDelegate: id; didEndSelector: SEL; didDismissSelector: SEL; contextInfo: pointer; msgFormat: NSString): pointer; varargs; cdecl; external; deprecated 'Use NSAlert, and present it with -[NSAlert beginSheetModalForWindow:completionHandler:] instead';
function NSBeginInformationalAlertSheet(title: NSString; defaultButton: NSString; alternateButton: NSString; otherButton: NSString; docWindow: NSWindow; modalDelegate: id; didEndSelector: SEL; didDismissSelector: SEL; contextInfo: pointer; msgFormat: NSString): pointer; varargs; cdecl; external; deprecated 'Use NSAlert with a style of NSAlertStyleInformational, and present it with -[NSAlert beginSheetModalForWindow:completionHandler:] instead';
function NSBeginCriticalAlertSheet(title: NSString; defaultButton: NSString; alternateButton: NSString; otherButton: NSString; docWindow: NSWindow; modalDelegate: id; didEndSelector: SEL; didDismissSelector: SEL; contextInfo: pointer; msgFormat: NSString): pointer; varargs; cdecl; external; deprecated 'Use NSAlert with a style of NSAlertStyleCritical, and present it with -[NSAlert beginSheetModalForWindow:completionHandler:] instead';
function NSGetAlertPanel(title: NSString; msgFormat: NSString; defaultButton: NSString; alternateButton: NSString; otherButton: NSString): id; varargs; cdecl; external; deprecated 'Use NSAlert';
function NSGetInformationalAlertPanel(title: NSString; msgFormat: NSString; defaultButton: NSString; alternateButton: NSString; otherButton: NSString): id; varargs; cdecl; external; deprecated 'Use NSAlert with a style of NSAlertStyleInformational instead';
function NSGetCriticalAlertPanel(title: NSString; msgFormat: NSString; defaultButton: NSString; alternateButton: NSString; otherButton: NSString): id; varargs; cdecl; external; deprecated 'Use NSAlert with a style of NSAlertStyleCritical instead';
function NSReleaseAlertPanel(panel: id): pointer; cdecl; external; deprecated 'Use NSAlert instead';
{$endif}

{$ifdef TYPES}
const
  NSAlertDefaultReturn = 1 deprecated 'Use NSAlertFirstButtonReturn with an NSAlert presentation instead';
  NSAlertAlternateReturn = 0 deprecated 'Use NSAlertFirstButtonReturn and other NSModalResponses with an NSAlert presentation instead';
  NSAlertOtherReturn = -1 deprecated 'Use NSAlertFirstButtonReturn and other NSModalResponses with an NSAlert presentation instead';
  NSAlertErrorReturn = -2 deprecated 'Use NSAlertFirstButtonReturn and other NSModalResponses with an NSAlert presentation instead';
const
  NSOKButton = NSModalResponseOK deprecated 'replace with NSModalResponseOK';
  NSCancelButton = NSModalResponseCancel deprecated 'replace with NSModalResponseCancel';
{$endif}

