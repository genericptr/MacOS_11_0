{ Parsed from SpriteKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SpriteKit.framework/Headers/SKLightNode.h }

{$ifdef TYPES}
type
  SKLightNodePtr = ^SKLightNode;
{$endif}

{$ifdef CLASSES}

type
  SKLightNode = objcclass external (SKNode)
  public
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    procedure setLightColor(newValue: SKColor); message 'setLightColor:';
    function lightColor: SKColor; message 'lightColor';
    procedure setAmbientColor(newValue: SKColor); message 'setAmbientColor:';
    function ambientColor: SKColor; message 'ambientColor';
    procedure setShadowColor(newValue: SKColor); message 'setShadowColor:';
    function shadowColor: SKColor; message 'shadowColor';
    procedure setFalloff(newValue: CGFloat); message 'setFalloff:';
    function falloff: CGFloat; message 'falloff';
    procedure setCategoryBitMask(newValue: cuint32); message 'setCategoryBitMask:';
    function categoryBitMask: cuint32; message 'categoryBitMask';
  end;
{$endif}

