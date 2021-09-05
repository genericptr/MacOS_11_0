{ Parsed from QuartzCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/QuartzCore.framework/Headers/CAMetalLayer.h }

{$ifdef TYPES}
type
  CAMetalLayerPtr = ^CAMetalLayer;
  CAMetalDrawableProtocolPtr = ^CAMetalDrawableProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  CAMetalDrawableProtocol = objcprotocol external name 'CAMetalDrawable' (MTLDrawableProtocol)
    function texture: MTLTextureProtocol; message 'texture';
    function layer: CAMetalLayer; message 'layer';
  end;
{$endif}

{$ifdef CLASSES}

type
  CAMetalLayer = objcclass external (CALayer)
  private
    _priv: _CAMetalLayerPrivatePtr;
  public
    procedure setDevice(newValue: MTLDeviceProtocol); message 'setDevice:';
    function device: MTLDeviceProtocol; message 'device';
    function preferredDevice: MTLDeviceProtocol; message 'preferredDevice'; { available in macos , ios , watchos , tvos  }
    procedure setPixelFormat(newValue: MTLPixelFormat); message 'setPixelFormat:';
    function pixelFormat: MTLPixelFormat; message 'pixelFormat';
    procedure setFramebufferOnly(newValue: objcbool); message 'setFramebufferOnly:';
    function framebufferOnly: objcbool; message 'framebufferOnly';
    procedure setDrawableSize(newValue: CGSize); message 'setDrawableSize:';
    function drawableSize: CGSize; message 'drawableSize';
    function nextDrawable: CAMetalDrawableProtocol; message 'nextDrawable';
    procedure setMaximumDrawableCount(newValue: NSUInteger); message 'setMaximumDrawableCount:'; { available in macos , ios , watchos , tvos  }
    function maximumDrawableCount: NSUInteger; message 'maximumDrawableCount'; { available in macos , ios , watchos , tvos  }
    procedure setPresentsWithTransaction(newValue: objcbool); message 'setPresentsWithTransaction:';
    function presentsWithTransaction: objcbool; message 'presentsWithTransaction';
    procedure setColorspace(newValue: CGColorSpaceRef); message 'setColorspace:';
    function colorspace: CGColorSpaceRef; message 'colorspace';
    procedure setWantsExtendedDynamicRangeContent(newValue: objcbool); message 'setWantsExtendedDynamicRangeContent:';
    function wantsExtendedDynamicRangeContent: objcbool; message 'wantsExtendedDynamicRangeContent';
    procedure setEDRMetadata(newValue: CAEDRMetadata); message 'setEDRMetadata:'; { available in macos  }
    function EDRMetadata: CAEDRMetadata; message 'EDRMetadata'; { available in macos  }
    procedure setDisplaySyncEnabled(newValue: objcbool); message 'setDisplaySyncEnabled:'; { available in macos  }
    function displaySyncEnabled: objcbool; message 'displaySyncEnabled'; { available in macos  }
    procedure setAllowsNextDrawableTimeout(newValue: objcbool); message 'setAllowsNextDrawableTimeout:'; { available in macos , ios , watchos , tvos  }
    function allowsNextDrawableTimeout: objcbool; message 'allowsNextDrawableTimeout'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

