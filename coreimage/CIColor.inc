{ Parsed from CoreImage.framework CIColor.h }

{$ifdef TYPES}
type
  CIColorPtr = ^CIColor;
{$endif}

{$ifdef CLASSES}

type
  CIColor = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _priv: pointer;
    _pad:array[0..2] of pointer;
  public
    class function colorWithCGColor (c: CGColorRef): id; message 'colorWithCGColor:';
    class function colorWithRed_green_blue_alpha (r: CGFloat; g: CGFloat; b: CGFloat; a: CGFloat): id; message 'colorWithRed:green:blue:alpha:';
    class function colorWithRed_green_blue (r: CGFloat; g: CGFloat; b: CGFloat): id; message 'colorWithRed:green:blue:';
    class function colorWithRed_green_blue_alpha_colorSpace (r: CGFloat; g: CGFloat; b: CGFloat; a: CGFloat; colorSpace: CGColorSpaceRef): id; message 'colorWithRed:green:blue:alpha:colorSpace:'; { available in macos 10.12, ios 10.0 }
    class function colorWithRed_green_blue_colorSpace (r: CGFloat; g: CGFloat; b: CGFloat; colorSpace: CGColorSpaceRef): id; message 'colorWithRed:green:blue:colorSpace:'; { available in macos 10.12, ios 10.0 }
    class function colorWithString (representation: NSString): id; message 'colorWithString:';
    function initWithCGColor (c: CGColorRef): id; message 'initWithCGColor:'; { NS_DESIGNATED_INITIALIZER }
    function initWithRed_green_blue_alpha (r: CGFloat; g: CGFloat; b: CGFloat; a: CGFloat): id; message 'initWithRed:green:blue:alpha:';
    function initWithRed_green_blue (r: CGFloat; g: CGFloat; b: CGFloat): id; message 'initWithRed:green:blue:'; { available in macos 10.11, ios 9.0 }
    function initWithRed_green_blue_alpha_colorSpace (r: CGFloat; g: CGFloat; b: CGFloat; a: CGFloat; colorSpace: CGColorSpaceRef): id; message 'initWithRed:green:blue:alpha:colorSpace:'; { available in macos 10.12, ios 10.0 }
    function initWithRed_green_blue_colorSpace (r: CGFloat; g: CGFloat; b: CGFloat; colorSpace: CGColorSpaceRef): id; message 'initWithRed:green:blue:colorSpace:'; { available in macos 10.12, ios 10.0 }
    function numberOfComponents: size_t; message 'numberOfComponents';
    function components: CGFloatPtr; message 'components';
    function alpha: CGFloat; message 'alpha';
    function colorSpace: CGColorSpaceRef; message 'colorSpace'; { CF_RETURNS_NOT_RETAINED }
    function red: CGFloat; message 'red';
    function green: CGFloat; message 'green';
    function blue: CGFloat; message 'blue';
    function stringRepresentation: NSString; message 'stringRepresentation';
    class function blackColor: CIColor; message 'blackColor'; { available in macos 10.12, ios 10.0 }
    class function whiteColor: CIColor; message 'whiteColor'; { available in macos 10.12, ios 10.0 }
    class function grayColor: CIColor; message 'grayColor'; { available in macos 10.12, ios 10.0 }
    class function redColor: CIColor; message 'redColor'; { available in macos 10.12, ios 10.0 }
    class function greenColor: CIColor; message 'greenColor'; { available in macos 10.12, ios 10.0 }
    class function blueColor: CIColor; message 'blueColor'; { available in macos 10.12, ios 10.0 }
    class function cyanColor: CIColor; message 'cyanColor'; { available in macos 10.12, ios 10.0 }
    class function magentaColor: CIColor; message 'magentaColor'; { available in macos 10.12, ios 10.0 }
    class function yellowColor: CIColor; message 'yellowColor'; { available in macos 10.12, ios 10.0 }
    class function clearColor: CIColor; message 'clearColor'; { available in macos 10.12, ios 10.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

