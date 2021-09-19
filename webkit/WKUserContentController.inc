{ Parsed from WebKit.framework WKUserContentController.h }

{$ifdef TYPES}
type
  WKUserContentControllerPtr = ^WKUserContentController;
{$endif}

{$ifdef CLASSES}

type
  WKUserContentController = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function userScripts: NSArray; message 'userScripts';
    procedure addUserScript (userScript: WKUserScript); message 'addUserScript:';
    procedure removeAllUserScripts; message 'removeAllUserScripts';
    procedure addScriptMessageHandler_contentWorld_name (scriptMessageHandler: WKScriptMessageHandlerProtocol; world: WKContentWorld; name: NSString); message 'addScriptMessageHandler:contentWorld:name:'; { available in macos 11.0, ios 14.0 }
    procedure addScriptMessageHandlerWithReply_contentWorld_name (scriptMessageHandlerWithReply: WKScriptMessageHandlerWithReplyProtocol; contentWorld: WKContentWorld; name: NSString); message 'addScriptMessageHandlerWithReply:contentWorld:name:'; { available in macos 11.0, ios 14.0 }
    procedure addScriptMessageHandler_name (scriptMessageHandler: WKScriptMessageHandlerProtocol; name: NSString); message 'addScriptMessageHandler:name:';
    procedure removeScriptMessageHandlerForName_contentWorld (name: NSString; contentWorld: WKContentWorld); message 'removeScriptMessageHandlerForName:contentWorld:'; { available in macos 11.0, ios 14.0 }
    procedure removeScriptMessageHandlerForName (name: NSString); message 'removeScriptMessageHandlerForName:';
    procedure removeAllScriptMessageHandlersFromContentWorld (contentWorld: WKContentWorld); message 'removeAllScriptMessageHandlersFromContentWorld:'; { available in macos 11.0, ios 14.0 }
    procedure removeAllScriptMessageHandlers; message 'removeAllScriptMessageHandlers'; { available in macos 11.0, ios 14.0 }
    procedure addContentRuleList (contentRuleList: WKContentRuleList); message 'addContentRuleList:'; { available in macos 10.13, ios 11.0 }
    procedure removeContentRuleList (contentRuleList: WKContentRuleList); message 'removeContentRuleList:'; { available in macos 10.13, ios 11.0 }
    procedure removeAllContentRuleLists; message 'removeAllContentRuleLists'; { available in macos 10.13, ios 11.0 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

