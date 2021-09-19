{ Parsed from WebKit.framework WKScriptMessageHandlerWithReply.h }

{$ifdef CALLBACKS}
type
  WKScriptMessageHandlerWithReplyUserContentControllerCallback = reference to procedure (reply: id; errorMessage: NSString); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  WKScriptMessageHandlerWithReplyProtocolPtr = ^WKScriptMessageHandlerWithReplyProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  WKScriptMessageHandlerWithReplyProtocol = objcprotocol external name 'WKScriptMessageHandlerWithReply' (NSObjectProtocol)
    procedure userContentController_didReceiveScriptMessage_replyHandler (userContentController: WKUserContentController; message_: WKScriptMessage; replyHandler: WKScriptMessageHandlerWithReplyUserContentControllerCallback); message 'userContentController:didReceiveScriptMessage:replyHandler:'; { available in macos 11.0, ios 14.0 }
  end;
{$endif}

