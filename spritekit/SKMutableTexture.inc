{ Parsed from SpriteKit.framework SKMutableTexture.h }

{$ifdef CALLBACKS}
type
  SKMutableTextureModifyPixelDataWithBlockCallback = reference to procedure (pixelData: pointer; lengthInBytes: size_t); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SKMutableTexturePtr = ^SKMutableTexture;
{$endif}

{$ifdef CLASSES}

type
  SKMutableTexture = objcclass external (SKTexture)
  public
    function initWithSize (size_: CGSize): id; message 'initWithSize:';
    class function mutableTextureWithSize (size_: CGSize): id; message 'mutableTextureWithSize:';
    function initWithSize_pixelFormat (size_: CGSize; format: cint): id; message 'initWithSize:pixelFormat:';
    procedure modifyPixelDataWithBlock (block: SKMutableTextureModifyPixelDataWithBlockCallback); message 'modifyPixelDataWithBlock:';
  end;
{$endif}

