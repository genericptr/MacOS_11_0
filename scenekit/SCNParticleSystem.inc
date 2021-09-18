{ Parsed from SceneKit.framework SCNParticleSystem.h }

{$ifdef TYPES}
type
  SCNParticlePropertyControllerPtr = ^SCNParticlePropertyController;
  SCNParticleSystemPtr = ^SCNParticleSystem;
{$endif}

{$ifdef TYPES}
type
  SCNParticleProperty = NSString;
  SCNParticlePropertyPtr = ^SCNParticleProperty;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNParticlePropertyPosition: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertyAngle: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertyRotationAxis: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertyVelocity: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertyAngularVelocity: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertyLife: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertyColor: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertyOpacity: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertySize: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertyFrame: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertyFrameRate: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertyBounce: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertyCharge: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertyFriction: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertyContactPoint: SCNParticleProperty { available in macos  }; cvar; external;
  SCNParticlePropertyContactNormal: SCNParticleProperty { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCNParticleEventBlock = reference to procedure (data: pointer; dataStride: size_tPtr; indices: pcuint32; count: NSInteger); cblock; cdecl;
  SCNParticleModifierBlock = reference to procedure (data: pointer; dataStride: size_tPtr; start: NSInteger; end_: NSInteger; deltaTime: single); cblock; cdecl;
  SCNParticleSortingMode = NSInteger;
  SCNParticleSortingModePtr = ^SCNParticleSortingMode;

const
  SCNParticleSortingModeNone = 0;
  SCNParticleSortingModeProjectedDepth = 1;
  SCNParticleSortingModeDistance = 2;
  SCNParticleSortingModeOldestFirst = 3;
  SCNParticleSortingModeYoungestFirst = 4;

type
  SCNParticleBlendMode = NSInteger;
  SCNParticleBlendModePtr = ^SCNParticleBlendMode;

const
  SCNParticleBlendModeAdditive = 0;
  SCNParticleBlendModeSubtract = 1;
  SCNParticleBlendModeMultiply = 2;
  SCNParticleBlendModeScreen = 3;
  SCNParticleBlendModeAlpha = 4;
  SCNParticleBlendModeReplace = 5;

type
  SCNParticleOrientationMode = NSInteger;
  SCNParticleOrientationModePtr = ^SCNParticleOrientationMode;

const
  SCNParticleOrientationModeBillboardScreenAligned = 0;
  SCNParticleOrientationModeBillboardViewAligned = 1;
  SCNParticleOrientationModeFree = 2;
  SCNParticleOrientationModeBillboardYAligned = 3;

type
  SCNParticleBirthLocation = NSInteger;
  SCNParticleBirthLocationPtr = ^SCNParticleBirthLocation;

const
  SCNParticleBirthLocationSurface = 0;
  SCNParticleBirthLocationVolume = 1;
  SCNParticleBirthLocationVertex = 2;

type
  SCNParticleBirthDirection = NSInteger;
  SCNParticleBirthDirectionPtr = ^SCNParticleBirthDirection;

const
  SCNParticleBirthDirectionConstant = 0;
  SCNParticleBirthDirectionSurfaceNormal = 1;
  SCNParticleBirthDirectionRandom = 2;

type
  SCNParticleImageSequenceAnimationMode = NSInteger;
  SCNParticleImageSequenceAnimationModePtr = ^SCNParticleImageSequenceAnimationMode;

const
  SCNParticleImageSequenceAnimationModeRepeat = 0;
  SCNParticleImageSequenceAnimationModeClamp = 1;
  SCNParticleImageSequenceAnimationModeAutoReverse = 2;

type
  SCNParticleInputMode = NSInteger;
  SCNParticleInputModePtr = ^SCNParticleInputMode;

const
  SCNParticleInputModeOverLife = 0;
  SCNParticleInputModeOverDistance = 1;
  SCNParticleInputModeOverOtherProperty = 2;

type
  SCNParticleModifierStage = NSInteger;
  SCNParticleModifierStagePtr = ^SCNParticleModifierStage;

const
  SCNParticleModifierStagePreDynamics = 0;
  SCNParticleModifierStagePostDynamics = 1;
  SCNParticleModifierStagePreCollision = 2;
  SCNParticleModifierStagePostCollision = 3;

type
  SCNParticleEvent = NSInteger;
  SCNParticleEventPtr = ^SCNParticleEvent;

const
  SCNParticleEventBirth = 0;
  SCNParticleEventDeath = 1;
  SCNParticleEventCollision = 2;
{$endif}

{$ifdef CLASSES}

type
  SCNParticlePropertyController = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    class function controllerWithAnimation (animation: CAAnimationPtr): id; message 'controllerWithAnimation:'; { unavailable in watchos }
    procedure setAnimation(newValue: CAAnimationPtr); message 'setAnimation:'; { unavailable in watchos }
    function animation: CAAnimationPtr; message 'animation'; { unavailable in watchos }
    procedure setInputMode(newValue: SCNParticleInputMode); message 'setInputMode:';
    function inputMode: SCNParticleInputMode; message 'inputMode';
    procedure setInputScale(newValue: CGFloat); message 'setInputScale:';
    function inputScale: CGFloat; message 'inputScale';
    procedure setInputBias(newValue: CGFloat); message 'setInputBias:';
    function inputBias: CGFloat; message 'inputBias';
    procedure setInputOrigin(newValue: SCNNode); message 'setInputOrigin:';
    function inputOrigin: SCNNode; message 'inputOrigin';
    procedure setInputProperty(newValue: SCNParticleProperty); message 'setInputProperty:';
    function inputProperty: SCNParticleProperty; message 'inputProperty';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  SCNParticleSystem = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol, SCNAnimatableProtocol)
  public
    class function particleSystem: id; message 'particleSystem';
    class function particleSystemNamed_inDirectory (name: NSString; directory: NSString): id; message 'particleSystemNamed:inDirectory:';
    procedure setEmissionDuration(newValue: CGFloat); message 'setEmissionDuration:';
    function emissionDuration: CGFloat; message 'emissionDuration';
    procedure setEmissionDurationVariation(newValue: CGFloat); message 'setEmissionDurationVariation:';
    function emissionDurationVariation: CGFloat; message 'emissionDurationVariation';
    procedure setIdleDuration(newValue: CGFloat); message 'setIdleDuration:';
    function idleDuration: CGFloat; message 'idleDuration';
    procedure setIdleDurationVariation(newValue: CGFloat); message 'setIdleDurationVariation:';
    function idleDurationVariation: CGFloat; message 'idleDurationVariation';
    procedure setLoops(newValue: objcbool); message 'setLoops:';
    function loops: objcbool; message 'loops';
    procedure setBirthRate(newValue: CGFloat); message 'setBirthRate:';
    function birthRate: CGFloat; message 'birthRate';
    procedure setBirthRateVariation(newValue: CGFloat); message 'setBirthRateVariation:';
    function birthRateVariation: CGFloat; message 'birthRateVariation';
    procedure setWarmupDuration(newValue: CGFloat); message 'setWarmupDuration:';
    function warmupDuration: CGFloat; message 'warmupDuration';
    procedure setEmitterShape(newValue: SCNGeometry); message 'setEmitterShape:';
    function emitterShape: SCNGeometry; message 'emitterShape';
    procedure setBirthLocation(newValue: SCNParticleBirthLocation); message 'setBirthLocation:';
    function birthLocation: SCNParticleBirthLocation; message 'birthLocation';
    procedure setBirthDirection(newValue: SCNParticleBirthDirection); message 'setBirthDirection:';
    function birthDirection: SCNParticleBirthDirection; message 'birthDirection';
    procedure setSpreadingAngle(newValue: CGFloat); message 'setSpreadingAngle:';
    function spreadingAngle: CGFloat; message 'spreadingAngle';
    procedure setEmittingDirection(newValue: SCNVector3); message 'setEmittingDirection:';
    function emittingDirection: SCNVector3; message 'emittingDirection';
    procedure setOrientationDirection(newValue: SCNVector3); message 'setOrientationDirection:'; { available in macos , ios , tvos , watchos  }
    function orientationDirection: SCNVector3; message 'orientationDirection'; { available in macos , ios , tvos , watchos  }
    procedure setAcceleration(newValue: SCNVector3); message 'setAcceleration:';
    function acceleration: SCNVector3; message 'acceleration';
    procedure setLocal(newValue: objcbool); message 'setLocal:';
    function isLocal: objcbool; message 'isLocal';
    procedure setParticleAngle(newValue: CGFloat); message 'setParticleAngle:';
    function particleAngle: CGFloat; message 'particleAngle';
    procedure setParticleAngleVariation(newValue: CGFloat); message 'setParticleAngleVariation:';
    function particleAngleVariation: CGFloat; message 'particleAngleVariation';
    procedure setParticleVelocity(newValue: CGFloat); message 'setParticleVelocity:';
    function particleVelocity: CGFloat; message 'particleVelocity';
    procedure setParticleVelocityVariation(newValue: CGFloat); message 'setParticleVelocityVariation:';
    function particleVelocityVariation: CGFloat; message 'particleVelocityVariation';
    procedure setParticleAngularVelocity(newValue: CGFloat); message 'setParticleAngularVelocity:';
    function particleAngularVelocity: CGFloat; message 'particleAngularVelocity';
    procedure setParticleAngularVelocityVariation(newValue: CGFloat); message 'setParticleAngularVelocityVariation:';
    function particleAngularVelocityVariation: CGFloat; message 'particleAngularVelocityVariation';
    procedure setParticleLifeSpan(newValue: CGFloat); message 'setParticleLifeSpan:';
    function particleLifeSpan: CGFloat; message 'particleLifeSpan';
    procedure setParticleLifeSpanVariation(newValue: CGFloat); message 'setParticleLifeSpanVariation:';
    function particleLifeSpanVariation: CGFloat; message 'particleLifeSpanVariation';
    procedure setSystemSpawnedOnDying(newValue: SCNParticleSystem); message 'setSystemSpawnedOnDying:';
    function systemSpawnedOnDying: SCNParticleSystem; message 'systemSpawnedOnDying';
    procedure setSystemSpawnedOnCollision(newValue: SCNParticleSystem); message 'setSystemSpawnedOnCollision:';
    function systemSpawnedOnCollision: SCNParticleSystem; message 'systemSpawnedOnCollision';
    procedure setSystemSpawnedOnLiving(newValue: SCNParticleSystem); message 'setSystemSpawnedOnLiving:';
    function systemSpawnedOnLiving: SCNParticleSystem; message 'systemSpawnedOnLiving';
    procedure setParticleImage(newValue: id); message 'setParticleImage:';
    function particleImage: id; message 'particleImage';
    procedure setImageSequenceColumnCount(newValue: NSUInteger); message 'setImageSequenceColumnCount:';
    function imageSequenceColumnCount: NSUInteger; message 'imageSequenceColumnCount';
    procedure setImageSequenceRowCount(newValue: NSUInteger); message 'setImageSequenceRowCount:';
    function imageSequenceRowCount: NSUInteger; message 'imageSequenceRowCount';
    procedure setImageSequenceInitialFrame(newValue: CGFloat); message 'setImageSequenceInitialFrame:';
    function imageSequenceInitialFrame: CGFloat; message 'imageSequenceInitialFrame';
    procedure setImageSequenceInitialFrameVariation(newValue: CGFloat); message 'setImageSequenceInitialFrameVariation:';
    function imageSequenceInitialFrameVariation: CGFloat; message 'imageSequenceInitialFrameVariation';
    procedure setImageSequenceFrameRate(newValue: CGFloat); message 'setImageSequenceFrameRate:';
    function imageSequenceFrameRate: CGFloat; message 'imageSequenceFrameRate';
    procedure setImageSequenceFrameRateVariation(newValue: CGFloat); message 'setImageSequenceFrameRateVariation:';
    function imageSequenceFrameRateVariation: CGFloat; message 'imageSequenceFrameRateVariation';
    procedure setImageSequenceAnimationMode(newValue: SCNParticleImageSequenceAnimationMode); message 'setImageSequenceAnimationMode:';
    function imageSequenceAnimationMode: SCNParticleImageSequenceAnimationMode; message 'imageSequenceAnimationMode';
    procedure setParticleColor(newValue: NSColor); message 'setParticleColor:';
    function particleColor: NSColor; message 'particleColor';
    procedure setParticleColorVariation(newValue: SCNVector4); message 'setParticleColorVariation:';
    function particleColorVariation: SCNVector4; message 'particleColorVariation';
    procedure setParticleSize(newValue: CGFloat); message 'setParticleSize:';
    function particleSize: CGFloat; message 'particleSize';
    procedure setParticleSizeVariation(newValue: CGFloat); message 'setParticleSizeVariation:';
    function particleSizeVariation: CGFloat; message 'particleSizeVariation';
    procedure setParticleIntensity(newValue: CGFloat); message 'setParticleIntensity:'; { available in macos , ios , tvos , watchos  }
    function particleIntensity: CGFloat; message 'particleIntensity'; { available in macos , ios , tvos , watchos  }
    procedure setParticleIntensityVariation(newValue: CGFloat); message 'setParticleIntensityVariation:'; { available in macos , ios , tvos , watchos  }
    function particleIntensityVariation: CGFloat; message 'particleIntensityVariation'; { available in macos , ios , tvos , watchos  }
    procedure setBlendMode(newValue: SCNParticleBlendMode); message 'setBlendMode:';
    function blendMode: SCNParticleBlendMode; message 'blendMode';
    procedure setBlackPassEnabled(newValue: objcbool); message 'setBlackPassEnabled:';
    function isBlackPassEnabled: objcbool; message 'isBlackPassEnabled';
    procedure setOrientationMode(newValue: SCNParticleOrientationMode); message 'setOrientationMode:';
    function orientationMode: SCNParticleOrientationMode; message 'orientationMode';
    procedure setSortingMode(newValue: SCNParticleSortingMode); message 'setSortingMode:';
    function sortingMode: SCNParticleSortingMode; message 'sortingMode';
    procedure setLightingEnabled(newValue: objcbool); message 'setLightingEnabled:';
    function isLightingEnabled: objcbool; message 'isLightingEnabled';
    procedure setAffectedByGravity(newValue: objcbool); message 'setAffectedByGravity:';
    function affectedByGravity: objcbool; message 'affectedByGravity';
    procedure setAffectedByPhysicsFields(newValue: objcbool); message 'setAffectedByPhysicsFields:';
    function affectedByPhysicsFields: objcbool; message 'affectedByPhysicsFields';
    procedure setParticleDiesOnCollision(newValue: objcbool); message 'setParticleDiesOnCollision:';
    function particleDiesOnCollision: objcbool; message 'particleDiesOnCollision';
    procedure setColliderNodes(newValue: NSArray); message 'setColliderNodes:';
    function colliderNodes: NSArray; message 'colliderNodes';
    procedure setParticleMass(newValue: CGFloat); message 'setParticleMass:';
    function particleMass: CGFloat; message 'particleMass';
    procedure setParticleMassVariation(newValue: CGFloat); message 'setParticleMassVariation:';
    function particleMassVariation: CGFloat; message 'particleMassVariation';
    procedure setParticleBounce(newValue: CGFloat); message 'setParticleBounce:';
    function particleBounce: CGFloat; message 'particleBounce';
    procedure setParticleBounceVariation(newValue: CGFloat); message 'setParticleBounceVariation:';
    function particleBounceVariation: CGFloat; message 'particleBounceVariation';
    procedure setParticleFriction(newValue: CGFloat); message 'setParticleFriction:';
    function particleFriction: CGFloat; message 'particleFriction';
    procedure setParticleFrictionVariation(newValue: CGFloat); message 'setParticleFrictionVariation:';
    function particleFrictionVariation: CGFloat; message 'particleFrictionVariation';
    procedure setParticleCharge(newValue: CGFloat); message 'setParticleCharge:';
    function particleCharge: CGFloat; message 'particleCharge';
    procedure setParticleChargeVariation(newValue: CGFloat); message 'setParticleChargeVariation:';
    function particleChargeVariation: CGFloat; message 'particleChargeVariation';
    procedure setDampingFactor(newValue: CGFloat); message 'setDampingFactor:';
    function dampingFactor: CGFloat; message 'dampingFactor';
    procedure setSpeedFactor(newValue: CGFloat); message 'setSpeedFactor:';
    function speedFactor: CGFloat; message 'speedFactor';
    procedure setStretchFactor(newValue: CGFloat); message 'setStretchFactor:';
    function stretchFactor: CGFloat; message 'stretchFactor';
    procedure setFresnelExponent(newValue: CGFloat); message 'setFresnelExponent:';
    function fresnelExponent: CGFloat; message 'fresnelExponent';
    procedure setPropertyControllers(newValue: NSDictionary); message 'setPropertyControllers:';
    function propertyControllers: NSDictionary; message 'propertyControllers';
    procedure reset; message 'reset';
    procedure handleEvent_forProperties_withBlock (event: SCNParticleEvent; properties: NSArray; block: SCNParticleEventBlock); message 'handleEvent:forProperties:withBlock:';
    procedure addModifierForProperties_atStage_withBlock (properties: NSArray; stage: SCNParticleModifierStage; block: SCNParticleModifierBlock); message 'addModifierForProperties:atStage:withBlock:';
    procedure removeModifiersOfStage (stage: SCNParticleModifierStage); message 'removeModifiersOfStage:';
    procedure removeAllModifiers; message 'removeAllModifiers';

    { Adopted protocols }
    procedure addAnimation_forKey (animation: SCNAnimationProtocol; key: NSString); message 'addAnimation:forKey:';
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
  SCNNode_SCNParticleSystemSupport = objccategory external name 'SCNParticleSystemSupport' (SCNNode)
    procedure addParticleSystem (system: SCNParticleSystem); message 'addParticleSystem:'; { available in macos  }
    procedure removeAllParticleSystems; message 'removeAllParticleSystems'; { available in macos  }
    procedure removeParticleSystem (system: SCNParticleSystem); message 'removeParticleSystem:'; { available in macos  }
    function particleSystems: NSArray; message 'particleSystems'; { available in macos  }
  end;

type
  SCNParticleSystemSupport = objccategory external (SCNScene)
    procedure addParticleSystem_withTransform (system: SCNParticleSystem; transform: SCNMatrix4); message 'addParticleSystem:withTransform:'; { available in macos  }
    procedure removeAllParticleSystems; message 'removeAllParticleSystems'; { available in macos  }
    procedure removeParticleSystem (system: SCNParticleSystem); message 'removeParticleSystem:'; { available in macos  }
    function particleSystems: NSArray; message 'particleSystems'; { available in macos  }
  end;
{$endif}

