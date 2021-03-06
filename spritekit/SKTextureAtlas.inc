{ Parsed from SpriteKit.framework SKTextureAtlas.h }

{$ifdef CALLBACKS}
type
  SKTextureAtlasPreloadTextureAtlasesCallback = reference to procedure; cblock; cdecl;
  SKTextureAtlasPreloadTextureAtlasesNamedCallback = reference to procedure (error: NSError; foundAtlases: NSArray); cblock; cdecl;
  SKTextureAtlasPreloadWithCompletionHandlerCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SKTextureAtlasPtr = ^SKTextureAtlas;
{$endif}

{$ifdef CLASSES}

type
  SKTextureAtlas = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function atlasNamed (name: NSString): id; message 'atlasNamed:';
    class function atlasWithDictionary (properties: NSDictionary): id; message 'atlasWithDictionary:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    function textureNamed (name: NSString): SKTexture; message 'textureNamed:';
    class procedure preloadTextureAtlases_withCompletionHandler (textureAtlases: NSArray; completionHandler: SKTextureAtlasPreloadTextureAtlasesCallback); message 'preloadTextureAtlases:withCompletionHandler:';
    class procedure preloadTextureAtlasesNamed_withCompletionHandler (atlasNames: NSArray; completionHandler: SKTextureAtlasPreloadTextureAtlasesNamedCallback); message 'preloadTextureAtlasesNamed:withCompletionHandler:'; { available in ios 9.0, tvos 9.0, watchos 2.0, macos 10.11 }
    procedure preloadWithCompletionHandler (completionHandler: SKTextureAtlasPreloadWithCompletionHandlerCallback); message 'preloadWithCompletionHandler:';
    function textureNames: NSArray; message 'textureNames';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

