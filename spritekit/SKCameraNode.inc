{ Parsed from SpriteKit.framework SKCameraNode.h }

{$ifdef TYPES}
type
  SKCameraNodePtr = ^SKCameraNode;
{$endif}

{$ifdef CLASSES}

type
  SKCameraNode = objcclass external (SKNode)
  public
    function containsNode (node_: SKNode): objcbool; message 'containsNode:';
    function containedNodeSet: NSSet; message 'containedNodeSet';
  end;
{$endif}

