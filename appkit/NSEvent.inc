{ Parsed from AppKit.framework NSEvent.h }

{$ifdef CALLBACKS}
type
  NSEventTrackSwipeEventWithOptionsCallback = reference to procedure (gestureAmount: CGFloat; phase: NSEventPhase; isComplete: objcbool; stop: objcboolPtr); cblock; cdecl;
  NSEventAddGlobalMonitorForEventsMatchingMaskCallback = reference to procedure (event: NSEvent); cblock; cdecl;
  NSEventAddLocalMonitorForEventsMatchingMaskCallback = reference to function (event: NSEvent): NSEvent; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSEventPtr = ^NSEvent;
{$endif}

{$ifdef TYPES}
type
  NSEventType = NSUInteger;
  NSEventTypePtr = ^NSEventType;

const
  NSEventTypeLeftMouseDown = 1;
  NSEventTypeLeftMouseUp = 2;
  NSEventTypeRightMouseDown = 3;
  NSEventTypeRightMouseUp = 4;
  NSEventTypeMouseMoved = 5;
  NSEventTypeLeftMouseDragged = 6;
  NSEventTypeRightMouseDragged = 7;
  NSEventTypeMouseEntered = 8;
  NSEventTypeMouseExited = 9;
  NSEventTypeKeyDown = 10;
  NSEventTypeKeyUp = 11;
  NSEventTypeFlagsChanged = 12;
  NSEventTypeAppKitDefined = 13;
  NSEventTypeSystemDefined = 14;
  NSEventTypeApplicationDefined = 15;
  NSEventTypePeriodic = 16;
  NSEventTypeCursorUpdate = 17;
  NSEventTypeScrollWheel = 22;
  NSEventTypeTabletPoint = 23;
  NSEventTypeTabletProximity = 24;
  NSEventTypeOtherMouseDown = 25;
  NSEventTypeOtherMouseUp = 26;
  NSEventTypeOtherMouseDragged = 27;
  NSEventTypeGesture = 29 { available in macos 10.5 };
  NSEventTypeMagnify = 30 { available in macos 10.5 };
  NSEventTypeSwipe = 31 { available in macos 10.5 };
  NSEventTypeRotate = 18 { available in macos 10.5 };
  NSEventTypeBeginGesture = 19 { available in macos 10.5 };
  NSEventTypeEndGesture = 20 { available in macos 10.5 };
  NSEventTypeSmartMagnify = 32 { available in macos 10.8 };
  NSEventTypeQuickLook = 33 { available in macos 10.8 };
  NSEventTypePressure = 34 { available in macos 10.10.3 };
  NSEventTypeDirectTouch = 37 { available in macos 10.10 };
  NSEventTypeChangeMode = 38 { available in macos 10.15 };

