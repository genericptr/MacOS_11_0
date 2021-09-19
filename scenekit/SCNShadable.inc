{ Parsed from SceneKit.framework SCNShadable.h }

{$ifdef TYPES}
type
  SCNProgramPtr = ^SCNProgram;
  SCNBufferStreamProtocolPtr = ^SCNBufferStreamProtocol;
  SCNShadableProtocolPtr = ^SCNShadableProtocol;
  SCNProgramDelegateProtocolPtr = ^SCNProgramDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  SCNShaderModifierEntryPoint = NSString;
  SCNShaderModifierEntryPointPtr = ^SCNShaderModifierEntryPoint;
  SCNBufferFrequency = NSInteger;
  SCNBufferFrequencyPtr = ^SCNBufferFrequency;

const
  SCNBufferFrequencyPerFrame = 0;
  SCNBufferFrequencyPerNode = 1;
  SCNBufferFrequencyPerShadable = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNBufferStreamProtocol = objcprotocol external name 'SCNBufferStream' (NSObjectProtocol)
    procedure writeBytes_length (bytes: pointer; length: NSUInteger); message 'writeBytes:length:';
  end;
{$endif}

{$ifdef TYPES}
type
  SCNBufferBindingBlock = reference to procedure (buffer: id; node: SCNNode; shadable: id; renderer: SCNRenderer); cblock; cdecl;
  SCNBindingBlock = reference to procedure (programID: cuint; location: cuint; renderedNode: SCNNode; renderer: SCNRenderer); cblock; cdecl;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNShadableProtocol = objcprotocol external name 'SCNShadable' (NSObjectProtocol)
  optional
    procedure setProgram(newValue: SCNProgram); message 'setProgram:'; { unavailable in watchos }
    function program_: SCNProgram; message 'program'; { unavailable in watchos } { available in macos 10.9 }
    procedure handleBindingOfSymbol_usingBlock (symbol: NSString; block: SCNBindingBlock); message 'handleBindingOfSymbol:usingBlock:'; { unavailable in watchos } { available in macos 10.9 }
    procedure handleUnbindingOfSymbol_usingBlock (symbol: NSString; block: SCNBindingBlock); message 'handleUnbindingOfSymbol:usingBlock:'; { unavailable in watchos }
    procedure setShaderModifiers(newValue: NSDictionary); message 'setShaderModifiers:'; { available in macos 10.9 }
    function shaderModifiers: NSDictionary; message 'shaderModifiers'; { available in macos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNProgramMappingChannelKey: NSString { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SCNProgram = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function program_: id; message 'program';
    procedure setVertexShader(newValue: NSString); message 'setVertexShader:';
    function vertexShader: NSString; message 'vertexShader';
    procedure setFragmentShader(newValue: NSString); message 'setFragmentShader:';
    function fragmentShader: NSString; message 'fragmentShader';
    procedure setTessellationControlShader(newValue: NSString); message 'setTessellationControlShader:'; { unavailable in ios, tvos, watchos, macCatalyst }
    function tessellationControlShader: NSString; message 'tessellationControlShader'; { unavailable in ios, tvos, watchos, macCatalyst } { available in macos 10.10 }
    procedure setTessellationEvaluationShader(newValue: NSString); message 'setTessellationEvaluationShader:'; { unavailable in ios, tvos, watchos, macCatalyst } { available in macos 10.10 }
    function tessellationEvaluationShader: NSString; message 'tessellationEvaluationShader'; { unavailable in ios, tvos, watchos, macCatalyst } { available in macos 10.10 }
    procedure setGeometryShader(newValue: NSString); message 'setGeometryShader:'; { unavailable in ios, tvos, watchos, macCatalyst } { available in macos 10.10 }
    function geometryShader: NSString; message 'geometryShader'; { unavailable in ios, tvos, watchos, macCatalyst } { available in macos 10.10 }
    procedure setVertexFunctionName(newValue: NSString); message 'setVertexFunctionName:'; { available in macos 10.10 }
    function vertexFunctionName: NSString; message 'vertexFunctionName'; { available in macos 10.11, ios 9.0 }
    procedure setFragmentFunctionName(newValue: NSString); message 'setFragmentFunctionName:'; { available in macos 10.11, ios 9.0 }
    function fragmentFunctionName: NSString; message 'fragmentFunctionName'; { available in macos 10.11, ios 9.0 }
    procedure handleBindingOfBufferNamed_frequency_usingBlock (name: NSString; frequency: SCNBufferFrequency; block: SCNBufferBindingBlock); message 'handleBindingOfBufferNamed:frequency:usingBlock:'; { available in macos 10.11, ios 9.0 }
    procedure setOpaque(newValue: objcbool); message 'setOpaque:'; { available in macos 10.11, ios 9.0 }
    function isOpaque: objcbool; message 'isOpaque'; { available in macos 10.10 }
    procedure setSemantic_forSymbol_options (semantic: NSString; symbol: NSString; options: NSDictionary); message 'setSemantic:forSymbol:options:';
    function semanticForSymbol (symbol: NSString): NSString; message 'semanticForSymbol:';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setLibrary(newValue: id); message 'setLibrary:'; { available in macos , ios  }
    function library_: id; message 'library'; { available in macos 10.11, ios 9.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNProgramDelegateProtocol = objcprotocol external name 'SCNProgramDelegate' (NSObjectProtocol)
  optional
    function program_bindValueForSymbol_atLocation_programID_renderer (program_: SCNProgram; symbol: NSString; location: cuint; programID: cuint; renderer: SCNRenderer): objcbool; message 'program:bindValueForSymbol:atLocation:programID:renderer:'; { unavailable in ios, tvos, watchos, macCatalyst }
    procedure program_unbindValueForSymbol_atLocation_programID_renderer (program_: SCNProgram; symbol: NSString; location: cuint; programID: cuint; renderer: SCNRenderer); message 'program:unbindValueForSymbol:atLocation:programID:renderer:'; { unavailable in ios, tvos, watchos, macCatalyst }
    procedure program_handleError (program_: SCNProgram; error: NSError); message 'program:handleError:';
    function programIsOpaque (program_: SCNProgram): objcbool; message 'programIsOpaque:'; { unavailable in ios, tvos, watchos, macCatalyst }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNShaderModifierEntryPointGeometry: SCNShaderModifierEntryPoint { available in macos  }; cvar; external;
  SCNShaderModifierEntryPointSurface: SCNShaderModifierEntryPoint { available in macos 10.9 }; cvar; external;
  SCNShaderModifierEntryPointLightingModel: SCNShaderModifierEntryPoint { available in macos 10.9 }; cvar; external;
  SCNShaderModifierEntryPointFragment: SCNShaderModifierEntryPoint { available in macos 10.9 }; cvar; external;
{$endif}

