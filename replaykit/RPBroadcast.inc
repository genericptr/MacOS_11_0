{ Parsed from ReplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ReplayKit.framework/Headers/RPBroadcast.h }

{$ifdef CALLBACKS}
type
  RPBroadcastShowBroadcastPickerAtPointCallback = reference to procedure (broadcastActivityController: RPBroadcastActivityController; error: NSError); cblock; cdecl;
  RPBroadcastLoadBroadcastActivityViewControllerWithHandlerCallback = reference to procedure (broadcastActivityViewController: RPBroadcastActivityViewController; error: NSError); cblock; cdecl;
  RPBroadcastLoadBroadcastActivityViewControllerWithPreferredExtensionCallback = reference to procedure (broadcastActivityViewController: RPBroadcastActivityViewController; error: NSError); cblock; cdecl;
  RPBroadcastStartBroadcastWithHandlerCallback = reference to procedure (error: NSError); cblock; cdecl;
  RPBroadcastFinishBroadcastWithHandlerCallback = reference to procedure (error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  RPBroadcastActivityControllerPtr = ^RPBroadcastActivityController;
  RPBroadcastActivityViewControllerPtr = ^RPBroadcastActivityViewController;
  RPBroadcastControllerPtr = ^RPBroadcastController;
  RPSystemBroadcastPickerViewPtr = ^RPSystemBroadcastPickerView;
  RPBroadcastActivityControllerDelegateProtocolPtr = ^RPBroadcastActivityControllerDelegateProtocol;
  RPBroadcastActivityViewControllerDelegateProtocolPtr = ^RPBroadcastActivityViewControllerDelegateProtocol;
  RPBroadcastControllerDelegateProtocolPtr = ^RPBroadcastControllerDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_OSX)}
{$ifdef CLASSES}

type
  RPBroadcastActivityController = objcclass external (NSObject)
  public
    class procedure showBroadcastPickerAtPoint_fromWindow_preferredExtensionIdentifier_completionHandler (point: CGPoint; window: NSWindowPtr; preferredExtension: NSString; handler: RPBroadcastShowBroadcastPickerAtPointCallback); message 'showBroadcastPickerAtPoint:fromWindow:preferredExtensionIdentifier:completionHandler:'; { available in macos  }
    procedure setDelegate(newValue: RPBroadcastActivityControllerDelegateProtocol); message 'setDelegate:';
    function delegate: RPBroadcastActivityControllerDelegateProtocol; message 'delegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  RPBroadcastActivityControllerDelegateProtocol = objcprotocol external name 'RPBroadcastActivityControllerDelegate' (NSObjectProtocol)
    procedure broadcastActivityController_didFinishWithBroadcastController_error (broadcastActivityController: RPBroadcastActivityController; broadcastController: RPBroadcastController; error: NSError); message 'broadcastActivityController:didFinishWithBroadcastController:error:'; { available in macos  }
  end;
{$endif}

{$endif}

{$if  not defined(TARGET_OS_OSX)}
{$ifdef CLASSES}

type
  RPBroadcastActivityViewController = objcclass external (NSViewController)
  public
    class procedure loadBroadcastActivityViewControllerWithHandler (handler: RPBroadcastLoadBroadcastActivityViewControllerWithHandlerCallback); message 'loadBroadcastActivityViewControllerWithHandler:';
    class procedure loadBroadcastActivityViewControllerWithPreferredExtension_handler (preferredExtension: NSString; handler: RPBroadcastLoadBroadcastActivityViewControllerWithPreferredExtensionCallback); message 'loadBroadcastActivityViewControllerWithPreferredExtension:handler:'; { unavailable in tvos }
    procedure setDelegate(newValue: RPBroadcastActivityViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: RPBroadcastActivityViewControllerDelegateProtocol; message 'delegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  RPBroadcastActivityViewControllerDelegateProtocol = objcprotocol external name 'RPBroadcastActivityViewControllerDelegate' (NSObjectProtocol)
    procedure broadcastActivityViewController_didFinishWithBroadcastController_error (broadcastActivityViewController: RPBroadcastActivityViewController; broadcastController: RPBroadcastController; error: NSError); message 'broadcastActivityViewController:didFinishWithBroadcastController:error:'; { available in ios , tvos  }
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  RPBroadcastController = objcclass external (NSObject)
  public
    function isBroadcasting: objcbool; message 'isBroadcasting';
    function isPaused: objcbool; message 'isPaused';
    function broadcastURL: NSURL; message 'broadcastURL';
    function serviceInfo: NSDictionary; message 'serviceInfo';
    procedure setDelegate(newValue: RPBroadcastControllerDelegateProtocol); message 'setDelegate:';
    function delegate: RPBroadcastControllerDelegateProtocol; message 'delegate';
    function broadcastExtensionBundleID: NSString; message 'broadcastExtensionBundleID'; { unavailable in macos }
    procedure startBroadcastWithHandler (handler: RPBroadcastStartBroadcastWithHandlerCallback); message 'startBroadcastWithHandler:';
    procedure pauseBroadcast; message 'pauseBroadcast';
    procedure resumeBroadcast; message 'resumeBroadcast';
    procedure finishBroadcastWithHandler (handler: RPBroadcastFinishBroadcastWithHandlerCallback); message 'finishBroadcastWithHandler:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  RPBroadcastControllerDelegateProtocol = objcprotocol external name 'RPBroadcastControllerDelegate' (NSObjectProtocol)
  optional
    procedure broadcastController_didFinishWithError (broadcastController: RPBroadcastController; error: NSError); message 'broadcastController:didFinishWithError:';
    procedure broadcastController_didUpdateServiceInfo (broadcastController: RPBroadcastController; serviceInfo: NSDictionary); message 'broadcastController:didUpdateServiceInfo:';
    procedure broadcastController_didUpdateBroadcastURL (broadcastController: RPBroadcastController; broadcastURL: NSURL); message 'broadcastController:didUpdateBroadcastURL:'; { available in ios , tvos  }
  end;
{$endif}

{$if  not defined(TARGET_OS_OSX)}
{$ifdef CLASSES}

type
  RPSystemBroadcastPickerView = objcclass external (NSView, NSCodingProtocol)
  public
    procedure setPreferredExtension(newValue: NSString); message 'setPreferredExtension:';
    function preferredExtension: NSString; message 'preferredExtension';
    procedure setShowsMicrophoneButton(newValue: objcbool); message 'setShowsMicrophoneButton:';
    function showsMicrophoneButton: objcbool; message 'showsMicrophoneButton';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

{$endif}
