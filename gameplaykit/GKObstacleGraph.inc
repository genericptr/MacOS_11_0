{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKObstacleGraph.h }

{$ifdef TYPES}
type
  GKObstacleGraphPtr = ^GKObstacleGraph;
{$endif}

{$ifdef CLASSES}

type
  GKObstacleGraph = objcclass external (GKGraph)
  public
    function obstacles: NSArray; message 'obstacles';
    function bufferRadius: single; message 'bufferRadius';
    class function graphWithObstacles_bufferRadius (obstacles_: NSArray; bufferRadius_: single): id; message 'graphWithObstacles:bufferRadius:';
    function initWithObstacles_bufferRadius (obstacles_: NSArray; bufferRadius_: single): id; message 'initWithObstacles:bufferRadius:';
    class function graphWithObstacles_bufferRadius_nodeClass (obstacles_: NSArray; bufferRadius_: single; nodeClass: pobjc_class): id; message 'graphWithObstacles:bufferRadius:nodeClass:';
    function initWithObstacles_bufferRadius_nodeClass (obstacles_: NSArray; bufferRadius_: single; nodeClass: pobjc_class): id; message 'initWithObstacles:bufferRadius:nodeClass:';
    procedure connectNodeUsingObstacles (node: GKGraphNode2D); message 'connectNodeUsingObstacles:';
    procedure connectNodeUsingObstacles_ignoringObstacles (node: GKGraphNode2D; obstaclesToIgnore: NSArray); message 'connectNodeUsingObstacles:ignoringObstacles:';
    procedure connectNodeUsingObstacles_ignoringBufferRadiusOfObstacles (node: GKGraphNode2D; obstaclesBufferRadiusToIgnore: NSArray); message 'connectNodeUsingObstacles:ignoringBufferRadiusOfObstacles:';
    procedure addObstacles (obstacles_: NSArray); message 'addObstacles:';
    procedure removeObstacles (obstacles_: NSArray); message 'removeObstacles:';
    procedure removeAllObstacles; message 'removeAllObstacles';
    function nodesForObstacle (obstacle: GKPolygonObstacle): NSArray; message 'nodesForObstacle:';
    procedure lockConnectionFromNode_toNode (startNode: GKGraphNode2D; endNode: GKGraphNode2D); message 'lockConnectionFromNode:toNode:';
    procedure unlockConnectionFromNode_toNode (startNode: GKGraphNode2D; endNode: GKGraphNode2D); message 'unlockConnectionFromNode:toNode:';
    function isConnectionLockedFromNode_toNode (startNode: GKGraphNode2D; endNode: GKGraphNode2D): objcbool; message 'isConnectionLockedFromNode:toNode:';
    function classForGenericArgumentAtIndex (index: NSUInteger): pobjc_class; message 'classForGenericArgumentAtIndex:';
  end;
{$endif}

