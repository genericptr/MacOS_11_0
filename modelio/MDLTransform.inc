{ Parsed from ModelIO.framework MDLTransform.h }

{$ifdef TYPES}
type
  MDLTransformPtr = ^MDLTransform;
  MDLTransformComponentProtocolPtr = ^MDLTransformComponentProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MDLTransformComponentProtocol = objcprotocol external name 'MDLTransformComponent' (MDLComponentProtocol)
  required
    procedure setMatrix(newValue: matrix_float4x4); message 'setMatrix:';
    function matrix: matrix_float4x4; message 'matrix';
    procedure setResetsTransform(newValue: objcbool); message 'setResetsTransform:';
    function resetsTransform: objcbool; message 'resetsTransform';
    function minimumTime: NSTimeInterval; message 'minimumTime';
    function maximumTime: NSTimeInterval; message 'maximumTime';
    function keyTimes: NSArray; message 'keyTimes';
  optional
    procedure setLocalTransform_forTime (transform: matrix_float4x4; time: NSTimeInterval); message 'setLocalTransform:forTime:';
    procedure setLocalTransform (transform: matrix_float4x4); message 'setLocalTransform:';
    function localTransformAtTime (time: NSTimeInterval): matrix_float4x4; message 'localTransformAtTime:';
    class function globalTransformWithObject_atTime (object_: MDLObject; time: NSTimeInterval): matrix_float4x4; message 'globalTransformWithObject:atTime:';
  end;
{$endif}

{$ifdef CLASSES}

type
  MDLTransform = objcclass external (NSObject, NSCopyingProtocol, MDLTransformComponentProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithIdentity: id; message 'initWithIdentity'; deprecated 'replace with init';
    function initWithTransformComponent (component: MDLTransformComponentProtocol): id; message 'initWithTransformComponent:';
    function initWithTransformComponent_resetsTransform (component: MDLTransformComponentProtocol; resetsTransform: objcbool): id; message 'initWithTransformComponent:resetsTransform:';
    function initWithMatrix (matrix: matrix_float4x4): id; message 'initWithMatrix:';
    function initWithMatrix_resetsTransform (matrix: matrix_float4x4; resetsTransform: objcbool): id; message 'initWithMatrix:resetsTransform:';
    procedure setIdentity; message 'setIdentity';
    function translationAtTime (time: NSTimeInterval): vector_float3; message 'translationAtTime:';
    function rotationAtTime (time: NSTimeInterval): vector_float3; message 'rotationAtTime:';
    function shearAtTime (time: NSTimeInterval): vector_float3; message 'shearAtTime:';
    function scaleAtTime (time: NSTimeInterval): vector_float3; message 'scaleAtTime:';
    procedure setMatrix_forTime (matrix: matrix_float4x4; time: NSTimeInterval); message 'setMatrix:forTime:'; { available in macos 10.13, ios 11.0, tvos 11.0 }
    procedure setTranslation_forTime (translation: vector_float3; time: NSTimeInterval); message 'setTranslation:forTime:';
    procedure setRotation_forTime (rotation: vector_float3; time: NSTimeInterval); message 'setRotation:forTime:';
    procedure setShear_forTime (shear: vector_float3; time: NSTimeInterval); message 'setShear:forTime:';
    procedure setScale_forTime (scale: vector_float3; time: NSTimeInterval); message 'setScale:forTime:';
    function rotationMatrixAtTime (time: NSTimeInterval): matrix_float4x4; message 'rotationMatrixAtTime:';
    procedure setTranslation(newValue: vector_float3); message 'setTranslation:';
    function translation: vector_float3; message 'translation';
    procedure setRotation(newValue: vector_float3); message 'setRotation:';
    function rotation: vector_float3; message 'rotation';
    procedure setShear(newValue: vector_float3); message 'setShear:';
    function shear: vector_float3; message 'shear';
    procedure setScale(newValue: vector_float3); message 'setScale:';
    function scale: vector_float3; message 'scale';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    class function globalTransformWithObject_atTime (object_: MDLObject; time: NSTimeInterval): matrix_float4x4; message 'globalTransformWithObject:atTime:';
    function keyTimes: NSArray; message 'keyTimes';
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

