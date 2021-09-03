{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFBorder.h }

{$ifdef TYPES}
type
  PDFBorderPtr = ^PDFBorder;
{$endif}

{$ifdef TYPES}
type
  PDFBorderStyle = NSInteger;
  PDFBorderStylePtr = ^PDFBorderStyle;

const
  kPDFBorderStyleSolid = 0;
  kPDFBorderStyleDashed = 1;
  kPDFBorderStyleBeveled = 2;
  kPDFBorderStyleInset = 3;
  kPDFBorderStyleUnderline = 4;

type
  PDFBorderKey = NSString;
  PDFBorderKeyPtr = ^PDFBorderKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PDFBorderKeyLineWidth: PDFBorderKey { available in 10_13, 11_0 }; cvar; external;
  PDFBorderKeyStyle: PDFBorderKey { available in 10_13, 11_0 }; cvar; external;
  PDFBorderKeyDashPattern: PDFBorderKey { available in 10_13, 11_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PDFBorder = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  private
    _private: PDFBorderPrivateVars;
  public
    procedure setStyle(newValue: PDFBorderStyle); message 'setStyle:';
    function style: PDFBorderStyle; message 'style';
    procedure setLineWidth(newValue: CGFloat); message 'setLineWidth:';
    function lineWidth: CGFloat; message 'lineWidth';
    procedure setDashPattern(newValue: NSArray); message 'setDashPattern:';
    function dashPattern: NSArray; message 'dashPattern';
    function borderKeyValues: NSDictionary; message 'borderKeyValues';
    procedure drawInRect (rect: PDFRect); message 'drawInRect:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

