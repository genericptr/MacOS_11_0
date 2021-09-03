{ Parsed from ModelIO.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ModelIO.framework/Headers/MDLVertexDescriptor.h }

{$ifdef TYPES}
type
  MDLVertexBufferLayoutPtr = ^MDLVertexBufferLayout;
  MDLVertexAttributePtr = ^MDLVertexAttribute;
  MDLVertexDescriptorPtr = ^MDLVertexDescriptor;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MDLVertexAttributeAnisotropy: NSString; cvar; external;
  MDLVertexAttributeBinormal: NSString; cvar; external;
  MDLVertexAttributeBitangent: NSString; cvar; external;
  MDLVertexAttributeColor: NSString; cvar; external;
  MDLVertexAttributeEdgeCrease: NSString; cvar; external;
  MDLVertexAttributeJointIndices: NSString; cvar; external;
  MDLVertexAttributeJointWeights: NSString; cvar; external;
  MDLVertexAttributeNormal: NSString; cvar; external;
  MDLVertexAttributeOcclusionValue: NSString; cvar; external;
  MDLVertexAttributePosition: NSString; cvar; external;
  MDLVertexAttributeShadingBasisU: NSString; cvar; external;
  MDLVertexAttributeShadingBasisV: NSString; cvar; external;
  MDLVertexAttributeSubdivisionStencil: NSString; cvar; external;
  MDLVertexAttributeTangent: NSString; cvar; external;
  MDLVertexAttributeTextureCoordinate: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MDLVertexFormat = NSUInteger;
  MDLVertexFormatPtr = ^MDLVertexFormat;

const
  MDLVertexFormatInvalid = 0;
  MDLVertexFormatPackedBit = $1000;
  MDLVertexFormatUCharBits = $10000;
  MDLVertexFormatCharBits = $20000;
  MDLVertexFormatUCharNormalizedBits = $30000;
  MDLVertexFormatCharNormalizedBits = $40000;
  MDLVertexFormatUShortBits = $50000;
  MDLVertexFormatShortBits = $60000;
  MDLVertexFormatUShortNormalizedBits = $70000;
  MDLVertexFormatShortNormalizedBits = $80000;
  MDLVertexFormatUIntBits = $90000;
  MDLVertexFormatIntBits = $A0000;
  MDLVertexFormatHalfBits = $B0000;
  MDLVertexFormatFloatBits = $C0000;
  MDLVertexFormatUChar = MDLVertexFormatUCharBits + 1;
  MDLVertexFormatUChar2 = MDLVertexFormatUCharBits + 2;
  MDLVertexFormatUChar3 = MDLVertexFormatUCharBits + 3;
  MDLVertexFormatUChar4 = MDLVertexFormatUCharBits + 4;
  MDLVertexFormatChar = MDLVertexFormatCharBits + 1;
  MDLVertexFormatChar2 = MDLVertexFormatCharBits + 2;
  MDLVertexFormatChar3 = MDLVertexFormatCharBits + 3;
  MDLVertexFormatChar4 = MDLVertexFormatCharBits + 4;
  MDLVertexFormatUCharNormalized = MDLVertexFormatUCharNormalizedBits + 1;
  MDLVertexFormatUChar2Normalized = MDLVertexFormatUCharNormalizedBits + 2;
  MDLVertexFormatUChar3Normalized = MDLVertexFormatUCharNormalizedBits + 3;
  MDLVertexFormatUChar4Normalized = MDLVertexFormatUCharNormalizedBits + 4;
  MDLVertexFormatCharNormalized = MDLVertexFormatCharNormalizedBits + 1;
  MDLVertexFormatChar2Normalized = MDLVertexFormatCharNormalizedBits + 2;
  MDLVertexFormatChar3Normalized = MDLVertexFormatCharNormalizedBits + 3;
  MDLVertexFormatChar4Normalized = MDLVertexFormatCharNormalizedBits + 4;
  MDLVertexFormatUShort = MDLVertexFormatUShortBits + 1;
  MDLVertexFormatUShort2 = MDLVertexFormatUShortBits + 2;
  MDLVertexFormatUShort3 = MDLVertexFormatUShortBits + 3;
  MDLVertexFormatUShort4 = MDLVertexFormatUShortBits + 4;
  MDLVertexFormatShort = MDLVertexFormatShortBits + 1;
  MDLVertexFormatShort2 = MDLVertexFormatShortBits + 2;
  MDLVertexFormatShort3 = MDLVertexFormatShortBits + 3;
  MDLVertexFormatShort4 = MDLVertexFormatShortBits + 4;
  MDLVertexFormatUShortNormalized = MDLVertexFormatUShortNormalizedBits + 1;
  MDLVertexFormatUShort2Normalized = MDLVertexFormatUShortNormalizedBits + 2;
  MDLVertexFormatUShort3Normalized = MDLVertexFormatUShortNormalizedBits + 3;
  MDLVertexFormatUShort4Normalized = MDLVertexFormatUShortNormalizedBits + 4;
  MDLVertexFormatShortNormalized = MDLVertexFormatShortNormalizedBits + 1;
  MDLVertexFormatShort2Normalized = MDLVertexFormatShortNormalizedBits + 2;
  MDLVertexFormatShort3Normalized = MDLVertexFormatShortNormalizedBits + 3;
  MDLVertexFormatShort4Normalized = MDLVertexFormatShortNormalizedBits + 4;
  MDLVertexFormatUInt = MDLVertexFormatUIntBits + 1;
  MDLVertexFormatUInt2 = MDLVertexFormatUIntBits + 2;
  MDLVertexFormatUInt3 = MDLVertexFormatUIntBits + 3;
  MDLVertexFormatUInt4 = MDLVertexFormatUIntBits + 4;
  MDLVertexFormatInt = MDLVertexFormatIntBits + 1;
  MDLVertexFormatInt2 = MDLVertexFormatIntBits + 2;
  MDLVertexFormatInt3 = MDLVertexFormatIntBits + 3;
  MDLVertexFormatInt4 = MDLVertexFormatIntBits + 4;
  MDLVertexFormatHalf = MDLVertexFormatHalfBits + 1;
  MDLVertexFormatHalf2 = MDLVertexFormatHalfBits + 2;
  MDLVertexFormatHalf3 = MDLVertexFormatHalfBits + 3;
  MDLVertexFormatHalf4 = MDLVertexFormatHalfBits + 4;
  MDLVertexFormatFloat = MDLVertexFormatFloatBits + 1;
  MDLVertexFormatFloat2 = MDLVertexFormatFloatBits + 2;
  MDLVertexFormatFloat3 = MDLVertexFormatFloatBits + 3;
  MDLVertexFormatFloat4 = MDLVertexFormatFloatBits + 4;
  MDLVertexFormatInt1010102Normalized = MDLVertexFormatIntBits + MDLVertexFormatPackedBit + 4;
  MDLVertexFormatUInt1010102Normalized = MDLVertexFormatUIntBits + MDLVertexFormatPackedBit + 4;
{$endif}

