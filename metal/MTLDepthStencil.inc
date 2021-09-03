{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLDepthStencil.h }

{$ifdef TYPES}
type
  MTLStencilDescriptorPtr = ^MTLStencilDescriptor;
  MTLDepthStencilDescriptorPtr = ^MTLDepthStencilDescriptor;
  MTLDepthStencilStateProtocolPtr = ^MTLDepthStencilStateProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLCompareFunction = NSUInteger;
  MTLCompareFunctionPtr = ^MTLCompareFunction;

const
  MTLCompareFunctionNever = 0;
  MTLCompareFunctionLess = 1;
  MTLCompareFunctionEqual = 2;
  MTLCompareFunctionLessEqual = 3;
  MTLCompareFunctionGreater = 4;
  MTLCompareFunctionNotEqual = 5;
  MTLCompareFunctionGreaterEqual = 6;
  MTLCompareFunctionAlways = 7;

type
  MTLStencilOperation = NSUInteger;
  MTLStencilOperationPtr = ^MTLStencilOperation;

const
  MTLStencilOperationKeep = 0;
  MTLStencilOperationZero = 1;
  MTLStencilOperationReplace = 2;
  MTLStencilOperationIncrementClamp = 3;
  MTLStencilOperationDecrementClamp = 4;
  MTLStencilOperationInvert = 5;
  MTLStencilOperationIncrementWrap = 6;
  MTLStencilOperationDecrementWrap = 7;
{$endif}

{$ifdef CLASSES}

type
  MTLStencilDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setStencilCompareFunction(newValue: MTLCompareFunction); message 'setStencilCompareFunction:';
    function stencilCompareFunction: MTLCompareFunction; message 'stencilCompareFunction';
    procedure setStencilFailureOperation(newValue: MTLStencilOperation); message 'setStencilFailureOperation:';
    function stencilFailureOperation: MTLStencilOperation; message 'stencilFailureOperation';
    procedure setDepthFailureOperation(newValue: MTLStencilOperation); message 'setDepthFailureOperation:';
    function depthFailureOperation: MTLStencilOperation; message 'depthFailureOperation';
    procedure setDepthStencilPassOperation(newValue: MTLStencilOperation); message 'setDepthStencilPassOperation:';
    function depthStencilPassOperation: MTLStencilOperation; message 'depthStencilPassOperation';
    procedure setReadMask(newValue: cuint32); message 'setReadMask:';
    function readMask: cuint32; message 'readMask';
    procedure setWriteMask(newValue: cuint32); message 'setWriteMask:';
    function writeMask: cuint32; message 'writeMask';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLDepthStencilDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setDepthCompareFunction(newValue: MTLCompareFunction); message 'setDepthCompareFunction:';
    function depthCompareFunction: MTLCompareFunction; message 'depthCompareFunction';
    procedure setDepthWriteEnabled(newValue: objcbool); message 'setDepthWriteEnabled:';
    function isDepthWriteEnabled: objcbool; message 'isDepthWriteEnabled';
    procedure setFrontFaceStencil(newValue: MTLStencilDescriptor); message 'setFrontFaceStencil:';
    function frontFaceStencil: MTLStencilDescriptor; message 'frontFaceStencil';
    procedure setBackFaceStencil(newValue: MTLStencilDescriptor); message 'setBackFaceStencil:';
    function backFaceStencil: MTLStencilDescriptor; message 'backFaceStencil';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLDepthStencilStateProtocol = objcprotocol external name 'MTLDepthStencilState' (NSObjectProtocol)
    function label_: NSString; message 'label';
    function device: id; message 'device';
  end;
{$endif}

