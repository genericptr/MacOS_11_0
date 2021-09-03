{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKGraph.h }

{$ifdef TYPES}
type
  GKGraphPtr = ^GKGraph;
{$endif}

{$ifdef CLASSES}

type
  GKGraph = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function nodes: NSArray; message 'nodes';
    class function graphWithNodes (nodes_: NSArray): id; message 'graphWithNodes:';
    function initWithNodes (nodes_: NSArray): id; message 'initWithNodes:';
    procedure connectNodeToLowestCostNode_bidirectional (node: GKGraphNode; bidirectional: objcbool); message 'connectNodeToLowestCostNode:bidirectional:';
    procedure removeNodes (nodes_: NSArray); message 'removeNodes:';
    procedure addNodes (nodes_: NSArray); message 'addNodes:';
    function findPathFromNode_toNode (startNode: GKGraphNode; endNode: GKGraphNode): NSArray; message 'findPathFromNode:toNode:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

