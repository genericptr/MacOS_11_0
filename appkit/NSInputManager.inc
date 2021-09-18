{ Parsed from AppKit.framework NSInputManager.h }

{$ifdef TYPES}
type
  NSInputManagerPtr = ^NSInputManager;
  NSTextInputProtocolPtr = ^NSTextInputProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextInputProtocol = objcprotocol external name 'NSTextInput'
    procedure insertText (string_: id); message 'insertText:'; deprecated;
    procedure doCommandBySelector (selector: SEL); message 'doCommandBySelector:'; deprecated;
    procedure setMarkedText_selectedRange (string_: id; selRange: NSRange); message 'setMarkedText:selectedRange:'; deprecated;
    procedure unmarkText; message 'unmarkText'; deprecated;
    function hasMarkedText: objcbool; message 'hasMarkedText'; deprecated;
    function conversationIdentifier: NSInteger; message 'conversationIdentifier'; deprecated;
    function attributedSubstringFromRange (range: NSRange): NSAttributedString; message 'attributedSubstringFromRange:'; deprecated;
    function markedRange: NSRange; message 'markedRange'; deprecated;
    function selectedRange: NSRange; message 'selectedRange'; deprecated;
    function firstRectForCharacterRange (range: NSRange): NSRect; message 'firstRectForCharacterRange:'; deprecated;
    function characterIndexForPoint (point: NSPoint): NSUInteger; message 'characterIndexForPoint:'; deprecated;
    function validAttributesForMarkedText: NSArray; message 'validAttributesForMarkedText'; deprecated;
  end;
{$endif}

{$ifdef CLASSES}

type
  NSInputManager = objcclass external (NSObject, NSTextInputProtocol)
  public
    class function currentInputManager: NSInputManager; message 'currentInputManager'; deprecated;
    class procedure cycleToNextInputLanguage (sender: id); message 'cycleToNextInputLanguage:'; deprecated;
    class procedure cycleToNextInputServerInLanguage (sender: id); message 'cycleToNextInputServerInLanguage:'; deprecated;
    function initWithName_host (inputServerName: NSString; hostName: NSString): NSInputManager; message 'initWithName:host:'; deprecated;
    function localizedInputManagerName: NSString; message 'localizedInputManagerName'; deprecated;
    procedure markedTextAbandoned (cli: id); message 'markedTextAbandoned:'; deprecated;
    procedure markedTextSelectionChanged_client (newSel: NSRange; cli: id); message 'markedTextSelectionChanged:client:'; deprecated;
    function wantsToInterpretAllKeystrokes: objcbool; message 'wantsToInterpretAllKeystrokes'; deprecated;
    function language: NSString; message 'language'; deprecated;
    function image: NSImage; message 'image'; deprecated;
    function server: NSInputServer; message 'server'; deprecated;
    function wantsToHandleMouseEvents: objcbool; message 'wantsToHandleMouseEvents'; deprecated;
    function handleMouseEvent (mouseEvent: NSEvent): objcbool; message 'handleMouseEvent:'; deprecated;
    function wantsToDelayTextChangeNotifications: objcbool; message 'wantsToDelayTextChangeNotifications'; deprecated;

    { Adopted protocols }
    function attributedSubstringFromRange (range: NSRange): NSAttributedString; message 'attributedSubstringFromRange:'; deprecated;
    function characterIndexForPoint (point: NSPoint): NSUInteger; message 'characterIndexForPoint:'; deprecated;
    function conversationIdentifier: NSInteger; message 'conversationIdentifier'; deprecated;
    procedure doCommandBySelector (selector: SEL); message 'doCommandBySelector:'; deprecated;
    function firstRectForCharacterRange (range: NSRange): NSRect; message 'firstRectForCharacterRange:'; deprecated;
    function hasMarkedText: objcbool; message 'hasMarkedText'; deprecated;
    procedure insertText (string_: id); message 'insertText:'; deprecated;
    function markedRange: NSRange; message 'markedRange'; deprecated;
    function selectedRange: NSRange; message 'selectedRange'; deprecated;
    procedure setMarkedText_selectedRange (string_: id; selRange: NSRange); message 'setMarkedText:selectedRange:'; deprecated;
    procedure unmarkText; message 'unmarkText'; deprecated;
    function validAttributesForMarkedText: NSArray; message 'validAttributesForMarkedText'; deprecated;
  end;
{$endif}