const
  NSLeftMouseDown = NSEventTypeLeftMouseDown deprecated 'replace with NSEventTypeLeftMouseDown';
  NSLeftMouseUp = NSEventTypeLeftMouseUp deprecated 'replace with NSEventTypeLeftMouseUp';
  NSRightMouseDown = NSEventTypeRightMouseDown deprecated 'replace with NSEventTypeRightMouseDown';
  NSRightMouseUp = NSEventTypeRightMouseUp deprecated 'replace with NSEventTypeRightMouseUp';
  NSMouseMoved = NSEventTypeMouseMoved deprecated 'replace with NSEventTypeMouseMoved';
  NSLeftMouseDragged = NSEventTypeLeftMouseDragged deprecated 'replace with NSEventTypeLeftMouseDragged';
  NSRightMouseDragged = NSEventTypeRightMouseDragged deprecated 'replace with NSEventTypeRightMouseDragged';
  NSMouseEntered = NSEventTypeMouseEntered deprecated 'replace with NSEventTypeMouseEntered';
  NSMouseExited = NSEventTypeMouseExited deprecated 'replace with NSEventTypeMouseExited';
  NSKeyDown = NSEventTypeKeyDown deprecated 'replace with NSEventTypeKeyDown';
  NSKeyUp = NSEventTypeKeyUp deprecated 'replace with NSEventTypeKeyUp';
  NSFlagsChanged = NSEventTypeFlagsChanged deprecated 'replace with NSEventTypeFlagsChanged';
  NSAppKitDefined = NSEventTypeAppKitDefined deprecated 'replace with NSEventTypeAppKitDefined';
  NSSystemDefined = NSEventTypeSystemDefined deprecated 'replace with NSEventTypeSystemDefined';
  NSApplicationDefined = NSEventTypeApplicationDefined deprecated 'replace with NSEventTypeApplicationDefined';
  NSPeriodic = NSEventTypePeriodic deprecated 'replace with NSEventTypePeriodic';
  NSCursorUpdate = NSEventTypeCursorUpdate deprecated 'replace with NSEventTypeCursorUpdate';
  NSScrollWheel = NSEventTypeScrollWheel deprecated 'replace with NSEventTypeScrollWheel';
  NSTabletPoint = NSEventTypeTabletPoint deprecated 'replace with NSEventTypeTabletPoint';
  NSTabletProximity = NSEventTypeTabletProximity deprecated 'replace with NSEventTypeTabletProximity';
  NSOtherMouseDown = NSEventTypeOtherMouseDown deprecated 'replace with NSEventTypeOtherMouseDown';
  NSOtherMouseUp = NSEventTypeOtherMouseUp deprecated 'replace with NSEventTypeOtherMouseUp';
  NSOtherMouseDragged = NSEventTypeOtherMouseDragged deprecated 'replace with NSEventTypeOtherMouseDragged';

type
  NSEventMask = culonglong;
  NSEventMaskPtr = ^NSEventMask;

const
  NSEventMaskLeftMouseDown = 1 shl NSEventTypeLeftMouseDown;
  NSEventMaskLeftMouseUp = 1 shl NSEventTypeLeftMouseUp;
  NSEventMaskRightMouseDown = 1 shl NSEventTypeRightMouseDown;
  NSEventMaskRightMouseUp = 1 shl NSEventTypeRightMouseUp;
  NSEventMaskMouseMoved = 1 shl NSEventTypeMouseMoved;
  NSEventMaskLeftMouseDragged = 1 shl NSEventTypeLeftMouseDragged;
  NSEventMaskRightMouseDragged = 1 shl NSEventTypeRightMouseDragged;
  NSEventMaskMouseEntered = 1 shl NSEventTypeMouseEntered;
  NSEventMaskMouseExited = 1 shl NSEventTypeMouseExited;
  NSEventMaskKeyDown = 1 shl NSEventTypeKeyDown;
  NSEventMaskKeyUp = 1 shl NSEventTypeKeyUp;
  NSEventMaskFlagsChanged = 1 shl NSEventTypeFlagsChanged;
  NSEventMaskAppKitDefined = 1 shl NSEventTypeAppKitDefined;
  NSEventMaskSystemDefined = 1 shl NSEventTypeSystemDefined;
  NSEventMaskApplicationDefined = 1 shl NSEventTypeApplicationDefined;
  NSEventMaskPeriodic = 1 shl NSEventTypePeriodic;
  NSEventMaskCursorUpdate = 1 shl NSEventTypeCursorUpdate;
  NSEventMaskScrollWheel = 1 shl NSEventTypeScrollWheel;
  NSEventMaskTabletPoint = 1 shl NSEventTypeTabletPoint;
  NSEventMaskTabletProximity = 1 shl NSEventTypeTabletProximity;
  NSEventMaskOtherMouseDown = 1 shl NSEventTypeOtherMouseDown;
  NSEventMaskOtherMouseUp = 1 shl NSEventTypeOtherMouseUp;
  NSEventMaskOtherMouseDragged = 1 shl NSEventTypeOtherMouseDragged;
  NSEventMaskGesture = 1 shl NSEventTypeGesture { available in macos 10.5 };
  NSEventMaskMagnify = 1 shl NSEventTypeMagnify { available in macos 10.5 };
  NSEventMaskSwipe = 1 shl NSEventTypeSwipe { available in macos 10.5 };
  NSEventMaskRotate = 1 shl NSEventTypeRotate { available in macos 10.5 };
  NSEventMaskBeginGesture = 1 shl NSEventTypeBeginGesture { available in macos 10.5 };
  NSEventMaskEndGesture = 1 shl NSEventTypeEndGesture { available in macos 10.5 };
  NSEventMaskSmartMagnify = 1 shl NSEventTypeSmartMagnify { available in macos 10.8 };
  NSEventMaskPressure = 1 shl NSEventTypePressure { available in macos 10.10.3 };
  NSEventMaskDirectTouch = 1 shl NSEventTypeDirectTouch { available in macos 10.12.2 };
  NSEventMaskChangeMode = 1 shl NSEventTypeChangeMode { available in macos 10.15 };
  NSEventMaskAny = NSUIntegerMax;

