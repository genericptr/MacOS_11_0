{ Parsed from WebKit.framework WKScriptMessageHandler.h }

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

