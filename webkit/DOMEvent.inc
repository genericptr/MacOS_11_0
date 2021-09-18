{ Parsed from WebKit.framework DOMEvent.h }

{$ifdef TYPES}
type
  DOMEventPtr = ^DOMEvent;
{$endif}

{$ifdef TYPES}
const
  DOM_NONE = 0;
  DOM_CAPTURING_PHASE = 1;
  DOM_AT_TARGET = 2;
  DOM_BUBBLING_PHASE = 3;
{$endif}

{$ifdef CLASSES}

type
  DOMEvent = objcclass external (DOMObject)
  public
    function type_: NSString; message 'type';
    function target: DOMEventTargetProtocol; message 'target';
    function currentTarget: DOMEventTargetProtocol; message 'currentTarget';
    function eventPhase: cushort; message 'eventPhase';
    function bubbles: objcbool; message 'bubbles';
    function cancelable: objcbool; message 'cancelable';
    function timeStamp: DOMTimeStamp; message 'timeStamp';
    function srcElement: DOMEventTargetProtocol; message 'srcElement'; { available in 10_6 }
    procedure setReturnValue(newValue: objcbool); message 'setReturnValue:'; { available in 10_6 }
    function returnValue: objcbool; message 'returnValue'; { available in 10_6 }
    procedure setCancelBubble(newValue: objcbool); message 'setCancelBubble:'; { available in 10_6 }
    function cancelBubble: objcbool; message 'cancelBubble'; { available in 10_6 }
    procedure stopPropagation; message 'stopPropagation';
    procedure preventDefault; message 'preventDefault';
    procedure initEvent_canBubbleArg_cancelableArg (eventTypeArg: NSString; canBubbleArg: objcbool; cancelableArg: objcbool); message 'initEvent:canBubbleArg:cancelableArg:'; { available in 10_5 }
  end;


type
  DOMEventDeprecated = objccategory external (DOMEvent)
    procedure initEvent_canBubbleArg (eventTypeArg: NSString; cancelableArg: objcbool); message 'initEvent:canBubbleArg:'; deprecated 'in 10_4, 10_5';
  end;
{$endif}

