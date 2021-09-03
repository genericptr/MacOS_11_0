{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNConstraint.h }

{$ifdef CALLBACKS}
type
  SCNConstraintTransformConstraintInWorldSpaceCallback = reference to function (node: SCNNode; transform: SCNMatrix4): SCNMatrix4; cblock; cdecl;
  SCNConstraintPositionConstraintInWorldSpaceCallback = reference to function (node: SCNNode; position: SCNVector3): SCNVector3; cblock; cdecl;
  SCNConstraintOrientationConstraintInWorldSpaceCallback = reference to function (node: SCNNode; quaternion: SCNQuaternion): SCNQuaternion; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SCNConstraintPtr = ^SCNConstraint;
  SCNLookAtConstraintPtr = ^SCNLookAtConstraint;
  SCNBillboardConstraintPtr = ^SCNBillboardConstraint;
  SCNTransformConstraintPtr = ^SCNTransformConstraint;
  SCNIKConstraintPtr = ^SCNIKConstraint;
  SCNDistanceConstraintPtr = ^SCNDistanceConstraint;
  SCNReplicatorConstraintPtr = ^SCNReplicatorConstraint;
  SCNAccelerationConstraintPtr = ^SCNAccelerationConstraint;
  SCNSliderConstraintPtr = ^SCNSliderConstraint;
  SCNAvoidOccluderConstraintPtr = ^SCNAvoidOccluderConstraint;
  SCNAvoidOccluderConstraintDelegateProtocolPtr = ^SCNAvoidOccluderConstraintDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  SCNConstraint = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol, SCNAnimatableProtocol)
  public
    procedure setEnabled(newValue: objcbool); message 'setEnabled:'; { available in macos  }
    function isEnabled: objcbool; message 'isEnabled'; { available in macos  }
    procedure setInfluenceFactor(newValue: CGFloat); message 'setInfluenceFactor:'; { available in macos  }
    function influenceFactor: CGFloat; message 'influenceFactor'; { available in macos  }
    procedure setIncremental(newValue: objcbool); message 'setIncremental:'; { available in macos , ios , tvos , watchos  }
    function isIncremental: objcbool; message 'isIncremental'; { available in macos , ios , tvos , watchos  }

    { Adopted protocols }
    procedure addAnimation_forKey (animation: id; key: NSString); message 'addAnimation:forKey:';
    procedure addAnimationPlayer_forKey (player: SCNAnimationPlayer; key: NSString); message 'addAnimationPlayer:forKey:'; { available in macos , ios , tvos , watchos  }
    function animationForKey (key: NSString): CAAnimationPtr; message 'animationForKey:'; deprecated 'replace with -animationPlayerForKey:';
    function animationKeys: NSArray; message 'animationKeys';
    function animationPlayerForKey (key: NSString): SCNAnimationPlayer; message 'animationPlayerForKey:'; { available in macos , ios , tvos , watchos  }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function isAnimationForKeyPaused (key: NSString): objcbool; message 'isAnimationForKeyPaused:'; deprecated 'Use -[SCNAnimationPlayer paused] instead';
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    procedure removeAnimationForKey_blendOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:blendOutDuration:'; { available in macos , ios , tvos , watchos  }
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; deprecated 'replace with -removeAnimationForKey:blendOutDuration:';
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    procedure setSpeed_forAnimationKey (speed: CGFloat; key: NSString); message 'setSpeed:forAnimationKey:'; deprecated 'Use -[SCNAnimationPlayer setSpeed:] instead';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  SCNLookAtConstraint = objcclass external (SCNConstraint)
  public
    class function lookAtConstraintWithTarget (target: SCNNode): id; message 'lookAtConstraintWithTarget:';
    procedure setTarget(newValue: SCNNode); message 'setTarget:';
    function target: SCNNode; message 'target';
    procedure setTargetOffset(newValue: SCNVector3); message 'setTargetOffset:'; { available in macos , ios , tvos , watchos  }
    function targetOffset: SCNVector3; message 'targetOffset'; { available in macos , ios , tvos , watchos  }
    procedure setLocalFront(newValue: SCNVector3); message 'setLocalFront:'; { available in macos , ios , tvos , watchos  }
    function localFront: SCNVector3; message 'localFront'; { available in macos , ios , tvos , watchos  }
    procedure setWorldUp(newValue: SCNVector3); message 'setWorldUp:'; { available in macos , ios , tvos , watchos  }
    function worldUp: SCNVector3; message 'worldUp'; { available in macos , ios , tvos , watchos  }
    procedure setGimbalLockEnabled(newValue: objcbool); message 'setGimbalLockEnabled:';
    function gimbalLockEnabled: objcbool; message 'gimbalLockEnabled';
  end;
{$endif}

