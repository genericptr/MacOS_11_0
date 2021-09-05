{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMMouseEvent.h }

{$ifdef TYPES}
type
  DOMMouseEventPtr = ^DOMMouseEvent;
{$endif}

{$ifdef CLASSES}

type
  DOMMouseEvent = objcclass external (DOMUIEvent)
  public
    function screenX: cint; message 'screenX';
    function screenY: cint; message 'screenY';
    function clientX: cint; message 'clientX';
    function clientY: cint; message 'clientY';
    function ctrlKey: objcbool; message 'ctrlKey';
    function shiftKey: objcbool; message 'shiftKey';
    function altKey: objcbool; message 'altKey';
    function metaKey: objcbool; message 'metaKey';
    function button: cshort; message 'button';
    function relatedTarget: DOMEventTargetProtocol; message 'relatedTarget';
    function offsetX: cint; message 'offsetX'; { available in 10_5 }
    function offsetY: cint; message 'offsetY'; { available in 10_5 }
    function x: cint; message 'x'; { available in 10_5 }
    function y: cint; message 'y'; { available in 10_5 }
    function fromElement: DOMNode; message 'fromElement'; { available in 10_5 }
    function toElement: DOMNode; message 'toElement'; { available in 10_5 }
    procedure initMouseEvent_canBubble_cancelable_view_detail_screenX_screenY_clientX_clientY_ctrlKey_altKey_shiftKey_metaKey_button_relatedTarget (type_: NSString; canBubble: objcbool; cancelable_: objcbool; view_: DOMAbstractView; detail_: cint; screenX_: cint; screenY_: cint; clientX_: cint; clientY_: cint; ctrlKey_: objcbool; altKey_: objcbool; shiftKey_: objcbool; metaKey_: objcbool; button_: cushort; relatedTarget_: DOMEventTargetProtocol); message 'initMouseEvent:canBubble:cancelable:view:detail:screenX:screenY:clientX:clientY:ctrlKey:altKey:shiftKey:metaKey:button:relatedTarget:'; { available in 10_5 }
  end;


type
  DOMMouseEventDeprecated = objccategory external (DOMMouseEvent)
    procedure initMouseEvent_canBubble_view_screenX_clientX_ctrlKey_shiftKey_button (type_: NSString; cancelable_: objcbool; detail_: cint; screenY_: cint; clientY_: cint; altKey_: objcbool; metaKey_: objcbool; relatedTarget_: DOMEventTargetProtocol); message 'initMouseEvent:canBubble:view:screenX:clientX:ctrlKey:shiftKey:button:'; deprecated 'in 10_4, 10_5';
  end;
{$endif}

