{ Parsed from SpriteKit.framework SKReferenceNode.h }

{$ifdef TYPES}
type
  SKReferenceNodePtr = ^SKReferenceNode;
{$endif}

{$ifdef CLASSES}

type
  SKReferenceNode = objcclass external (SKNode)
  public
    function initWithURL (url: NSURL): id; message 'initWithURL:'; { NS_DESIGNATED_INITIALIZER }
    function initWithFileNamed (fileName: NSString): id; message 'initWithFileNamed:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function referenceNodeWithFileNamed (fileName: NSString): id; message 'referenceNodeWithFileNamed:';
    class function referenceNodeWithURL (referenceURL: NSURL): id; message 'referenceNodeWithURL:';
    procedure didLoadReferenceNode (node_: SKNode); message 'didLoadReferenceNode:';
    procedure resolveReferenceNode; message 'resolveReferenceNode';
  end;
{$endif}

