{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNGeometry.h }

{ Types from SCNGeometry }
{$ifdef TYPES}

{$endif}


{ Types from SCNGeometrySource }
{$ifdef TYPES}

{$endif}


{ Types from SCNGeometryElement }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SCNGeometryPtr = ^SCNGeometry;
  SCNGeometrySourcePtr = ^SCNGeometrySource;
  SCNGeometryElementPtr = ^SCNGeometryElement;
  SCNGeometryTessellatorPtr = ^SCNGeometryTessellator;
{$endif}

{$ifdef TYPES}
type
  SCNGeometryPrimitiveType = NSInteger;
  SCNGeometryPrimitiveTypePtr = ^SCNGeometryPrimitiveType;

const
  SCNGeometryPrimitiveTypeTriangles = 0;
  SCNGeometryPrimitiveTypeTriangleStrip = 1;
  SCNGeometryPrimitiveTypeLine = 2;
  SCNGeometryPrimitiveTypePoint = 3;
  SCNGeometryPrimitiveTypePolygon = 4 { available in macos , ios , tvos  };

type
  SCNGeometrySourceSemantic = NSString;
  SCNGeometrySourceSemanticPtr = ^SCNGeometrySourceSemantic;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNGeometrySourceSemanticVertex: SCNGeometrySourceSemantic; cvar; external;
  SCNGeometrySourceSemanticNormal: SCNGeometrySourceSemantic; cvar; external;
  SCNGeometrySourceSemanticColor: SCNGeometrySourceSemantic; cvar; external;
  SCNGeometrySourceSemanticTexcoord: SCNGeometrySourceSemantic; cvar; external;
  SCNGeometrySourceSemanticTangent: SCNGeometrySourceSemantic { available in macos , ios , tvos  }; cvar; external;
  SCNGeometrySourceSemanticVertexCrease: SCNGeometrySourceSemantic { available in macos  }; cvar; external;
  SCNGeometrySourceSemanticEdgeCrease: SCNGeometrySourceSemantic { available in macos  }; cvar; external;
  SCNGeometrySourceSemanticBoneWeights: SCNGeometrySourceSemantic { available in macos  }; cvar; external;
  SCNGeometrySourceSemanticBoneIndices: SCNGeometrySourceSemantic { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SCNGeometry = objcclass external (NSObject, SCNAnimatableProtocol, SCNBoundingVolumeProtocol, SCNShadableProtocol, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function geometry: id; message 'geometry'; { available in macos  }
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setMaterials(newValue: NSArray); message 'setMaterials:';
    function materials: NSArray; message 'materials';
    procedure setFirstMaterial(newValue: SCNMaterial); message 'setFirstMaterial:';
    function firstMaterial: SCNMaterial; message 'firstMaterial';
    procedure insertMaterial_atIndex (material: SCNMaterial; index: NSUInteger); message 'insertMaterial:atIndex:';
    procedure removeMaterialAtIndex (index: NSUInteger); message 'removeMaterialAtIndex:';
    procedure replaceMaterialAtIndex_withMaterial (index: NSUInteger; material: SCNMaterial); message 'replaceMaterialAtIndex:withMaterial:';
    function materialWithName (name_: NSString): SCNMaterial; message 'materialWithName:';
    class function geometryWithSources_elements (sources: NSArray; elements: NSArray): id; message 'geometryWithSources:elements:';
    function geometrySources: NSArray; message 'geometrySources'; { available in macos  }
    function geometrySourcesForSemantic (semantic: SCNGeometrySourceSemantic): NSArray; message 'geometrySourcesForSemantic:';
    function geometryElements: NSArray; message 'geometryElements'; { available in macos  }
    function geometryElementCount: NSInteger; message 'geometryElementCount';
    function geometryElementAtIndex (elementIndex: NSInteger): SCNGeometryElement; message 'geometryElementAtIndex:';
    procedure setLevelsOfDetail(newValue: NSArray); message 'setLevelsOfDetail:'; { available in macos  }
    function levelsOfDetail: NSArray; message 'levelsOfDetail'; { available in macos  }
    {$if defined(SCN_ENABLE_METAL)}
    procedure setTessellator(newValue: SCNGeometryTessellator); message 'setTessellator:'; { unavailable in watchos }
    function tessellator: SCNGeometryTessellator; message 'tessellator'; { unavailable in watchos }
    {$endif}
    procedure setSubdivisionLevel(newValue: NSUInteger); message 'setSubdivisionLevel:'; { available in macos  }
    function subdivisionLevel: NSUInteger; message 'subdivisionLevel'; { available in macos  }
    procedure setWantsAdaptiveSubdivision(newValue: objcbool); message 'setWantsAdaptiveSubdivision:'; { available in macos , ios , tvos , watchos  }
    function wantsAdaptiveSubdivision: objcbool; message 'wantsAdaptiveSubdivision'; { available in macos , ios , tvos , watchos  }
    procedure setEdgeCreasesElement(newValue: SCNGeometryElement); message 'setEdgeCreasesElement:'; { available in macos  }
    function edgeCreasesElement: SCNGeometryElement; message 'edgeCreasesElement'; { available in macos  }
    procedure setEdgeCreasesSource(newValue: SCNGeometrySource); message 'setEdgeCreasesSource:'; { available in macos  }
    function edgeCreasesSource: SCNGeometrySource; message 'edgeCreasesSource'; { available in macos  }

    { Adopted protocols }
    procedure addAnimation_forKey (animation: SCNAnimationProtocol; key: NSString); message 'addAnimation:forKey:';
    procedure addAnimationPlayer_forKey (player: SCNAnimationPlayer; key: NSString); message 'addAnimationPlayer:forKey:'; { available in macos , ios , tvos , watchos  }
    function animationForKey (key: NSString): CAAnimationPtr; message 'animationForKey:'; deprecated 'replace with -animationPlayerForKey:';
    function animationKeys: NSArray; message 'animationKeys';
    function animationPlayerForKey (key: NSString): SCNAnimationPlayer; message 'animationPlayerForKey:'; { available in macos , ios , tvos , watchos  }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function getBoundingBoxMin_max (min: SCNVector3Ptr; max: SCNVector3Ptr): objcbool; message 'getBoundingBoxMin:max:';
    function getBoundingSphereCenter_radius (center: SCNVector3Ptr; radius: CGFloatPtr): objcbool; message 'getBoundingSphereCenter:radius:';
    procedure handleBindingOfSymbol_usingBlock (symbol: NSString; block: SCNBindingBlock); message 'handleBindingOfSymbol:usingBlock:'; { unavailable in watchos }
    procedure handleUnbindingOfSymbol_usingBlock (symbol: NSString; block: SCNBindingBlock); message 'handleUnbindingOfSymbol:usingBlock:'; { unavailable in watchos }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function isAnimationForKeyPaused (key: NSString): objcbool; message 'isAnimationForKeyPaused:'; deprecated 'Use -[SCNAnimationPlayer paused] instead';
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    function program_: SCNProgram; message 'program'; { unavailable in watchos }
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    procedure removeAnimationForKey_blendOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:blendOutDuration:'; { available in macos , ios , tvos , watchos  }
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; deprecated 'replace with -removeAnimationForKey:blendOutDuration:';
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    procedure setBoundingBoxMin_max (min: SCNVector3Ptr; max: SCNVector3Ptr); message 'setBoundingBoxMin:max:'; { available in macos  }
    procedure setProgram (newValue: SCNProgram); message 'setProgram:'; { unavailable in watchos }
    procedure setShaderModifiers (newValue: NSDictionary); message 'setShaderModifiers:'; { available in macos  }
    procedure setSpeed_forAnimationKey (speed: CGFloat; key: NSString); message 'setSpeed:forAnimationKey:'; deprecated 'Use -[SCNAnimationPlayer setSpeed:] instead';
    function shaderModifiers: NSDictionary; message 'shaderModifiers'; { available in macos  }
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  SCNGeometrySource = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function geometrySourceWithData_semantic_vectorCount_floatComponents_componentsPerVector_bytesPerComponent_dataOffset_dataStride (data: NSData; semantic: SCNGeometrySourceSemantic; vectorCount: NSInteger; floatComponents: objcbool; componentsPerVector: NSInteger; bytesPerComponent: NSInteger; offset: NSInteger; stride: NSInteger): id; message 'geometrySourceWithData:semantic:vectorCount:floatComponents:componentsPerVector:bytesPerComponent:dataOffset:dataStride:';
    class function geometrySourceWithVertices_count (vertices: SCNVector3Ptr; count: NSInteger): id; message 'geometrySourceWithVertices:count:';
    class function geometrySourceWithNormals_count (normals: SCNVector3Ptr; count: NSInteger): id; message 'geometrySourceWithNormals:count:';
    class function geometrySourceWithTextureCoordinates_count (texcoord: CGPointPtr; count: NSInteger): id; message 'geometrySourceWithTextureCoordinates:count:';
    {$if defined(SCN_ENABLE_METAL)}
    class function geometrySourceWithBuffer_vertexFormat_semantic_vertexCount_dataOffset_dataStride (buffer: MTLBufferProtocol; vertexFormat: MTLVertexFormat; semantic: SCNGeometrySourceSemantic; vertexCount: NSInteger; offset: NSInteger; stride: NSInteger): id; message 'geometrySourceWithBuffer:vertexFormat:semantic:vertexCount:dataOffset:dataStride:'; { available in macos , ios  }
    {$endif}
    function data: NSData; message 'data';
    function semantic: SCNGeometrySourceSemantic; message 'semantic';
    function vectorCount: NSInteger; message 'vectorCount';
    function floatComponents: objcbool; message 'floatComponents';
    function componentsPerVector: NSInteger; message 'componentsPerVector';
    function bytesPerComponent: NSInteger; message 'bytesPerComponent';
    function dataOffset: NSInteger; message 'dataOffset';
    function dataStride: NSInteger; message 'dataStride';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  SCNGeometryElement = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function geometryElementWithData_primitiveType_primitiveCount_bytesPerIndex (data: NSData; primitiveType: SCNGeometryPrimitiveType; primitiveCount: NSInteger; bytesPerIndex: NSInteger): id; message 'geometryElementWithData:primitiveType:primitiveCount:bytesPerIndex:';
    {$if defined(SCN_ENABLE_METAL)}
    class function geometryElementWithBuffer_primitiveType_primitiveCount_bytesPerIndex (buffer: MTLBufferProtocol; primitiveType: SCNGeometryPrimitiveType; primitiveCount: NSInteger; bytesPerIndex: NSInteger): id; message 'geometryElementWithBuffer:primitiveType:primitiveCount:bytesPerIndex:'; { available in macos , ios , tvos , watchos  }
    {$endif}
    function data: NSData; message 'data';
    function primitiveType: SCNGeometryPrimitiveType; message 'primitiveType';
    function primitiveCount: NSInteger; message 'primitiveCount';
    procedure setPrimitiveRange(newValue: NSRange); message 'setPrimitiveRange:'; { available in macos , ios , tvos , watchos  }
    function primitiveRange: NSRange; message 'primitiveRange'; { available in macos , ios , tvos , watchos  }
    function bytesPerIndex: NSInteger; message 'bytesPerIndex';
    procedure setPointSize(newValue: CGFloat); message 'setPointSize:'; { available in macos , ios , tvos , watchos  }
    function pointSize: CGFloat; message 'pointSize'; { available in macos , ios , tvos , watchos  }
    procedure setMinimumPointScreenSpaceRadius(newValue: CGFloat); message 'setMinimumPointScreenSpaceRadius:'; { available in macos , ios , tvos , watchos  }
    function minimumPointScreenSpaceRadius: CGFloat; message 'minimumPointScreenSpaceRadius'; { available in macos , ios , tvos , watchos  }
    procedure setMaximumPointScreenSpaceRadius(newValue: CGFloat); message 'setMaximumPointScreenSpaceRadius:'; { available in macos , ios , tvos , watchos  }
    function maximumPointScreenSpaceRadius: CGFloat; message 'maximumPointScreenSpaceRadius'; { available in macos , ios , tvos , watchos  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$if defined(SCN_ENABLE_METAL)}
{$ifdef TYPES}
type
  SCNTessellationSmoothingMode = NSInteger;
  SCNTessellationSmoothingModePtr = ^SCNTessellationSmoothingMode;

const
  SCNTessellationSmoothingModeNone = 0;
  SCNTessellationSmoothingModePNTriangles = 1;
  SCNTessellationSmoothingModePhong = 2;
{$endif}

{$ifdef CLASSES}

type
  SCNGeometryTessellator = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setTessellationFactorScale(newValue: CGFloat); message 'setTessellationFactorScale:';
    function tessellationFactorScale: CGFloat; message 'tessellationFactorScale';
    procedure setTessellationPartitionMode(newValue: MTLTessellationPartitionMode); message 'setTessellationPartitionMode:';
    function tessellationPartitionMode: MTLTessellationPartitionMode; message 'tessellationPartitionMode';
    procedure setAdaptive(newValue: objcbool); message 'setAdaptive:';
    function isAdaptive: objcbool; message 'isAdaptive';
    procedure setScreenSpace(newValue: objcbool); message 'setScreenSpace:';
    function isScreenSpace: objcbool; message 'isScreenSpace';
    procedure setEdgeTessellationFactor(newValue: CGFloat); message 'setEdgeTessellationFactor:';
    function edgeTessellationFactor: CGFloat; message 'edgeTessellationFactor';
    procedure setInsideTessellationFactor(newValue: CGFloat); message 'setInsideTessellationFactor:';
    function insideTessellationFactor: CGFloat; message 'insideTessellationFactor';
    procedure setMaximumEdgeLength(newValue: CGFloat); message 'setMaximumEdgeLength:';
    function maximumEdgeLength: CGFloat; message 'maximumEdgeLength';
    procedure setSmoothingMode(newValue: SCNTessellationSmoothingMode); message 'setSmoothingMode:';
    function smoothingMode: SCNTessellationSmoothingMode; message 'smoothingMode';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$endif}
