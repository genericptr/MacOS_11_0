{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSStoryboardSegue.h }

{$ifdef CALLBACKS}
type
  NSStoryboardSegueSegueWithIdentifierCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSStoryboardSeguePtr = ^NSStoryboardSegue;
  NSSeguePerformingProtocolPtr = ^NSSeguePerformingProtocol;
{$endif}

{$ifdef TYPES}
type
  NSStoryboardSegueIdentifier = NSString;
  NSStoryboardSegueIdentifierPtr = ^NSStoryboardSegueIdentifier;
{$endif}

{$ifdef CLASSES}

type
  NSStoryboardSegue = objcclass external (NSObject)
  public
    class function segueWithIdentifier_source_destination_performHandler (identifier: NSStoryboardSegueIdentifier; sourceController: id; destinationController: id; performHandler: NSStoryboardSegueSegueWithIdentifierCallback): id; message 'segueWithIdentifier:source:destination:performHandler:';
    function initWithIdentifier_source_destination (identifier: NSStoryboardSegueIdentifier; sourceController: id; destinationController: id): id; message 'initWithIdentifier:source:destination:'; { NS_DESIGNATED_INITIALIZER }
    function identifier: NSStoryboardSegueIdentifier; message 'identifier';
    function sourceController: id; message 'sourceController';
    function destinationController: id; message 'destinationController';
    procedure perform; message 'perform';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSSeguePerformingProtocol = objcprotocol external name 'NSSeguePerforming' (NSObjectProtocol)
  optional
    procedure prepareForSegue_sender (segue: NSStoryboardSegue; sender: id); message 'prepareForSegue:sender:'; { available in macos  }
    procedure performSegueWithIdentifier_sender (identifier: NSStoryboardSegueIdentifier; sender: id); message 'performSegueWithIdentifier:sender:'; { available in macos  }
    function shouldPerformSegueWithIdentifier_sender (identifier: NSStoryboardSegueIdentifier; sender: id): objcbool; message 'shouldPerformSegueWithIdentifier:sender:'; { available in macos  }
  end;
{$endif}

