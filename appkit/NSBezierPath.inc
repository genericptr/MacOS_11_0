{ Parsed from AppKit.framework NSBezierPath.h }

{$ifdef TYPES}
type
  NSBezierPathPtr = ^NSBezierPath;
{$endif}

{$ifdef TYPES}
type
  NSLineCapStyle = NSUInteger;
  NSLineCapStylePtr = ^NSLineCapStyle;

const
  NSLineCapStyleButt = 0;
  NSLineCapStyleRound = 1;
  NSLineCapStyleSquare = 2;

type
  NSLineJoinStyle = NSUInteger;
  NSLineJoinStylePtr = ^NSLineJoinStyle;

const
  NSLineJoinStyleMiter = 0;
  NSLineJoinStyleRound = 1;
  NSLineJoinStyleBevel = 2;

type
  NSWindingRule = NSUInteger;
  NSWindingRulePtr = ^NSWindingRule;

const
  NSWindingRuleNonZero = 0;
  NSWindingRuleEvenOdd = 1;

type
  NSBezierPathElement = NSUInteger;
  NSBezierPathElementPtr = ^NSBezierPathElement;

const
  NSBezierPathElementMoveTo = 0;
  NSBezierPathElementLineTo = 1;
  NSBezierPathElementCurveTo = 2;
  NSBezierPathElementClosePath = 3;
{$endif}

{$ifdef CLASSES}

