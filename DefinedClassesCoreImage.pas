{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesCoreImage;
interface

type
  CIAztecCodeDescriptor = objcclass external;
  CIBarcodeDescriptor = objcclass external;
  CIBlendKernel = objcclass external;
  CIColor = objcclass external;
  CIColorKernel = objcclass external;
  CIContext = objcclass external;
  CIDataMatrixCodeDescriptor = objcclass external;
  CIDetector = objcclass external;
  CIFaceFeature = objcclass external;
  CIFeature = objcclass external;
  CIFilter = objcclass external;
  CIFilterGenerator = objcclass external;
  CIFilterShape = objcclass external;
  CIImage = objcclass external;
  CIImageAccumulator = objcclass external;
  CIImageProcessorKernel = objcclass external;
  CIKernel = objcclass external;
  CIPDF417CodeDescriptor = objcclass external;
  CIPlugIn = objcclass external;
  CIQRCodeDescriptor = objcclass external;
  CIQRCodeFeature = objcclass external;
  CIRectangleFeature = objcclass external;
  CIRenderDestination = objcclass external;
  CIRenderInfo = objcclass external;
  CIRenderTask = objcclass external;
  CISampler = objcclass external;
  CIVector = objcclass external;
  CIWarpKernel = objcclass external;
  CIFilterConstructorProtocol = objcprotocol external name 'CIFilterConstructor';
  CIFilterProtocol = objcprotocol external name 'CIFilter';
  CIImageProcessorInputProtocol = objcprotocol external name 'CIImageProcessorInput';
  CIImageProcessorOutputProtocol = objcprotocol external name 'CIImageProcessorOutput';
  CIPlugInRegistrationProtocol = objcprotocol external name 'CIPlugInRegistration';

type
  AVDepthData = objcclass external;
  AVPortraitEffectsMatte = objcclass external;
  AVSemanticSegmentationMatte = objcclass external;
  NSData = objcclass external;
  NSDictionary = objcclass external;
  NSString = objcclass external;
  NSURL = objcclass external;
  NSUserActivity = objcclass external;
  MTLCommandBufferProtocol = objcprotocol external name 'MTLCommandBuffer';
  MTLCommandQueueProtocol = objcprotocol external name 'MTLCommandQueue';
  MTLDeviceProtocol = objcprotocol external name 'MTLDevice';
  MTLTextureProtocol = objcprotocol external name 'MTLTexture';

implementation
end.
