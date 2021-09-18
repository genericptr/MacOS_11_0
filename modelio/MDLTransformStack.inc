{ Parsed from ModelIO.framework MDLTransformStack.h }

{$ifdef TYPES}
type
  MDLTransformRotateXOpPtr = ^MDLTransformRotateXOp;
  MDLTransformRotateYOpPtr = ^MDLTransformRotateYOp;
  MDLTransformRotateZOpPtr = ^MDLTransformRotateZOp;
  MDLTransformRotateOpPtr = ^MDLTransformRotateOp;
  MDLTransformTranslateOpPtr = ^MDLTransformTranslateOp;
  MDLTransformScaleOpPtr = ^MDLTransformScaleOp;
  MDLTransformMatrixOpPtr = ^MDLTransformMatrixOp;
  MDLTransformOrientOpPtr = ^MDLTransformOrientOp;
  MDLTransformStackPtr = ^MDLTransformStack;
  MDLTransformOpProtocolPtr = ^MDLTransformOpProtocol;
{$endif}

{$ifdef TYPES}
type
  MDLTransformOpRotationOrder = NSUInteger;
  MDLTransformOpRotationOrderPtr = ^MDLTransformOpRotationOrder;

const
  MDLTransformOpRotationOrderXYZ = 1;
  MDLTransformOpRotationOrderXZY = 2;
  MDLTransformOpRotationOrderYXZ = 3;
  MDLTransformOpRotationOrderYZX = 4;
  MDLTransformOpRotationOrderZXY = 5;
  MDLTransformOpRotationOrderZYX = 6;
{$endif}

{$ifdef PROTOCOLS}

type
  MDLTransformOpProtocol = objcprotocol external name 'MDLTransformOp'
    function name: NSString; message 'name';
    function float4x4AtTime (time: NSTimeInterval): matrix_float4x4; message 'float4x4AtTime:';
    function double4x4AtTime (time: NSTimeInterval): matrix_double4x4; message 'double4x4AtTime:';
    function IsInverseOp: cbool; message 'IsInverseOp';
  end;
{$endif}

{$ifdef CLASSES}

type
  MDLTransformRotateXOp = objcclass external (NSObject, MDLTransformOpProtocol)
  public
    function name: NSString; message 'name';
    function animatedValue: MDLAnimatedScalar; message 'animatedValue';

    { Adopted protocols }
    function double4x4AtTime (time: NSTimeInterval): matrix_double4x4; message 'double4x4AtTime:';
    function float4x4AtTime (time: NSTimeInterval): matrix_float4x4; message 'float4x4AtTime:';
    function IsInverseOp: cbool; message 'IsInverseOp';
    function name_: NSString; message 'name';
  end;

type
  MDLTransformRotateYOp = objcclass external (NSObject, MDLTransformOpProtocol)
  public
    function name: NSString; message 'name';
    function animatedValue: MDLAnimatedScalar; message 'animatedValue';

    { Adopted protocols }
    function double4x4AtTime (time: NSTimeInterval): matrix_double4x4; message 'double4x4AtTime:';
    function float4x4AtTime (time: NSTimeInterval): matrix_float4x4; message 'float4x4AtTime:';
    function IsInverseOp: cbool; message 'IsInverseOp';
    function name_: NSString; message 'name';
  end;

type
  MDLTransformRotateZOp = objcclass external (NSObject, MDLTransformOpProtocol)
  public
    function name: NSString; message 'name';
    function animatedValue: MDLAnimatedScalar; message 'animatedValue';

    { Adopted protocols }
    function double4x4AtTime (time: NSTimeInterval): matrix_double4x4; message 'double4x4AtTime:';
    function float4x4AtTime (time: NSTimeInterval): matrix_float4x4; message 'float4x4AtTime:';
    function IsInverseOp: cbool; message 'IsInverseOp';
    function name_: NSString; message 'name';
  end;

type
  MDLTransformRotateOp = objcclass external (NSObject, MDLTransformOpProtocol)
  public
    function name: NSString; message 'name';
    function animatedValue: MDLAnimatedVector3; message 'animatedValue';

    { Adopted protocols }
    function double4x4AtTime (time: NSTimeInterval): matrix_double4x4; message 'double4x4AtTime:';
    function float4x4AtTime (time: NSTimeInterval): matrix_float4x4; message 'float4x4AtTime:';
    function IsInverseOp: cbool; message 'IsInverseOp';
    function name_: NSString; message 'name';
  end;

type
  MDLTransformTranslateOp = objcclass external (NSObject, MDLTransformOpProtocol)
  public
    function name: NSString; message 'name';
    function animatedValue: MDLAnimatedVector3; message 'animatedValue';

    { Adopted protocols }
    function double4x4AtTime (time: NSTimeInterval): matrix_double4x4; message 'double4x4AtTime:';
    function float4x4AtTime (time: NSTimeInterval): matrix_float4x4; message 'float4x4AtTime:';
    function IsInverseOp: cbool; message 'IsInverseOp';
    function name_: NSString; message 'name';
  end;

