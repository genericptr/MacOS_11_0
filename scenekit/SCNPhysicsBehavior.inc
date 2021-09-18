{ Parsed from SceneKit.framework SCNPhysicsBehavior.h }

{$ifdef TYPES}
type
  SCNPhysicsBehaviorPtr = ^SCNPhysicsBehavior;
  SCNPhysicsHingeJointPtr = ^SCNPhysicsHingeJoint;
  SCNPhysicsBallSocketJointPtr = ^SCNPhysicsBallSocketJoint;
  SCNPhysicsSliderJointPtr = ^SCNPhysicsSliderJoint;
  SCNPhysicsConeTwistJointPtr = ^SCNPhysicsConeTwistJoint;
  SCNPhysicsVehicleWheelPtr = ^SCNPhysicsVehicleWheel;
  SCNPhysicsVehiclePtr = ^SCNPhysicsVehicle;
{$endif}

{$ifdef CLASSES}

type
  SCNPhysicsBehavior = objcclass external (NSObject, NSSecureCodingProtocol)

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  SCNPhysicsHingeJoint = objcclass external (SCNPhysicsBehavior)
  public
    class function jointWithBodyA_axisA_anchorA_bodyB_axisB_anchorB (bodyA: SCNPhysicsBody; axisA: SCNVector3; anchorA: SCNVector3; bodyB: SCNPhysicsBody; axisB: SCNVector3; anchorB: SCNVector3): id; message 'jointWithBodyA:axisA:anchorA:bodyB:axisB:anchorB:';
    class function jointWithBody_axis_anchor (body: SCNPhysicsBody; axis: SCNVector3; anchor: SCNVector3): id; message 'jointWithBody:axis:anchor:';
    function bodyA: SCNPhysicsBody; message 'bodyA';
    procedure setAxisA(newValue: SCNVector3); message 'setAxisA:';
    function axisA: SCNVector3; message 'axisA';
    procedure setAnchorA(newValue: SCNVector3); message 'setAnchorA:';
    function anchorA: SCNVector3; message 'anchorA';
    function bodyB: SCNPhysicsBody; message 'bodyB';
    procedure setAxisB(newValue: SCNVector3); message 'setAxisB:';
    function axisB: SCNVector3; message 'axisB';
    procedure setAnchorB(newValue: SCNVector3); message 'setAnchorB:';
    function anchorB: SCNVector3; message 'anchorB';
  end;

type
  SCNPhysicsBallSocketJoint = objcclass external (SCNPhysicsBehavior)
  public
    class function jointWithBodyA_anchorA_bodyB_anchorB (bodyA: SCNPhysicsBody; anchorA: SCNVector3; bodyB: SCNPhysicsBody; anchorB: SCNVector3): id; message 'jointWithBodyA:anchorA:bodyB:anchorB:';
    class function jointWithBody_anchor (body: SCNPhysicsBody; anchor: SCNVector3): id; message 'jointWithBody:anchor:';
    function bodyA: SCNPhysicsBody; message 'bodyA';
    procedure setAnchorA(newValue: SCNVector3); message 'setAnchorA:';
    function anchorA: SCNVector3; message 'anchorA';
    function bodyB: SCNPhysicsBody; message 'bodyB';
    procedure setAnchorB(newValue: SCNVector3); message 'setAnchorB:';
    function anchorB: SCNVector3; message 'anchorB';
  end;

type
  SCNPhysicsSliderJoint = objcclass external (SCNPhysicsBehavior)
  public
    class function jointWithBodyA_axisA_anchorA_bodyB_axisB_anchorB (bodyA: SCNPhysicsBody; axisA: SCNVector3; anchorA: SCNVector3; bodyB: SCNPhysicsBody; axisB: SCNVector3; anchorB: SCNVector3): id; message 'jointWithBodyA:axisA:anchorA:bodyB:axisB:anchorB:';
    class function jointWithBody_axis_anchor (body: SCNPhysicsBody; axis: SCNVector3; anchor: SCNVector3): id; message 'jointWithBody:axis:anchor:';
    function bodyA: SCNPhysicsBody; message 'bodyA';
    procedure setAxisA(newValue: SCNVector3); message 'setAxisA:';
    function axisA: SCNVector3; message 'axisA';
    procedure setAnchorA(newValue: SCNVector3); message 'setAnchorA:';
    function anchorA: SCNVector3; message 'anchorA';
    function bodyB: SCNPhysicsBody; message 'bodyB';
    procedure setAxisB(newValue: SCNVector3); message 'setAxisB:';
    function axisB: SCNVector3; message 'axisB';
    procedure setAnchorB(newValue: SCNVector3); message 'setAnchorB:';
    function anchorB: SCNVector3; message 'anchorB';
    procedure setMinimumLinearLimit(newValue: CGFloat); message 'setMinimumLinearLimit:';
    function minimumLinearLimit: CGFloat; message 'minimumLinearLimit';
    procedure setMaximumLinearLimit(newValue: CGFloat); message 'setMaximumLinearLimit:';
    function maximumLinearLimit: CGFloat; message 'maximumLinearLimit';
    procedure setMinimumAngularLimit(newValue: CGFloat); message 'setMinimumAngularLimit:';
    function minimumAngularLimit: CGFloat; message 'minimumAngularLimit';
    procedure setMaximumAngularLimit(newValue: CGFloat); message 'setMaximumAngularLimit:';
    function maximumAngularLimit: CGFloat; message 'maximumAngularLimit';
    procedure setMotorTargetLinearVelocity(newValue: CGFloat); message 'setMotorTargetLinearVelocity:';
    function motorTargetLinearVelocity: CGFloat; message 'motorTargetLinearVelocity';
    procedure setMotorMaximumForce(newValue: CGFloat); message 'setMotorMaximumForce:';
    function motorMaximumForce: CGFloat; message 'motorMaximumForce';
    procedure setMotorTargetAngularVelocity(newValue: CGFloat); message 'setMotorTargetAngularVelocity:';
    function motorTargetAngularVelocity: CGFloat; message 'motorTargetAngularVelocity';
    procedure setMotorMaximumTorque(newValue: CGFloat); message 'setMotorMaximumTorque:';
    function motorMaximumTorque: CGFloat; message 'motorMaximumTorque';
  end;

