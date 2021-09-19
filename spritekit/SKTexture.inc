{ Parsed from SpriteKit.framework SKTexture.h }

{ Types from SKTexture }
{$ifdef TYPES}


{$endif}


{$ifdef CALLBACKS}
type
  SKTexturePreloadTexturesCallback = reference to procedure; cblock; cdecl;
  SKTexturePreloadWithCompletionHandlerCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SKTexturePtr = ^SKTexture;
{$endif}

{$ifdef TYPES}
type
  SKTextureFilteringMode = NSInteger;
  SKTextureFilteringModePtr = ^SKTextureFilteringMode;

const
  SKTextureFilteringNearest = 0;
  SKTextureFilteringLinear = 1;
{$endif}

{$ifdef CLASSES}

type
  SKTexture = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function textureWithImageNamed (name: NSString): id; message 'textureWithImageNamed:';
    class function textureWithRect_inTexture (rect: CGRect; texture: SKTexture): id; message 'textureWithRect:inTexture:';
    class function textureVectorNoiseWithSmoothness_size (smoothness: CGFloat; size: CGSize): id; message 'textureVectorNoiseWithSmoothness:size:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    class function textureNoiseWithSmoothness_size_grayscale (smoothness: CGFloat; size: CGSize; grayscale: objcbool): id; message 'textureNoiseWithSmoothness:size:grayscale:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    class function textureWithCGImage (image: CGImageRef): id; message 'textureWithCGImage:';
    {$if defined(TARGET_OS_IPHONE)}
    class function textureWithImage (image: UIImagePtr): id; message 'textureWithImage:';
    {$else}
    class function textureWithImage (image: NSImage): id; message 'textureWithImage:';
    {$endif}
    class function textureWithData_size (pixelData: NSData; size: CGSize): id; message 'textureWithData:size:';
    class function textureWithData_size_flipped (pixelData: NSData; size: CGSize; flipped: objcbool): id; message 'textureWithData:size:flipped:';
    class function textureWithData_size_rowLength_alignment (pixelData: NSData; size: CGSize; rowLength: cuint; alignment: cuint): id; message 'textureWithData:size:rowLength:alignment:';
    {$if defined(__NULL_MACRO__)}
    function textureByApplyingCIFilter (filter: CIFilter): id; message 'textureByApplyingCIFilter:';
    {$endif}
    function textureByGeneratingNormalMap: id; message 'textureByGeneratingNormalMap'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    function textureByGeneratingNormalMapWithSmoothness_contrast (smoothness: CGFloat; contrast: CGFloat): id; message 'textureByGeneratingNormalMapWithSmoothness:contrast:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    function textureRect: CGRect; message 'textureRect';
    function size: CGSize; message 'size';
    procedure setFilteringMode(newValue: SKTextureFilteringMode); message 'setFilteringMode:';
    function filteringMode: SKTextureFilteringMode; message 'filteringMode';
    procedure setUsesMipmaps(newValue: objcbool); message 'setUsesMipmaps:';
    function usesMipmaps: objcbool; message 'usesMipmaps';
    function CGImage: CGImageRef; message 'CGImage'; { available in ios 9.0, tvos 9.0, watchos 2.0, macos 10.11 }
    class procedure preloadTextures_withCompletionHandler (textures: NSArray; completionHandler: SKTexturePreloadTexturesCallback); message 'preloadTextures:withCompletionHandler:';
    procedure preloadWithCompletionHandler (completionHandler: SKTexturePreloadWithCompletionHandlerCallback); message 'preloadWithCompletionHandler:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

