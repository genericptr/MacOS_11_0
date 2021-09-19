{ Parsed from SceneKit.framework SCNHitTest.h }

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
  SCNHitTestIgnoreHiddenNodesKey: SCNHitTestOption { available in macos 10.9 }; cvar; external;
  SCNHitTestOptionCategoryBitMask: SCNHitTestOption { available in macos 10.12, ios 10.0, tvos 10.0 }; cvar; external;
  SCNHitTestOptionSearchMode: SCNHitTestOption { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }; cvar; external;
  SCNHitTestOptionIgnoreLightArea: SCNHitTestOption { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }; cvar; external;
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
    function boneNode: SCNNode; message 'boneNode'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function textureCoordinatesWithMappingChannel (channel: NSInteger): CGPoint; message 'textureCoordinatesWithMappingChannel:';
  end;


type
  SCNHitTestResult_SIMD = objccategory external name 'SIMD' (SCNHitTestResult)
    function simdLocalCoordinates: simd_float3; message 'simdLocalCoordinates'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function simdWorldCoordinates: simd_float3; message 'simdWorldCoordinates'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function simdLocalNormal: simd_float3; message 'simdLocalNormal'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function simdWorldNormal: simd_float3; message 'simdWorldNormal'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function simdModelTransform: simd_float4x4; message 'simdModelTransform'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
  end;
{$endif}

