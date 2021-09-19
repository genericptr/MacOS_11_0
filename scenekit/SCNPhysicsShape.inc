{ Parsed from SceneKit.framework SCNPhysicsShape.h }

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
  SCNPhysicsShapeTypeKey: SCNPhysicsShapeOption { available in macos 10.10 }; cvar; external;
  SCNPhysicsShapeKeepAsCompoundKey: SCNPhysicsShapeOption { available in macos 10.10 }; cvar; external;
  SCNPhysicsShapeScaleKey: SCNPhysicsShapeOption { available in macos 10.10 }; cvar; external;
  SCNPhysicsShapeOptionCollisionMargin: SCNPhysicsShapeOption { available in macos 10.12, ios 10.0, tvos 10.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCNPhysicsShapeType = NSString;
  SCNPhysicsShapeTypePtr = ^SCNPhysicsShapeType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNPhysicsShapeTypeBoundingBox: SCNPhysicsShapeType { available in macos 10.10 }; cvar; external;
  SCNPhysicsShapeTypeConvexHull: SCNPhysicsShapeType { available in macos 10.10 }; cvar; external;
  SCNPhysicsShapeTypeConcavePolyhedron: SCNPhysicsShapeType { available in macos 10.10 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SCNPhysicsShape = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function shapeWithGeometry_options (geometry: SCNGeometry; options: NSDictionary): id; message 'shapeWithGeometry:options:';
    class function shapeWithNode_options (node: SCNNode; options: NSDictionary): id; message 'shapeWithNode:options:';
    class function shapeWithShapes_transforms (shapes: NSArray; transforms: NSArray): id; message 'shapeWithShapes:transforms:';
    function options: NSDictionary; message 'options'; { available in macos 10.11, ios 9.0 }
    function sourceObject: id; message 'sourceObject'; { available in macos 10.11, ios 9.0 }
    function transforms: NSArray; message 'transforms'; { available in macos 10.11, ios 9.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

