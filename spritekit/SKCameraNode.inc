{ Parsed from SpriteKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SpriteKit.framework/Headers/SKCameraNode.h }

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

