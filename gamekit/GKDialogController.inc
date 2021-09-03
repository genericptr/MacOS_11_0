{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKDialogController.h }

{$ifdef TYPES}
type
  GKDialogControllerPtr = ^GKDialogController;
  GKViewControllerProtocolPtr = ^GKViewControllerProtocol;
{$endif}

{$if  not defined(TARGET_OS_MACCATALYST)}

{$ifndef GKDialogController_h}
{$ifdef PROTOCOLS}

type
  GKViewControllerProtocol = objcprotocol external name 'GKViewController'
  end;
{$endif}

{$ifdef CLASSES}

type
  GKDialogController = objcclass external (NSResponder)
  public
    procedure setParentWindow(newValue: NSWindowPtr); message 'setParentWindow:';
    function parentWindow: NSWindowPtr; message 'parentWindow';
    function presentViewController (viewController: NSViewControllerPtr): objcbool; message 'presentViewController:';
    procedure dismiss (sender: id); message 'dismiss:';
  end;


type
  SharedDialogController = objccategory external (GKDialogController)
    class function sharedDialogController: GKDialogController; message 'sharedDialogController';
  end;
{$endif}

{$endif}
{$endif}