const
  NSLeftMouseDownMask = NSEventMaskLeftMouseDown deprecated 'replace with NSEventMaskLeftMouseDown';
  NSLeftMouseUpMask = NSEventMaskLeftMouseUp deprecated 'replace with NSEventMaskLeftMouseUp';
  NSRightMouseDownMask = NSEventMaskRightMouseDown deprecated 'replace with NSEventMaskRightMouseDown';
  NSRightMouseUpMask = NSEventMaskRightMouseUp deprecated 'replace with NSEventMaskRightMouseUp';
  NSMouseMovedMask = NSEventMaskMouseMoved deprecated 'replace with NSEventMaskMouseMoved';
  NSLeftMouseDraggedMask = NSEventMaskLeftMouseDragged deprecated 'replace with NSEventMaskLeftMouseDragged';
  NSRightMouseDraggedMask = NSEventMaskRightMouseDragged deprecated 'replace with NSEventMaskRightMouseDragged';
  NSMouseEnteredMask = NSEventMaskMouseEntered deprecated 'replace with NSEventMaskMouseEntered';
  NSMouseExitedMask = NSEventMaskMouseExited deprecated 'replace with NSEventMaskMouseExited';
  NSKeyDownMask = NSEventMaskKeyDown deprecated 'replace with NSEventMaskKeyDown';
  NSKeyUpMask = NSEventMaskKeyUp deprecated 'replace with NSEventMaskKeyUp';
  NSFlagsChangedMask = NSEventMaskFlagsChanged deprecated 'replace with NSEventMaskFlagsChanged';
  NSAppKitDefinedMask = NSEventMaskAppKitDefined deprecated 'replace with NSEventMaskAppKitDefined';
  NSSystemDefinedMask = NSEventMaskSystemDefined deprecated 'replace with NSEventMaskSystemDefined';
  NSApplicationDefinedMask = NSEventMaskApplicationDefined deprecated 'replace with NSEventMaskApplicationDefined';
  NSPeriodicMask = NSEventMaskPeriodic deprecated 'replace with NSEventMaskPeriodic';
  NSCursorUpdateMask = NSEventMaskCursorUpdate deprecated 'replace with NSEventMaskCursorUpdate';
  NSScrollWheelMask = NSEventMaskScrollWheel deprecated 'replace with NSEventMaskScrollWheel';
  NSTabletPointMask = NSEventMaskTabletPoint deprecated 'replace with NSEventMaskTabletPoint';
  NSTabletProximityMask = NSEventMaskTabletProximity deprecated 'replace with NSEventMaskTabletProximity';
  NSOtherMouseDownMask = NSEventMaskOtherMouseDown deprecated 'replace with NSEventMaskOtherMouseDown';
  NSOtherMouseUpMask = NSEventMaskOtherMouseUp deprecated 'replace with NSEventMaskOtherMouseUp';
  NSOtherMouseDraggedMask = NSEventMaskOtherMouseDragged deprecated 'replace with NSEventMaskOtherMouseDragged';
  NSAnyEventMask = NSUIntegerMax deprecated 'replace with NSEventMaskAny';

type
  NSEventModifierFlags = NSUInteger;
  NSEventModifierFlagsPtr = ^NSEventModifierFlags;

