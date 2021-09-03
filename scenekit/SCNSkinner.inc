{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNSkinner.h }

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
    class function skinnerWithBaseGeometry_bones_boneInverseBindTransforms_boneWeights_boneIndices (baseGeometry: SCNGeometry; bones: NSArray; boneInverseBindTransforms: NSArray; boneWeights: SCNGeometrySource; boneIndices: SCNGeometrySource): id; message 'skinnerWithBaseGeometry:bones:boneInverseBindTransforms:boneWeights:boneIndices:'; { available in macos  }
    procedure setBaseGeometry(newValue: SCNGeometry); message 'setBaseGeometry:'; { available in macos  }
    function baseGeometry: SCNGeometry; message 'baseGeometry'; { available in macos  }
    procedure setBaseGeometryBindTransform(newValue: SCNMatrix4); message 'setBaseGeometryBindTransform:'; { available in macos  }
    function baseGeometryBindTransform: SCNMatrix4; message 'baseGeometryBindTransform'; { available in macos  }
    function boneInverseBindTransforms: NSArray; message 'boneInverseBindTransforms'; { available in macos  }
    function bones: NSArray; message 'bones'; { available in macos  }
    function boneWeights: SCNGeometrySource; message 'boneWeights'; { available in macos  }
    function boneIndices: SCNGeometrySource; message 'boneIndices'; { available in macos  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

