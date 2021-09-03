{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesModelIO;
interface

type
  MDLAnimatedMatrix4x4 = objcclass external;
  MDLAnimatedQuaternion = objcclass external;
  MDLAnimatedQuaternionArray = objcclass external;
  MDLAnimatedScalar = objcclass external;
  MDLAnimatedScalarArray = objcclass external;
  MDLAnimatedValue = objcclass external;
  MDLAnimatedVector2 = objcclass external;
  MDLAnimatedVector3 = objcclass external;
  MDLAnimatedVector3Array = objcclass external;
  MDLAnimatedVector4 = objcclass external;
  MDLAnimationBindComponent = objcclass external;
  MDLAreaLight = objcclass external;
  MDLAsset = objcclass external;
  MDLBundleAssetResolver = objcclass external;
  MDLCamera = objcclass external;
  MDLCheckerboardTexture = objcclass external;
  MDLColorSwatchTexture = objcclass external;
  MDLLight = objcclass external;
  MDLLightProbe = objcclass external;
  MDLMaterial = objcclass external;
  MDLMaterialProperty = objcclass external;
  MDLMaterialPropertyConnection = objcclass external;
  MDLMaterialPropertyGraph = objcclass external;
  MDLMaterialPropertyNode = objcclass external;
  MDLMatrix4x4Array = objcclass external;
  MDLMesh = objcclass external;
  MDLMeshBufferData = objcclass external;
  MDLMeshBufferDataAllocator = objcclass external;
  MDLMeshBufferMap = objcclass external;
  MDLMeshBufferZoneDefault = objcclass external;
  MDLNoiseTexture = objcclass external;
  MDLNormalMapTexture = objcclass external;
  MDLObject = objcclass external;
  MDLObjectContainer = objcclass external;
  MDLPackedJointAnimation = objcclass external;
  MDLPathAssetResolver = objcclass external;
  MDLPhotometricLight = objcclass external;
  MDLPhysicallyPlausibleLight = objcclass external;
  MDLPhysicallyPlausibleScatteringFunction = objcclass external;
  MDLRelativeAssetResolver = objcclass external;
  MDLScatteringFunction = objcclass external;
  MDLSkeleton = objcclass external;
  MDLSkyCubeTexture = objcclass external;
  MDLStereoscopicCamera = objcclass external;
  MDLSubmesh = objcclass external;
  MDLSubmeshTopology = objcclass external;
  MDLTexture = objcclass external;
  MDLTextureFilter = objcclass external;
  MDLTextureSampler = objcclass external;
  MDLTransform = objcclass external;
  MDLTransformMatrixOp = objcclass external;
  MDLTransformOrientOp = objcclass external;
  MDLTransformRotateOp = objcclass external;
  MDLTransformRotateXOp = objcclass external;
  MDLTransformRotateYOp = objcclass external;
  MDLTransformRotateZOp = objcclass external;
  MDLTransformScaleOp = objcclass external;
  MDLTransformStack = objcclass external;
  MDLTransformTranslateOp = objcclass external;
  MDLURLTexture = objcclass external;
  MDLVertexAttribute = objcclass external;
  MDLVertexAttributeData = objcclass external;
  MDLVertexBufferLayout = objcclass external;
  MDLVertexDescriptor = objcclass external;
  MDLVoxelArray = objcclass external;
  MDLAssetResolverProtocol = objcprotocol external name 'MDLAssetResolver';
  MDLComponentProtocol = objcprotocol external name 'MDLComponent';
  MDLJointAnimationProtocol = objcprotocol external name 'MDLJointAnimation';
  MDLLightProbeIrradianceDataSourceProtocol = objcprotocol external name 'MDLLightProbeIrradianceDataSource';
  MDLMeshBufferAllocatorProtocol = objcprotocol external name 'MDLMeshBufferAllocator';
  MDLMeshBufferProtocol = objcprotocol external name 'MDLMeshBuffer';
  MDLMeshBufferZoneProtocol = objcprotocol external name 'MDLMeshBufferZone';
  MDLNamedProtocol = objcprotocol external name 'MDLNamed';
  MDLObjectContainerComponentProtocol = objcprotocol external name 'MDLObjectContainerComponent';
  MDLTransformComponentProtocol = objcprotocol external name 'MDLTransformComponent';
  MDLTransformOpProtocol = objcprotocol external name 'MDLTransformOp';

type
  MDLColorSpec = objcclass external;
  NSString = objcclass external;
  NSURL = objcclass external;

implementation
end.
