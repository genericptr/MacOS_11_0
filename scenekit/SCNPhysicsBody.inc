{ Parsed from SceneKit.framework SCNPhysicsBody.h }

{$ifdef TYPES}
type
  SCNPhysicsBodyPtr = ^SCNPhysicsBody;
{$endif}

{$ifdef TYPES}
type
  SCNPhysicsBodyType = NSInteger;
  SCNPhysicsBodyTypePtr = ^SCNPhysicsBodyType;

const
  SCNPhysicsBodyTypeStatic = 0;
  SCNPhysicsBodyTypeDynamic = 1;
  SCNPhysicsBodyTypeKinematic = 2;

type
  SCNPhysicsCollisionCategory = NSUInteger;
  SCNPhysicsCollisionCategoryPtr = ^SCNPhysicsCollisionCategory;

const
  SCNPhysicsCollisionCategoryDefault = 1 shl 0;
  SCNPhysicsCollisionCategoryStatic = 1 shl 1;
  SCNPhysicsCollisionCategoryAll = not 0;
{$endif}

{$ifdef CLASSES}

type
  SCNPhysicsBody = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function staticBody: id; message 'staticBody';
    class function dynamicBody: id; message 'dynamicBody';
    class function kinematicBody: id; message 'kinematicBody';
    class function bodyWithType_shape (type_: SCNPhysicsBodyType; shape: SCNPhysicsShape): id; message 'bodyWithType:shape:';
    procedure setType(newValue: SCNPhysicsBodyType); message 'setType:';
    function type_: SCNPhysicsBodyType; message 'type';
    procedure setMass(newValue: CGFloat); message 'setMass:';
    function mass: CGFloat; message 'mass';
    procedure setMomentOfInertia(newValue: SCNVector3); message 'setMomentOfInertia:'; { available in macos 10.11, ios 9.0 }
    function momentOfInertia: SCNVector3; message 'momentOfInertia'; { available in macos 10.11, ios 9.0 }
    procedure setUsesDefaultMomentOfInertia(newValue: objcbool); message 'setUsesDefaultMomentOfInertia:'; { available in macos 10.11, ios 9.0 }
    function usesDefaultMomentOfInertia: objcbool; message 'usesDefaultMomentOfInertia'; { available in macos 10.11, ios 9.0 }
    procedure setCharge(newValue: CGFloat); message 'setCharge:';
    function charge: CGFloat; message 'charge';
    procedure setFriction(newValue: CGFloat); message 'setFriction:';
    function friction: CGFloat; message 'friction';
    procedure setRestitution(newValue: CGFloat); message 'setRestitution:';
    function restitution: CGFloat; message 'restitution';
    procedure setRollingFriction(newValue: CGFloat); message 'setRollingFriction:';
    function rollingFriction: CGFloat; message 'rollingFriction';
    procedure setPhysicsShape(newValue: SCNPhysicsShape); message 'setPhysicsShape:';
    function physicsShape: SCNPhysicsShape; message 'physicsShape';
    function isResting: objcbool; message 'isResting';
    procedure setAllowsResting(newValue: objcbool); message 'setAllowsResting:';
    function allowsResting: objcbool; message 'allowsResting';
    procedure setVelocity(newValue: SCNVector3); message 'setVelocity:';
    function velocity: SCNVector3; message 'velocity';
    procedure setAngularVelocity(newValue: SCNVector4); message 'setAngularVelocity:';
    function angularVelocity: SCNVector4; message 'angularVelocity';
    procedure setDamping(newValue: CGFloat); message 'setDamping:';
    function damping: CGFloat; message 'damping';
    procedure setAngularDamping(newValue: CGFloat); message 'setAngularDamping:';
    function angularDamping: CGFloat; message 'angularDamping';
    procedure setVelocityFactor(newValue: SCNVector3); message 'setVelocityFactor:';
    function velocityFactor: SCNVector3; message 'velocityFactor';
    procedure setAngularVelocityFactor(newValue: SCNVector3); message 'setAngularVelocityFactor:';
    function angularVelocityFactor: SCNVector3; message 'angularVelocityFactor';
    procedure setCategoryBitMask(newValue: NSUInteger); message 'setCategoryBitMask:';
    function categoryBitMask: NSUInteger; message 'categoryBitMask';
    procedure setCollisionBitMask(newValue: NSUInteger); message 'setCollisionBitMask:';
    function collisionBitMask: NSUInteger; message 'collisionBitMask';
    procedure setContactTestBitMask(newValue: NSUInteger); message 'setContactTestBitMask:'; { available in macos 10.11, ios 9.0 }
    function contactTestBitMask: NSUInteger; message 'contactTestBitMask'; { available in macos 10.11, ios 9.0 }
    procedure setAffectedByGravity(newValue: objcbool); message 'setAffectedByGravity:'; { available in macos 10.11, ios 9.0 }
    function isAffectedByGravity: objcbool; message 'isAffectedByGravity'; { available in macos 10.11, ios 9.0 }
    procedure applyForce_impulse (direction: SCNVector3; impulse: objcbool); message 'applyForce:impulse:';
    procedure applyForce_atPosition_impulse (direction: SCNVector3; position: SCNVector3; impulse: objcbool); message 'applyForce:atPosition:impulse:';
    procedure applyTorque_impulse (torque: SCNVector4; impulse: objcbool); message 'applyTorque:impulse:';
    procedure clearAllForces; message 'clearAllForces';
    procedure resetTransform; message 'resetTransform';
    procedure setResting (resting: objcbool); message 'setResting:'; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 5.0 }
    procedure setContinuousCollisionDetectionThreshold(newValue: CGFloat); message 'setContinuousCollisionDetectionThreshold:'; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 5.0 }
    function continuousCollisionDetectionThreshold: CGFloat; message 'continuousCollisionDetectionThreshold'; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 5.0 }
    procedure setCenterOfMassOffset(newValue: SCNVector3); message 'setCenterOfMassOffset:'; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 5.0 }
    function centerOfMassOffset: SCNVector3; message 'centerOfMassOffset'; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 5.0 }
    procedure setLinearRestingThreshold(newValue: CGFloat); message 'setLinearRestingThreshold:'; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 5.0 }
    function linearRestingThreshold: CGFloat; message 'linearRestingThreshold'; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 5.0 }
    procedure setAngularRestingThreshold(newValue: CGFloat); message 'setAngularRestingThreshold:'; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 5.0 }
    function angularRestingThreshold: CGFloat; message 'angularRestingThreshold'; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 5.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

