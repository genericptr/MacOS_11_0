{ Parsed from MetalKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetalKit.framework/Headers/MTKModel.h }

{$ifdef TYPES}
type
  MTKMeshBufferAllocatorPtr = ^MTKMeshBufferAllocator;
  MTKMeshBufferPtr = ^MTKMeshBuffer;
  MTKSubmeshPtr = ^MTKSubmesh;
  MTKMeshPtr = ^MTKMesh;
{$endif}

{$ifdef TYPES}
type
  MTKModelError = NSString;
  MTKModelErrorPtr = ^MTKModelError;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTKModelErrorDomain: MTKModelError { available in 10_11, 9_0 }; cvar; external;
  MTKModelErrorKey: MTKModelError { available in 10_11, 9_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  MTKMeshBufferAllocator = objcclass external (NSObject, MDLMeshBufferAllocatorProtocol)
  public
    function init: id; message 'init';
    function initWithDevice (device: id): id; message 'initWithDevice:';
    function device: id; message 'device';

    { Adopted protocols }
    function newBuffer_type (length: NSUInteger; type_: MDLMeshBufferType): id; message 'newBuffer:type:';
    function newBufferFromZone_data_type (zone: id; data: NSData; type_: MDLMeshBufferType): id; message 'newBufferFromZone:data:type:';
    function newBufferFromZone_length_type (zone: id; length: NSUInteger; type_: MDLMeshBufferType): id; message 'newBufferFromZone:length:type:';
    function newBufferWithData_type (data: NSData; type_: MDLMeshBufferType): id; message 'newBufferWithData:type:';
    function newZone (capacity: NSUInteger): id; message 'newZone:';
    function newZoneForBuffersWithSize_andType (sizes: NSArray; types: NSArray): id; message 'newZoneForBuffersWithSize:andType:';
  end;

type
  MTKMeshBuffer = objcclass external (NSObject, MDLMeshBufferProtocol, MDLNamedProtocol)
  public
    function init: id; message 'init';
    function length: NSUInteger; message 'length';
    function buffer: id; message 'buffer';
    function offset: NSUInteger; message 'offset';

    { Adopted protocols }
    function allocator: id; message 'allocator';
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure fillData_offset (data: NSData; offset: NSUInteger); message 'fillData:offset:';
    function length_: NSUInteger; message 'length';
    function map: MDLMeshBufferMap; message 'map';
    function name: NSString; message 'name';
    procedure setName (newValue: NSString); message 'setName:';
    function type_: MDLMeshBufferType; message 'type';
  end;

type
  MTKSubmesh = objcclass external (NSObject)
  public
    function init: id; message 'init';
    function primitiveType: MTLPrimitiveType; message 'primitiveType';
    function indexType: MTLIndexType; message 'indexType';
    function indexBuffer: MTKMeshBuffer; message 'indexBuffer';
    function indexCount: NSUInteger; message 'indexCount';
    function mesh: MTKMesh; message 'mesh';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;

type
  MTKMesh = objcclass external (NSObject)
  public
    function init: id; message 'init';
    function initWithMesh_device_error (mesh: MDLMesh; device: id; error: NSErrorPtr): id; message 'initWithMesh:device:error:';
    class function newMeshesFromAsset_device_sourceMeshes_error (asset: MDLAsset; device: id; sourceMeshes: NSArrayPtr; error: NSErrorPtr): NSArray; message 'newMeshesFromAsset:device:sourceMeshes:error:';
    function vertexBuffers: NSArray; message 'vertexBuffers';
    function vertexDescriptor: MDLVertexDescriptor; message 'vertexDescriptor';
    function submeshes: NSArray; message 'submeshes';
    function vertexCount: NSUInteger; message 'vertexCount';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;
{$endif}

{$ifdef FUNCTIONS}
function MTKModelIOVertexDescriptorFromMetal(metalDescriptor: MTLVertexDescriptor): MDLVertexDescriptor; cdecl; external; { available in 10_11, 9_0 }
function MTKModelIOVertexDescriptorFromMetalWithError(metalDescriptor: MTLVertexDescriptor; error: NSErrorPtr): MDLVertexDescriptor; cdecl; external; { available in 10_12, 10_0 }
function MTKMetalVertexDescriptorFromModelIO(modelIODescriptor: MDLVertexDescriptor): MTLVertexDescriptor; cdecl; external; { available in 10_11, 9_0 }
function MTKMetalVertexDescriptorFromModelIOWithError(modelIODescriptor: MDLVertexDescriptor; error: NSErrorPtr): MTLVertexDescriptor; cdecl; external; { available in 10_12, 10_0 }
function MTKModelIOVertexFormatFromMetal(vertexFormat: MTLVertexFormat): MDLVertexFormat; cdecl; external; { available in 10_11, 9_0 }
function MTKMetalVertexFormatFromModelIO(vertexFormat: MDLVertexFormat): MTLVertexFormat; cdecl; external; { available in 10_11, 9_0 }
{$endif}
