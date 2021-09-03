{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNPhysicsShape.h }

{$ifdef TYPES}
type
  SCNPhysicsShapePtr = ^SCNPhysicsShape;
{$endif}

{$ifdef TYPES}
type
  SCNPhysicsShapeOption = NSString;
  SCNPhysicsShapeOptionPtr = ^SCNPhysicsShapeOption;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNPhysicsShapeTypeKey: SCNPhysicsShapeOption { available in macos  }; cvar; external;
  SCNPhysicsShapeKeepAsCompoundKey: SCNPhysicsShapeOption { available in macos  }; cvar; external;
  SCNPhysicsShapeScaleKey: SCNPhysicsShapeOption { available in macos  }; cvar; external;
  SCNPhysicsShapeOptionCollisionMargin: SCNPhysicsShapeOption { available in macos , ios , tvos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCNPhysicsShapeType = NSString;
  SCNPhysicsShapeTypePtr = ^SCNPhysicsShapeType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNPhysicsShapeTypeBoundingBox: SCNPhysicsShapeType { available in macos  }; cvar; external;
  SCNPhysicsShapeTypeConvexHull: SCNPhysicsShapeType { available in macos  }; cvar; external;
  SCNPhysicsShapeTypeConcavePolyhedron: SCNPhysicsShapeType { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SCNPhysicsShape = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function shapeWithGeometry_options (geometry: SCNGeometry; options: NSDictionary): id; message 'shapeWithGeometry:options:';
    class function shapeWithNode_options (node: SCNNode; options: NSDictionary): id; message 'shapeWithNode:options:';
    class function shapeWithShapes_transforms (shapes: NSArray; transforms: NSArray): id; message 'shapeWithShapes:transforms:';
    function options: NSDictionary; message 'options'; { available in macos , ios  }
    function sourceObject: id; message 'sourceObject'; { available in macos , ios  }
    function transforms: NSArray; message 'transforms'; { available in macos , ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

