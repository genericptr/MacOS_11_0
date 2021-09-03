{ Parsed from SpriteKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SpriteKit.framework/Headers/SKShapeNode.h }

{$ifdef TYPES}
type
  SKShapeNodePtr = ^SKShapeNode;
{$endif}

{$ifdef CLASSES}

type
  SKShapeNode = objcclass external (SKNode)
  public
    class function shapeNodeWithPath (path: CGPathRef): id; message 'shapeNodeWithPath:'; { available in ios , tvos , watchos , macos  }
    class function shapeNodeWithPath_centered (path: CGPathRef; centered: objcbool): id; message 'shapeNodeWithPath:centered:'; { available in ios , tvos , watchos , macos  }
    class function shapeNodeWithRect (rect: CGRect): id; message 'shapeNodeWithRect:'; { available in ios , tvos , watchos , macos  }
    class function shapeNodeWithRectOfSize (size: CGSize): id; message 'shapeNodeWithRectOfSize:'; { available in ios , tvos , watchos , macos  }
    class function shapeNodeWithRect_cornerRadius (rect: CGRect; cornerRadius: CGFloat): id; message 'shapeNodeWithRect:cornerRadius:'; { available in ios , tvos , watchos , macos  }
    class function shapeNodeWithRectOfSize_cornerRadius (size: CGSize; cornerRadius: CGFloat): id; message 'shapeNodeWithRectOfSize:cornerRadius:'; { available in ios , tvos , watchos , macos  }
    class function shapeNodeWithCircleOfRadius (radius: CGFloat): id; message 'shapeNodeWithCircleOfRadius:'; { available in ios , tvos , watchos , macos  }
    class function shapeNodeWithEllipseInRect (rect: CGRect): id; message 'shapeNodeWithEllipseInRect:'; { available in ios , tvos , watchos , macos  }
    class function shapeNodeWithEllipseOfSize (size: CGSize): id; message 'shapeNodeWithEllipseOfSize:'; { available in ios , tvos , watchos , macos  }
    class function shapeNodeWithPoints_count (points: CGPointPtr; numPoints: size_t): id; message 'shapeNodeWithPoints:count:'; { available in ios , tvos , watchos , macos  }
    class function shapeNodeWithSplinePoints_count (points: CGPointPtr; numPoints: size_t): id; message 'shapeNodeWithSplinePoints:count:'; { available in ios , tvos , watchos , macos  }
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
    procedure setFillTexture(newValue: SKTexture); message 'setFillTexture:'; { available in ios , tvos , watchos , macos  }
    function fillTexture: SKTexture; message 'fillTexture'; { available in ios , tvos , watchos , macos  }
    procedure setFillShader(newValue: SKShader); message 'setFillShader:'; { available in ios , tvos , watchos , macos  }
    function fillShader: SKShader; message 'fillShader'; { available in ios , tvos , watchos , macos  }
    procedure setStrokeTexture(newValue: SKTexture); message 'setStrokeTexture:'; { available in ios , tvos , watchos , macos  }
    function strokeTexture: SKTexture; message 'strokeTexture'; { available in ios , tvos , watchos , macos  }
    procedure setStrokeShader(newValue: SKShader); message 'setStrokeShader:'; { available in ios , tvos , watchos , macos  }
    function strokeShader: SKShader; message 'strokeShader'; { available in ios , tvos , watchos , macos  }
    procedure setAttributeValues(newValue: NSDictionary); message 'setAttributeValues:'; { available in ios , tvos , watchos , macos  }
    function attributeValues: NSDictionary; message 'attributeValues'; { available in ios , tvos , watchos , macos  }
    function valueForAttributeNamed (key: NSString): SKAttributeValue; message 'valueForAttributeNamed:'; { available in ios , tvos , watchos , macos  }
    procedure setValue_forAttributeNamed (value: SKAttributeValue; key: NSString); message 'setValue:forAttributeNamed:';
  end;
{$endif}