const
  NSEventModifierFlagCapsLock = 1 shl 16;
  NSEventModifierFlagShift = 1 shl 17;
  NSEventModifierFlagControl = 1 shl 18;
  NSEventModifierFlagOption = 1 shl 19;
  NSEventModifierFlagCommand = 1 shl 20;
  NSEventModifierFlagNumericPad = 1 shl 21;
  NSEventModifierFlagHelp = 1 shl 22;
  NSEventModifierFlagFunction = 1 shl 23;
  NSEventModifierFlagDeviceIndependentFlagsMask = $ffff0000;

const
  NSAlphaShiftKeyMask = NSEventModifierFlagCapsLock deprecated 'replace with NSEventModifierFlagCapsLock';
  NSShiftKeyMask = NSEventModifierFlagShift deprecated 'replace with NSEventModifierFlagShift';
  NSControlKeyMask = NSEventModifierFlagControl deprecated 'replace with NSEventModifierFlagControl';
  NSAlternateKeyMask = NSEventModifierFlagOption deprecated 'replace with NSEventModifierFlagOption';
  NSCommandKeyMask = NSEventModifierFlagCommand deprecated 'replace with NSEventModifierFlagCommand';
  NSNumericPadKeyMask = NSEventModifierFlagNumericPad deprecated 'replace with NSEventModifierFlagNumericPad';
  NSHelpKeyMask = NSEventModifierFlagHelp deprecated 'replace with NSEventModifierFlagHelp';
  NSFunctionKeyMask = NSEventModifierFlagFunction deprecated 'replace with NSEventModifierFlagFunction';
  NSDeviceIndependentModifierFlagsMask = NSEventModifierFlagDeviceIndependentFlagsMask deprecated 'replace with NSEventModifierFlagDeviceIndependentFlagsMask';

type
  NSPointingDeviceType = NSUInteger;
  NSPointingDeviceTypePtr = ^NSPointingDeviceType;

const
  NSPointingDeviceTypeUnknown = NX_TABLET_POINTER_UNKNOWN;
  NSPointingDeviceTypePen = NX_TABLET_POINTER_PEN;
  NSPointingDeviceTypeCursor = NX_TABLET_POINTER_CURSOR;
  NSPointingDeviceTypeEraser = NX_TABLET_POINTER_ERASER;

const
  NSUnknownPointingDevice = NSPointingDeviceTypeUnknown deprecated 'replace with NSPointingDeviceTypeUnknown';
  NSPenPointingDevice = NSPointingDeviceTypePen deprecated 'replace with NSPointingDeviceTypePen';
  NSCursorPointingDevice = NSPointingDeviceTypeCursor deprecated 'replace with NSPointingDeviceTypeCursor';
  NSEraserPointingDevice = NSPointingDeviceTypeEraser deprecated 'replace with NSPointingDeviceTypeEraser';

type
  NSEventButtonMask = NSUInteger;
  NSEventButtonMaskPtr = ^NSEventButtonMask;

const
  NSEventButtonMaskPenTip = NX_TABLET_BUTTON_PENTIPMASK;
  NSEventButtonMaskPenLowerSide = NX_TABLET_BUTTON_PENLOWERSIDEMASK;
  NSEventButtonMaskPenUpperSide = NX_TABLET_BUTTON_PENUPPERSIDEMASK;

const
  NSPenTipMask = NSEventButtonMaskPenTip deprecated 'replace with NSEventButtonMaskPenTip';
  NSPenLowerSideMask = NSEventButtonMaskPenLowerSide deprecated 'replace with NSEventButtonMaskPenLowerSide';
  NSPenUpperSideMask = NSEventButtonMaskPenUpperSide deprecated 'replace with NSEventButtonMaskPenUpperSide';

type
  NSEventPhase = NSUInteger;
  NSEventPhasePtr = ^NSEventPhase;

const
  NSEventPhaseNone = 0;
  NSEventPhaseBegan = $1 shl 0;
  NSEventPhaseStationary = $1 shl 1;
  NSEventPhaseChanged = $1 shl 2;
  NSEventPhaseEnded = $1 shl 3;
  NSEventPhaseCancelled = $1 shl 4;
  NSEventPhaseMayBegin = $1 shl 5;

type
  NSEventGestureAxis = NSInteger;
  NSEventGestureAxisPtr = ^NSEventGestureAxis;

