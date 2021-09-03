{ Parsed from QuartzCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/QuartzCore.framework/Headers/CAShapeLayer.h }

{$ifdef TYPES}
type
  CAShapeLayerPtr = ^CAShapeLayer;
{$endif}

{$ifdef TYPES}
type
  CAShapeLayerFillRule = NSString;
  CAShapeLayerFillRulePtr = ^CAShapeLayerFillRule;
  CAShapeLayerLineJoin = NSString;
  CAShapeLayerLineJoinPtr = ^CAShapeLayerLineJoin;
  CAShapeLayerLineCap = NSString;
  CAShapeLayerLineCapPtr = ^CAShapeLayerLineCap;
{$endif}

{$ifdef CLASSES}

type
  CAShapeLayer = objcclass external (CALayer)
  public
    procedure setPath(newValue: CGPathRef); message 'setPath:';
    function path: CGPathRef; message 'path';
    procedure setFillColor(newValue: CGColorRef); message 'setFillColor:';
    function fillColor: CGColorRef; message 'fillColor';
    procedure setFillRule(newValue: CAShapeLayerFillRule); message 'setFillRule:';
    function fillRule: CAShapeLayerFillRule; message 'fillRule';
    procedure setStrokeColor(newValue: CGColorRef); message 'setStrokeColor:';
    function strokeColor: CGColorRef; message 'strokeColor';
    procedure setStrokeStart(newValue: CGFloat); message 'setStrokeStart:';
    function strokeStart: CGFloat; message 'strokeStart';
    procedure setStrokeEnd(newValue: CGFloat); message 'setStrokeEnd:';
    function strokeEnd: CGFloat; message 'strokeEnd';
    procedure setLineWidth(newValue: CGFloat); message 'setLineWidth:';
    function lineWidth: CGFloat; message 'lineWidth';
    procedure setMiterLimit(newValue: CGFloat); message 'setMiterLimit:';
    function miterLimit: CGFloat; message 'miterLimit';
    procedure setLineCap(newValue: CAShapeLayerLineCap); message 'setLineCap:';
    function lineCap: CAShapeLayerLineCap; message 'lineCap';
    procedure setLineJoin(newValue: CAShapeLayerLineJoin); message 'setLineJoin:';
    function lineJoin: CAShapeLayerLineJoin; message 'lineJoin';
    procedure setLineDashPhase(newValue: CGFloat); message 'setLineDashPhase:';
    function lineDashPhase: CGFloat; message 'lineDashPhase';
    procedure setLineDashPattern(newValue: NSArray); message 'setLineDashPattern:';
    function lineDashPattern: NSArray; message 'lineDashPattern';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCAFillRuleNonZero: CAShapeLayerFillRule { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAFillRuleEvenOdd: CAShapeLayerFillRule { available in macos , ios , watchos , tvos  }; cvar; external;
  kCALineJoinMiter: CAShapeLayerLineJoin { available in macos , ios , watchos , tvos  }; cvar; external;
  kCALineJoinRound: CAShapeLayerLineJoin { available in macos , ios , watchos , tvos  }; cvar; external;
  kCALineJoinBevel: CAShapeLayerLineJoin { available in macos , ios , watchos , tvos  }; cvar; external;
  kCALineCapButt: CAShapeLayerLineCap { available in macos , ios , watchos , tvos  }; cvar; external;
  kCALineCapRound: CAShapeLayerLineCap { available in macos , ios , watchos , tvos  }; cvar; external;
  kCALineCapSquare: CAShapeLayerLineCap { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

