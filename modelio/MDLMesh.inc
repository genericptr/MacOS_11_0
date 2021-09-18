{ Parsed from ModelIO.framework MDLMesh.h }

{$ifdef TYPES}
type
  MDLVertexAttributeDataPtr = ^MDLVertexAttributeData;
  MDLMeshPtr = ^MDLMesh;
{$endif}

{$ifdef CLASSES}

type
  MDLVertexAttributeData = objcclass external (NSObject)
  public
    procedure setMap(newValue: MDLMeshBufferMap); message 'setMap:';
    function map: MDLMeshBufferMap; message 'map';
    procedure setDataStart(newValue: pointer); message 'setDataStart:';
    function dataStart: pointer; message 'dataStart';
    procedure setStride(newValue: NSUInteger); message 'setStride:';
    function stride: NSUInteger; message 'stride';
    procedure setFormat(newValue: MDLVertexFormat); message 'setFormat:';
    function format: MDLVertexFormat; message 'format';
    procedure setBufferSize(newValue: NSUInteger); message 'setBufferSize:'; { available in macos , ios , tvos  }
    function bufferSize: NSUInteger; message 'bufferSize'; { available in macos , ios , tvos  }
  end;

type
  MDLMesh = objcclass external (MDLObject)
  public
    function initWithBufferAllocator (bufferAllocator: MDLMeshBufferAllocatorProtocol): id; message 'initWithBufferAllocator:';
    function initWithVertexBuffer_vertexCount_descriptor_submeshes (vertexBuffer: MDLMeshBufferProtocol; vertexCount: NSUInteger; descriptor: MDLVertexDescriptor; submeshes: NSArray): id; message 'initWithVertexBuffer:vertexCount:descriptor:submeshes:';
    function initWithVertexBuffers_vertexCount_descriptor_submeshes (vertexBuffers: NSArray; vertexCount: NSUInteger; descriptor: MDLVertexDescriptor; submeshes: NSArray): id; message 'initWithVertexBuffers:vertexCount:descriptor:submeshes:';
    function vertexAttributeDataForAttributeNamed (name: NSString): MDLVertexAttributeData; message 'vertexAttributeDataForAttributeNamed:';
    function vertexAttributeDataForAttributeNamed_asFormat (name: NSString; format: MDLVertexFormat): MDLVertexAttributeData; message 'vertexAttributeDataForAttributeNamed:asFormat:';
    function boundingBox: MDLAxisAlignedBoundingBox; message 'boundingBox';
    procedure setVertexDescriptor(newValue: MDLVertexDescriptor); message 'setVertexDescriptor:';
    function vertexDescriptor: MDLVertexDescriptor; message 'vertexDescriptor';
    procedure setVertexCount(newValue: NSUInteger); message 'setVertexCount:';
    function vertexCount: NSUInteger; message 'vertexCount';
    procedure setVertexBuffers(newValue: NSArray); message 'setVertexBuffers:';
    function vertexBuffers: NSArray; message 'vertexBuffers';
    procedure setSubmeshes(newValue: NSMutableArray); message 'setSubmeshes:';
    function submeshes: NSMutableArray; message 'submeshes';
    function allocator: MDLMeshBufferAllocatorProtocol; message 'allocator';
  end;


type
  Modifiers = objccategory external (MDLMesh)
    procedure addAttributeWithName_format (name: NSString; format: MDLVertexFormat); message 'addAttributeWithName:format:';
    procedure addAttributeWithName_format_type_data_stride (name: NSString; format: MDLVertexFormat; type_: NSString; data: NSData; stride: NSInteger); message 'addAttributeWithName:format:type:data:stride:';
    procedure addAttributeWithName_format_type_data_stride_time (name: NSString; format: MDLVertexFormat; type_: NSString; data: NSData; stride: NSInteger; time: NSTimeInterval); message 'addAttributeWithName:format:type:data:stride:time:';
    procedure addNormalsWithAttributeNamed_creaseThreshold (attributeName: NSString; creaseThreshold: single); message 'addNormalsWithAttributeNamed:creaseThreshold:';
    procedure addTangentBasisForTextureCoordinateAttributeNamed_tangentAttributeNamed_bitangentAttributeNamed (textureCoordinateAttributeName: NSString; tangentAttributeName: NSString; bitangentAttributeName: NSString); message 'addTangentBasisForTextureCoordinateAttributeNamed:tangentAttributeNamed:bitangentAttributeNamed:';
    procedure addTangentBasisForTextureCoordinateAttributeNamed_normalAttributeNamed_tangentAttributeNamed (textureCoordinateAttributeName: NSString; normalAttributeName: NSString; tangentAttributeName: NSString); message 'addTangentBasisForTextureCoordinateAttributeNamed:normalAttributeNamed:tangentAttributeNamed:';
    procedure addOrthTanBasisForTextureCoordinateAttributeNamed_normalAttributeNamed_tangentAttributeNamed (textureCoordinateAttributeName: NSString; normalAttributeName: NSString; tangentAttributeName: NSString); message 'addOrthTanBasisForTextureCoordinateAttributeNamed:normalAttributeNamed:tangentAttributeNamed:'; { available in macos , ios , tvos  }
    procedure addUnwrappedTextureCoordinatesForAttributeNamed (textureCoordinateAttributeName: NSString); message 'addUnwrappedTextureCoordinatesForAttributeNamed:';
    procedure flipTextureCoordinatesInAttributeNamed (textureCoordinateAttributeName: NSString); message 'flipTextureCoordinatesInAttributeNamed:'; { available in macos , ios , tvos  }
    procedure makeVerticesUnique; message 'makeVerticesUnique'; deprecated 'in 10.11,10.13,9.0,11.0';
    function makeVerticesUniqueAndReturnError (error: NSErrorPtr): objcbool; message 'makeVerticesUniqueAndReturnError:'; { available in macos , ios , tvos  }
    procedure replaceAttributeNamed_withData (name: NSString; newData: MDLVertexAttributeData); message 'replaceAttributeNamed:withData:';
    procedure updateAttributeNamed_withData (name: NSString; newData: MDLVertexAttributeData); message 'updateAttributeNamed:withData:';
    procedure removeAttributeNamed (name: NSString); message 'removeAttributeNamed:';
  end;