type
  SCNPhysicsConeTwistJoint = objcclass external (SCNPhysicsBehavior)
  public
    class function jointWithBodyA_frameA_bodyB_frameB (bodyA: SCNPhysicsBody; frameA: SCNMatrix4; bodyB: SCNPhysicsBody; frameB: SCNMatrix4): id; message 'jointWithBodyA:frameA:bodyB:frameB:';
    class function jointWithBody_frame (body: SCNPhysicsBody; frame: SCNMatrix4): id; message 'jointWithBody:frame:';
    function bodyA: SCNPhysicsBody; message 'bodyA';
    procedure setFrameA(newValue: SCNMatrix4); message 'setFrameA:';
    function frameA: SCNMatrix4; message 'frameA';
    function bodyB: SCNPhysicsBody; message 'bodyB';
    procedure setFrameB(newValue: SCNMatrix4); message 'setFrameB:';
    function frameB: SCNMatrix4; message 'frameB';
    procedure setMaximumAngularLimit1(newValue: CGFloat); message 'setMaximumAngularLimit1:';
    function maximumAngularLimit1: CGFloat; message 'maximumAngularLimit1';
    procedure setMaximumAngularLimit2(newValue: CGFloat); message 'setMaximumAngularLimit2:';
    function maximumAngularLimit2: CGFloat; message 'maximumAngularLimit2';
    procedure setMaximumTwistAngle(newValue: CGFloat); message 'setMaximumTwistAngle:';
    function maximumTwistAngle: CGFloat; message 'maximumTwistAngle';
  end;

type
  SCNPhysicsVehicleWheel = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function wheelWithNode (node: SCNNode): id; message 'wheelWithNode:';
    function node: SCNNode; message 'node';
    procedure setSuspensionStiffness(newValue: CGFloat); message 'setSuspensionStiffness:';
    function suspensionStiffness: CGFloat; message 'suspensionStiffness';
    procedure setSuspensionCompression(newValue: CGFloat); message 'setSuspensionCompression:';
    function suspensionCompression: CGFloat; message 'suspensionCompression';
    procedure setSuspensionDamping(newValue: CGFloat); message 'setSuspensionDamping:';
    function suspensionDamping: CGFloat; message 'suspensionDamping';
    procedure setMaximumSuspensionTravel(newValue: CGFloat); message 'setMaximumSuspensionTravel:';
    function maximumSuspensionTravel: CGFloat; message 'maximumSuspensionTravel';
    procedure setFrictionSlip(newValue: CGFloat); message 'setFrictionSlip:';
    function frictionSlip: CGFloat; message 'frictionSlip';
    procedure setMaximumSuspensionForce(newValue: CGFloat); message 'setMaximumSuspensionForce:';
    function maximumSuspensionForce: CGFloat; message 'maximumSuspensionForce';
    procedure setConnectionPosition(newValue: SCNVector3); message 'setConnectionPosition:';
    function connectionPosition: SCNVector3; message 'connectionPosition';
    procedure setSteeringAxis(newValue: SCNVector3); message 'setSteeringAxis:';
    function steeringAxis: SCNVector3; message 'steeringAxis';
    procedure setAxle(newValue: SCNVector3); message 'setAxle:';
    function axle: SCNVector3; message 'axle';
    procedure setRadius(newValue: CGFloat); message 'setRadius:';
    function radius: CGFloat; message 'radius';
    procedure setSuspensionRestLength(newValue: CGFloat); message 'setSuspensionRestLength:';
    function suspensionRestLength: CGFloat; message 'suspensionRestLength';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  SCNPhysicsVehicle = objcclass external (SCNPhysicsBehavior)
  public
    class function vehicleWithChassisBody_wheels (chassisBody: SCNPhysicsBody; wheels: NSArray): id; message 'vehicleWithChassisBody:wheels:';
    function speedInKilometersPerHour: CGFloat; message 'speedInKilometersPerHour';
    function wheels: NSArray; message 'wheels';
    function chassisBody: SCNPhysicsBody; message 'chassisBody';
    procedure applyEngineForce_forWheelAtIndex (value: CGFloat; index: NSInteger); message 'applyEngineForce:forWheelAtIndex:';
    procedure setSteeringAngle_forWheelAtIndex (value: CGFloat; index: NSInteger); message 'setSteeringAngle:forWheelAtIndex:';
    procedure applyBrakingForce_forWheelAtIndex (value: CGFloat; index: NSInteger); message 'applyBrakingForce:forWheelAtIndex:';
  end;
{$endif}

