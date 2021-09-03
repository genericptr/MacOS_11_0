{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLVertexDescriptor.h }

{$ifdef TYPES}
type
  MTLVertexBufferLayoutDescriptorPtr = ^MTLVertexBufferLayoutDescriptor;
  MTLVertexBufferLayoutDescriptorArrayPtr = ^MTLVertexBufferLayoutDescriptorArray;
  MTLVertexAttributeDescriptorPtr = ^MTLVertexAttributeDescriptor;
  MTLVertexAttributeDescriptorArrayPtr = ^MTLVertexAttributeDescriptorArray;
  MTLVertexDescriptorPtr = ^MTLVertexDescriptor;
{$endif}

{$ifdef TYPES}
type
  MTLVertexFormat = NSUInteger;
  MTLVertexFormatPtr = ^MTLVertexFormat;

const
  MTLVertexFormatInvalid = 0;
  MTLVertexFormatUChar2 = 1;
  MTLVertexFormatUChar3 = 2;
  MTLVertexFormatUChar4 = 3;
  MTLVertexFormatChar2 = 4;
  MTLVertexFormatChar3 = 5;
  MTLVertexFormatChar4 = 6;
  MTLVertexFormatUChar2Normalized = 7;
  MTLVertexFormatUChar3Normalized = 8;
  MTLVertexFormatUChar4Normalized = 9;
  MTLVertexFormatChar2Normalized = 10;
  MTLVertexFormatChar3Normalized = 11;
  MTLVertexFormatChar4Normalized = 12;
  MTLVertexFormatUShort2 = 13;
  MTLVertexFormatUShort3 = 14;
  MTLVertexFormatUShort4 = 15;
  MTLVertexFormatShort2 = 16;
  MTLVertexFormatShort3 = 17;
  MTLVertexFormatShort4 = 18;
  MTLVertexFormatUShort2Normalized = 19;
  MTLVertexFormatUShort3Normalized = 20;
  MTLVertexFormatUShort4Normalized = 21;
  MTLVertexFormatShort2Normalized = 22;
  MTLVertexFormatShort3Normalized = 23;
  MTLVertexFormatShort4Normalized = 24;
  MTLVertexFormatHalf2 = 25;
  MTLVertexFormatHalf3 = 26;
  MTLVertexFormatHalf4 = 27;
  MTLVertexFormatFloat = 28;
  MTLVertexFormatFloat2 = 29;
  MTLVertexFormatFloat3 = 30;
  MTLVertexFormatFloat4 = 31;
  MTLVertexFormatInt = 32;
  MTLVertexFormatInt2 = 33;
  MTLVertexFormatInt3 = 34;
  MTLVertexFormatInt4 = 35;
  MTLVertexFormatUInt = 36;
  MTLVertexFormatUInt2 = 37;
  MTLVertexFormatUInt3 = 38;
  MTLVertexFormatUInt4 = 39;
  MTLVertexFormatInt1010102Normalized = 40;
  MTLVertexFormatUInt1010102Normalized = 41;
  MTLVertexFormatUChar4Normalized_BGRA = 42 { available in macos , ios  };
  MTLVertexFormatUChar = 45 { available in macos , ios  };
  MTLVertexFormatChar = 46 { available in macos , ios  };
  MTLVertexFormatUCharNormalized = 47 { available in macos , ios  };
  MTLVertexFormatCharNormalized = 48 { available in macos , ios  };
  MTLVertexFormatUShort = 49 { available in macos , ios  };
  MTLVertexFormatShort = 50 { available in macos , ios  };
  MTLVertexFormatUShortNormalized = 51 { available in macos , ios  };
  MTLVertexFormatShortNormalized = 52 { available in macos , ios  };
  MTLVertexFormatHalf = 53 { available in macos , ios  };

type
  MTLVertexStepFunction = NSUInteger;
  MTLVertexStepFunctionPtr = ^MTLVertexStepFunction;

const
  MTLVertexStepFunctionConstant = 0;
  MTLVertexStepFunctionPerVertex = 1;
  MTLVertexStepFunctionPerInstance = 2;
  MTLVertexStepFunctionPerPatch = 3 { available in macos , ios  };
  MTLVertexStepFunctionPerPatchControlPoint = 4 { available in macos , ios  };
{$endif}

{$ifdef CLASSES}

type
  MTLVertexBufferLayoutDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setStride(newValue: NSUInteger); message 'setStride:';
    function stride: NSUInteger; message 'stride';
    procedure setStepFunction(newValue: MTLVertexStepFunction); message 'setStepFunction:';
    function stepFunction: MTLVertexStepFunction; message 'stepFunction';
    procedure setStepRate(newValue: NSUInteger); message 'setStepRate:';
    function stepRate: NSUInteger; message 'stepRate';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLVertexBufferLayoutDescriptorArray = objcclass external (NSObject)
  public
    function objectAtIndexedSubscript (index: NSUInteger): MTLVertexBufferLayoutDescriptor; message 'objectAtIndexedSubscript:';
    procedure setObject_atIndexedSubscript (bufferDesc: MTLVertexBufferLayoutDescriptor; index: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;

type
  MTLVertexAttributeDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setFormat(newValue: MTLVertexFormat); message 'setFormat:';
    function format: MTLVertexFormat; message 'format';
    procedure setOffset(newValue: NSUInteger); message 'setOffset:';
    function offset: NSUInteger; message 'offset';
    procedure setBufferIndex(newValue: NSUInteger); message 'setBufferIndex:';
    function bufferIndex: NSUInteger; message 'bufferIndex';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLVertexAttributeDescriptorArray = objcclass external (NSObject)
  public
    function objectAtIndexedSubscript (index: NSUInteger): MTLVertexAttributeDescriptor; message 'objectAtIndexedSubscript:';
    procedure setObject_atIndexedSubscript (attributeDesc: MTLVertexAttributeDescriptor; index: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;

type
  MTLVertexDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function vertexDescriptor: MTLVertexDescriptor; message 'vertexDescriptor';
    function layouts: MTLVertexBufferLayoutDescriptorArray; message 'layouts';
    function attributes: MTLVertexAttributeDescriptorArray; message 'attributes';
    procedure reset; message 'reset';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

