{ Parsed from AppKit.framework NSTouch.h }

{$ifdef TYPES}
type
  NSTouchPtr = ^NSTouch;
{$endif}

{$ifdef TYPES}
type
  NSTouchPhase = NSUInteger;
  NSTouchPhasePtr = ^NSTouchPhase;

const
  NSTouchPhaseBegan = 1 shl 0;
  NSTouchPhaseMoved = 1 shl 1;
  NSTouchPhaseStationary = 1 shl 2;
  NSTouchPhaseEnded = 1 shl 3;
  NSTouchPhaseCancelled = 1 shl 4;
  NSTouchPhaseTouching = NSTouchPhaseBegan + NSTouchPhaseMoved + NSTouchPhaseStationary;
  NSTouchPhaseAny = NSUIntegerMax;

type
  NSTouchType = NSInteger;
  NSTouchTypePtr = ^NSTouchType;

const
  NSTouchTypeDirect = 0;
  NSTouchTypeIndirect = 1;

type
  NSTouchTypeMask = NSUInteger;
  NSTouchTypeMaskPtr = ^NSTouchTypeMask;

const
  NSTouchTypeMaskDirect = 1 shl NSTouchTypeDirect;
  NSTouchTypeMaskIndirect = 1 shl NSTouchTypeIndirect;
{$endif}

{$ifdef CLASSES}

type
  NSTouch = objcclass external (NSObject, NSCopyingProtocol)
  public
    function identity: id; message 'identity';
    function phase: NSTouchPhase; message 'phase';
    function normalizedPosition: NSPoint; message 'normalizedPosition';
    function isResting: objcbool; message 'isResting';
    function device: id; message 'device';
    function deviceSize: NSSize; message 'deviceSize';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;


type
  NSTouch_NSTouchBar = objccategory external name 'NSTouchBar' (NSTouch)
    function type_: NSTouchType; message 'type'; { available in macos  }
    function locationInView (view: NSView): NSPoint; message 'locationInView:'; { available in macos  }
    function previousLocationInView (view: NSView): NSPoint; message 'previousLocationInView:'; { available in macos  }
  end;
{$endif}