{$ifdef TYPES}
type
  SCNBillboardAxis = NSUInteger;
  SCNBillboardAxisPtr = ^SCNBillboardAxis;

const
  SCNBillboardAxisX = $1 shl 0;
  SCNBillboardAxisY = $1 shl 1;
  SCNBillboardAxisZ = $1 shl 2;
  SCNBillboardAxisAll = SCNBillboardAxisX + SCNBillboardAxisY + SCNBillboardAxisZ;
{$endif}

{$ifdef CLASSES}

type
  SCNBillboardConstraint = objcclass external (SCNConstraint)
  public
    class function billboardConstraint: id; message 'billboardConstraint';
    procedure setFreeAxes(newValue: SCNBillboardAxis); message 'setFreeAxes:';
    function freeAxes: SCNBillboardAxis; message 'freeAxes';
  end;

type
  SCNTransformConstraint = objcclass external (SCNConstraint)
  public
    class function transformConstraintInWorldSpace_withBlock (world: objcbool; block: SCNConstraintTransformConstraintInWorldSpaceCallback): id; message 'transformConstraintInWorldSpace:withBlock:';
    class function positionConstraintInWorldSpace_withBlock (world: objcbool; block: SCNConstraintPositionConstraintInWorldSpaceCallback): id; message 'positionConstraintInWorldSpace:withBlock:'; { available in macos , ios , tvos , watchos  }
    class function orientationConstraintInWorldSpace_withBlock (world: objcbool; block: SCNConstraintOrientationConstraintInWorldSpaceCallback): id; message 'orientationConstraintInWorldSpace:withBlock:'; { available in macos , ios , tvos , watchos  }
  end;

type
  SCNIKConstraint = objcclass external (SCNConstraint)
  public
    function initWithChainRootNode (chainRootNode: SCNNode): id; message 'initWithChainRootNode:'; { available in macos , ios  }
    class function inverseKinematicsConstraintWithChainRootNode (chainRootNode: SCNNode): id; message 'inverseKinematicsConstraintWithChainRootNode:';
    function chainRootNode: SCNNode; message 'chainRootNode';
    procedure setTargetPosition(newValue: SCNVector3); message 'setTargetPosition:';
    function targetPosition: SCNVector3; message 'targetPosition';
    procedure setMaxAllowedRotationAngle_forJoint (angle: CGFloat; node: SCNNode); message 'setMaxAllowedRotationAngle:forJoint:';
    function maxAllowedRotationAngleForJoint (node: SCNNode): CGFloat; message 'maxAllowedRotationAngleForJoint:';
  end;

type
  SCNDistanceConstraint = objcclass external (SCNConstraint)
  public
    class function distanceConstraintWithTarget (target: SCNNode): id; message 'distanceConstraintWithTarget:';
    procedure setTarget(newValue: SCNNode); message 'setTarget:';
    function target: SCNNode; message 'target';
    procedure setMinimumDistance(newValue: CGFloat); message 'setMinimumDistance:';
    function minimumDistance: CGFloat; message 'minimumDistance';
    procedure setMaximumDistance(newValue: CGFloat); message 'setMaximumDistance:';
    function maximumDistance: CGFloat; message 'maximumDistance';
  end;

