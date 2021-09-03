{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMKeyboardEvent.h }

{$ifdef TYPES}
type
  DOMKeyboardEventPtr = ^DOMKeyboardEvent;
{$endif}

{$ifdef TYPES}
const
  DOM_KEY_LOCATION_STANDARD = $00;
  DOM_KEY_LOCATION_LEFT = $01;
  DOM_KEY_LOCATION_RIGHT = $02;
  DOM_KEY_LOCATION_NUMPAD = $03;
{$endif}

{$ifdef CLASSES}

type
  DOMKeyboardEvent = objcclass external (DOMUIEvent)
  public
    function keyIdentifier: NSString; message 'keyIdentifier';
    function location: cuint; message 'location'; { available in 10_8 }
    function keyLocation: cuint; message 'keyLocation'; deprecated 'in 10_5, 10_5';
    function ctrlKey: objcbool; message 'ctrlKey';
    function shiftKey: objcbool; message 'shiftKey';
    function altKey: objcbool; message 'altKey';
    function metaKey: objcbool; message 'metaKey';
    function altGraphKey: objcbool; message 'altGraphKey'; { available in 10_5 }
    function keyCode: cint; message 'keyCode';
    function charCode: cint; message 'charCode';
    function getModifierState (keyIdentifierArg: NSString): objcbool; message 'getModifierState:';
    procedure initKeyboardEvent_canBubble_cancelable_view_keyIdentifier_location_ctrlKey_altKey_shiftKey_metaKey_altGraphKey (type_: NSString; canBubble: objcbool; cancelable_: objcbool; view_: DOMAbstractView; keyIdentifier_: NSString; location_: cuint; ctrlKey_: objcbool; altKey_: objcbool; shiftKey_: objcbool; metaKey_: objcbool; altGraphKey_: objcbool); message 'initKeyboardEvent:canBubble:cancelable:view:keyIdentifier:location:ctrlKey:altKey:shiftKey:metaKey:altGraphKey:'; { available in 10_8 }
    procedure initKeyboardEvent_canBubble_cancelable_view_keyIdentifier_location_ctrlKey_altKey_shiftKey_metaKey (type_: NSString; canBubble: objcbool; cancelable_: objcbool; view_: DOMAbstractView; keyIdentifier_: NSString; location_: cuint; ctrlKey_: objcbool; altKey_: objcbool; shiftKey_: objcbool; metaKey_: objcbool); message 'initKeyboardEvent:canBubble:cancelable:view:keyIdentifier:location:ctrlKey:altKey:shiftKey:metaKey:'; { available in 10_8 }
    procedure initKeyboardEvent_canBubble_cancelable_view_keyIdentifier_keyLocation_ctrlKey_altKey_shiftKey_metaKey_altGraphKey (type_: NSString; canBubble: objcbool; cancelable_: objcbool; view_: DOMAbstractView; keyIdentifier_: NSString; keyLocation_: cuint; ctrlKey_: objcbool; altKey_: objcbool; shiftKey_: objcbool; metaKey_: objcbool; altGraphKey_: objcbool); message 'initKeyboardEvent:canBubble:cancelable:view:keyIdentifier:keyLocation:ctrlKey:altKey:shiftKey:metaKey:altGraphKey:'; deprecated 'in 10_5, 10_5';
    procedure initKeyboardEvent_canBubble_cancelable_view_keyIdentifier_keyLocation_ctrlKey_altKey_shiftKey_metaKey (type_: NSString; canBubble: objcbool; cancelable_: objcbool; view_: DOMAbstractView; keyIdentifier_: NSString; keyLocation_: cuint; ctrlKey_: objcbool; altKey_: objcbool; shiftKey_: objcbool; metaKey_: objcbool); message 'initKeyboardEvent:canBubble:cancelable:view:keyIdentifier:keyLocation:ctrlKey:altKey:shiftKey:metaKey:'; deprecated 'in 10_5, 10_5';
  end;
{$endif}

