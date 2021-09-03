{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/SpriteKit+Additions.h }
{$ifdef CLASSES}

type
  SKNode_GameplayKit = objccategory external name 'GameplayKit' (SKNode)
    class function obstaclesFromSpriteTextures_accuracy (sprites: NSArray; accuracy: single): NSArray; message 'obstaclesFromSpriteTextures:accuracy:';
    class function obstaclesFromNodeBounds (nodes: NSArray): NSArray; message 'obstaclesFromNodeBounds:';
    class function obstaclesFromNodePhysicsBodies (nodes: NSArray): NSArray; message 'obstaclesFromNodePhysicsBodies:';
    procedure setEntity(newValue: GKEntity); message 'setEntity:'; { available in 10_12, 10_0 }
    function entity: GKEntity; message 'entity'; { available in 10_12, 10_0 }
  end;

type
  SKScene_GameplayKit = objccategory external name 'GameplayKit' (SKScene)
  end;

type
  SKTileMapNode_GameplayKit = objccategory external name 'GameplayKit' (SKTileMapNode)
    class function tileMapNodesWithTileSet_columns_rows_tileSize_fromNoiseMap_tileTypeNoiseMapThresholds (tileSet: SKTileSetPtr; columns: NSUInteger; rows: NSUInteger; tileSize: CGSize; noiseMap: GKNoiseMap; thresholds: NSArray): NSArray; message 'tileMapNodesWithTileSet:columns:rows:tileSize:fromNoiseMap:tileTypeNoiseMapThresholds:';
  end;

type
  SKTexture_GameplayKit = objccategory external name 'GameplayKit' (SKTexture)
    class function textureWithNoiseMap (noiseMap: GKNoiseMap): id; message 'textureWithNoiseMap:'; { available in 10_12, 10_0 }
  end;
{$endif}

