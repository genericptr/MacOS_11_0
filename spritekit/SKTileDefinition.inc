{ Parsed from SpriteKit.framework SKTileDefinition.h }

{$ifdef TYPES}
type
  SKTileDefinitionPtr = ^SKTileDefinition;
{$endif}

{$ifdef TYPES}
type
  SKTileDefinitionRotation = NSUInteger;
  SKTileDefinitionRotationPtr = ^SKTileDefinitionRotation;

const
  SKTileDefinitionRotation0 = 0;
  SKTileDefinitionRotation90 = 1;
  SKTileDefinitionRotation180 = 2;
  SKTileDefinitionRotation270 = 3;
{$endif}

{$ifdef CLASSES}

type
  SKTileDefinition = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function tileDefinitionWithTexture (texture: SKTexture): id; message 'tileDefinitionWithTexture:';
    class function tileDefinitionWithTexture_size (texture: SKTexture; size: CGSize): id; message 'tileDefinitionWithTexture:size:';
    class function tileDefinitionWithTexture_normalTexture_size (texture: SKTexture; normalTexture: SKTexture; size: CGSize): id; message 'tileDefinitionWithTexture:normalTexture:size:';
    class function tileDefinitionWithTextures_size_timePerFrame (textures: NSArray; size: CGSize; timePerFrame: CGFloat): id; message 'tileDefinitionWithTextures:size:timePerFrame:';
    class function tileDefinitionWithTextures_normalTextures_size_timePerFrame (textures: NSArray; normalTextures: NSArray; size: CGSize; timePerFrame: CGFloat): id; message 'tileDefinitionWithTextures:normalTextures:size:timePerFrame:';
    function initWithTexture (texture: SKTexture): id; message 'initWithTexture:';
    function initWithTexture_size (texture: SKTexture; size: CGSize): id; message 'initWithTexture:size:';
    function initWithTexture_normalTexture_size (texture: SKTexture; normalTexture: SKTexture; size: CGSize): id; message 'initWithTexture:normalTexture:size:';
    function initWithTextures_size_timePerFrame (textures: NSArray; size: CGSize; timePerFrame: CGFloat): id; message 'initWithTextures:size:timePerFrame:';
    function initWithTextures_normalTextures_size_timePerFrame (textures: NSArray; normalTextures: NSArray; size: CGSize; timePerFrame: CGFloat): id; message 'initWithTextures:normalTextures:size:timePerFrame:';
    procedure setTextures(newValue: NSArray); message 'setTextures:';
    function textures: NSArray; message 'textures';
    procedure setNormalTextures(newValue: NSArray); message 'setNormalTextures:';
    function normalTextures: NSArray; message 'normalTextures';
    procedure setUserData(newValue: NSMutableDictionary); message 'setUserData:';
    function userData: NSMutableDictionary; message 'userData';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setSize(newValue: CGSize); message 'setSize:';
    function size: CGSize; message 'size';
    procedure setTimePerFrame(newValue: CGFloat); message 'setTimePerFrame:';
    function timePerFrame: CGFloat; message 'timePerFrame';
    procedure setPlacementWeight(newValue: NSUInteger); message 'setPlacementWeight:';
    function placementWeight: NSUInteger; message 'placementWeight';
    procedure setRotation(newValue: SKTileDefinitionRotation); message 'setRotation:';
    function rotation: SKTileDefinitionRotation; message 'rotation';
    procedure setFlipVertically(newValue: objcbool); message 'setFlipVertically:';
    function flipVertically: objcbool; message 'flipVertically';
    procedure setFlipHorizontally(newValue: objcbool); message 'setFlipHorizontally:';
    function flipHorizontally: objcbool; message 'flipHorizontally';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

