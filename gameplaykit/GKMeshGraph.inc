{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKMeshGraph.h }

{$ifdef TYPES}
type
  GKMeshGraphPtr = ^GKMeshGraph;
{$endif}

{$ifdef TYPES}
type
  GKMeshGraphTriangulationMode = NSUInteger;
  GKMeshGraphTriangulationModePtr = ^GKMeshGraphTriangulationMode;

const
  GKMeshGraphTriangulationModeVertices = 1 shl 0;
  GKMeshGraphTriangulationModeCenters = 1 shl 1;
  GKMeshGraphTriangulationModeEdgeMidpoints = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  GKMeshGraph = objcclass external (GKGraph)
  public
    function obstacles: NSArray; message 'obstacles';
    function bufferRadius: single; message 'bufferRadius';
    procedure setTriangulationMode(newValue: GKMeshGraphTriangulationMode); message 'setTriangulationMode:';
    function triangulationMode: GKMeshGraphTriangulationMode; message 'triangulationMode';
    function triangleCount: NSUInteger; message 'triangleCount';
    class function graphWithBufferRadius_minCoordinate_maxCoordinate_nodeClass (bufferRadius_: single; min: vector_float2; max: vector_float2; nodeClass: pobjc_class): id; message 'graphWithBufferRadius:minCoordinate:maxCoordinate:nodeClass:';
    function initWithBufferRadius_minCoordinate_maxCoordinate_nodeClass (bufferRadius_: single; min: vector_float2; max: vector_float2; nodeClass: pobjc_class): id; message 'initWithBufferRadius:minCoordinate:maxCoordinate:nodeClass:';
    class function graphWithBufferRadius_minCoordinate_maxCoordinate (bufferRadius_: single; min: vector_float2; max: vector_float2): id; message 'graphWithBufferRadius:minCoordinate:maxCoordinate:';
    function initWithBufferRadius_minCoordinate_maxCoordinate (bufferRadius_: single; min: vector_float2; max: vector_float2): id; message 'initWithBufferRadius:minCoordinate:maxCoordinate:';
    procedure addObstacles (obstacles_: NSArray); message 'addObstacles:';
    procedure removeObstacles (obstacles_: NSArray); message 'removeObstacles:';
    procedure connectNodeUsingObstacles (node: GKGraphNode2D); message 'connectNodeUsingObstacles:';
    procedure triangulate; message 'triangulate';
    function triangleAtIndex (index: NSUInteger): GKTriangle; message 'triangleAtIndex:';
    function classForGenericArgumentAtIndex (index: NSUInteger): pobjc_class; message 'classForGenericArgumentAtIndex:';
  end;
{$endif}

