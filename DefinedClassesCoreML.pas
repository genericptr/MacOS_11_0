{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesCoreML;
interface

type
  MLArrayBatchProvider = objcclass external;
  MLDictionaryConstraint = objcclass external;
  MLDictionaryFeatureProvider = objcclass external;
  MLFeatureDescription = objcclass external;
  MLFeatureValue = objcclass external;
  MLImageConstraint = objcclass external;
  MLImageSize = objcclass external;
  MLImageSizeConstraint = objcclass external;
  MLKey = objcclass external;
  MLMetricKey = objcclass external;
  MLModel = objcclass external;
  MLModelCollection = objcclass external;
  MLModelCollectionEntry = objcclass external;
  MLModelConfiguration = objcclass external;
  MLModelDescription = objcclass external;
  MLMultiArray = objcclass external;
  MLMultiArrayConstraint = objcclass external;
  MLMultiArrayShapeConstraint = objcclass external;
  MLNumericConstraint = objcclass external;
  MLParameterDescription = objcclass external;
  MLParameterKey = objcclass external;
  MLPredictionOptions = objcclass external;
  MLSequence = objcclass external;
  MLSequenceConstraint = objcclass external;
  MLTask = objcclass external;
  MLUpdateContext = objcclass external;
  MLUpdateProgressHandlers = objcclass external;
  MLUpdateTask = objcclass external;
  MLBatchProviderProtocol = objcprotocol external name 'MLBatchProvider';
  MLCustomLayerProtocol = objcprotocol external name 'MLCustomLayer';
  MLCustomModelProtocol = objcprotocol external name 'MLCustomModel';
  MLFeatureProviderProtocol = objcprotocol external name 'MLFeatureProvider';
  MLWritableProtocol = objcprotocol external name 'MLWritable';

type
  MTLCommandBufferProtocol = objcprotocol external name 'MTLCommandBuffer';
  MTLDeviceProtocol = objcprotocol external name 'MTLDevice';
  MTLTextureProtocol = objcprotocol external name 'MTLTexture';

implementation
end.
