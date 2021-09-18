{ Parsed from CoreAudioKit.framework CANetworkBrowserWindowController.h }

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

