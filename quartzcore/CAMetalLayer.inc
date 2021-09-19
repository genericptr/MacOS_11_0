{ Parsed from QuartzCore.framework CAMetalLayer.h }

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
    function preferredDevice: MTLDeviceProtocol; message 'preferredDevice'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    procedure setPixelFormat(newValue: MTLPixelFormat); message 'setPixelFormat:';
    function pixelFormat: MTLPixelFormat; message 'pixelFormat';
    procedure setFramebufferOnly(newValue: objcbool); message 'setFramebufferOnly:';
    function framebufferOnly: objcbool; message 'framebufferOnly';
    procedure setDrawableSize(newValue: CGSize); message 'setDrawableSize:';
    function drawableSize: CGSize; message 'drawableSize';
    function nextDrawable: CAMetalDrawableProtocol; message 'nextDrawable';
    procedure setMaximumDrawableCount(newValue: NSUInteger); message 'setMaximumDrawableCount:'; { available in macos 10.13.2, ios 11.2, watchos 4.2, tvos 11.2 }
    function maximumDrawableCount: NSUInteger; message 'maximumDrawableCount'; { available in macos 10.13.2, ios 11.2, watchos 4.2, tvos 11.2 }
    procedure setPresentsWithTransaction(newValue: objcbool); message 'setPresentsWithTransaction:';
    function presentsWithTransaction: objcbool; message 'presentsWithTransaction';
    procedure setColorspace(newValue: CGColorSpaceRef); message 'setColorspace:';
    function colorspace: CGColorSpaceRef; message 'colorspace';
    procedure setWantsExtendedDynamicRangeContent(newValue: objcbool); message 'setWantsExtendedDynamicRangeContent:';
    function wantsExtendedDynamicRangeContent: objcbool; message 'wantsExtendedDynamicRangeContent';
    procedure setEDRMetadata(newValue: CAEDRMetadata); message 'setEDRMetadata:'; { available in macos 10.15 }
    function EDRMetadata: CAEDRMetadata; message 'EDRMetadata'; { available in macos 10.15 }
    procedure setDisplaySyncEnabled(newValue: objcbool); message 'setDisplaySyncEnabled:'; { available in macos 10.13 }
    function displaySyncEnabled: objcbool; message 'displaySyncEnabled'; { available in macos 10.13 }
    procedure setAllowsNextDrawableTimeout(newValue: objcbool); message 'setAllowsNextDrawableTimeout:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function allowsNextDrawableTimeout: objcbool; message 'allowsNextDrawableTimeout'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
  end;
{$endif}

