{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WebPluginViewFactory.h }

{$ifdef TYPES}
type
  WebPlugInViewFactoryProtocolPtr = ^WebPlugInViewFactoryProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  WebPlugInBaseURLKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebPlugInAttributesKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebPlugInContainerKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebPlugInContainingElementKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebPlugInShouldLoadMainResourceKey: NSString deprecated 'in 10_6, 10_14'; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  WebPlugInViewFactoryProtocol = objcprotocol external name 'WebPlugInViewFactory' (NSObjectProtocol)
    class function plugInViewWithArguments (arguments: NSDictionary): NSViewPtr; message 'plugInViewWithArguments:';
  end;
{$endif}

