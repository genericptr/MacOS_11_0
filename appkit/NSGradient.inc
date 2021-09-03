{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSGradient.h }

{$ifdef TYPES}
type
  NSGradientPtr = ^NSGradient;
{$endif}

{$ifdef TYPES}
type
  NSGradientDrawingOptions = NSUInteger;
  NSGradientDrawingOptionsPtr = ^NSGradientDrawingOptions;

const
  NSGradientDrawsBeforeStartingLocation = 1 shl 0;
  NSGradientDrawsAfterEndingLocation = 1 shl 1;
{$endif}

{$ifdef CLASSES}

type
  NSGradient = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function initWithStartingColor_endingColor (startingColor: NSColor; endingColor: NSColor): id; message 'initWithStartingColor:endingColor:';
    function initWithColors (colorArray: NSArray): id; message 'initWithColors:';
    function initWithColorsAndLocations (firstColor: NSColor): id; varargs; message 'initWithColorsAndLocations:';
    function initWithColors_atLocations_colorSpace (colorArray: NSArray; locations: CGFloatPtr; colorSpace: NSColorSpace): id; message 'initWithColors:atLocations:colorSpace:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure drawFromPoint_toPoint_options (startingPoint: NSPoint; endingPoint: NSPoint; options: NSGradientDrawingOptions); message 'drawFromPoint:toPoint:options:';
    procedure drawInRect_angle (rect: NSRect; angle: CGFloat); message 'drawInRect:angle:';
    procedure drawInBezierPath_angle (path: NSBezierPath; angle: CGFloat); message 'drawInBezierPath:angle:';
    procedure drawFromCenter_radius_toCenter_radius_options (startCenter: NSPoint; startRadius: CGFloat; endCenter: NSPoint; endRadius: CGFloat; options: NSGradientDrawingOptions); message 'drawFromCenter:radius:toCenter:radius:options:';
    procedure drawInRect_relativeCenterPosition (rect: NSRect; relativeCenterPosition: NSPoint); message 'drawInRect:relativeCenterPosition:';
    procedure drawInBezierPath_relativeCenterPosition (path: NSBezierPath; relativeCenterPosition: NSPoint); message 'drawInBezierPath:relativeCenterPosition:';
    function colorSpace: NSColorSpace; message 'colorSpace';
    function numberOfColorStops: NSInteger; message 'numberOfColorStops';
    procedure getColor_location_atIndex (color: NSColorPtr; location: CGFloatPtr; index: NSInteger); message 'getColor:location:atIndex:';
    function interpolatedColorAtLocation (location: CGFloat): NSColor; message 'interpolatedColorAtLocation:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}
