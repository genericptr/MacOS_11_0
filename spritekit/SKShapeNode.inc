{ Parsed from SpriteKit.framework SKShapeNode.h }

{$ifdef TYPES}
type
  SKShapeNodePtr = ^SKShapeNode;
{$endif}

{$ifdef CLASSES}

type
  SKShapeNode = objcclass external (SKNode)
  public
    class function shapeNodeWithPath (path: CGPathRef): id; message 'shapeNodeWithPath:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    class function shapeNodeWithPath_centered (path: CGPathRef; centered: objcbool): id; message 'shapeNodeWithPath:centered:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    class function shapeNodeWithRect (rect: CGRect): id; message 'shapeNodeWithRect:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    class function shapeNodeWithRectOfSize (size: CGSize): id; message 'shapeNodeWithRectOfSize:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    class function shapeNodeWithRect_cornerRadius (rect: CGRect; cornerRadius: CGFloat): id; message 'shapeNodeWithRect:cornerRadius:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    class function shapeNodeWithRectOfSize_cornerRadius (size: CGSize; cornerRadius: CGFloat): id; message 'shapeNodeWithRectOfSize:cornerRadius:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    class function shapeNodeWithCircleOfRadius (radius: CGFloat): id; message 'shapeNodeWithCircleOfRadius:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    class function shapeNodeWithEllipseInRect (rect: CGRect): id; message 'shapeNodeWithEllipseInRect:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    class function shapeNodeWithEllipseOfSize (size: CGSize): id; message 'shapeNodeWithEllipseOfSize:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    class function shapeNodeWithPoints_count (points: CGPointPtr; numPoints: size_t): id; message 'shapeNodeWithPoints:count:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    class function shapeNodeWithSplinePoints_count (points: CGPointPtr; numPoints: size_t): id; message 'shapeNodeWithSplinePoints:count:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    procedure setPath(newValue: CGPathRef); message 'setPath:';
    function path: CGPathRef; message 'path';
    procedure setStrokeColor(newValue: SKColor); message 'setStrokeColor:';
    function strokeColor: SKColor; message 'strokeColor';
    procedure setFillColor(newValue: SKColor); message 'setFillColor:';
    function fillColor: SKColor; message 'fillColor';
    procedure setBlendMode(newValue: SKBlendMode); message 'setBlendMode:';
    function blendMode: SKBlendMode; message 'blendMode';
    procedure setAntialiased(newValue: objcbool); message 'setAntialiased:';
    function isAntialiased: objcbool; message 'isAntialiased';
    procedure setLineWidth(newValue: CGFloat); message 'setLineWidth:';
    function lineWidth: CGFloat; message 'lineWidth';
    procedure setGlowWidth(newValue: CGFloat); message 'setGlowWidth:';
    function glowWidth: CGFloat; message 'glowWidth';
    procedure setLineCap(newValue: CGLineCap); message 'setLineCap:';
    function lineCap: CGLineCap; message 'lineCap';
    procedure setLineJoin(newValue: CGLineJoin); message 'setLineJoin:';
    function lineJoin: CGLineJoin; message 'lineJoin';
    procedure setMiterLimit(newValue: CGFloat); message 'setMiterLimit:';
    function miterLimit: CGFloat; message 'miterLimit';
    function lineLength: CGFloat; message 'lineLength';
    procedure setFillTexture(newValue: SKTexture); message 'setFillTexture:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    function fillTexture: SKTexture; message 'fillTexture'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    procedure setFillShader(newValue: SKShader); message 'setFillShader:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    function fillShader: SKShader; message 'fillShader'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    procedure setStrokeTexture(newValue: SKTexture); message 'setStrokeTexture:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    function strokeTexture: SKTexture; message 'strokeTexture'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    procedure setStrokeShader(newValue: SKShader); message 'setStrokeShader:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    function strokeShader: SKShader; message 'strokeShader'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    procedure setAttributeValues(newValue: NSDictionary); message 'setAttributeValues:'; { available in ios 10.0, tvos 10.0, watchos 3.0, macos 10.12 }
    function attributeValues: NSDictionary; message 'attributeValues'; { available in ios 10.0, tvos 10.0, watchos 3.0, macos 10.12 }
    function valueForAttributeNamed (key: NSString): SKAttributeValue; message 'valueForAttributeNamed:'; { available in ios 10.0, tvos 10.0, watchos 3.0, macos 10.12 }
    procedure setValue_forAttributeNamed (value: SKAttributeValue; key: NSString); message 'setValue:forAttributeNamed:';
  end;
{$endif}

