{ Parsed from SpriteKit.framework SKPhysicsJoint.h }

{$ifdef TYPES}
type
  SKPhysicsJointPtr = ^SKPhysicsJoint;
  SKPhysicsJointPinPtr = ^SKPhysicsJointPin;
  SKPhysicsJointSpringPtr = ^SKPhysicsJointSpring;
  SKPhysicsJointFixedPtr = ^SKPhysicsJointFixed;
  SKPhysicsJointSlidingPtr = ^SKPhysicsJointSliding;
  SKPhysicsJointLimitPtr = ^SKPhysicsJointLimit;
{$endif}

{$ifdef CLASSES}

type
  SKPhysicsJoint = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    procedure setBodyA(newValue: SKPhysicsBody); message 'setBodyA:';
    function bodyA: SKPhysicsBody; message 'bodyA';
    procedure setBodyB(newValue: SKPhysicsBody); message 'setBodyB:';
    function bodyB: SKPhysicsBody; message 'bodyB';
    function reactionForce: CGVector; message 'reactionForce';
    function reactionTorque: CGFloat; message 'reactionTorque';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  SKPhysicsJointPin = objcclass external (SKPhysicsJoint)
  public
    class function jointWithBodyA_bodyB_anchor (bodyA_: SKPhysicsBody; bodyB_: SKPhysicsBody; anchor: CGPoint): SKPhysicsJointPin; message 'jointWithBodyA:bodyB:anchor:';
    procedure setShouldEnableLimits(newValue: objcbool); message 'setShouldEnableLimits:';
    function shouldEnableLimits: objcbool; message 'shouldEnableLimits';
    procedure setLowerAngleLimit(newValue: CGFloat); message 'setLowerAngleLimit:';
    function lowerAngleLimit: CGFloat; message 'lowerAngleLimit';
    procedure setUpperAngleLimit(newValue: CGFloat); message 'setUpperAngleLimit:';
    function upperAngleLimit: CGFloat; message 'upperAngleLimit';
    procedure setFrictionTorque(newValue: CGFloat); message 'setFrictionTorque:';
    function frictionTorque: CGFloat; message 'frictionTorque';
    procedure setRotationSpeed(newValue: CGFloat); message 'setRotationSpeed:';
    function rotationSpeed: CGFloat; message 'rotationSpeed';
  end;

type
  SKPhysicsJointSpring = objcclass external (SKPhysicsJoint)
  public
    class function jointWithBodyA_bodyB_anchorA_anchorB (bodyA_: SKPhysicsBody; bodyB_: SKPhysicsBody; anchorA: CGPoint; anchorB: CGPoint): SKPhysicsJointSpring; message 'jointWithBodyA:bodyB:anchorA:anchorB:';
    procedure setDamping(newValue: CGFloat); message 'setDamping:';
    function damping: CGFloat; message 'damping';
    procedure setFrequency(newValue: CGFloat); message 'setFrequency:';
    function frequency: CGFloat; message 'frequency';
  end;

type
  SKPhysicsJointFixed = objcclass external (SKPhysicsJoint)
  public
    class function jointWithBodyA_bodyB_anchor (bodyA_: SKPhysicsBody; bodyB_: SKPhysicsBody; anchor: CGPoint): SKPhysicsJointFixed; message 'jointWithBodyA:bodyB:anchor:';
  end;

type
  SKPhysicsJointSliding = objcclass external (SKPhysicsJoint)
  public
    class function jointWithBodyA_bodyB_anchor_axis (bodyA_: SKPhysicsBody; bodyB_: SKPhysicsBody; anchor: CGPoint; axis: CGVector): SKPhysicsJointSliding; message 'jointWithBodyA:bodyB:anchor:axis:';
    procedure setShouldEnableLimits(newValue: objcbool); message 'setShouldEnableLimits:';
    function shouldEnableLimits: objcbool; message 'shouldEnableLimits';
    procedure setLowerDistanceLimit(newValue: CGFloat); message 'setLowerDistanceLimit:';
    function lowerDistanceLimit: CGFloat; message 'lowerDistanceLimit';
    procedure setUpperDistanceLimit(newValue: CGFloat); message 'setUpperDistanceLimit:';
    function upperDistanceLimit: CGFloat; message 'upperDistanceLimit';
  end;

type
  SKPhysicsJointLimit = objcclass external (SKPhysicsJoint)
  public
    procedure setMaxLength(newValue: CGFloat); message 'setMaxLength:';
    function maxLength: CGFloat; message 'maxLength';
    class function jointWithBodyA_bodyB_anchorA_anchorB (bodyA_: SKPhysicsBody; bodyB_: SKPhysicsBody; anchorA: CGPoint; anchorB: CGPoint): SKPhysicsJointLimit; message 'jointWithBodyA:bodyB:anchorA:anchorB:';
  end;
{$endif}

