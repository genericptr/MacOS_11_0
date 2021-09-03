{ Parsed from CoreAudioKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreAudioKit.framework/Headers/CANetworkBrowserWindowController.h }

{$ifdef TYPES}
type
  CANetworkBrowserWindowControllerPtr = ^CANetworkBrowserWindowController;
{$endif}

{$ifdef CLASSES}

type
  CANetworkBrowserWindowController = objcclass external (NSWindowController)
  private
    _impl: CANetworkBrowserImpl;
  public
    class function isAVBSupported: objcbool; message 'isAVBSupported';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

