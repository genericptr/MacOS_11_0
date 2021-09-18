{ Parsed from AppKit.framework NSWindowController.h }

{$ifdef TYPES}
type
  NSWindowControllerPtr = ^NSWindowController;
{$endif}

{$ifdef CLASSES}

type
  NSWindowController = objcclass external (NSResponder, NSSeguePerformingProtocol)
  public
    function initWithWindow (window: NSWindow): id; message 'initWithWindow:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithWindowNibName (windowNibName: NSNibName): id; message 'initWithWindowNibName:';
    function initWithWindowNibName_owner (windowNibName: NSNibName; owner: id): id; message 'initWithWindowNibName:owner:';
    function initWithWindowNibPath_owner (windowNibPath: NSString; owner: id): id; message 'initWithWindowNibPath:owner:';
    function windowNibName: NSNibName; message 'windowNibName';
    function windowNibPath: NSString; message 'windowNibPath';
    function owner: id; message 'owner';
    procedure setWindowFrameAutosaveName(newValue: NSWindowFrameAutosaveName); message 'setWindowFrameAutosaveName:';
    function windowFrameAutosaveName: NSWindowFrameAutosaveName; message 'windowFrameAutosaveName';
    procedure setShouldCascadeWindows(newValue: objcbool); message 'setShouldCascadeWindows:';
    function shouldCascadeWindows: objcbool; message 'shouldCascadeWindows';
    procedure setDocument(newValue: id); message 'setDocument:';
    function document: id; message 'document';
    procedure setDocumentEdited (dirtyFlag: objcbool); message 'setDocumentEdited:';
    procedure setShouldCloseDocument(newValue: objcbool); message 'setShouldCloseDocument:';
    function shouldCloseDocument: objcbool; message 'shouldCloseDocument';
    procedure synchronizeWindowTitleWithDocumentName; message 'synchronizeWindowTitleWithDocumentName';
    function windowTitleForDocumentDisplayName (displayName: NSString): NSString; message 'windowTitleForDocumentDisplayName:';
    procedure setContentViewController(newValue: NSViewController); message 'setContentViewController:'; { available in macos  }
    function contentViewController: NSViewController; message 'contentViewController'; { available in macos  }
    procedure setWindow(newValue: NSWindow); message 'setWindow:';
    function window: NSWindow; message 'window';
    function isWindowLoaded: objcbool; message 'isWindowLoaded';
    procedure windowWillLoad; message 'windowWillLoad';
    procedure windowDidLoad; message 'windowDidLoad';
    procedure loadWindow; message 'loadWindow';
    procedure close; message 'close';
    procedure showWindow (sender: id); message 'showWindow:';

    { Adopted protocols }
    procedure performSegueWithIdentifier_sender (identifier: NSStoryboardSegueIdentifier; sender: id); message 'performSegueWithIdentifier:sender:'; { available in macos  }
    procedure prepareForSegue_sender (segue: NSStoryboardSegue; sender: id); message 'prepareForSegue:sender:'; { available in macos  }
    function shouldPerformSegueWithIdentifier_sender (identifier: NSStoryboardSegueIdentifier; sender: id): objcbool; message 'shouldPerformSegueWithIdentifier:sender:'; { available in macos  }
  end;


type
  NSWindowControllerStoryboardingMethods = objccategory external (NSWindowController)
    function storyboard: NSStoryboard; message 'storyboard'; { available in macos  }
  end;

type
  NSWindowControllerDismissing = objccategory external (NSWindowController)
    procedure dismissController (sender: id); message 'dismissController:'; { available in macos  }
  end;
{$endif}

