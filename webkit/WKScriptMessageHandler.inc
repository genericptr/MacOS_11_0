{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKScriptMessageHandler.h }

{$ifdef TYPES}
type
  WKScriptMessageHandlerProtocolPtr = ^WKScriptMessageHandlerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  WKScriptMessageHandlerProtocol = objcprotocol external name 'WKScriptMessageHandler' (NSObjectProtocol)
  required
    procedure userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage); message 'userContentController:didReceiveScriptMessage:';
  end;
{$endif}

