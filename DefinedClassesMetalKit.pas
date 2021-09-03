{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesMetalKit;
interface

type
  MTKMesh = objcclass external;
  MTKMeshBuffer = objcclass external;
  MTKMeshBufferAllocator = objcclass external;
  MTKSubmesh = objcclass external;
  MTKTextureLoader = objcclass external;
  MTKView = objcclass external;
  MTKViewDelegateProtocol = objcprotocol external name 'MTKViewDelegate';

type
  MDLTexture = objcclass external;
  MTLDeviceProtocol = objcprotocol external name 'MTLDevice';
  MTLTextureProtocol = objcprotocol external name 'MTLTexture';

implementation
end.
