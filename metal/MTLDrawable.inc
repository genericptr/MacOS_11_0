{ Parsed from Metal.framework MTLDrawable.h }

{$ifdef TYPES}
type
  MTLDrawableProtocolPtr = ^MTLDrawableProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLDrawablePresentedHandler = reference to procedure (param1: id); cblock; cdecl;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLDrawableProtocol = objcprotocol external name 'MTLDrawable' (NSObjectProtocol)
    procedure present; message 'present';
    procedure presentAtTime (presentationTime: CFTimeInterval); message 'presentAtTime:';
    procedure presentAfterMinimumDuration (duration: CFTimeInterval); message 'presentAfterMinimumDuration:'; { available in macos , ios , macCatalyst  }
    procedure addPresentedHandler (block: MTLDrawablePresentedHandler); message 'addPresentedHandler:'; { available in macos , ios , macCatalyst  }
    function presentedTime: CFTimeInterval; message 'presentedTime'; { available in macos , ios , macCatalyst  }
    function drawableID: NSUInteger; message 'drawableID'; { available in macos , ios , macCatalyst  }
  end;
{$endif}

