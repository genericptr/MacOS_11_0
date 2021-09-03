{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMWheelEvent.h }

{$ifdef TYPES}
type
  DOMWheelEventPtr = ^DOMWheelEvent;
{$endif}

{$ifdef TYPES}
const
  DOM_DOM_DELTA_PIXEL = $00;
  DOM_DOM_DELTA_LINE = $01;
  DOM_DOM_DELTA_PAGE = $02;
{$endif}

{$ifdef CLASSES}

type
  DOMWheelEvent = objcclass external (DOMMouseEvent)
  public
    function wheelDeltaX: cint; message 'wheelDeltaX'; { available in 10_5 }
    function wheelDeltaY: cint; message 'wheelDeltaY'; { available in 10_5 }
    function wheelDelta: cint; message 'wheelDelta';
    function isHorizontal: objcbool; message 'isHorizontal';
    procedure initWheelEvent_wheelDeltaY_view_screenX_screenY_clientX_clientY_ctrlKey_altKey_shiftKey_metaKey (wheelDeltaX_: cint; wheelDeltaY_: cint; view_: DOMAbstractView; screenX_: cint; screenY_: cint; clientX_: cint; clientY_: cint; ctrlKey_: objcbool; altKey_: objcbool; shiftKey_: objcbool; metaKey_: objcbool); message 'initWheelEvent:wheelDeltaY:view:screenX:screenY:clientX:clientY:ctrlKey:altKey:shiftKey:metaKey:'; { available in 10_5 }
  end;
{$endif}

