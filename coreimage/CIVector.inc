{ Parsed from CoreImage.framework CIVector.h }

{$ifdef TYPES}
type
  CIVectorPtr = ^CIVector;
{$endif}

{$ifdef CLASSES}

type
  CIVector = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _count: size_t;
    _u: record
      case longint of
        0: (vec:array[0..3] of CGFloat);
        1: (ptr: CGFloatPtr);
    end;
  public
    class function vectorWithValues_count (values: CGFloatPtr; count: size_t): id; message 'vectorWithValues:count:';
    class function vectorWithX (x: CGFloat): id; message 'vectorWithX:';
    class function vectorWithX_Y (x: CGFloat; y: CGFloat): id; message 'vectorWithX:Y:';
    class function vectorWithX_Y_Z (x: CGFloat; y: CGFloat; z: CGFloat): id; message 'vectorWithX:Y:Z:';
    class function vectorWithX_Y_Z_W (x: CGFloat; y: CGFloat; z: CGFloat; w: CGFloat): id; message 'vectorWithX:Y:Z:W:';
    class function vectorWithCGPoint (p: CGPoint): id; message 'vectorWithCGPoint:'; { available in 10_9, 5_0 }
    class function vectorWithCGRect (r: CGRect): id; message 'vectorWithCGRect:'; { available in 10_9, 5_0 }
    class function vectorWithCGAffineTransform (t: CGAffineTransform): id; message 'vectorWithCGAffineTransform:'; { available in 10_9, 5_0 }
    class function vectorWithString (representation: NSString): id; message 'vectorWithString:';
    function initWithValues_count (values: CGFloatPtr; count: size_t): id; message 'initWithValues:count:'; { NS_DESIGNATED_INITIALIZER }
    function initWithX (x: CGFloat): id; message 'initWithX:';
    function initWithX_Y (x: CGFloat; y: CGFloat): id; message 'initWithX:Y:';
    function initWithX_Y_Z (x: CGFloat; y: CGFloat; z: CGFloat): id; message 'initWithX:Y:Z:';
    function initWithX_Y_Z_W (x: CGFloat; y: CGFloat; z: CGFloat; w: CGFloat): id; message 'initWithX:Y:Z:W:';
    function initWithCGPoint (p: CGPoint): id; message 'initWithCGPoint:'; { available in 10_9, 5_0 }
    function initWithCGRect (r: CGRect): id; message 'initWithCGRect:'; { available in 10_9, 5_0 }
    function initWithCGAffineTransform (r: CGAffineTransform): id; message 'initWithCGAffineTransform:'; { available in 10_9, 5_0 }
    function initWithString (representation: NSString): id; message 'initWithString:';
    function valueAtIndex (index: size_t): CGFloat; message 'valueAtIndex:';
    function count: size_t; message 'count';
    function X: CGFloat; message 'X';
    function Y: CGFloat; message 'Y';
    function Z: CGFloat; message 'Z';
    function W: CGFloat; message 'W';
    function CGPointValue: CGPoint; message 'CGPointValue'; { available in 10_9, 5_0 }
    function CGRectValue: CGRect; message 'CGRectValue'; { available in 10_9, 5_0 }
    function CGAffineTransformValue: CGAffineTransform; message 'CGAffineTransformValue'; { available in 10_9, 5_0 }
    function stringRepresentation: NSString; message 'stringRepresentation';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

