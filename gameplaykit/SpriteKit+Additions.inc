{ Parsed from GameplayKit.framework SpriteKit+Additions.h }
{$ifdef CLASSES}

type
  SKNode_GameplayKit = objccategory external name 'GameplayKit' (SKNode)
    class function obstaclesFromSpriteTextures_accuracy (sprites: NSArray; accuracy: single): NSArray; message 'obstaclesFromSpriteTextures:accuracy:';
    class function obstaclesFromNodeBounds (nodes: NSArray): NSArray; message 'obstaclesFromNodeBounds:';
    class function obstaclesFromNodePhysicsBodies (nodes: NSArray): NSArray; message 'obstaclesFromNodePhysicsBodies:';
    procedure setEntity(newValue: GKEntity); message 'setEntity:'; { available in macos 10.12, ios 10.0 }
    function entity: GKEntity; message 'entity'; { available in macos 10.12, ios 10.0 }
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
    class function textureWithNoiseMap (noiseMap: GKNoiseMap): id; message 'textureWithNoiseMap:'; { available in macos 10.12, ios 10.0 }
  end;
{$endif}

