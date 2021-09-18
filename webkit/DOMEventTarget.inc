{ Parsed from WebKit.framework DOMEventTarget.h }

{$ifdef TYPES}
type
  DOMEventTargetProtocolPtr = ^DOMEventTargetProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  DOMEventTargetProtocol = objcprotocol external name 'DOMEventTarget' (NSObjectProtocol, NSCopyingProtocol)
    procedure addEventListener_listener_useCapture (type_: NSString; listener: DOMEventListenerProtocol; useCapture: objcbool); message 'addEventListener:listener:useCapture:'; { available in 10_5 }
    procedure removeEventListener_listener_useCapture (type_: NSString; listener: DOMEventListenerProtocol; useCapture: objcbool); message 'removeEventListener:listener:useCapture:'; { available in 10_5 }
    function dispatchEvent (event: DOMEvent): objcbool; message 'dispatchEvent:';
    procedure addEventListener_listener (type_: NSString; useCapture: objcbool); message 'addEventListener:listener:'; deprecated 'in 10_4, 10_5';
    procedure removeEventListener_listener (type_: NSString; useCapture: objcbool); message 'removeEventListener:listener:'; deprecated 'in 10_4, 10_5';
  end;
{$endif}