const
  NSEventGestureAxisNone = 0;
  NSEventGestureAxisHorizontal = 1;
  NSEventGestureAxisVertical = 2;

type
  NSEventSwipeTrackingOptions = NSUInteger;
  NSEventSwipeTrackingOptionsPtr = ^NSEventSwipeTrackingOptions;

const
  NSEventSwipeTrackingLockDirection = $1 shl 0;
  NSEventSwipeTrackingClampGestureAmount = $1 shl 1;

type
  NSEventSubtype = cshort;
  NSEventSubtypePtr = ^NSEventSubtype;

const
  NSEventSubtypeWindowExposed = 0;
  NSEventSubtypeApplicationActivated = 1;
  NSEventSubtypeApplicationDeactivated = 2;
  NSEventSubtypeWindowMoved = 4;
  NSEventSubtypeScreenChanged = 8;
  NSEventSubtypePowerOff = 1;
  NSEventSubtypeMouseEvent = NX_SUBTYPE_DEFAULT;
  NSEventSubtypeTabletPoint = NX_SUBTYPE_TABLET_POINT;
  NSEventSubtypeTabletProximity = NX_SUBTYPE_TABLET_PROXIMITY;
  NSEventSubtypeTouch = NX_SUBTYPE_MOUSE_TOUCH { available in macos 10.6 };

const
  NSWindowExposedEventType = NSEventSubtypeWindowExposed deprecated 'replace with NSEventSubtypeWindowExposed';
  NSApplicationActivatedEventType = NSEventSubtypeApplicationActivated deprecated 'replace with NSEventSubtypeApplicationActivated';
  NSApplicationDeactivatedEventType = NSEventSubtypeApplicationDeactivated deprecated 'replace with NSEventSubtypeApplicationDeactivated';
  NSWindowMovedEventType = NSEventSubtypeWindowMoved deprecated 'replace with NSEventSubtypeWindowMoved';
  NSScreenChangedEventType = NSEventSubtypeScreenChanged deprecated 'replace with NSEventSubtypeScreenChanged';
  NSAWTEventType = 16 deprecated 'This subtype no longer exists';
  NSPowerOffEventType = NSEventSubtypePowerOff deprecated 'replace with NSEventSubtypePowerOff';
  NSMouseEventSubtype = NSEventSubtypeMouseEvent deprecated 'replace with NSEventSubtypeMouseEvent';
  NSTabletPointEventSubtype = NSEventSubtypeTabletPoint deprecated 'replace with NSEventSubtypeTabletPoint';
  NSTabletProximityEventSubtype = NSEventSubtypeTabletProximity deprecated 'replace with NSEventSubtypeTabletProximity';
  NSTouchEventSubtype = NSEventSubtypeTouch deprecated 'replace with NSEventSubtypeTouch';

type
  NSPressureBehavior = NSInteger;
  NSPressureBehaviorPtr = ^NSPressureBehavior;

const
  NSPressureBehaviorUnknown = -1;
  NSPressureBehaviorPrimaryDefault = 0;
  NSPressureBehaviorPrimaryClick = 1;
  NSPressureBehaviorPrimaryGeneric = 2;
  NSPressureBehaviorPrimaryAccelerator = 3;
  NSPressureBehaviorPrimaryDeepClick = 5;
  NSPressureBehaviorPrimaryDeepDrag = 6;
{$endif}

{$ifdef CLASSES}

