{ Parsed from SceneKit.framework SCNPhysicsField.h }

{ Types from SCNPhysicsField }
{$ifdef TYPES}

type
  SCNFieldForceEvaluator = reference to function (position: SCNVector3; velocity: SCNVector3; mass: single; charge: single; time: NSTimeInterval): SCNVector3; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SCNPhysicsFieldPtr = ^SCNPhysicsField;
{$endif}

{$ifdef TYPES}
type
  SCNPhysicsFieldScope = NSInteger;
  SCNPhysicsFieldScopePtr = ^SCNPhysicsFieldScope;

const
  SCNPhysicsFieldScopeInsideExtent = 0;
  SCNPhysicsFieldScopeOutsideExtent = 1;
{$endif}

{$ifdef CLASSES}

type
  SCNPhysicsField = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setStrength(newValue: CGFloat); message 'setStrength:';
    function strength: CGFloat; message 'strength';
    procedure setFalloffExponent(newValue: CGFloat); message 'setFalloffExponent:';
    function falloffExponent: CGFloat; message 'falloffExponent';
    procedure setMinimumDistance(newValue: CGFloat); message 'setMinimumDistance:';
    function minimumDistance: CGFloat; message 'minimumDistance';
    procedure setActive(newValue: objcbool); message 'setActive:';
    function isActive: objcbool; message 'isActive';
    procedure setExclusive(newValue: objcbool); message 'setExclusive:';
    function isExclusive: objcbool; message 'isExclusive';
    procedure setHalfExtent(newValue: SCNVector3); message 'setHalfExtent:';
    function halfExtent: SCNVector3; message 'halfExtent';
    procedure setUsesEllipsoidalExtent(newValue: objcbool); message 'setUsesEllipsoidalExtent:';
    function usesEllipsoidalExtent: objcbool; message 'usesEllipsoidalExtent';
    procedure setScope(newValue: SCNPhysicsFieldScope); message 'setScope:';
    function scope: SCNPhysicsFieldScope; message 'scope';
    procedure setOffset(newValue: SCNVector3); message 'setOffset:';
    function offset: SCNVector3; message 'offset';
    procedure setDirection(newValue: SCNVector3); message 'setDirection:';
    function direction: SCNVector3; message 'direction';
    procedure setCategoryBitMask(newValue: NSUInteger); message 'setCategoryBitMask:'; { available in macos 10.10 }
    function categoryBitMask: NSUInteger; message 'categoryBitMask'; { available in macos 10.10 }
    class function dragField: SCNPhysicsField; message 'dragField';
    class function vortexField: SCNPhysicsField; message 'vortexField';
    class function radialGravityField: SCNPhysicsField; message 'radialGravityField';
    class function linearGravityField: SCNPhysicsField; message 'linearGravityField';
    class function noiseFieldWithSmoothness_animationSpeed (smoothness: CGFloat; speed: CGFloat): SCNPhysicsField; message 'noiseFieldWithSmoothness:animationSpeed:';
    class function turbulenceFieldWithSmoothness_animationSpeed (smoothness: CGFloat; speed: CGFloat): SCNPhysicsField; message 'turbulenceFieldWithSmoothness:animationSpeed:';
    class function springField: SCNPhysicsField; message 'springField';
    class function electricField: SCNPhysicsField; message 'electricField';
    class function magneticField: SCNPhysicsField; message 'magneticField';
    class function customFieldWithEvaluationBlock (block: SCNFieldForceEvaluator): SCNPhysicsField; message 'customFieldWithEvaluationBlock:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

