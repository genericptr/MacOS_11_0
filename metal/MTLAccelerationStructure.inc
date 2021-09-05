{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLAccelerationStructure.h }

{$ifdef TYPES}
type
  MTLAccelerationStructureDescriptorPtr = ^MTLAccelerationStructureDescriptor;
  MTLAccelerationStructureGeometryDescriptorPtr = ^MTLAccelerationStructureGeometryDescriptor;
  MTLPrimitiveAccelerationStructureDescriptorPtr = ^MTLPrimitiveAccelerationStructureDescriptor;
  MTLAccelerationStructureTriangleGeometryDescriptorPtr = ^MTLAccelerationStructureTriangleGeometryDescriptor;
  MTLAccelerationStructureBoundingBoxGeometryDescriptorPtr = ^MTLAccelerationStructureBoundingBoxGeometryDescriptor;
  MTLInstanceAccelerationStructureDescriptorPtr = ^MTLInstanceAccelerationStructureDescriptor;
  MTLAccelerationStructureProtocolPtr = ^MTLAccelerationStructureProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLAccelerationStructureUsage = NSUInteger;
  MTLAccelerationStructureUsagePtr = ^MTLAccelerationStructureUsage;

const
  MTLAccelerationStructureUsageNone = 0;
  MTLAccelerationStructureUsageRefit = 1 shl 0;
  MTLAccelerationStructureUsagePreferFastBuild = 1 shl 1;

type
  MTLAccelerationStructureInstanceOptions = cuint32;
  MTLAccelerationStructureInstanceOptionsPtr = ^MTLAccelerationStructureInstanceOptions;

const
  MTLAccelerationStructureInstanceOptionNone = 0;
  MTLAccelerationStructureInstanceOptionDisableTriangleCulling = 1 shl 0;
  MTLAccelerationStructureInstanceOptionTriangleFrontFacingWindingCounterClockwise = 1 shl 1;
  MTLAccelerationStructureInstanceOptionOpaque = 1 shl 2;
  MTLAccelerationStructureInstanceOptionNonOpaque = 1 shl 3;
{$endif}

{$ifdef CLASSES}

type
  MTLAccelerationStructureDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setUsage(newValue: MTLAccelerationStructureUsage); message 'setUsage:';
    function usage: MTLAccelerationStructureUsage; message 'usage';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLAccelerationStructureGeometryDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setIntersectionFunctionTableOffset(newValue: NSUInteger); message 'setIntersectionFunctionTableOffset:';
    function intersectionFunctionTableOffset: NSUInteger; message 'intersectionFunctionTableOffset';
    procedure setOpaque(newValue: objcbool); message 'setOpaque:';
    function opaque: objcbool; message 'opaque';
    procedure setAllowDuplicateIntersectionFunctionInvocation(newValue: objcbool); message 'setAllowDuplicateIntersectionFunctionInvocation:';
    function allowDuplicateIntersectionFunctionInvocation: objcbool; message 'allowDuplicateIntersectionFunctionInvocation';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLPrimitiveAccelerationStructureDescriptor = objcclass external (MTLAccelerationStructureDescriptor)
  public
    procedure setGeometryDescriptors(newValue: NSArray); message 'setGeometryDescriptors:';
    function geometryDescriptors: NSArray; message 'geometryDescriptors';
    class function descriptor: id; message 'descriptor';
  end;

type
  MTLAccelerationStructureTriangleGeometryDescriptor = objcclass external (MTLAccelerationStructureGeometryDescriptor)
  public
    procedure setVertexBuffer(newValue: MTLBufferProtocol); message 'setVertexBuffer:';
    function vertexBuffer: id; message 'vertexBuffer';
    procedure setVertexBufferOffset(newValue: NSUInteger); message 'setVertexBufferOffset:';
    function vertexBufferOffset: NSUInteger; message 'vertexBufferOffset';
    procedure setVertexStride(newValue: NSUInteger); message 'setVertexStride:';
    function vertexStride: NSUInteger; message 'vertexStride';
    procedure setIndexBuffer(newValue: id); message 'setIndexBuffer:';
    function indexBuffer: id; message 'indexBuffer';
    procedure setIndexBufferOffset(newValue: NSUInteger); message 'setIndexBufferOffset:';
    function indexBufferOffset: NSUInteger; message 'indexBufferOffset';
    procedure setIndexType(newValue: MTLIndexType); message 'setIndexType:';
    function indexType: MTLIndexType; message 'indexType';
    procedure setTriangleCount(newValue: NSUInteger); message 'setTriangleCount:';
    function triangleCount: NSUInteger; message 'triangleCount';
    class function descriptor: id; message 'descriptor';
  end;

type
  MTLAccelerationStructureBoundingBoxGeometryDescriptor = objcclass external (MTLAccelerationStructureGeometryDescriptor)
  public
    procedure setBoundingBoxBuffer(newValue: id); message 'setBoundingBoxBuffer:';
    function boundingBoxBuffer: id; message 'boundingBoxBuffer';
    procedure setBoundingBoxBufferOffset(newValue: NSUInteger); message 'setBoundingBoxBufferOffset:';
    function boundingBoxBufferOffset: NSUInteger; message 'boundingBoxBufferOffset';
    procedure setBoundingBoxStride(newValue: NSUInteger); message 'setBoundingBoxStride:';
    function boundingBoxStride: NSUInteger; message 'boundingBoxStride';
    procedure setBoundingBoxCount(newValue: NSUInteger); message 'setBoundingBoxCount:';
    function boundingBoxCount: NSUInteger; message 'boundingBoxCount';
    class function descriptor: id; message 'descriptor';
  end;
{$endif}

{$ifdef TYPES}
type
  MTLAccelerationStructureInstanceDescriptor = record
    transformationMatrix: MTLPackedFloat4x3;
    options: MTLAccelerationStructureInstanceOptions;
    mask: cuint32;
    intersectionFunctionTableOffset: cuint32;
    accelerationStructureIndex: cuint32;
  end;
type
  MTLAccelerationStructureInstanceDescriptorPtr = ^MTLAccelerationStructureInstanceDescriptor;
{$endif}

{$ifdef CLASSES}

type
  MTLInstanceAccelerationStructureDescriptor = objcclass external (MTLAccelerationStructureDescriptor)
  public
    procedure setInstanceDescriptorBuffer(newValue: id); message 'setInstanceDescriptorBuffer:';
    function instanceDescriptorBuffer: id; message 'instanceDescriptorBuffer';
    procedure setInstanceDescriptorBufferOffset(newValue: NSUInteger); message 'setInstanceDescriptorBufferOffset:';
    function instanceDescriptorBufferOffset: NSUInteger; message 'instanceDescriptorBufferOffset';
    procedure setInstanceDescriptorStride(newValue: NSUInteger); message 'setInstanceDescriptorStride:';
    function instanceDescriptorStride: NSUInteger; message 'instanceDescriptorStride';
    procedure setInstanceCount(newValue: NSUInteger); message 'setInstanceCount:';
    function instanceCount: NSUInteger; message 'instanceCount';
    procedure setInstancedAccelerationStructures(newValue: NSArray); message 'setInstancedAccelerationStructures:';
    function instancedAccelerationStructures: NSArray; message 'instancedAccelerationStructures';
    class function descriptor: id; message 'descriptor';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLAccelerationStructureProtocol = objcprotocol external name 'MTLAccelerationStructure' (MTLResourceProtocol)
    function size: NSUInteger; message 'size';
  end;
{$endif}