type
  SCNReplicatorConstraint = objcclass external (SCNConstraint)
  public
    class function replicatorConstraintWithTarget (target: SCNNode): id; message 'replicatorConstraintWithTarget:';
    procedure setTarget(newValue: SCNNode); message 'setTarget:';
    function target: SCNNode; message 'target';
    procedure setReplicatesOrientation(newValue: objcbool); message 'setReplicatesOrientation:';
    function replicatesOrientation: objcbool; message 'replicatesOrientation';
    procedure setReplicatesPosition(newValue: objcbool); message 'setReplicatesPosition:';
    function replicatesPosition: objcbool; message 'replicatesPosition';
    procedure setReplicatesScale(newValue: objcbool); message 'setReplicatesScale:';
    function replicatesScale: objcbool; message 'replicatesScale';
    procedure setOrientationOffset(newValue: SCNQuaternion); message 'setOrientationOffset:';
    function orientationOffset: SCNQuaternion; message 'orientationOffset';
    procedure setPositionOffset(newValue: SCNVector3); message 'setPositionOffset:';
    function positionOffset: SCNVector3; message 'positionOffset';
    procedure setScaleOffset(newValue: SCNVector3); message 'setScaleOffset:';
    function scaleOffset: SCNVector3; message 'scaleOffset';
  end;

type
  SCNAccelerationConstraint = objcclass external (SCNConstraint)
  public
    class function accelerationConstraint: id; message 'accelerationConstraint';
    procedure setMaximumLinearAcceleration(newValue: CGFloat); message 'setMaximumLinearAcceleration:';
    function maximumLinearAcceleration: CGFloat; message 'maximumLinearAcceleration';
    procedure setMaximumLinearVelocity(newValue: CGFloat); message 'setMaximumLinearVelocity:';
    function maximumLinearVelocity: CGFloat; message 'maximumLinearVelocity';
    procedure setDecelerationDistance(newValue: CGFloat); message 'setDecelerationDistance:';
    function decelerationDistance: CGFloat; message 'decelerationDistance';
    procedure setDamping(newValue: CGFloat); message 'setDamping:';
    function damping: CGFloat; message 'damping';
  end;

type
  SCNSliderConstraint = objcclass external (SCNConstraint)
  public
    class function sliderConstraint: id; message 'sliderConstraint';
    procedure setCollisionCategoryBitMask(newValue: NSUInteger); message 'setCollisionCategoryBitMask:';
    function collisionCategoryBitMask: NSUInteger; message 'collisionCategoryBitMask';
    procedure setRadius(newValue: CGFloat); message 'setRadius:';
    function radius: CGFloat; message 'radius';
    procedure setOffset(newValue: SCNVector3); message 'setOffset:';
    function offset: SCNVector3; message 'offset';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNAvoidOccluderConstraintDelegateProtocol = objcprotocol external name 'SCNAvoidOccluderConstraintDelegate' (NSObjectProtocol)
  optional
    function avoidOccluderConstraint_shouldAvoidOccluder_forNode (constraint: SCNAvoidOccluderConstraint; occluder: SCNNode; node: SCNNode): objcbool; message 'avoidOccluderConstraint:shouldAvoidOccluder:forNode:';
    procedure avoidOccluderConstraint_didAvoidOccluder_forNode (constraint: SCNAvoidOccluderConstraint; occluder: SCNNode; node: SCNNode); message 'avoidOccluderConstraint:didAvoidOccluder:forNode:';
  end;
{$endif}

{$ifdef CLASSES}

type
  SCNAvoidOccluderConstraint = objcclass external (SCNConstraint)
  public
    class function avoidOccluderConstraintWithTarget (target: SCNNode): id; message 'avoidOccluderConstraintWithTarget:';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setTarget(newValue: SCNNode); message 'setTarget:';
    function target: SCNNode; message 'target';
    procedure setOccluderCategoryBitMask(newValue: NSUInteger); message 'setOccluderCategoryBitMask:';
    function occluderCategoryBitMask: NSUInteger; message 'occluderCategoryBitMask';
    procedure setBias(newValue: CGFloat); message 'setBias:';
    function bias: CGFloat; message 'bias';
  end;
{$endif}

