{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WebPluginContainer.h }
{$ifdef CLASSES}

type
  WebPlugInContainer = objccategory external (NSObject)
    procedure webPlugInContainerLoadRequest_inFrame (request: NSURLRequest; target: NSString); message 'webPlugInContainerLoadRequest:inFrame:';
    procedure webPlugInContainerShowStatus (message_: NSString); message 'webPlugInContainerShowStatus:';
    function webPlugInContainerSelectionColor: NSColor; message 'webPlugInContainerSelectionColor';
    function webFrame: WebFrame; message 'webFrame';
  end;
{$endif}

