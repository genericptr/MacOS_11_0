{ Parsed from CoreAudioKit.framework AUViewController.h }

{$ifdef CALLBACKS}
type
  AUViewControllerRequestViewControllerWithCompletionHandlerCallback = reference to procedure (viewController: AUViewControllerBasePtr); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AUViewControllerPtr = ^AUViewController;
  AUAudioUnitViewConfigurationPtr = ^AUAudioUnitViewConfiguration;
{$endif}

{$if defined(__OBJC2__)}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  AUViewControllerBase = UIViewController;
  AUViewControllerBasePtr = ^AUViewControllerBase;
{$endif}

{$else}
{$ifdef TYPES}
type
  AUViewControllerBase = NSViewController;
  AUViewControllerBasePtr = ^AUViewControllerBase;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  AUViewController = objcclass external (AUViewControllerBase, NSExtensionRequestHandlingProtocol)

    { Adopted protocols }
    procedure beginRequestWithExtensionContext (context: NSExtensionContext); message 'beginRequestWithExtensionContext:';
  end;

type
  AUAudioUnitViewConfiguration = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function initWithWidth_height_hostHasController (width: CGFloat; height: CGFloat; hostHasController: objcbool): id; message 'initWithWidth:height:hostHasController:';
    function width: CGFloat; message 'width';
    function height: CGFloat; message 'height';
    function hostHasController: objcbool; message 'hostHasController';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


//type
//  AUAudioUnit_ViewController = objccategory external (AUAudioUnit)
//    procedure requestViewControllerWithCompletionHandler (completionHandler: AUViewControllerRequestViewControllerWithCompletionHandlerCallback); message 'requestViewControllerWithCompletionHandler:';
//    function supportedViewConfigurations (availableViewConfigurations: NSArray): NSIndexSet; message 'supportedViewConfigurations:'; { unavailable in watchos, tvos } { available in macosx 10.13, ios 11.0 }
//    procedure selectViewConfiguration (viewConfiguration: AUAudioUnitViewConfiguration); message 'selectViewConfiguration:'; { unavailable in watchos, tvos } { available in macosx 10.13, ios 11.0 }
//  end;
{$endif}

{$endif}
