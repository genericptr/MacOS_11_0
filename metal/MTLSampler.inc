{ Parsed from Metal.framework MTLSampler.h }

{$ifdef TYPES}
type
  MTLSamplerDescriptorPtr = ^MTLSamplerDescriptor;
  MTLSamplerStateProtocolPtr = ^MTLSamplerStateProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLSamplerMinMagFilter = NSUInteger;
  MTLSamplerMinMagFilterPtr = ^MTLSamplerMinMagFilter;

const
  MTLSamplerMinMagFilterNearest = 0;
  MTLSamplerMinMagFilterLinear = 1;

type
  MTLSamplerMipFilter = NSUInteger;
  MTLSamplerMipFilterPtr = ^MTLSamplerMipFilter;

const
  MTLSamplerMipFilterNotMipmapped = 0;
  MTLSamplerMipFilterNearest = 1;
  MTLSamplerMipFilterLinear = 2;

type
  MTLSamplerAddressMode = NSUInteger;
  MTLSamplerAddressModePtr = ^MTLSamplerAddressMode;

const
  MTLSamplerAddressModeClampToEdge = 0;
  MTLSamplerAddressModeMirrorClampToEdge = 1 { available in macos , ios  };
  MTLSamplerAddressModeRepeat = 2;
  MTLSamplerAddressModeMirrorRepeat = 3;
  MTLSamplerAddressModeClampToZero = 4;
  MTLSamplerAddressModeClampToBorderColor = 5 { available in macos , ios  };

type
  MTLSamplerBorderColor = NSUInteger;
  MTLSamplerBorderColorPtr = ^MTLSamplerBorderColor;

const
  MTLSamplerBorderColorTransparentBlack = 0;
  MTLSamplerBorderColorOpaqueBlack = 1;
  MTLSamplerBorderColorOpaqueWhite = 2;
{$endif}

{$ifdef CLASSES}

type
  MTLSamplerDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setMinFilter(newValue: MTLSamplerMinMagFilter); message 'setMinFilter:';
    function minFilter: MTLSamplerMinMagFilter; message 'minFilter';
    procedure setMagFilter(newValue: MTLSamplerMinMagFilter); message 'setMagFilter:';
    function magFilter: MTLSamplerMinMagFilter; message 'magFilter';
    procedure setMipFilter(newValue: MTLSamplerMipFilter); message 'setMipFilter:';
    function mipFilter: MTLSamplerMipFilter; message 'mipFilter';
    procedure setMaxAnisotropy(newValue: NSUInteger); message 'setMaxAnisotropy:';
    function maxAnisotropy: NSUInteger; message 'maxAnisotropy';
    procedure setSAddressMode(newValue: MTLSamplerAddressMode); message 'setSAddressMode:';
    function sAddressMode: MTLSamplerAddressMode; message 'sAddressMode';
    procedure setTAddressMode(newValue: MTLSamplerAddressMode); message 'setTAddressMode:';
    function tAddressMode: MTLSamplerAddressMode; message 'tAddressMode';
    procedure setRAddressMode(newValue: MTLSamplerAddressMode); message 'setRAddressMode:';
    function rAddressMode: MTLSamplerAddressMode; message 'rAddressMode';
    procedure setBorderColor(newValue: MTLSamplerBorderColor); message 'setBorderColor:'; { available in macos , ios  }
    function borderColor: MTLSamplerBorderColor; message 'borderColor'; { available in macos , ios  }
    procedure setNormalizedCoordinates(newValue: objcbool); message 'setNormalizedCoordinates:';
    function normalizedCoordinates: objcbool; message 'normalizedCoordinates';
    procedure setLodMinClamp(newValue: single); message 'setLodMinClamp:';
    function lodMinClamp: single; message 'lodMinClamp';
    procedure setLodMaxClamp(newValue: single); message 'setLodMaxClamp:';
    function lodMaxClamp: single; message 'lodMaxClamp';
    procedure setLodAverage(newValue: objcbool); message 'setLodAverage:'; { available in ios , macos , macCatalyst  }
    function lodAverage: objcbool; message 'lodAverage'; { available in ios , macos , macCatalyst  }
    procedure setCompareFunction(newValue: MTLCompareFunction); message 'setCompareFunction:'; { available in macos , ios  }
    function compareFunction: MTLCompareFunction; message 'compareFunction'; { available in macos , ios  }
    procedure setSupportArgumentBuffers(newValue: objcbool); message 'setSupportArgumentBuffers:'; { available in macos , ios  }
    function supportArgumentBuffers: objcbool; message 'supportArgumentBuffers'; { available in macos , ios  }
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLSamplerStateProtocol = objcprotocol external name 'MTLSamplerState' (NSObjectProtocol)
    function label_: NSString; message 'label';
    function device: id; message 'device';
  end;
{$endif}