type
  NSEvent = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function type_: NSEventType; message 'type';
    function modifierFlags: NSEventModifierFlags; message 'modifierFlags';
    function timestamp: NSTimeInterval; message 'timestamp';
    function window: NSWindow; message 'window';
    function windowNumber: NSInteger; message 'windowNumber';
    function context: NSGraphicsContext; message 'context'; deprecated 'This method always returns nil. If you need access to the current drawing context, use [NSGraphicsContext currentContext] inside of a draw operation.';
    function clickCount: NSInteger; message 'clickCount';
    function buttonNumber: NSInteger; message 'buttonNumber';
    function eventNumber: NSInteger; message 'eventNumber';
    function pressure: single; message 'pressure';
    function locationInWindow: NSPoint; message 'locationInWindow';
    function deltaX: CGFloat; message 'deltaX';
    function deltaY: CGFloat; message 'deltaY';
    function deltaZ: CGFloat; message 'deltaZ';
    function hasPreciseScrollingDeltas: objcbool; message 'hasPreciseScrollingDeltas'; { available in macos 10.7 }
    function scrollingDeltaX: CGFloat; message 'scrollingDeltaX'; { available in macos 10.7 }
    function scrollingDeltaY: CGFloat; message 'scrollingDeltaY'; { available in macos 10.7 }
    function momentumPhase: NSEventPhase; message 'momentumPhase'; { available in macos 10.7 }
    function isDirectionInvertedFromDevice: objcbool; message 'isDirectionInvertedFromDevice'; { available in macos 10.7 }
    function characters: NSString; message 'characters';
    function charactersIgnoringModifiers: NSString; message 'charactersIgnoringModifiers';
    function charactersByApplyingModifiers (modifiers: NSEventModifierFlags): NSString; message 'charactersByApplyingModifiers:'; { available in macos 10.15 }
    function isARepeat: objcbool; message 'isARepeat';
    function keyCode: cushort; message 'keyCode';
    function trackingNumber: NSInteger; message 'trackingNumber';
    function userData: pointer; message 'userData';
    function trackingArea: NSTrackingArea; message 'trackingArea'; { available in macos 10.5 }
    function subtype: NSEventSubtype; message 'subtype';
    function data1: NSInteger; message 'data1';
    function data2: NSInteger; message 'data2';
    function eventRef: pointer; message 'eventRef'; { available in macos 10.5 }
    class function eventWithEventRef (eventRef_: pointer): NSEvent; message 'eventWithEventRef:'; { available in macos 10.5 }
    function CGEvent: CGEventRef; message 'CGEvent'; { available in macos 10.5 }
    class function eventWithCGEvent (cgEvent_: CGEventRef): NSEvent; message 'eventWithCGEvent:'; { available in macos 10.5 }
    class procedure setMouseCoalescingEnabled(newValue: objcbool); message 'setMouseCoalescingEnabled:'; { available in macos 10.5 }
    class function isMouseCoalescingEnabled: objcbool; message 'isMouseCoalescingEnabled'; { available in macos 10.5 }
    function magnification: CGFloat; message 'magnification'; { available in macos 10.5 }
    function deviceID: NSUInteger; message 'deviceID';
    function rotation: single; message 'rotation';
    function absoluteX: NSInteger; message 'absoluteX';
    function absoluteY: NSInteger; message 'absoluteY';
    function absoluteZ: NSInteger; message 'absoluteZ';
    function buttonMask: NSEventButtonMask; message 'buttonMask';
    function tilt: NSPoint; message 'tilt';
    function tangentialPressure: single; message 'tangentialPressure';
    function vendorDefined: id; message 'vendorDefined';
    function vendorID: NSUInteger; message 'vendorID';
    function tabletID: NSUInteger; message 'tabletID';
    function pointingDeviceID: NSUInteger; message 'pointingDeviceID';
    function systemTabletID: NSUInteger; message 'systemTabletID';
    function vendorPointingDeviceType: NSUInteger; message 'vendorPointingDeviceType';
    function pointingDeviceSerialNumber: NSUInteger; message 'pointingDeviceSerialNumber';
    function uniqueID: culonglong; message 'uniqueID';
    function capabilityMask: NSUInteger; message 'capabilityMask';
    function pointingDeviceType: NSPointingDeviceType; message 'pointingDeviceType';
    function isEnteringProximity: objcbool; message 'isEnteringProximity';
    function touchesMatchingPhase_inView (phase: NSTouchPhase; view: NSView): NSSet; message 'touchesMatchingPhase:inView:'; { available in macos 10.6 }
    function allTouches: NSSet; message 'allTouches'; { available in macos 10.12 }
    function touchesForView (view: NSView): NSSet; message 'touchesForView:'; { available in macos 10.12 }
    function coalescedTouchesForTouch (touch: NSTouch): NSArray; message 'coalescedTouchesForTouch:'; { available in macos 10.12.2 }
    function phase: NSEventPhase; message 'phase'; { available in macos 10.7 }
    function stage: NSInteger; message 'stage'; { available in macos 10.10.3 }
    function stageTransition: CGFloat; message 'stageTransition'; { available in macos 10.10.3 }
    function associatedEventsMask: NSEventMask; message 'associatedEventsMask'; { available in macos 10.10.3 }
    function pressureBehavior: NSPressureBehavior; message 'pressureBehavior'; { available in macos 10.11 }
    class function isSwipeTrackingFromScrollEventsEnabled: objcbool; message 'isSwipeTrackingFromScrollEventsEnabled'; { available in macos 10.7 }
    procedure trackSwipeEventWithOptions_dampenAmountThresholdMin_max_usingHandler (options: NSEventSwipeTrackingOptions; minDampenThreshold: CGFloat; maxDampenThreshold: CGFloat; trackingHandler: NSEventTrackSwipeEventWithOptionsCallback); message 'trackSwipeEventWithOptions:dampenAmountThresholdMin:max:usingHandler:'; { available in macos 10.7 }
    class procedure startPeriodicEventsAfterDelay_withPeriod (delay: NSTimeInterval; period: NSTimeInterval); message 'startPeriodicEventsAfterDelay:withPeriod:';
    class procedure stopPeriodicEvents; message 'stopPeriodicEvents';
    class function mouseEventWithType_location_modifierFlags_timestamp_windowNumber_context_eventNumber_clickCount_pressure (type_: NSEventType; location: NSPoint; flags: NSEventModifierFlags; time: NSTimeInterval; wNum: NSInteger; unusedPassNil: NSGraphicsContext; eNum: NSInteger; cNum: NSInteger; pressure_: single): NSEvent; message 'mouseEventWithType:location:modifierFlags:timestamp:windowNumber:context:eventNumber:clickCount:pressure:';
    class function keyEventWithType_location_modifierFlags_timestamp_windowNumber_context_characters_charactersIgnoringModifiers_isARepeat_keyCode (type_: NSEventType; location: NSPoint; flags: NSEventModifierFlags; time: NSTimeInterval; wNum: NSInteger; unusedPassNil: NSGraphicsContext; keys: NSString; ukeys: NSString; flag: objcbool; code: cushort): NSEvent; message 'keyEventWithType:location:modifierFlags:timestamp:windowNumber:context:characters:charactersIgnoringModifiers:isARepeat:keyCode:';
    class function enterExitEventWithType_location_modifierFlags_timestamp_windowNumber_context_eventNumber_trackingNumber_userData (type_: NSEventType; location: NSPoint; flags: NSEventModifierFlags; time: NSTimeInterval; wNum: NSInteger; unusedPassNil: NSGraphicsContext; eNum: NSInteger; tNum: NSInteger; data: pointer): NSEvent; message 'enterExitEventWithType:location:modifierFlags:timestamp:windowNumber:context:eventNumber:trackingNumber:userData:';
    class function otherEventWithType_location_modifierFlags_timestamp_windowNumber_context_subtype_data1_data2 (type_: NSEventType; location: NSPoint; flags: NSEventModifierFlags; time: NSTimeInterval; wNum: NSInteger; unusedPassNil: NSGraphicsContext; subtype_: cshort; d1: NSInteger; d2: NSInteger): NSEvent; message 'otherEventWithType:location:modifierFlags:timestamp:windowNumber:context:subtype:data1:data2:';
    class function mouseLocation: NSPoint; message 'mouseLocation';
    class function modifierFlags_: NSEventModifierFlags; message 'modifierFlags'; { available in macos 10.6 }
    class function pressedMouseButtons: NSUInteger; message 'pressedMouseButtons'; { available in macos 10.6 }
    class function doubleClickInterval: NSTimeInterval; message 'doubleClickInterval'; { available in macos 10.6 }
    class function keyRepeatDelay: NSTimeInterval; message 'keyRepeatDelay'; { available in macos 10.6 }
    class function keyRepeatInterval: NSTimeInterval; message 'keyRepeatInterval'; { available in macos 10.6 }
    class function addGlobalMonitorForEventsMatchingMask_handler (mask: NSEventMask; block: NSEventAddGlobalMonitorForEventsMatchingMaskCallback): id; message 'addGlobalMonitorForEventsMatchingMask:handler:'; { available in macos 10.6 }
    class function addLocalMonitorForEventsMatchingMask_handler (mask: NSEventMask; block: NSEventAddLocalMonitorForEventsMatchingMaskCallback): id; message 'addLocalMonitorForEventsMatchingMask:handler:'; { available in macos 10.6 }
    class procedure removeMonitor (eventMonitor: id); message 'removeMonitor:'; { available in macos 10.6 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

{$ifdef TYPES}
const
  NSUpArrowFunctionKey = $F700;
  NSDownArrowFunctionKey = $F701;
  NSLeftArrowFunctionKey = $F702;
  NSRightArrowFunctionKey = $F703;
  NSF1FunctionKey = $F704;
  NSF2FunctionKey = $F705;
  NSF3FunctionKey = $F706;
  NSF4FunctionKey = $F707;
  NSF5FunctionKey = $F708;
  NSF6FunctionKey = $F709;
  NSF7FunctionKey = $F70A;
  NSF8FunctionKey = $F70B;
  NSF9FunctionKey = $F70C;
  NSF10FunctionKey = $F70D;
  NSF11FunctionKey = $F70E;
  NSF12FunctionKey = $F70F;
  NSF13FunctionKey = $F710;
  NSF14FunctionKey = $F711;
  NSF15FunctionKey = $F712;
  NSF16FunctionKey = $F713;
  NSF17FunctionKey = $F714;
  NSF18FunctionKey = $F715;
  NSF19FunctionKey = $F716;
  NSF20FunctionKey = $F717;
  NSF21FunctionKey = $F718;
  NSF22FunctionKey = $F719;
  NSF23FunctionKey = $F71A;
  NSF24FunctionKey = $F71B;
  NSF25FunctionKey = $F71C;
  NSF26FunctionKey = $F71D;
  NSF27FunctionKey = $F71E;
  NSF28FunctionKey = $F71F;
  NSF29FunctionKey = $F720;
  NSF30FunctionKey = $F721;
  NSF31FunctionKey = $F722;
  NSF32FunctionKey = $F723;
  NSF33FunctionKey = $F724;
  NSF34FunctionKey = $F725;
  NSF35FunctionKey = $F726;
  NSInsertFunctionKey = $F727;
  NSDeleteFunctionKey = $F728;
  NSHomeFunctionKey = $F729;
  NSBeginFunctionKey = $F72A;
  NSEndFunctionKey = $F72B;
  NSPageUpFunctionKey = $F72C;
  NSPageDownFunctionKey = $F72D;
  NSPrintScreenFunctionKey = $F72E;
  NSScrollLockFunctionKey = $F72F;
  NSPauseFunctionKey = $F730;
  NSSysReqFunctionKey = $F731;
  NSBreakFunctionKey = $F732;
  NSResetFunctionKey = $F733;
  NSStopFunctionKey = $F734;
  NSMenuFunctionKey = $F735;
  NSUserFunctionKey = $F736;
  NSSystemFunctionKey = $F737;
  NSPrintFunctionKey = $F738;
  NSClearLineFunctionKey = $F739;
  NSClearDisplayFunctionKey = $F73A;
  NSInsertLineFunctionKey = $F73B;
  NSDeleteLineFunctionKey = $F73C;
  NSInsertCharFunctionKey = $F73D;
  NSDeleteCharFunctionKey = $F73E;
  NSPrevFunctionKey = $F73F;
  NSNextFunctionKey = $F740;
  NSSelectFunctionKey = $F741;
  NSExecuteFunctionKey = $F742;
  NSUndoFunctionKey = $F743;
  NSRedoFunctionKey = $F744;
  NSFindFunctionKey = $F745;
  NSHelpFunctionKey = $F746;
  NSModeSwitchFunctionKey = $F747;
{$endif}

