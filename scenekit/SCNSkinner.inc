{ Parsed from SceneKit.framework SCNSkinner.h }

{$ifdef TYPES}
type
  SCNSkinnerPtr = ^SCNSkinner;
{$endif}

{$ifdef CLASSES}

type
  SCNSkinner = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    procedure setSkeleton(newValue: SCNNode); message 'setSkeleton:';
    function skeleton: SCNNode; message 'skeleton';
    class function skinnerWithBaseGeometry_bones_boneInverseBindTransforms_boneWeights_boneIndices (baseGeometry: SCNGeometry; bones: NSArray; boneInverseBindTransforms: NSArray; boneWeights: SCNGeometrySource; boneIndices: SCNGeometrySource): id; message 'skinnerWithBaseGeometry:bones:boneInverseBindTransforms:boneWeights:boneIndices:'; { available in macos 10.10 }
    procedure setBaseGeometry(newValue: SCNGeometry); message 'setBaseGeometry:'; { available in macos 10.9 }
    function baseGeometry: SCNGeometry; message 'baseGeometry'; { available in macos 10.9 }
    procedure setBaseGeometryBindTransform(newValue: SCNMatrix4); message 'setBaseGeometryBindTransform:'; { available in macos 10.10 }
    function baseGeometryBindTransform: SCNMatrix4; message 'baseGeometryBindTransform'; { available in macos 10.10 }
    function boneInverseBindTransforms: NSArray; message 'boneInverseBindTransforms'; { available in macos 10.10 }
    function bones: NSArray; message 'bones'; { available in macos 10.10 }
    function boneWeights: SCNGeometrySource; message 'boneWeights'; { available in macos 10.10 }
    function boneIndices: SCNGeometrySource; message 'boneIndices'; { available in macos 10.10 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