type
  NSBezierPath = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function bezierPath: NSBezierPath; message 'bezierPath';
    class function bezierPathWithRect (rect: NSRect): NSBezierPath; message 'bezierPathWithRect:';
    class function bezierPathWithOvalInRect (rect: NSRect): NSBezierPath; message 'bezierPathWithOvalInRect:';
    class function bezierPathWithRoundedRect_xRadius_yRadius (rect: NSRect; xRadius: CGFloat; yRadius: CGFloat): NSBezierPath; message 'bezierPathWithRoundedRect:xRadius:yRadius:'; { available in macos 10.5 }
    class procedure fillRect (rect: NSRect); message 'fillRect:';
    class procedure strokeRect (rect: NSRect); message 'strokeRect:';
    class procedure clipRect (rect: NSRect); message 'clipRect:';
    class procedure strokeLineFromPoint_toPoint (point1: NSPoint; point2: NSPoint); message 'strokeLineFromPoint:toPoint:';
    class procedure drawPackedGlyphs_atPoint (packedGlyphs: PChar; point: NSPoint); message 'drawPackedGlyphs:atPoint:';
    class procedure setDefaultMiterLimit(newValue: CGFloat); message 'setDefaultMiterLimit:';
    class function defaultMiterLimit: CGFloat; message 'defaultMiterLimit';
    class procedure setDefaultFlatness(newValue: CGFloat); message 'setDefaultFlatness:';
    class function defaultFlatness: CGFloat; message 'defaultFlatness';
    class procedure setDefaultWindingRule(newValue: NSWindingRule); message 'setDefaultWindingRule:';
    class function defaultWindingRule: NSWindingRule; message 'defaultWindingRule';
    class procedure setDefaultLineCapStyle(newValue: NSLineCapStyle); message 'setDefaultLineCapStyle:';
    class function defaultLineCapStyle: NSLineCapStyle; message 'defaultLineCapStyle';
    class procedure setDefaultLineJoinStyle(newValue: NSLineJoinStyle); message 'setDefaultLineJoinStyle:';
    class function defaultLineJoinStyle: NSLineJoinStyle; message 'defaultLineJoinStyle';
    class procedure setDefaultLineWidth(newValue: CGFloat); message 'setDefaultLineWidth:';
    class function defaultLineWidth: CGFloat; message 'defaultLineWidth';
    procedure moveToPoint (point: NSPoint); message 'moveToPoint:';
    procedure lineToPoint (point: NSPoint); message 'lineToPoint:';
    procedure curveToPoint_controlPoint1_controlPoint2 (endPoint: NSPoint; controlPoint1: NSPoint; controlPoint2: NSPoint); message 'curveToPoint:controlPoint1:controlPoint2:';
    procedure closePath; message 'closePath';
    procedure removeAllPoints; message 'removeAllPoints';
    procedure relativeMoveToPoint (point: NSPoint); message 'relativeMoveToPoint:';
    procedure relativeLineToPoint (point: NSPoint); message 'relativeLineToPoint:';
    procedure relativeCurveToPoint_controlPoint1_controlPoint2 (endPoint: NSPoint; controlPoint1: NSPoint; controlPoint2: NSPoint); message 'relativeCurveToPoint:controlPoint1:controlPoint2:';
    procedure setLineWidth(newValue: CGFloat); message 'setLineWidth:';
    function lineWidth: CGFloat; message 'lineWidth';
    procedure setLineCapStyle(newValue: NSLineCapStyle); message 'setLineCapStyle:';
    function lineCapStyle: NSLineCapStyle; message 'lineCapStyle';
    procedure setLineJoinStyle(newValue: NSLineJoinStyle); message 'setLineJoinStyle:';
    function lineJoinStyle: NSLineJoinStyle; message 'lineJoinStyle';
    procedure setWindingRule(newValue: NSWindingRule); message 'setWindingRule:';
    function windingRule: NSWindingRule; message 'windingRule';
    procedure setMiterLimit(newValue: CGFloat); message 'setMiterLimit:';
    function miterLimit: CGFloat; message 'miterLimit';
    procedure setFlatness(newValue: CGFloat); message 'setFlatness:';
    function flatness: CGFloat; message 'flatness';
    procedure getLineDash_count_phase (pattern: CGFloatPtr; count: NSIntegerPtr; phase: CGFloatPtr); message 'getLineDash:count:phase:';
    procedure setLineDash_count_phase (pattern: CGFloatPtr; count: NSInteger; phase: CGFloat); message 'setLineDash:count:phase:';
    procedure stroke; message 'stroke';
    procedure fill; message 'fill';
    procedure addClip; message 'addClip';
    procedure setClip; message 'setClip';
    function bezierPathByFlatteningPath: NSBezierPath; message 'bezierPathByFlatteningPath';
    function bezierPathByReversingPath: NSBezierPath; message 'bezierPathByReversingPath';
    procedure transformUsingAffineTransform (transform: NSAffineTransform); message 'transformUsingAffineTransform:';
    function isEmpty: objcbool; message 'isEmpty';
    function currentPoint: NSPoint; message 'currentPoint';
    function controlPointBounds: NSRect; message 'controlPointBounds';
    function bounds: NSRect; message 'bounds';
    function elementCount: NSInteger; message 'elementCount';
    function elementAtIndex_associatedPoints (index: NSInteger; points: NSPointArray): NSBezierPathElement; message 'elementAtIndex:associatedPoints:';
    function elementAtIndex (index: NSInteger): NSBezierPathElement; message 'elementAtIndex:';
    procedure setAssociatedPoints_atIndex (points: NSPointArray; index: NSInteger); message 'setAssociatedPoints:atIndex:';
    procedure appendBezierPath (path: NSBezierPath); message 'appendBezierPath:';
    procedure appendBezierPathWithRect (rect: NSRect); message 'appendBezierPathWithRect:';
    procedure appendBezierPathWithPoints_count (points: NSPointArray; count: NSInteger); message 'appendBezierPathWithPoints:count:';
    procedure appendBezierPathWithOvalInRect (rect: NSRect); message 'appendBezierPathWithOvalInRect:';
    procedure appendBezierPathWithArcWithCenter_radius_startAngle_endAngle_clockwise (center: NSPoint; radius: CGFloat; startAngle: CGFloat; endAngle: CGFloat; clockwise: objcbool); message 'appendBezierPathWithArcWithCenter:radius:startAngle:endAngle:clockwise:';
    procedure appendBezierPathWithArcWithCenter_radius_startAngle_endAngle (center: NSPoint; radius: CGFloat; startAngle: CGFloat; endAngle: CGFloat); message 'appendBezierPathWithArcWithCenter:radius:startAngle:endAngle:';
    procedure appendBezierPathWithArcFromPoint_toPoint_radius (point1: NSPoint; point2: NSPoint; radius: CGFloat); message 'appendBezierPathWithArcFromPoint:toPoint:radius:';
    procedure appendBezierPathWithCGGlyph_inFont (glyph: CGGlyph; font: NSFont); message 'appendBezierPathWithCGGlyph:inFont:'; { available in macos 10.13 }
    procedure appendBezierPathWithCGGlyphs_count_inFont (glyphs: CGGlyphPtr; count: NSInteger; font: NSFont); message 'appendBezierPathWithCGGlyphs:count:inFont:'; { available in macos 10.13 }
    procedure appendBezierPathWithRoundedRect_xRadius_yRadius (rect: NSRect; xRadius: CGFloat; yRadius: CGFloat); message 'appendBezierPathWithRoundedRect:xRadius:yRadius:'; { available in macos 10.5 }
    function containsPoint (point: NSPoint): objcbool; message 'containsPoint:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSBezierPathDeprecated = objccategory external (NSBezierPath)
    function cachesBezierPath: objcbool; message 'cachesBezierPath'; deprecated;
    procedure setCachesBezierPath (flag: objcbool); message 'setCachesBezierPath:'; deprecated;
    procedure appendBezierPathWithGlyph_inFont (glyph: NSGlyph; font: NSFont); message 'appendBezierPathWithGlyph:inFont:'; deprecated 'Use -appendBezierPathWithCGGlyph:inFont: instead';
    procedure appendBezierPathWithGlyphs_count_inFont (glyphs: NSGlyphPtr; count: NSInteger; font: NSFont); message 'appendBezierPathWithGlyphs:count:inFont:'; deprecated 'Use -appendBezierPathWithCGGlyphs:count:inFont: instead';
    procedure appendBezierPathWithPackedGlyphs (packedGlyphs: PChar); message 'appendBezierPathWithPackedGlyphs:'; deprecated 'Use -appendBezierPathWithCGGlyphs:count:inFont: instead';
  end;
{$endif}

