{ Parsed from SpriteKit.framework SKSpriteNode.h }

{$ifdef TYPES}
type
  SKSpriteNodePtr = ^SKSpriteNode;
{$endif}

{$ifdef CLASSES}

type
  SKSpriteNode = objcclass external (SKNode, SKWarpableProtocol)
  public
    class function spriteNodeWithTexture_size (texture: SKTexture; size: CGSize): id; message 'spriteNodeWithTexture:size:';
    class function spriteNodeWithTexture (texture: SKTexture): id; message 'spriteNodeWithTexture:';
    class function spriteNodeWithTexture_normalMap (texture: SKTexture; normalMap: SKTexture): id; message 'spriteNodeWithTexture:normalMap:';
    class function spriteNodeWithImageNamed (name_: NSString): id; message 'spriteNodeWithImageNamed:';
    class function spriteNodeWithImageNamed_normalMapped (name_: NSString; generateNormalMap: objcbool): id; message 'spriteNodeWithImageNamed:normalMapped:';
    class function spriteNodeWithColor_size (color: SKColor; size: CGSize): id; message 'spriteNodeWithColor:size:';
    function initWithTexture_color_size (texture: SKTexture; color: SKColor; size: CGSize): id; message 'initWithTexture:color:size:'; { NS_DESIGNATED_INITIALIZER }
    function initWithTexture (texture: SKTexture): id; message 'initWithTexture:';
    function initWithImageNamed (name_: NSString): id; message 'initWithImageNamed:';
    function initWithColor_size (color: SKColor; size: CGSize): id; message 'initWithColor:size:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setTexture(newValue: SKTexture); message 'setTexture:';
    function texture: SKTexture; message 'texture';
    procedure setNormalTexture(newValue: SKTexture); message 'setNormalTexture:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    function normalTexture: SKTexture; message 'normalTexture'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    procedure setLightingBitMask(newValue: cuint32); message 'setLightingBitMask:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    function lightingBitMask: cuint32; message 'lightingBitMask'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    procedure setShadowCastBitMask(newValue: cuint32); message 'setShadowCastBitMask:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    function shadowCastBitMask: cuint32; message 'shadowCastBitMask'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    procedure setShadowedBitMask(newValue: cuint32); message 'setShadowedBitMask:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    function shadowedBitMask: cuint32; message 'shadowedBitMask'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    procedure setCenterRect(newValue: CGRect); message 'setCenterRect:';
    function centerRect: CGRect; message 'centerRect';
    procedure setColorBlendFactor(newValue: CGFloat); message 'setColorBlendFactor:';
    function colorBlendFactor: CGFloat; message 'colorBlendFactor';
    procedure setColor(newValue: SKColor); message 'setColor:';
    function color: SKColor; message 'color';
    procedure setBlendMode(newValue: SKBlendMode); message 'setBlendMode:';
    function blendMode: SKBlendMode; message 'blendMode';
    procedure setAnchorPoint(newValue: CGPoint); message 'setAnchorPoint:';
    function anchorPoint: CGPoint; message 'anchorPoint';
    procedure setSize(newValue: CGSize); message 'setSize:';
    function size: CGSize; message 'size';
    procedure scaleToSize (size_: CGSize); message 'scaleToSize:'; { available in ios 10.0, tvos 10.0, watchos 3.0, macos 10.12 }
    procedure setShader(newValue: SKShader); message 'setShader:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    function shader: SKShader; message 'shader'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    procedure setAttributeValues(newValue: NSDictionary); message 'setAttributeValues:'; { available in ios 10.0, tvos 10.0, watchos 3.0, macos 10.12 }
    function attributeValues: NSDictionary; message 'attributeValues'; { available in ios 10.0, tvos 10.0, watchos 3.0, macos 10.12 }
    function valueForAttributeNamed (key: NSString): SKAttributeValue; message 'valueForAttributeNamed:'; { available in ios 10.0, tvos 10.0, watchos 3.0, macos 10.12 }
    procedure setValue_forAttributeNamed (value: SKAttributeValue; key: NSString); message 'setValue:forAttributeNamed:';

    { Adopted protocols }
    procedure setSubdivisionLevels (newValue: NSInteger); message 'setSubdivisionLevels:';
    procedure setWarpGeometry (newValue: SKWarpGeometry); message 'setWarpGeometry:';
    function subdivisionLevels: NSInteger; message 'subdivisionLevels';
    function warpGeometry: SKWarpGeometry; message 'warpGeometry';
  end;
{$endif}

