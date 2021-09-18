{ Parsed from WebKit.framework DOMOverflowEvent.h }

{$ifdef TYPES}
type
  DOMOverflowEventPtr = ^DOMOverflowEvent;
{$endif}

{$ifdef TYPES}
const
  DOM_HORIZONTAL = 0;
  DOM_VERTICAL = 1;
  DOM_BOTH = 2;
{$endif}

{$ifdef CLASSES}

type
  DOMOverflowEvent = objcclass external (DOMEvent)
  public
    function orient: cushort; message 'orient';
    function horizontalOverflow: objcbool; message 'horizontalOverflow';
    function verticalOverflow: objcbool; message 'verticalOverflow';
    procedure initOverflowEvent_horizontalOverflow_verticalOverflow (orient_: cushort; horizontalOverflow_: objcbool; verticalOverflow_: objcbool); message 'initOverflowEvent:horizontalOverflow:verticalOverflow:';
  end;
{$endif}

