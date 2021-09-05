{ Parsed from MetalKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetalKit.framework/Headers/MTKTextureLoader.h }

{$ifdef TYPES}
type
  MTKTextureLoaderPtr = ^MTKTextureLoader;
{$endif}

{$ifdef TYPES}
type
  MTKTextureLoaderError = NSString;
  MTKTextureLoaderErrorPtr = ^MTKTextureLoaderError;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTKTextureLoaderErrorDomain: MTKTextureLoaderError { available in 10_11, 9_0 }; cvar; external;
  MTKTextureLoaderErrorKey: MTKTextureLoaderError { available in 10_11, 9_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTKTextureLoaderOption = NSString;
  MTKTextureLoaderOptionPtr = ^MTKTextureLoaderOption;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTKTextureLoaderOptionAllocateMipmaps: MTKTextureLoaderOption { available in 10_11, 9_0 }; cvar; external;
  MTKTextureLoaderOptionGenerateMipmaps: MTKTextureLoaderOption { available in 10_12, 10_0 }; cvar; external;
  MTKTextureLoaderOptionSRGB: MTKTextureLoaderOption { available in 10_11, 9_0 }; cvar; external;
  MTKTextureLoaderOptionTextureUsage: MTKTextureLoaderOption { available in 10_11, 9_0 }; cvar; external;
  MTKTextureLoaderOptionTextureCPUCacheMode: MTKTextureLoaderOption { available in 10_11, 9_0 }; cvar; external;
  MTKTextureLoaderOptionTextureStorageMode: MTKTextureLoaderOption { available in 10_12, 10_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTKTextureLoaderCubeLayout = NSString;
  MTKTextureLoaderCubeLayoutPtr = ^MTKTextureLoaderCubeLayout;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTKTextureLoaderOptionCubeLayout: MTKTextureLoaderOption { available in 10_12, 10_0 }; cvar; external;
  MTKTextureLoaderCubeLayoutVertical: MTKTextureLoaderCubeLayout { available in 10_12, 10_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTKTextureLoaderOrigin = NSString;
  MTKTextureLoaderOriginPtr = ^MTKTextureLoaderOrigin;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTKTextureLoaderOptionOrigin: MTKTextureLoaderOption { available in 10_12, 10_0 }; cvar; external;
  MTKTextureLoaderOriginTopLeft: MTKTextureLoaderOrigin { available in 10_12, 10_0 }; cvar; external;
  MTKTextureLoaderOriginBottomLeft: MTKTextureLoaderOrigin { available in 10_12, 10_0 }; cvar; external;
  MTKTextureLoaderOriginFlippedVertically: MTKTextureLoaderOrigin { available in 10_12, 10_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTKTextureLoaderCallback = reference to procedure (texture: MTLTextureProtocol; error: NSError); cblock; cdecl;
  MTKTextureLoaderArrayCallback = reference to procedure (textures: NSArray; error: NSError); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  MTKTextureLoader = objcclass external (NSObject)
  public
    function device: MTLDeviceProtocol; message 'device';
    function init: id; message 'init';
    function initWithDevice (device_: MTLDeviceProtocol): id; message 'initWithDevice:';
    procedure newTextureWithContentsOfURL_options_completionHandler (URL: NSURL; options: NSDictionary; completionHandler: MTKTextureLoaderCallback); message 'newTextureWithContentsOfURL:options:completionHandler:';
    procedure newTextureWithName_scaleFactor_bundle_options_completionHandler (name: NSString; scaleFactor: CGFloat; bundle: NSBundle; options: NSDictionary; completionHandler: MTKTextureLoaderCallback); message 'newTextureWithName:scaleFactor:bundle:options:completionHandler:'; { available in 10_12, 10_0 }
    procedure newTextureWithName_scaleFactor_displayGamut_bundle_options_completionHandler (name: NSString; scaleFactor: CGFloat; displayGamut: NSDisplayGamut; bundle: NSBundle; options: NSDictionary; completionHandler: MTKTextureLoaderCallback); message 'newTextureWithName:scaleFactor:displayGamut:bundle:options:completionHandler:'; { available in 10_12 }
    procedure newTexturesWithContentsOfURLs_options_completionHandler (URLs: NSArray; options: NSDictionary; completionHandler: MTKTextureLoaderArrayCallback); message 'newTexturesWithContentsOfURLs:options:completionHandler:'; { available in 10_12, 10_0 }
    procedure newTexturesWithNames_scaleFactor_bundle_options_completionHandler (names: NSArray; scaleFactor: CGFloat; bundle: NSBundle; options: NSDictionary; completionHandler: MTKTextureLoaderArrayCallback); message 'newTexturesWithNames:scaleFactor:bundle:options:completionHandler:'; { available in 10_12, 10_0 }
    procedure newTexturesWithNames_scaleFactor_displayGamut_bundle_options_completionHandler (names: NSArray; scaleFactor: CGFloat; displayGamut: NSDisplayGamut; bundle: NSBundle; options: NSDictionary; completionHandler: MTKTextureLoaderArrayCallback); message 'newTexturesWithNames:scaleFactor:displayGamut:bundle:options:completionHandler:'; { available in 10_12 }
    procedure newTextureWithData_options_completionHandler (data: NSData; options: NSDictionary; completionHandler: MTKTextureLoaderCallback); message 'newTextureWithData:options:completionHandler:';
    procedure newTextureWithCGImage_options_completionHandler (cgImage: CGImageRef; options: NSDictionary; completionHandler: MTKTextureLoaderCallback); message 'newTextureWithCGImage:options:completionHandler:';
    procedure newTextureWithMDLTexture_options_completionHandler (texture: MDLTexture; options: NSDictionary; completionHandler: MTKTextureLoaderCallback); message 'newTextureWithMDLTexture:options:completionHandler:'; { available in 10_12, 10_0 }
    function newTextureWithContentsOfURL_options_error (URL: NSURL; options: NSDictionary; error: NSErrorPtr): id; message 'newTextureWithContentsOfURL:options:error:';
    function newTexturesWithContentsOfURLs_options_error (URLs: NSArray; options: NSDictionary; error: NSErrorPtr): NSArray; message 'newTexturesWithContentsOfURLs:options:error:'; { available in 10_12, 10_0 }
    function newTextureWithData_options_error (data: NSData; options: NSDictionary; error: NSErrorPtr): id; message 'newTextureWithData:options:error:';
    function newTextureWithCGImage_options_error (cgImage: CGImageRef; options: NSDictionary; error: NSErrorPtr): id; message 'newTextureWithCGImage:options:error:';
    function newTextureWithMDLTexture_options_error (texture: MDLTexture; options: NSDictionary; error: NSErrorPtr): id; message 'newTextureWithMDLTexture:options:error:'; { available in 10_12, 10_0 }
    function newTextureWithName_scaleFactor_bundle_options_error (name: NSString; scaleFactor: CGFloat; bundle: NSBundle; options: NSDictionary; error: NSErrorPtr): id; message 'newTextureWithName:scaleFactor:bundle:options:error:'; { available in 10_12, 10_0 }
    function newTextureWithName_scaleFactor_displayGamut_bundle_options_error (name: NSString; scaleFactor: CGFloat; displayGamut: NSDisplayGamut; bundle: NSBundle; options: NSDictionary; error: NSErrorPtr): id; message 'newTextureWithName:scaleFactor:displayGamut:bundle:options:error:'; { available in 10_12 }
  end;
{$endif}

