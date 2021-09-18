{ Parsed from Metal.framework MTLStageInputOutputDescriptor.h }

{$ifdef TYPES}
type
  MTLBufferLayoutDescriptorPtr = ^MTLBufferLayoutDescriptor;
  MTLBufferLayoutDescriptorArrayPtr = ^MTLBufferLayoutDescriptorArray;
  MTLAttributeDescriptorPtr = ^MTLAttributeDescriptor;
  MTLAttributeDescriptorArrayPtr = ^MTLAttributeDescriptorArray;
  MTLStageInputOutputDescriptorPtr = ^MTLStageInputOutputDescriptor;
{$endif}

{$ifdef TYPES}
type
  MTLAttributeFormat = NSUInteger;
  MTLAttributeFormatPtr = ^MTLAttributeFormat;

const
  MTLAttributeFormatInvalid = 0;
  MTLAttributeFormatUChar2 = 1;
  MTLAttributeFormatUChar3 = 2;
  MTLAttributeFormatUChar4 = 3;
  MTLAttributeFormatChar2 = 4;
  MTLAttributeFormatChar3 = 5;
  MTLAttributeFormatChar4 = 6;
  MTLAttributeFormatUChar2Normalized = 7;
  MTLAttributeFormatUChar3Normalized = 8;
  MTLAttributeFormatUChar4Normalized = 9;
  MTLAttributeFormatChar2Normalized = 10;
  MTLAttributeFormatChar3Normalized = 11;
  MTLAttributeFormatChar4Normalized = 12;
  MTLAttributeFormatUShort2 = 13;
  MTLAttributeFormatUShort3 = 14;
  MTLAttributeFormatUShort4 = 15;
  MTLAttributeFormatShort2 = 16;
  MTLAttributeFormatShort3 = 17;
  MTLAttributeFormatShort4 = 18;
  MTLAttributeFormatUShort2Normalized = 19;
  MTLAttributeFormatUShort3Normalized = 20;
  MTLAttributeFormatUShort4Normalized = 21;
  MTLAttributeFormatShort2Normalized = 22;
  MTLAttributeFormatShort3Normalized = 23;
  MTLAttributeFormatShort4Normalized = 24;
  MTLAttributeFormatHalf2 = 25;
  MTLAttributeFormatHalf3 = 26;
  MTLAttributeFormatHalf4 = 27;
  MTLAttributeFormatFloat = 28;
  MTLAttributeFormatFloat2 = 29;
  MTLAttributeFormatFloat3 = 30;
  MTLAttributeFormatFloat4 = 31;
  MTLAttributeFormatInt = 32;
  MTLAttributeFormatInt2 = 33;
  MTLAttributeFormatInt3 = 34;
  MTLAttributeFormatInt4 = 35;
  MTLAttributeFormatUInt = 36;
  MTLAttributeFormatUInt2 = 37;
  MTLAttributeFormatUInt3 = 38;
  MTLAttributeFormatUInt4 = 39;
  MTLAttributeFormatInt1010102Normalized = 40;
  MTLAttributeFormatUInt1010102Normalized = 41;
  MTLAttributeFormatUChar4Normalized_BGRA = 42 { available in macos , ios  };
  MTLAttributeFormatUChar = 45 { available in macos , ios  };
  MTLAttributeFormatChar = 46 { available in macos , ios  };
  MTLAttributeFormatUCharNormalized = 47 { available in macos , ios  };
  MTLAttributeFormatCharNormalized = 48 { available in macos , ios  };
  MTLAttributeFormatUShort = 49 { available in macos , ios  };
  MTLAttributeFormatShort = 50 { available in macos , ios  };
  MTLAttributeFormatUShortNormalized = 51 { available in macos , ios  };
  MTLAttributeFormatShortNormalized = 52 { available in macos , ios  };
  MTLAttributeFormatHalf = 53 { available in macos , ios  };

type
  MTLIndexType = NSUInteger;
  MTLIndexTypePtr = ^MTLIndexType;

const
  MTLIndexTypeUInt16 = 0;
  MTLIndexTypeUInt32 = 1;

type
  MTLStepFunction = NSUInteger;
  MTLStepFunctionPtr = ^MTLStepFunction;

const
  MTLStepFunctionConstant = 0;
  MTLStepFunctionPerVertex = 1;
  MTLStepFunctionPerInstance = 2;
  MTLStepFunctionPerPatch = 3 { available in macos , ios  };
  MTLStepFunctionPerPatchControlPoint = 4 { available in macos , ios  };
  MTLStepFunctionThreadPositionInGridX = 5;
  MTLStepFunctionThreadPositionInGridY = 6;
  MTLStepFunctionThreadPositionInGridXIndexed = 7;
  MTLStepFunctionThreadPositionInGridYIndexed = 8;
{$endif}

{$ifdef CLASSES}

type
  MTLBufferLayoutDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setStride(newValue: NSUInteger); message 'setStride:';
    function stride: NSUInteger; message 'stride';
    procedure setStepFunction(newValue: MTLStepFunction); message 'setStepFunction:';
    function stepFunction: MTLStepFunction; message 'stepFunction';
    procedure setStepRate(newValue: NSUInteger); message 'setStepRate:';
    function stepRate: NSUInteger; message 'stepRate';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLBufferLayoutDescriptorArray = objcclass external (NSObject)
  public
    function objectAtIndexedSubscript (index: NSUInteger): MTLBufferLayoutDescriptor; message 'objectAtIndexedSubscript:';
    procedure setObject_atIndexedSubscript (bufferDesc: MTLBufferLayoutDescriptor; index: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;

type
  MTLAttributeDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setFormat(newValue: MTLAttributeFormat); message 'setFormat:';
    function format: MTLAttributeFormat; message 'format';
    procedure setOffset(newValue: NSUInteger); message 'setOffset:';
    function offset: NSUInteger; message 'offset';
    procedure setBufferIndex(newValue: NSUInteger); message 'setBufferIndex:';
    function bufferIndex: NSUInteger; message 'bufferIndex';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLAttributeDescriptorArray = objcclass external (NSObject)
  public
    function objectAtIndexedSubscript (index: NSUInteger): MTLAttributeDescriptor; message 'objectAtIndexedSubscript:';
    procedure setObject_atIndexedSubscript (attributeDesc: MTLAttributeDescriptor; index: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;

type
  MTLStageInputOutputDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function stageInputOutputDescriptor: MTLStageInputOutputDescriptor; message 'stageInputOutputDescriptor';
    function layouts: MTLBufferLayoutDescriptorArray; message 'layouts';
    function attributes: MTLAttributeDescriptorArray; message 'attributes';
    procedure setIndexType(newValue: MTLIndexType); message 'setIndexType:';
    function indexType: MTLIndexType; message 'indexType';
    procedure setIndexBufferIndex(newValue: NSUInteger); message 'setIndexBufferIndex:';
    function indexBufferIndex: NSUInteger; message 'indexBufferIndex';
    procedure reset; message 'reset';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

