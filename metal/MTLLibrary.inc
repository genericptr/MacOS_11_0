{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLLibrary.h }

{$ifdef CALLBACKS}
type
  MTLLibraryNewFunctionWithNameCallback = reference to procedure (function_: id; error: NSError); cblock; cdecl;
  MTLLibraryNewFunctionWithDescriptorCallback = reference to procedure (function_: id; error: NSError); cblock; cdecl;
  MTLLibraryNewIntersectionFunctionWithDescriptorCallback = reference to procedure (function_: id; error: NSError); cblock; cdecl;
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
    function attributeType: MTLDataType; message 'attributeType'; { available in macos , ios  }
    function isActive: objcbool; message 'isActive';
    function isPatchData: objcbool; message 'isPatchData'; { available in macos , ios  }
    function isPatchControlPointData: objcbool; message 'isPatchControlPointData'; { available in macos , ios  }
  end;

type
  MTLAttribute = objcclass external (NSObject)
  public
    function name: NSString; message 'name';
    function attributeIndex: NSUInteger; message 'attributeIndex';
    function attributeType: MTLDataType; message 'attributeType';
    function isActive: objcbool; message 'isActive';
    function isPatchData: objcbool; message 'isPatchData'; { available in macos , ios  }
    function isPatchControlPointData: objcbool; message 'isPatchControlPointData'; { available in macos , ios  }
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
  MTLFunctionTypeVisible = 5 { available in macos , ios  };
  MTLFunctionTypeIntersection = 6 { available in macos , ios  };
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
    procedure setLabel(newValue: NSString); message 'setLabel:'; { available in macos , ios  }
    function label_: NSString; message 'label'; { available in macos , ios  }
    function device: id; message 'device';
    function functionType: MTLFunctionType; message 'functionType';
    function patchType: MTLPatchType; message 'patchType'; { available in macos , ios  }
    function patchControlPointCount: NSInteger; message 'patchControlPointCount'; { available in macos , ios  }
    function vertexAttributes: NSArray; message 'vertexAttributes';
    function stageInputAttributes: NSArray; message 'stageInputAttributes'; { available in macos , ios  }
    function name: NSString; message 'name';
    function functionConstantsDictionary: NSDictionary; message 'functionConstantsDictionary'; { available in macos , ios  }
    function newArgumentEncoderWithBufferIndex (bufferIndex: NSUInteger): id; message 'newArgumentEncoderWithBufferIndex:'; { available in macos , ios  }
    function newArgumentEncoderWithBufferIndex_reflection (bufferIndex: NSUInteger; reflection: MTLAutoreleasedArgumentPtr): id; message 'newArgumentEncoderWithBufferIndex:reflection:'; { available in macos , ios  }
    function options: MTLFunctionOptions; message 'options'; { available in macos , ios  }
  end;
{$endif}

{$ifdef TYPES}
type
  MTLLanguageVersion = NSUInteger;
  MTLLanguageVersionPtr = ^MTLLanguageVersion;

const
  MTLLanguageVersion1_0 = 1 shl 16 { unavailable in macos, macCatalyst };
  MTLLanguageVersion1_1 = 1 shl 16 { available in macos , ios  };
  MTLLanguageVersion1_2 = 1 shl 16 { available in macos , ios  };
  MTLLanguageVersion2_0 = 2 shl 16 { available in macos , ios  };
  MTLLanguageVersion2_1 = 2 shl 16 { available in macos , ios  };
  MTLLanguageVersion2_2 = 2 shl 16 { available in macos , ios  };
  MTLLanguageVersion2_3 = 2 shl 16 { available in macos , ios  };

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
    procedure setLanguageVersion(newValue: MTLLanguageVersion); message 'setLanguageVersion:'; { available in macos , ios  }
    function languageVersion: MTLLanguageVersion; message 'languageVersion'; { available in macos , ios  }
    procedure setLibraryType(newValue: MTLLibraryType); message 'setLibraryType:'; { available in macos , ios  }
    function libraryType: MTLLibraryType; message 'libraryType'; { available in macos , ios  }
    procedure setInstallName(newValue: NSString); message 'setInstallName:'; { available in macos , ios  }
    function installName: NSString; message 'installName'; { available in macos , ios  }
    procedure setLibraries(newValue: NSArray); message 'setLibraries:'; { available in macos , ios  }
    function libraries: NSArray; message 'libraries'; { available in macos , ios  }
    procedure setPreserveInvariance(newValue: objcbool); message 'setPreserveInvariance:'; { available in macos , macCatalyst , ios  }
    function preserveInvariance: objcbool; message 'preserveInvariance'; { available in macos , macCatalyst , ios  }

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
  MTLLibraryErrorFunctionNotFound = 5 { available in macos , ios  };
  MTLLibraryErrorFileNotFound = 6 { available in macos , ios  };
{$endif}

{$ifdef PROTOCOLS}

type
  MTLLibraryProtocol = objcprotocol external name 'MTLLibrary' (NSObjectProtocol)
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function device: id; message 'device';
    function newFunctionWithName (functionName: NSString): id; message 'newFunctionWithName:';
    function newFunctionWithName_constantValues_error (name: NSString; constantValues: MTLFunctionConstantValues; error: NSErrorPtr): id; message 'newFunctionWithName:constantValues:error:'; { available in macos , ios  }
    procedure newFunctionWithName_constantValues_completionHandler (name: NSString; constantValues: MTLFunctionConstantValues; completionHandler: MTLLibraryNewFunctionWithNameCallback); message 'newFunctionWithName:constantValues:completionHandler:'; { available in macos , ios  }
    procedure newFunctionWithDescriptor_completionHandler (descriptor: MTLFunctionDescriptor; completionHandler: MTLLibraryNewFunctionWithDescriptorCallback); message 'newFunctionWithDescriptor:completionHandler:'; { available in macos , ios  }
    function newFunctionWithDescriptor_error (descriptor: MTLFunctionDescriptor; error: NSErrorPtr): id; message 'newFunctionWithDescriptor:error:'; { available in macos , ios  }
    procedure newIntersectionFunctionWithDescriptor_completionHandler (descriptor: MTLIntersectionFunctionDescriptor; completionHandler: MTLLibraryNewIntersectionFunctionWithDescriptorCallback); message 'newIntersectionFunctionWithDescriptor:completionHandler:'; { available in macos , ios  }
    function newIntersectionFunctionWithDescriptor_error (descriptor: MTLIntersectionFunctionDescriptor; error: NSErrorPtr): id; message 'newIntersectionFunctionWithDescriptor:error:'; { available in macos , ios  }
    function functionNames: NSArray; message 'functionNames';
    function type_: MTLLibraryType; message 'type'; { available in macos , ios  }
    function installName: NSString; message 'installName'; { available in macos , ios  }
  end;
{$endif}