type
  Generators = objccategory external (MDLMesh)
    function initBoxWithExtent_segments_inwardNormals_geometryType_allocator (extent: vector_float3; segments: vector_uint3; inwardNormals: objcbool; geometryType: MDLGeometryType; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'initBoxWithExtent:segments:inwardNormals:geometryType:allocator:';
    function initSphereWithExtent_segments_inwardNormals_geometryType_allocator (extent: vector_float3; segments: vector_uint2; inwardNormals: objcbool; geometryType: MDLGeometryType; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'initSphereWithExtent:segments:inwardNormals:geometryType:allocator:';
    function initHemisphereWithExtent_segments_inwardNormals_cap_geometryType_allocator (extent: vector_float3; segments: vector_uint2; inwardNormals: objcbool; cap: objcbool; geometryType: MDLGeometryType; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'initHemisphereWithExtent:segments:inwardNormals:cap:geometryType:allocator:';
    function initCylinderWithExtent_segments_inwardNormals_topCap_bottomCap_geometryType_allocator (extent: vector_float3; segments: vector_uint2; inwardNormals: objcbool; topCap: objcbool; bottomCap: objcbool; geometryType: MDLGeometryType; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'initCylinderWithExtent:segments:inwardNormals:topCap:bottomCap:geometryType:allocator:';
    function initCapsuleWithExtent_cylinderSegments_hemisphereSegments_inwardNormals_geometryType_allocator (extent: vector_float3; segments: vector_uint2; hemisphereSegments: cint; inwardNormals: objcbool; geometryType: MDLGeometryType; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'initCapsuleWithExtent:cylinderSegments:hemisphereSegments:inwardNormals:geometryType:allocator:';
    function initConeWithExtent_segments_inwardNormals_cap_geometryType_allocator (extent: vector_float3; segments: vector_uint2; inwardNormals: objcbool; cap: objcbool; geometryType: MDLGeometryType; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'initConeWithExtent:segments:inwardNormals:cap:geometryType:allocator:';
    function initPlaneWithExtent_segments_geometryType_allocator (extent: vector_float3; segments: vector_uint2; geometryType: MDLGeometryType; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'initPlaneWithExtent:segments:geometryType:allocator:';
    function initIcosahedronWithExtent_inwardNormals_geometryType_allocator (extent: vector_float3; inwardNormals: objcbool; geometryType: MDLGeometryType; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'initIcosahedronWithExtent:inwardNormals:geometryType:allocator:';
    function initMeshBySubdividingMesh_submeshIndex_subdivisionLevels_allocator (mesh: MDLMesh; submeshIndex: cint; subdivisionLevels: cuint; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'initMeshBySubdividingMesh:submeshIndex:subdivisionLevels:allocator:';
    class function newBoxWithDimensions_segments_geometryType_inwardNormals_allocator (dimensions: vector_float3; segments: vector_uint3; geometryType: MDLGeometryType; inwardNormals: objcbool; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'newBoxWithDimensions:segments:geometryType:inwardNormals:allocator:';
    class function newEllipsoidWithRadii_radialSegments_verticalSegments_geometryType_inwardNormals_hemisphere_allocator (radii: vector_float3; radialSegments: NSUInteger; verticalSegments: NSUInteger; geometryType: MDLGeometryType; inwardNormals: objcbool; hemisphere: objcbool; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'newEllipsoidWithRadii:radialSegments:verticalSegments:geometryType:inwardNormals:hemisphere:allocator:';
    class function newCylinderWithHeight_radii_radialSegments_verticalSegments_geometryType_inwardNormals_allocator (height: single; radii: vector_float2; radialSegments: NSUInteger; verticalSegments: NSUInteger; geometryType: MDLGeometryType; inwardNormals: objcbool; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'newCylinderWithHeight:radii:radialSegments:verticalSegments:geometryType:inwardNormals:allocator:';
    class function newCapsuleWithHeight_radii_radialSegments_verticalSegments_hemisphereSegments_geometryType_inwardNormals_allocator (height: single; radii: vector_float2; radialSegments: NSUInteger; verticalSegments: NSUInteger; hemisphereSegments: NSUInteger; geometryType: MDLGeometryType; inwardNormals: objcbool; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'newCapsuleWithHeight:radii:radialSegments:verticalSegments:hemisphereSegments:geometryType:inwardNormals:allocator:'; { available in macos , ios , tvos  }
    class function newEllipticalConeWithHeight_radii_radialSegments_verticalSegments_geometryType_inwardNormals_allocator (height: single; radii: vector_float2; radialSegments: NSUInteger; verticalSegments: NSUInteger; geometryType: MDLGeometryType; inwardNormals: objcbool; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'newEllipticalConeWithHeight:radii:radialSegments:verticalSegments:geometryType:inwardNormals:allocator:';
    class function newPlaneWithDimensions_segments_geometryType_allocator (dimensions: vector_float2; segments: vector_uint2; geometryType: MDLGeometryType; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'newPlaneWithDimensions:segments:geometryType:allocator:';
    class function newIcosahedronWithRadius_inwardNormals_geometryType_allocator (radius: single; inwardNormals: objcbool; geometryType: MDLGeometryType; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'newIcosahedronWithRadius:inwardNormals:geometryType:allocator:'; { available in macos , ios , tvos  }
    class function newIcosahedronWithRadius_inwardNormals_allocator (radius: single; inwardNormals: objcbool; allocator_: MDLMeshBufferAllocatorProtocol): id; message 'newIcosahedronWithRadius:inwardNormals:allocator:';
    class function newSubdividedMesh_submeshIndex_subdivisionLevels (mesh: MDLMesh; submeshIndex: NSUInteger; subdivisionLevels: NSUInteger): id; message 'newSubdividedMesh:submeshIndex:subdivisionLevels:';
  end;

type
  MDLLightBaking = objccategory external (MDLMesh)
    function generateAmbientOcclusionTextureWithSize_raysPerSample_attenuationFactor_objectsToConsider_vertexAttributeNamed_materialPropertyNamed (textureSize: vector_int2; raysPerSample: NSInteger; attenuationFactor: single; objectsToConsider: NSArray; vertexAttributeName: NSString; materialPropertyName: NSString): objcbool; message 'generateAmbientOcclusionTextureWithSize:raysPerSample:attenuationFactor:objectsToConsider:vertexAttributeNamed:materialPropertyNamed:';
    function generateAmbientOcclusionTextureWithQuality_attenuationFactor_objectsToConsider_vertexAttributeNamed_materialPropertyNamed (bakeQuality: single; attenuationFactor: single; objectsToConsider: NSArray; vertexAttributeName: NSString; materialPropertyName: NSString): objcbool; message 'generateAmbientOcclusionTextureWithQuality:attenuationFactor:objectsToConsider:vertexAttributeNamed:materialPropertyNamed:';
    function generateAmbientOcclusionVertexColorsWithRaysPerSample_attenuationFactor_objectsToConsider_vertexAttributeNamed (raysPerSample: NSInteger; attenuationFactor: single; objectsToConsider: NSArray; vertexAttributeName: NSString): objcbool; message 'generateAmbientOcclusionVertexColorsWithRaysPerSample:attenuationFactor:objectsToConsider:vertexAttributeNamed:';
    function generateAmbientOcclusionVertexColorsWithQuality_attenuationFactor_objectsToConsider_vertexAttributeNamed (bakeQuality: single; attenuationFactor: single; objectsToConsider: NSArray; vertexAttributeName: NSString): objcbool; message 'generateAmbientOcclusionVertexColorsWithQuality:attenuationFactor:objectsToConsider:vertexAttributeNamed:';
    function generateLightMapTextureWithTextureSize_lightsToConsider_objectsToConsider_vertexAttributeNamed_materialPropertyNamed (textureSize: vector_int2; lightsToConsider: NSArray; objectsToConsider: NSArray; vertexAttributeName: NSString; materialPropertyName: NSString): objcbool; message 'generateLightMapTextureWithTextureSize:lightsToConsider:objectsToConsider:vertexAttributeNamed:materialPropertyNamed:';
    function generateLightMapTextureWithQuality_lightsToConsider_objectsToConsider_vertexAttributeNamed_materialPropertyNamed (bakeQuality: single; lightsToConsider: NSArray; objectsToConsider: NSArray; vertexAttributeName: NSString; materialPropertyName: NSString): objcbool; message 'generateLightMapTextureWithQuality:lightsToConsider:objectsToConsider:vertexAttributeNamed:materialPropertyNamed:';
    function generateLightMapVertexColorsWithLightsToConsider_objectsToConsider_vertexAttributeNamed (lightsToConsider: NSArray; objectsToConsider: NSArray; vertexAttributeName: NSString): objcbool; message 'generateLightMapVertexColorsWithLightsToConsider:objectsToConsider:vertexAttributeNamed:';
  end;
{$endif}

