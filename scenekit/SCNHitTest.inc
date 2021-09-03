{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNHitTest.h }

{$ifdef TYPES}
type
  SCNHitTestResultPtr = ^SCNHitTestResult;
{$endif}

{$ifdef TYPES}
type
  SCNHitTestSearchMode = NSInteger;
  SCNHitTestSearchModePtr = ^SCNHitTestSearchMode;

const
  SCNHitTestSearchModeClosest = 0;
  SCNHitTestSearchModeAll = 1;
  SCNHitTestSearchModeAny = 2;

type
  SCNHitTestOption = NSString;
  SCNHitTestOptionPtr = ^SCNHitTestOption;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNHitTestClipToZRangeKey: SCNHitTestOption; cvar; external;
  SCNHitTestBackFaceCullingKey: SCNHitTestOption; cvar; external;
  SCNHitTestBoundingBoxOnlyKey: SCNHitTestOption; cvar; external;
  SCNHitTestIgnoreChildNodesKey: SCNHitTestOption; cvar; external;
  SCNHitTestRootNodeKey: SCNHitTestOption; cvar; external;
  SCNHitTestIgnoreHiddenNodesKey: SCNHitTestOption { available in macos  }; cvar; external;
  SCNHitTestOptionCategoryBitMask: SCNHitTestOption { available in macos , ios , tvos  }; cvar; external;
  SCNHitTestOptionSearchMode: SCNHitTestOption { available in macos , ios , tvos , watchos  }; cvar; external;
  SCNHitTestOptionIgnoreLightArea: SCNHitTestOption { available in macos , ios , tvos , watchos  }; cvar; external;
  SCNHitTestFirstFoundOnlyKey: SCNHitTestOption; cvar; external;
  SCNHitTestSortResultsKey: SCNHitTestOption; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SCNHitTestResult = objcclass external (NSObject)
  public
    function node: SCNNode; message 'node';
    function geometryIndex: NSInteger; message 'geometryIndex';
    function faceIndex: NSInteger; message 'faceIndex';
    function localCoordinates: SCNVector3; message 'localCoordinates';
    function worldCoordinates: SCNVector3; message 'worldCoordinates';
    function localNormal: SCNVector3; message 'localNormal';
    function worldNormal: SCNVector3; message 'worldNormal';
    function modelTransform: SCNMatrix4; message 'modelTransform';
    function boneNode: SCNNode; message 'boneNode'; { available in macos , ios , tvos  }
    function textureCoordinatesWithMappingChannel (channel: NSInteger): CGPoint; message 'textureCoordinatesWithMappingChannel:';
  end;


type
  SCNHitTestResult_SIMD = objccategory external name 'SIMD' (SCNHitTestResult)
    function simdLocalCoordinates: simd_float3; message 'simdLocalCoordinates'; { available in macos , ios , tvos , watchos  }
    function simdWorldCoordinates: simd_float3; message 'simdWorldCoordinates'; { available in macos , ios , tvos , watchos  }
    function simdLocalNormal: simd_float3; message 'simdLocalNormal'; { available in macos , ios , tvos , watchos  }
    function simdWorldNormal: simd_float3; message 'simdWorldNormal'; { available in macos , ios , tvos , watchos  }
    function simdModelTransform: simd_float4x4; message 'simdModelTransform'; { available in macos , ios , tvos , watchos  }
  end;
{$endif}