{$ifdef CLASSES}

type
  MDLVertexBufferLayout = objcclass external (NSObject, NSCopyingProtocol)
  public
    function initWithStride (stride: NSUInteger): id; message 'initWithStride:';
    procedure setStride(newValue: NSUInteger); message 'setStride:';
    function stride: NSUInteger; message 'stride';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MDLVertexAttribute = objcclass external (NSObject, NSCopyingProtocol)
  public
    function initWithName_format_offset_bufferIndex (name: NSString; format: MDLVertexFormat; offset: NSUInteger; bufferIndex: NSUInteger): id; message 'initWithName:format:offset:bufferIndex:';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setFormat(newValue: MDLVertexFormat); message 'setFormat:';
    function format: MDLVertexFormat; message 'format';
    procedure setOffset(newValue: NSUInteger); message 'setOffset:';
    function offset: NSUInteger; message 'offset';
    procedure setBufferIndex(newValue: NSUInteger); message 'setBufferIndex:';
    function bufferIndex: NSUInteger; message 'bufferIndex';
    procedure setTime(newValue: NSTimeInterval); message 'setTime:';
    function time: NSTimeInterval; message 'time';
    procedure setInitializationValue(newValue: vector_float4); message 'setInitializationValue:';
    function initializationValue: vector_float4; message 'initializationValue';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MDLVertexDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    function initWithVertexDescriptor (vertexDescriptor: MDLVertexDescriptor): id; message 'initWithVertexDescriptor:';
    function attributeNamed (name: NSString): MDLVertexAttribute; message 'attributeNamed:';
    procedure addOrReplaceAttribute (attribute: MDLVertexAttribute); message 'addOrReplaceAttribute:';
    procedure removeAttributeNamed (name: NSString); message 'removeAttributeNamed:';
    procedure setAttributes(newValue: NSMutableArray); message 'setAttributes:';
    function attributes: NSMutableArray; message 'attributes';
    procedure setLayouts(newValue: NSMutableArray); message 'setLayouts:';
    function layouts: NSMutableArray; message 'layouts';
    procedure reset; message 'reset';
    procedure setPackedStrides; message 'setPackedStrides';
    procedure setPackedOffsets; message 'setPackedOffsets';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

