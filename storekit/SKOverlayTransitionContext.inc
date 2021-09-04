{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKOverlayTransitionContext.h }

{$ifdef CALLBACKS}
type
  SKOverlayTransitionContextAddAnimationBlockCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SKOverlayTransitionContextPtr = ^SKOverlayTransitionContext;
{$endif}

{$ifdef CLASSES}

type
  SKOverlayTransitionContext = objcclass external (NSObject)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure addAnimationBlock (block: SKOverlayTransitionContextAddAnimationBlockCallback); message 'addAnimationBlock:';
    function startFrame: CGRect; message 'startFrame';
    function endFrame: CGRect; message 'endFrame';
  end;
{$endif}

