{ Parsed from Metal.framework MTLLibrary.h }

{$ifdef CALLBACKS}
type
  MTLLibraryNewFunctionWithNameCallback = reference to procedure (function_: MTLFunctionProtocol; error: NSError); cblock; cdecl;
  MTLLibraryNewFunctionWithDescriptorCallback = reference to procedure (function_: MTLFunctionProtocol; error: NSError); cblock; cdecl;
  MTLLibraryNewIntersectionFunctionWithDescriptorCallback = reference to procedure (function_: MTLFunctionProtocol; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  MTLVertexAttributePtr = ^MTLVertexAttribute;
  MTLAttributePtr = ^MTLAttribute;
  MTLFunctionConstantPtr = ^MTLFunctionConstant;
  MTLCompileOptionsPtr = ^MTLCompileOptions;
  MTLFunctionProtocolPtr = ^MTLFunctionProtocol;
  MTLLibraryProtocolPtr = ^MTLLibraryProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLAutoreleasedArgument = MTLArgument;
  MTLAutoreleasedArgumentPtr = ^MTLAutoreleasedArgument;
  MTLPatchType = NSUInteger;
  MTLPatchTypePtr = ^MTLPatchType;

const
  MTLPatchTypeNone = 0;
  MTLPatchTypeTriangle = 1;
  MTLPatchTypeQuad = 2;
{$endif}

{$ifdef CLASSES}

type
  MTLVertexAttribute = objcclass external (NSObject)
  public
    function name: NSString; message 'name';
    function attributeIndex: NSUInteger; message 'attributeIndex';
    function attributeType: MTLDataType; message 'attributeType'; { available in macos 10.11, ios 8.3 }
    function isActive: objcbool; message 'isActive';
    function isPatchData: objcbool; message 'isPatchData'; { available in macos 10.12, ios 10.0 }
    function isPatchControlPointData: objcbool; message 'isPatchControlPointData'; { available in macos 10.12, ios 10.0 }
  end;

type
  MTLAttribute = objcclass external (NSObject)
  public
    function name: NSString; message 'name';
    function attributeIndex: NSUInteger; message 'attributeIndex';
    function attributeType: MTLDataType; message 'attributeType';
    function isActive: objcbool; message 'isActive';
    function isPatchData: objcbool; message 'isPatchData'; { available in macos 10.12, ios 10.0 }
    function isPatchControlPointData: objcbool; message 'isPatchControlPointData'; { available in macos 10.12, ios 10.0 }
  end;
{$endif}

{$ifdef TYPES}
type
  MTLFunctionType = NSUInteger;
  MTLFunctionTypePtr = ^MTLFunctionType;

const
  MTLFunctionTypeVertex = 1;
  MTLFunctionTypeFragment = 2;
  MTLFunctionTypeKernel = 3;
  MTLFunctionTypeVisible = 5 { available in macos 11.0, ios 14.0 };
  MTLFunctionTypeIntersection = 6 { available in macos 11.0, ios 14.0 };
{$endif}

{$ifdef CLASSES}

type
  MTLFunctionConstant = objcclass external (NSObject)
  public
    function name: NSString; message 'name';
    function type_: MTLDataType; message 'type';
    function index: NSUInteger; message 'index';
    function required: objcbool; message 'required';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLFunctionProtocol = objcprotocol external name 'MTLFunction' (NSObjectProtocol)
    procedure setLabel(newValue: NSString); message 'setLabel:'; { available in macos 10.12, ios 10.0 }
    function label_: NSString; message 'label'; { available in macos 10.12, ios 10.0 }
    function device: MTLDeviceProtocol; message 'device';
    function functionType: MTLFunctionType; message 'functionType';
    function patchType: MTLPatchType; message 'patchType'; { available in macos 10.12, ios 10.0 }
    function patchControlPointCount: NSInteger; message 'patchControlPointCount'; { available in macos 10.12, ios 10.0 }
    function vertexAttributes: NSArray; message 'vertexAttributes';
    function stageInputAttributes: NSArray; message 'stageInputAttributes'; { available in macos 10.12, ios 10.0 }
    function name: NSString; message 'name';
    function functionConstantsDictionary: NSDictionary; message 'functionConstantsDictionary'; { available in macos 10.12, ios 10.0 }
    function newArgumentEncoderWithBufferIndex (bufferIndex: NSUInteger): id; message 'newArgumentEncoderWithBufferIndex:'; { available in macos 10.13, ios 11.0 }
    function newArgumentEncoderWithBufferIndex_reflection (bufferIndex: NSUInteger; reflection: MTLAutoreleasedArgumentPtr): id; message 'newArgumentEncoderWithBufferIndex:reflection:'; { available in macos 10.13, ios 11.0 }
    function options: MTLFunctionOptions; message 'options'; { available in macos 11.0, ios 14.0 }
  end;
{$endif}

{$ifdef TYPES}
type
  MTLLanguageVersion = NSUInteger;
  MTLLanguageVersionPtr = ^MTLLanguageVersion;

const
  MTLLanguageVersion1_0 = 1 shl 16 { unavailable in macos, macCatalyst } { available in ios 9.0 };
  MTLLanguageVersion1_1 = 1 shl 16 { available in macos 10.11, ios 9.0 };
  MTLLanguageVersion1_2 = 1 shl 16 { available in macos 10.12, ios 10.0 };
  MTLLanguageVersion2_0 = 2 shl 16 { available in macos 10.13, ios 11.0 };
  MTLLanguageVersion2_1 = 2 shl 16 { available in macos 10.14, ios 12.0 };
  MTLLanguageVersion2_2 = 2 shl 16 { available in macos 10.15, ios 13.0 };
  MTLLanguageVersion2_3 = 2 shl 16 { available in macos 11.0, ios 14.0 };

type
  MTLLibraryType = NSInteger;
  MTLLibraryTypePtr = ^MTLLibraryType;

const
  MTLLibraryTypeExecutable = 0;
  MTLLibraryTypeDynamic = 1;
{$endif}

{$ifdef CLASSES}

type
  MTLCompileOptions = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setPreprocessorMacros(newValue: NSDictionary); message 'setPreprocessorMacros:';
    function preprocessorMacros: NSDictionary; message 'preprocessorMacros';
    procedure setFastMathEnabled(newValue: objcbool); message 'setFastMathEnabled:';
    function fastMathEnabled: objcbool; message 'fastMathEnabled';
    procedure setLanguageVersion(newValue: MTLLanguageVersion); message 'setLanguageVersion:'; { available in macos 10.11, ios 9.0 }
    function languageVersion: MTLLanguageVersion; message 'languageVersion'; { available in macos 10.11, ios 9.0 }
    procedure setLibraryType(newValue: MTLLibraryType); message 'setLibraryType:'; { available in macos 11.0, ios 14.0 }
    function libraryType: MTLLibraryType; message 'libraryType'; { available in macos 11.0, ios 14.0 }
    procedure setInstallName(newValue: NSString); message 'setInstallName:'; { available in macos 11.0, ios 14.0 }
    function installName: NSString; message 'installName'; { available in macos 11.0, ios 14.0 }
    procedure setLibraries(newValue: NSArray); message 'setLibraries:'; { available in macos 11.0, ios 14.0 }
    function libraries: NSArray; message 'libraries'; { available in macos 11.0, ios 14.0 }
    procedure setPreserveInvariance(newValue: objcbool); message 'setPreserveInvariance:'; { available in macos 11.0, macCatalyst 14.0, ios 13.0 }
    function preserveInvariance: objcbool; message 'preserveInvariance'; { available in macos 11.0, macCatalyst 14.0, ios 13.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLLibraryErrorDomain: NSErrorDomain; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLLibraryError = NSUInteger;
  MTLLibraryErrorPtr = ^MTLLibraryError;

const
  MTLLibraryErrorUnsupported = 1;
  MTLLibraryErrorInternal = 2;
  MTLLibraryErrorCompileFailure = 3;
  MTLLibraryErrorCompileWarning = 4;
  MTLLibraryErrorFunctionNotFound = 5 { available in macos 10.12, ios 10.0 };
  MTLLibraryErrorFileNotFound = 6 { available in macos 10.12, ios 10.0 };
{$endif}

{$ifdef PROTOCOLS}

type
  MTLLibraryProtocol = objcprotocol external name 'MTLLibrary' (NSObjectProtocol)
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function device: id; message 'device';
    function newFunctionWithName (functionName: NSString): id; message 'newFunctionWithName:';
    function newFunctionWithName_constantValues_error (name: NSString; constantValues: MTLFunctionConstantValues; error: NSErrorPtr): id; message 'newFunctionWithName:constantValues:error:'; { available in macos 10.12, ios 10.0 }
    procedure newFunctionWithName_constantValues_completionHandler (name: NSString; constantValues: MTLFunctionConstantValues; completionHandler: MTLLibraryNewFunctionWithNameCallback); message 'newFunctionWithName:constantValues:completionHandler:'; { available in macos 10.12, ios 10.0 }
    procedure newFunctionWithDescriptor_completionHandler (descriptor: MTLFunctionDescriptor; completionHandler: MTLLibraryNewFunctionWithDescriptorCallback); message 'newFunctionWithDescriptor:completionHandler:'; { available in macos 11.0, ios 14.0 }
    function newFunctionWithDescriptor_error (descriptor: MTLFunctionDescriptor; error: NSErrorPtr): id; message 'newFunctionWithDescriptor:error:'; { available in macos 11.0, ios 14.0 }
    procedure newIntersectionFunctionWithDescriptor_completionHandler (descriptor: MTLIntersectionFunctionDescriptor; completionHandler: MTLLibraryNewIntersectionFunctionWithDescriptorCallback); message 'newIntersectionFunctionWithDescriptor:completionHandler:'; { available in macos 11.0, ios 14.0 }
    function newIntersectionFunctionWithDescriptor_error (descriptor: MTLIntersectionFunctionDescriptor; error: NSErrorPtr): id; message 'newIntersectionFunctionWithDescriptor:error:'; { available in macos 11.0, ios 14.0 }
    function functionNames: NSArray; message 'functionNames';
    function type_: MTLLibraryType; message 'type'; { available in macos 11.0, ios 14.0 }
    function installName: NSString; message 'installName'; { available in macos 11.0, ios 14.0 }
  end;
{$endif}

