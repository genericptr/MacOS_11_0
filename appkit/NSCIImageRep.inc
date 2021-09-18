{ Parsed from AppKit.framework NSCIImageRep.h }

{$ifdef TYPES}
type
  NSCIImageRepPtr = ^NSCIImageRep;
{$endif}

{$ifdef CLASSES}

type
  NSCIImageRep = objcclass external (NSImageRep)
  public
    class function imageRepWithCIImage (image: CIImage): id; message 'imageRepWithCIImage:';
    function initWithCIImage (image: CIImage): id; message 'initWithCIImage:';
    function CIImage_: CIImage; message 'CIImage';
  end;


type
  CIImage_NSAppKitAdditions = objccategory external name 'NSAppKitAdditions' (CIImage)
    function initWithBitmapImageRep (bitmapImageRep: NSBitmapImageRep): id; message 'initWithBitmapImageRep:';
    procedure drawInRect_fromRect_operation_fraction (rect: NSRect; fromRect: NSRect; op: NSCompositingOperation; delta: CGFloat); message 'drawInRect:fromRect:operation:fraction:';
    procedure drawAtPoint_fromRect_operation_fraction (point: NSPoint; fromRect: NSRect; op: NSCompositingOperation; delta: CGFloat); message 'drawAtPoint:fromRect:operation:fraction:';
  end;
{$endif}

