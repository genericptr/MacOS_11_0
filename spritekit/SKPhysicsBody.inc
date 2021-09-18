{ Parsed from SpriteKit.framework SKPhysicsBody.h }

{$ifdef TYPES}
type
  SKPhysicsBodyPtr = ^SKPhysicsBody;
{$endif}

{$ifdef CLASSES}

type
  SKPhysicsBody = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function bodyWithCircleOfRadius (r: CGFloat): SKPhysicsBody; message 'bodyWithCircleOfRadius:';
    class function bodyWithCircleOfRadius_center (r: CGFloat; center: CGPoint): SKPhysicsBody; message 'bodyWithCircleOfRadius:center:';
    class function bodyWithRectangleOfSize (s: CGSize): SKPhysicsBody; message 'bodyWithRectangleOfSize:';
    class function bodyWithRectangleOfSize_center (s: CGSize; center: CGPoint): SKPhysicsBody; message 'bodyWithRectangleOfSize:center:';
    class function bodyWithPolygonFromPath (path: CGPathRef): SKPhysicsBody; message 'bodyWithPolygonFromPath:';
    class function bodyWithEdgeFromPoint_toPoint (p1: CGPoint; p2: CGPoint): SKPhysicsBody; message 'bodyWithEdgeFromPoint:toPoint:';
    class function bodyWithEdgeChainFromPath (path: CGPathRef): SKPhysicsBody; message 'bodyWithEdgeChainFromPath:';
    class function bodyWithEdgeLoopFromPath (path: CGPathRef): SKPhysicsBody; message 'bodyWithEdgeLoopFromPath:';
    class function bodyWithEdgeLoopFromRect (rect: CGRect): SKPhysicsBody; message 'bodyWithEdgeLoopFromRect:';
    class function bodyWithTexture_size (texture: SKTexture; size: CGSize): SKPhysicsBody; message 'bodyWithTexture:size:'; { available in ios , tvos , watchos , macos  }
    class function bodyWithTexture_alphaThreshold_size (texture: SKTexture; alphaThreshold: single; size: CGSize): SKPhysicsBody; message 'bodyWithTexture:alphaThreshold:size:'; { available in ios , tvos , watchos , macos  }
    class function bodyWithBodies (bodies: NSArray): SKPhysicsBody; message 'bodyWithBodies:';
    procedure setDynamic(newValue: objcbool); message 'setDynamic:';
    function isDynamic: objcbool; message 'isDynamic';
    procedure setUsesPreciseCollisionDetection(newValue: objcbool); message 'setUsesPreciseCollisionDetection:';
    function usesPreciseCollisionDetection: objcbool; message 'usesPreciseCollisionDetection';
    procedure setAllowsRotation(newValue: objcbool); message 'setAllowsRotation:';
    function allowsRotation: objcbool; message 'allowsRotation';
    procedure setPinned(newValue: objcbool); message 'setPinned:'; { available in ios , tvos , watchos , macos  }
    function pinned: objcbool; message 'pinned'; { available in ios , tvos , watchos , macos  }
    procedure setResting(newValue: objcbool); message 'setResting:';
    function isResting: objcbool; message 'isResting';
    procedure setFriction(newValue: CGFloat); message 'setFriction:';
    function friction: CGFloat; message 'friction';
    procedure setCharge(newValue: CGFloat); message 'setCharge:'; { available in ios , tvos , watchos , macos  }
    function charge: CGFloat; message 'charge'; { available in ios , tvos , watchos , macos  }
    procedure setRestitution(newValue: CGFloat); message 'setRestitution:';
    function restitution: CGFloat; message 'restitution';
    procedure setLinearDamping(newValue: CGFloat); message 'setLinearDamping:';
    function linearDamping: CGFloat; message 'linearDamping';
    procedure setAngularDamping(newValue: CGFloat); message 'setAngularDamping:';
    function angularDamping: CGFloat; message 'angularDamping';
    procedure setDensity(newValue: CGFloat); message 'setDensity:';
    function density: CGFloat; message 'density';
    procedure setMass(newValue: CGFloat); message 'setMass:';
    function mass: CGFloat; message 'mass';
    function area: CGFloat; message 'area';
    procedure setAffectedByGravity(newValue: objcbool); message 'setAffectedByGravity:';
    function affectedByGravity: objcbool; message 'affectedByGravity';
    procedure setFieldBitMask(newValue: cuint32); message 'setFieldBitMask:'; { available in ios , tvos , watchos , macos  }
    function fieldBitMask: cuint32; message 'fieldBitMask'; { available in ios , tvos , watchos , macos  }
    procedure setCategoryBitMask(newValue: cuint32); message 'setCategoryBitMask:';
    function categoryBitMask: cuint32; message 'categoryBitMask';
    procedure setCollisionBitMask(newValue: cuint32); message 'setCollisionBitMask:';
    function collisionBitMask: cuint32; message 'collisionBitMask';
    procedure setContactTestBitMask(newValue: cuint32); message 'setContactTestBitMask:';
    function contactTestBitMask: cuint32; message 'contactTestBitMask';
    function joints: NSArray; message 'joints';
    function node: SKNode; message 'node';
    procedure setVelocity(newValue: CGVector); message 'setVelocity:';
    function velocity: CGVector; message 'velocity';
    procedure setAngularVelocity(newValue: CGFloat); message 'setAngularVelocity:';
    function angularVelocity: CGFloat; message 'angularVelocity';
    procedure applyForce (force: CGVector); message 'applyForce:';
    procedure applyForce_atPoint (force: CGVector; point: CGPoint); message 'applyForce:atPoint:';
    procedure applyTorque (torque: CGFloat); message 'applyTorque:';
    procedure applyImpulse (impulse: CGVector); message 'applyImpulse:';
    procedure applyImpulse_atPoint (impulse: CGVector; point: CGPoint); message 'applyImpulse:atPoint:';
    procedure applyAngularImpulse (impulse: CGFloat); message 'applyAngularImpulse:';
    function allContactedBodies: NSArray; message 'allContactedBodies';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

