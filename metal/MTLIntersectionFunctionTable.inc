{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLIntersectionFunctionTable.h }

{$ifdef TYPES}
type
  MTLIntersectionFunctionTableDescriptorPtr = ^MTLIntersectionFunctionTableDescriptor;
  MTLIntersectionFunctionTableProtocolPtr = ^MTLIntersectionFunctionTableProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLIntersectionFunctionSignature = NSUInteger;
  MTLIntersectionFunctionSignaturePtr = ^MTLIntersectionFunctionSignature;

const
  MTLIntersectionFunctionSignatureNone = 0;
  MTLIntersectionFunctionSignatureInstancing = 1 shl 0;
  MTLIntersectionFunctionSignatureTriangleData = 1 shl 1;
  MTLIntersectionFunctionSignatureWorldSpaceData = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  MTLIntersectionFunctionTableDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function intersectionFunctionTableDescriptor: MTLIntersectionFunctionTableDescriptor; message 'intersectionFunctionTableDescriptor';
    procedure setFunctionCount(newValue: NSUInteger); message 'setFunctionCount:';
    function functionCount: NSUInteger; message 'functionCount';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLIntersectionFunctionTableProtocol = objcprotocol external name 'MTLIntersectionFunctionTable' (MTLResourceProtocol)
    procedure setBuffer_offset_atIndex (buffer: id; offset: NSUInteger; index: NSUInteger); message 'setBuffer:offset:atIndex:';
    procedure setBuffers_offsets_withRange (buffers: idPtr { variable size array of id }; offsets: NSUIntegerPtr { variable size array of NSUInteger }; range: NSRange); message 'setBuffers:offsets:withRange:';
    procedure setFunction_atIndex (function_: id; index: NSUInteger); message 'setFunction:atIndex:';
    procedure setFunctions_withRange (functions: idPtr { variable size array of id }; range: NSRange); message 'setFunctions:withRange:';
    procedure setOpaqueTriangleIntersectionFunctionWithSignature_atIndex (signature: MTLIntersectionFunctionSignature; index: NSUInteger); message 'setOpaqueTriangleIntersectionFunctionWithSignature:atIndex:';
    procedure setOpaqueTriangleIntersectionFunctionWithSignature_withRange (signature: MTLIntersectionFunctionSignature; range: NSRange); message 'setOpaqueTriangleIntersectionFunctionWithSignature:withRange:';
    procedure setVisibleFunctionTable_atBufferIndex (functionTable: id; bufferIndex: NSUInteger); message 'setVisibleFunctionTable:atBufferIndex:';
    procedure setVisibleFunctionTables_withBufferRange (functionTables: idPtr { variable size array of id }; bufferRange: NSRange); message 'setVisibleFunctionTables:withBufferRange:';
  end;
{$endif}