{$ifdef TYPES}
const
  NSButtLineCapStyle = NSLineCapStyleButt deprecated 'replace with NSLineCapStyleButt';
  NSRoundLineCapStyle = NSLineCapStyleRound deprecated 'replace with NSLineCapStyleRound';
  NSSquareLineCapStyle = NSLineCapStyleSquare deprecated 'replace with NSLineCapStyleSquare';
  NSMiterLineJoinStyle = NSLineJoinStyleMiter deprecated 'replace with NSLineJoinStyleMiter';
  NSRoundLineJoinStyle = NSLineJoinStyleRound deprecated 'replace with NSLineJoinStyleRound';
  NSBevelLineJoinStyle = NSLineJoinStyleBevel deprecated 'replace with NSLineJoinStyleBevel';
  NSNonZeroWindingRule = NSWindingRuleNonZero deprecated 'replace with NSWindingRuleNonZero';
  NSEvenOddWindingRule = NSWindingRuleEvenOdd deprecated 'replace with NSWindingRuleEvenOdd';
  NSMoveToBezierPathElement = NSBezierPathElementMoveTo deprecated 'replace with NSBezierPathElementMoveTo';
  NSLineToBezierPathElement = NSBezierPathElementLineTo deprecated 'replace with NSBezierPathElementLineTo';
  NSCurveToBezierPathElement = NSBezierPathElementCurveTo deprecated 'replace with NSBezierPathElementCurveTo';
  NSClosePathBezierPathElement = NSBezierPathElementClosePath deprecated 'replace with NSBezierPathElementClosePath';
{$endif}

