{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKScriptMessageHandlerWithReply.h }

{$ifdef CALLBACKS}
type
  WKScriptMessageHandlerWithReplyUserContentControllerCallback = reference to function (reply: id; errorMessage: NSString): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  WKScriptMessageHandlerWithReplyProtocolPtr = ^WKScriptMessageHandlerWithReplyProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  WKScriptMessageHandlerWithReplyProtocol = objcprotocol external name 'WKScriptMessageHandlerWithReply' (NSObjectProtocol)
    procedure userContentController_didReceiveScriptMessage_replyHandler (userContentController: WKUserContentController; message_: WKScriptMessage; replyHandler: WKScriptMessageHandlerWithReplyUserContentControllerCallback); message 'userContentController:didReceiveScriptMessage:replyHandler:'; { available in macos , ios  }
  end;
{$endif}

