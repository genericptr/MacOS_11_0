{ Parsed from QuartzCore.framework CATextLayer.h }

{$ifdef TYPES}
type
  CATextLayerPtr = ^CATextLayer;
{$endif}

{$ifdef TYPES}
type
  CATextLayerTruncationMode = NSString;
  CATextLayerTruncationModePtr = ^CATextLayerTruncationMode;
  CATextLayerAlignmentMode = NSString;
  CATextLayerAlignmentModePtr = ^CATextLayerAlignmentMode;
{$endif}

{$ifdef CLASSES}

type
  CATextLayer = objcclass external (CALayer)
  private
    _state: CATextLayerPrivatePtr;
  public
    procedure setString(newValue: id); message 'setString:';
    function string_: id; message 'string';
    procedure setFont(newValue: CFTypeRef); message 'setFont:';
    function font: CFTypeRef; message 'font';
    procedure setFontSize(newValue: CGFloat); message 'setFontSize:';
    function fontSize: CGFloat; message 'fontSize';
    procedure setForegroundColor(newValue: CGColorRef); message 'setForegroundColor:';
    function foregroundColor: CGColorRef; message 'foregroundColor';
    procedure setWrapped(newValue: objcbool); message 'setWrapped:';
    function isWrapped: objcbool; message 'isWrapped';
    procedure setTruncationMode(newValue: CATextLayerTruncationMode); message 'setTruncationMode:';
    function truncationMode: CATextLayerTruncationMode; message 'truncationMode';
    procedure setAlignmentMode(newValue: CATextLayerAlignmentMode); message 'setAlignmentMode:';
    function alignmentMode: CATextLayerAlignmentMode; message 'alignmentMode';
    procedure setAllowsFontSubpixelQuantization(newValue: objcbool); message 'setAllowsFontSubpixelQuantization:';
    function allowsFontSubpixelQuantization: objcbool; message 'allowsFontSubpixelQuantization';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCATruncationNone: CATextLayerTruncationMode { available in macos 10.5, ios 3.2, watchos 2.0, tvos 9.0 }; cvar; external;
  kCATruncationStart: CATextLayerTruncationMode { available in macos 10.5, ios 3.2, watchos 2.0, tvos 9.0 }; cvar; external;
  kCATruncationEnd: CATextLayerTruncationMode { available in macos 10.5, ios 3.2, watchos 2.0, tvos 9.0 }; cvar; external;
  kCATruncationMiddle: CATextLayerTruncationMode { available in macos 10.5, ios 3.2, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAAlignmentNatural: CATextLayerAlignmentMode { available in macos 10.5, ios 3.2, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAAlignmentLeft: CATextLayerAlignmentMode { available in macos 10.5, ios 3.2, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAAlignmentRight: CATextLayerAlignmentMode { available in macos 10.5, ios 3.2, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAAlignmentCenter: CATextLayerAlignmentMode { available in macos 10.5, ios 3.2, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAAlignmentJustified: CATextLayerAlignmentMode { available in macos 10.5, ios 3.2, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

