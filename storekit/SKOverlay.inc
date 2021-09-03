{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKOverlay.h }

{ Types from SKOverlay }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SKOverlayPtr = ^SKOverlay;
  SKOverlayDelegateProtocolPtr = ^SKOverlayDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  SKOverlayDelegateProtocol = objcprotocol external name 'SKOverlayDelegate' (NSObjectProtocol)
  optional
    procedure storeOverlay_didFailToLoadWithError (overlay: SKOverlay; error: NSError); message 'storeOverlay:didFailToLoadWithError:';
    procedure storeOverlay_willStartPresentation (overlay: SKOverlay; transitionContext: SKOverlayTransitionContext); message 'storeOverlay:willStartPresentation:';
    procedure storeOverlay_didFinishPresentation (overlay: SKOverlay; transitionContext: SKOverlayTransitionContext); message 'storeOverlay:didFinishPresentation:';
    procedure storeOverlay_willStartDismissal (overlay: SKOverlay; transitionContext: SKOverlayTransitionContext); message 'storeOverlay:willStartDismissal:';
    procedure storeOverlay_didFinishDismissal (overlay: SKOverlay; transitionContext: SKOverlayTransitionContext); message 'storeOverlay:didFinishDismissal:';
  end;
{$endif}

{$ifdef CLASSES}

type
  SKOverlay = objcclass external (NSObject)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function initWithConfiguration (configuration: SKOverlayConfiguration): id; message 'initWithConfiguration:'; { NS_DESIGNATED_INITIALIZER }
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function configuration: SKOverlayConfiguration; message 'configuration';
  end;
{$endif}

