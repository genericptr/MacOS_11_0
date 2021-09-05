{ Parsed from ModelIO.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ModelIO.framework/Headers/MDLAnimation.h }

{$ifdef TYPES}
type
  MDLSkeletonPtr = ^MDLSkeleton;
  MDLPackedJointAnimationPtr = ^MDLPackedJointAnimation;
  MDLAnimationBindComponentPtr = ^MDLAnimationBindComponent;
  MDLJointAnimationProtocolPtr = ^MDLJointAnimationProtocol;
{$endif}

{$ifdef CLASSES}

type
  MDLSkeleton = objcclass external (MDLObject, NSCopyingProtocol)
  public
    function jointPaths: NSArray; message 'jointPaths';
    function jointBindTransforms: MDLMatrix4x4Array; message 'jointBindTransforms';
    function jointRestTransforms: MDLMatrix4x4Array; message 'jointRestTransforms';
    function initWithName_jointPaths (name: NSString; jointPaths_: NSArray): id; message 'initWithName:jointPaths:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MDLJointAnimationProtocol = objcprotocol external name 'MDLJointAnimation'
  end;
{$endif}

{$ifdef CLASSES}

type
  MDLPackedJointAnimation = objcclass external (MDLObject, NSCopyingProtocol, MDLJointAnimationProtocol)
  public
    function jointPaths: NSArray; message 'jointPaths';
    function translations: MDLAnimatedVector3Array; message 'translations';
    function rotations: MDLAnimatedQuaternionArray; message 'rotations';
    function scales: MDLAnimatedVector3Array; message 'scales';
    function initWithName_jointPaths (name: NSString; jointPaths_: NSArray): id; message 'initWithName:jointPaths:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MDLAnimationBindComponent = objcclass external (NSObject, NSCopyingProtocol, MDLComponentProtocol)
  public
    procedure setSkeleton(newValue: MDLSkeleton); message 'setSkeleton:';
    function skeleton: MDLSkeleton; message 'skeleton';
    procedure setJointAnimation(newValue: MDLJointAnimationProtocol); message 'setJointAnimation:';
    function jointAnimation: MDLJointAnimationProtocol; message 'jointAnimation';
    procedure setJointPaths(newValue: NSArray); message 'setJointPaths:';
    function jointPaths: NSArray; message 'jointPaths';
    procedure setGeometryBindTransform(newValue: matrix_double4x4); message 'setGeometryBindTransform:';
    function geometryBindTransform: matrix_double4x4; message 'geometryBindTransform';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

