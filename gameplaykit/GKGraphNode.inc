{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKGraphNode.h }

{$ifdef TYPES}
type
  GKGraphNodePtr = ^GKGraphNode;
  GKGraphNode2DPtr = ^GKGraphNode2D;
  GKGraphNode3DPtr = ^GKGraphNode3D;
  GKGridGraphNodePtr = ^GKGridGraphNode;
{$endif}

{$ifdef CLASSES}

type
  GKGraphNode = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function connectedNodes: NSArray; message 'connectedNodes';
    procedure addConnectionsToNodes_bidirectional (nodes: NSArray; bidirectional: objcbool); message 'addConnectionsToNodes:bidirectional:';
    procedure removeConnectionsToNodes_bidirectional (nodes: NSArray; bidirectional: objcbool); message 'removeConnectionsToNodes:bidirectional:';
    function estimatedCostToNode (node: GKGraphNode): single; message 'estimatedCostToNode:';
    function costToNode (node: GKGraphNode): single; message 'costToNode:';
    function findPathToNode (goalNode: GKGraphNode): NSArray; message 'findPathToNode:';
    function findPathFromNode (startNode: GKGraphNode): NSArray; message 'findPathFromNode:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  GKGraphNode2D = objcclass external (GKGraphNode)
  public
    procedure setPosition(newValue: vector_float2); message 'setPosition:';
    function position: vector_float2; message 'position';
    class function nodeWithPoint (point: vector_float2): id; message 'nodeWithPoint:';
    function initWithPoint (point: vector_float2): id; message 'initWithPoint:';
  end;

type
  GKGraphNode3D = objcclass external (GKGraphNode)
  public
    procedure setPosition(newValue: vector_float3); message 'setPosition:';
    function position: vector_float3; message 'position';
    class function nodeWithPoint (point: vector_float3): id; message 'nodeWithPoint:';
    function initWithPoint (point: vector_float3): id; message 'initWithPoint:';
  end;

type
  GKGridGraphNode = objcclass external (GKGraphNode)
  public
    function gridPosition: vector_int2; message 'gridPosition';
    class function nodeWithGridPosition (gridPosition_: vector_int2): id; message 'nodeWithGridPosition:';
    function initWithGridPosition (gridPosition_: vector_int2): id; message 'initWithGridPosition:';
  end;
{$endif}

