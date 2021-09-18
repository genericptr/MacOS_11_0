{ Parsed from Metal.framework MTLBinaryArchive.h }

{$ifdef TYPES}
type
  MTLBinaryArchiveDescriptorPtr = ^MTLBinaryArchiveDescriptor;
  MTLBinaryArchiveProtocolPtr = ^MTLBinaryArchiveProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLBinaryArchiveDomain: NSErrorDomain { available in macos , ios  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLBinaryArchiveError = NSUInteger;
  MTLBinaryArchiveErrorPtr = ^MTLBinaryArchiveError;

const
  MTLBinaryArchiveErrorNone = 0;
  MTLBinaryArchiveErrorInvalidFile = 1;
  MTLBinaryArchiveErrorUnexpectedElement = 2;
  MTLBinaryArchiveErrorCompilationFailure = 3;
{$endif}

{$ifdef CLASSES}

type
  MTLBinaryArchiveDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setUrl(newValue: NSURL); message 'setUrl:';
    function url: NSURL; message 'url';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLBinaryArchiveProtocol = objcprotocol external name 'MTLBinaryArchive' (NSObjectProtocol)
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function device: id; message 'device';
    function addComputePipelineFunctionsWithDescriptor_error (descriptor: MTLComputePipelineDescriptor; error: NSErrorPtr): objcbool; message 'addComputePipelineFunctionsWithDescriptor:error:';
    function addRenderPipelineFunctionsWithDescriptor_error (descriptor: MTLRenderPipelineDescriptor; error: NSErrorPtr): objcbool; message 'addRenderPipelineFunctionsWithDescriptor:error:';
    function addTileRenderPipelineFunctionsWithDescriptor_error (descriptor: MTLTileRenderPipelineDescriptor; error: NSErrorPtr): objcbool; message 'addTileRenderPipelineFunctionsWithDescriptor:error:';
    function serializeToURL_error (url: NSURL; error: NSErrorPtr): objcbool; message 'serializeToURL:error:';
  end;
{$endif}

