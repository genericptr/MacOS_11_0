{ Parsed from ModelIO.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ModelIO.framework/Headers/MDLSubmesh.h }

{$ifdef TYPES}
type
  MDLSubmeshTopologyPtr = ^MDLSubmeshTopology;
  MDLSubmeshPtr = ^MDLSubmesh;
{$endif}

{$ifdef CLASSES}

type
  MDLSubmeshTopology = objcclass external (NSObject)
  public
    function initWithSubmesh (submesh: MDLSubmesh): id; message 'initWithSubmesh:';
    procedure setFaceTopology(newValue: id); message 'setFaceTopology:';
    function faceTopology: id; message 'faceTopology';
    procedure setFaceCount(newValue: NSUInteger); message 'setFaceCount:';
    function faceCount: NSUInteger; message 'faceCount';
    procedure setVertexCreaseIndices(newValue: id); message 'setVertexCreaseIndices:';
    function vertexCreaseIndices: id; message 'vertexCreaseIndices';
    procedure setVertexCreases(newValue: id); message 'setVertexCreases:';
    function vertexCreases: id; message 'vertexCreases';
    procedure setVertexCreaseCount(newValue: NSUInteger); message 'setVertexCreaseCount:';
    function vertexCreaseCount: NSUInteger; message 'vertexCreaseCount';
    procedure setEdgeCreaseIndices(newValue: id); message 'setEdgeCreaseIndices:';
    function edgeCreaseIndices: id; message 'edgeCreaseIndices';
    procedure setEdgeCreases(newValue: id); message 'setEdgeCreases:';
    function edgeCreases: id; message 'edgeCreases';
    procedure setEdgeCreaseCount(newValue: NSUInteger); message 'setEdgeCreaseCount:';
    function edgeCreaseCount: NSUInteger; message 'edgeCreaseCount';
    procedure setHoles(newValue: id); message 'setHoles:';
    function holes: id; message 'holes';
    procedure setHoleCount(newValue: NSUInteger); message 'setHoleCount:';
    function holeCount: NSUInteger; message 'holeCount';
  end;

type
  MDLSubmesh = objcclass external (NSObject, MDLNamedProtocol)
  public
    function initWithName_indexBuffer_indexCount_indexType_geometryType_material (name: NSString; indexBuffer: id; indexCount: NSUInteger; indexType: MDLIndexBitDepth; geometryType: MDLGeometryType; material: MDLMaterial): id; message 'initWithName:indexBuffer:indexCount:indexType:geometryType:material:';
    function initWithIndexBuffer_indexCount_indexType_geometryType_material (indexBuffer: id; indexCount: NSUInteger; indexType: MDLIndexBitDepth; geometryType: MDLGeometryType; material: MDLMaterial): id; message 'initWithIndexBuffer:indexCount:indexType:geometryType:material:';
    function initWithName_indexBuffer_indexCount_indexType_geometryType_material_topology (name: NSString; indexBuffer: id; indexCount: NSUInteger; indexType: MDLIndexBitDepth; geometryType: MDLGeometryType; material: MDLMaterial; topology: MDLSubmeshTopology): id; message 'initWithName:indexBuffer:indexCount:indexType:geometryType:material:topology:';
    function initWithMDLSubmesh_indexType_geometryType (submesh: MDLSubmesh; indexType: MDLIndexBitDepth; geometryType: MDLGeometryType): id; message 'initWithMDLSubmesh:indexType:geometryType:';
    function indexBuffer: id; message 'indexBuffer';
    function indexBufferAsIndexType (indexType: MDLIndexBitDepth): id; message 'indexBufferAsIndexType:';
    function indexCount: NSUInteger; message 'indexCount';
    function indexType: MDLIndexBitDepth; message 'indexType';
    function geometryType: MDLGeometryType; message 'geometryType';
    procedure setMaterial(newValue: MDLMaterial); message 'setMaterial:';
    function material: MDLMaterial; message 'material';
    procedure setTopology(newValue: MDLSubmeshTopology); message 'setTopology:';
    function topology: MDLSubmeshTopology; message 'topology';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';

    { Adopted protocols }
    function name_: NSString; message 'name';
    procedure setName_ (newValue: NSString); message 'setName:';
  end;
{$endif}

