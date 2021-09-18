{ Parsed from AppKit.framework NSWindowRestoration.h }

{$ifdef CALLBACKS}
type
  NSWindowRestorationRestoreWindowWithIdentifierCallback = reference to procedure (param1: NSWindow; param2: NSError); cblock; cdecl;
  NSWindowRestorationRestoreDocumentWindowWithIdentifierCallback = reference to procedure (param1: NSWindow; param2: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSWindowRestorationProtocolPtr = ^NSWindowRestorationProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSWindowRestorationProtocol = objcprotocol external name 'NSWindowRestoration' (NSObjectProtocol)
    class procedure restoreWindowWithIdentifier_state_completionHandler (identifier: NSUserInterfaceItemIdentifier; state: NSCoder; completionHandler: NSWindowRestorationRestoreWindowWithIdentifierCallback); message 'restoreWindowWithIdentifier:state:completionHandler:'; { available in macos  }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSDocumentController_NSWindowRestoration = objccategory external name 'NSWindowRestoration' (NSDocumentController)
  end;

type
  NSWindowRestoration = objccategory external (NSApplication)
    function restoreWindowWithIdentifier_state_completionHandler (identifier: NSUserInterfaceItemIdentifier; state: NSCoder; completionHandler: NSWindowRestorationRestoreWindowWithIdentifierCallback): objcbool; message 'restoreWindowWithIdentifier:state:completionHandler:'; { available in macos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSApplicationDidFinishRestoringWindowsNotification: NSNotificationName { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSUserInterfaceRestoration = objccategory external (NSWindow)
    procedure setRestorable(newValue: objcbool); message 'setRestorable:'; { available in macos  }
    function isRestorable: objcbool; message 'isRestorable'; { available in macos  }
    procedure setRestorationClass(newValue: pobjc_class); message 'setRestorationClass:'; { available in macos  }
    function restorationClass: pobjc_class; message 'restorationClass'; { available in macos  }
    procedure disableSnapshotRestoration; message 'disableSnapshotRestoration';
    procedure enableSnapshotRestoration; message 'enableSnapshotRestoration';
  end;

type
  NSResponder_NSRestorableState = objccategory external name 'NSRestorableState' (NSResponder)
    procedure encodeRestorableStateWithCoder (coder: NSCoder); message 'encodeRestorableStateWithCoder:'; { available in macos  }
    procedure encodeRestorableStateWithCoder_backgroundQueue (coder: NSCoder; queue: NSOperationQueue); message 'encodeRestorableStateWithCoder:backgroundQueue:'; { available in macos  }
    procedure restoreStateWithCoder (coder: NSCoder); message 'restoreStateWithCoder:'; { available in macos  }
    procedure invalidateRestorableState; message 'invalidateRestorableState'; { available in macos  }
    class function restorableStateKeyPaths: NSArray; message 'restorableStateKeyPaths'; { available in macos  }
  end;

type
  NSRestorableStateExtension = objccategory external (NSApplication)
    procedure extendStateRestoration; message 'extendStateRestoration'; { available in macos  }
    procedure completeStateRestoration; message 'completeStateRestoration'; { available in macos  }
  end;

type
  NSRestorableState = objccategory external (NSDocument)
    procedure restoreDocumentWindowWithIdentifier_state_completionHandler (identifier: NSUserInterfaceItemIdentifier; state: NSCoder; completionHandler: NSWindowRestorationRestoreDocumentWindowWithIdentifierCallback); message 'restoreDocumentWindowWithIdentifier:state:completionHandler:'; { available in macos  }
    procedure encodeRestorableStateWithCoder (coder: NSCoder); message 'encodeRestorableStateWithCoder:'; { available in macos  }
    procedure encodeRestorableStateWithCoder_backgroundQueue (coder: NSCoder; queue: NSOperationQueue); message 'encodeRestorableStateWithCoder:backgroundQueue:'; { available in macos  }
    procedure restoreStateWithCoder (coder: NSCoder); message 'restoreStateWithCoder:'; { available in macos  }
    procedure invalidateRestorableState; message 'invalidateRestorableState'; { available in macos  }
    class function restorableStateKeyPaths: NSArray; message 'restorableStateKeyPaths'; { available in macos  }
  end;
{$endif}

