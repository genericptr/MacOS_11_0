{ Parsed from SpriteKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SpriteKit.framework/Headers/SKCropNode.h }

{$ifdef TYPES}
type
  SKCropNodePtr = ^SKCropNode;
{$endif}

{$ifdef CLASSES}

type
  SKCropNode = objcclass external (SKNode)
  public
    procedure setMaskNode(newValue: SKNode); message 'setMaskNode:';
    function maskNode: SKNode; message 'maskNode';
  end;
{$endif}