type
  MDLTransformScaleOp = objcclass external (NSObject, MDLTransformOpProtocol)
  public
    function name: NSString; message 'name';
    function animatedValue: MDLAnimatedVector3; message 'animatedValue';

    { Adopted protocols }
    function double4x4AtTime (time: NSTimeInterval): matrix_double4x4; message 'double4x4AtTime:';
    function float4x4AtTime (time: NSTimeInterval): matrix_float4x4; message 'float4x4AtTime:';
    function IsInverseOp: cbool; message 'IsInverseOp';
    function name_: NSString; message 'name';
  end;

type
  MDLTransformMatrixOp = objcclass external (NSObject, MDLTransformOpProtocol)
  public
    function name: NSString; message 'name';
    function animatedValue: MDLAnimatedMatrix4x4; message 'animatedValue';

    { Adopted protocols }
    function double4x4AtTime (time: NSTimeInterval): matrix_double4x4; message 'double4x4AtTime:';
    function float4x4AtTime (time: NSTimeInterval): matrix_float4x4; message 'float4x4AtTime:';
    function IsInverseOp: cbool; message 'IsInverseOp';
    function name_: NSString; message 'name';
  end;

type
  MDLTransformOrientOp = objcclass external (NSObject, MDLTransformOpProtocol)
  public
    function name: NSString; message 'name';
    function animatedValue: MDLAnimatedQuaternion; message 'animatedValue';

    { Adopted protocols }
    function double4x4AtTime (time: NSTimeInterval): matrix_double4x4; message 'double4x4AtTime:';
    function float4x4AtTime (time: NSTimeInterval): matrix_float4x4; message 'float4x4AtTime:';
    function IsInverseOp: cbool; message 'IsInverseOp';
    function name_: NSString; message 'name';
  end;

type
  MDLTransformStack = objcclass external (NSObject, NSCopyingProtocol, MDLTransformComponentProtocol)
  public
    function init: id; message 'init';
    function addTranslateOp_inverse (animatedValueName: NSString; inverse: cbool): MDLTransformTranslateOp; message 'addTranslateOp:inverse:';
    function addRotateXOp_inverse (animatedValueName: NSString; inverse: cbool): MDLTransformRotateXOp; message 'addRotateXOp:inverse:';
    function addRotateYOp_inverse (animatedValueName: NSString; inverse: cbool): MDLTransformRotateYOp; message 'addRotateYOp:inverse:';
    function addRotateZOp_inverse (animatedValueName: NSString; inverse: cbool): MDLTransformRotateZOp; message 'addRotateZOp:inverse:';
    function addRotateOp_order_inverse (animatedValueName: NSString; order: MDLTransformOpRotationOrder; inverse: cbool): MDLTransformRotateOp; message 'addRotateOp:order:inverse:';
    function addScaleOp_inverse (animatedValueName: NSString; inverse: cbool): MDLTransformScaleOp; message 'addScaleOp:inverse:';
    function addMatrixOp_inverse (animatedValueName: NSString; inverse: cbool): MDLTransformMatrixOp; message 'addMatrixOp:inverse:';
    function addOrientOp_inverse (animatedValueName: NSString; inverse: cbool): MDLTransformOrientOp; message 'addOrientOp:inverse:';
    function animatedValueWithName (name: NSString): MDLAnimatedValue; message 'animatedValueWithName:';
    function float4x4AtTime (time: NSTimeInterval): matrix_float4x4; message 'float4x4AtTime:';
    function double4x4AtTime (time: NSTimeInterval): matrix_double4x4; message 'double4x4AtTime:';
    function count: NSUInteger; message 'count';
    function keyTimes: NSArray; message 'keyTimes';
    function transformOps: NSArray; message 'transformOps';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    class function globalTransformWithObject_atTime (object_: MDLObject; time: NSTimeInterval): matrix_float4x4; message 'globalTransformWithObject:atTime:';
    function keyTimes_: NSArray; message 'keyTimes';
    function localTransformAtTime (time: NSTimeInterval): matrix_float4x4; message 'localTransformAtTime:';
    function matrix: matrix_float4x4; message 'matrix';
    function maximumTime: NSTimeInterval; message 'maximumTime';
    function minimumTime: NSTimeInterval; message 'minimumTime';
    function resetsTransform: objcbool; message 'resetsTransform';
    procedure setLocalTransform (transform: matrix_float4x4); message 'setLocalTransform:';
    procedure setLocalTransform_forTime (transform: matrix_float4x4; time: NSTimeInterval); message 'setLocalTransform:forTime:';
    procedure setMatrix (newValue: matrix_float4x4); message 'setMatrix:';
    procedure setResetsTransform (newValue: objcbool); message 'setResetsTransform:';
  end;
{$endif}

