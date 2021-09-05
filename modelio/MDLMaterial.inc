{ Parsed from ModelIO.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ModelIO.framework/Headers/MDLMaterial.h }

{$ifdef CALLBACKS}
type
  MDLMaterialInitWithInputsCallback = reference to procedure (param1: MDLMaterialPropertyNode); cblock; cdecl;
  MDLMaterialEvaluationFunctionCallback = reference to procedure (param1: MDLMaterialPropertyNode); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  MDLTextureFilterPtr = ^MDLTextureFilter;
  MDLTextureSamplerPtr = ^MDLTextureSampler;
  MDLMaterialPropertyPtr = ^MDLMaterialProperty;
  MDLMaterialPropertyConnectionPtr = ^MDLMaterialPropertyConnection;
  MDLMaterialPropertyNodePtr = ^MDLMaterialPropertyNode;
  MDLMaterialPropertyGraphPtr = ^MDLMaterialPropertyGraph;
  MDLScatteringFunctionPtr = ^MDLScatteringFunction;
  MDLPhysicallyPlausibleScatteringFunctionPtr = ^MDLPhysicallyPlausibleScatteringFunction;
  MDLMaterialPtr = ^MDLMaterial;
{$endif}

{$ifdef TYPES}
type
  MDLMaterialSemantic = NSUInteger;
  MDLMaterialSemanticPtr = ^MDLMaterialSemantic;

const
  MDLMaterialSemanticBaseColor = 0;
  MDLMaterialSemanticSubsurface = 1;
  MDLMaterialSemanticMetallic = 2;
  MDLMaterialSemanticSpecular = 3;
  MDLMaterialSemanticSpecularExponent = 4;
  MDLMaterialSemanticSpecularTint = 5;
  MDLMaterialSemanticRoughness = 6;
  MDLMaterialSemanticAnisotropic = 7;
  MDLMaterialSemanticAnisotropicRotation = 8;
  MDLMaterialSemanticSheen = 9;
  MDLMaterialSemanticSheenTint = 10;
  MDLMaterialSemanticClearcoat = 11;
  MDLMaterialSemanticClearcoatGloss = 12;
  MDLMaterialSemanticEmission = 13;
  MDLMaterialSemanticBump = 14;
  MDLMaterialSemanticOpacity = 15;
  MDLMaterialSemanticInterfaceIndexOfRefraction = 16;
  MDLMaterialSemanticMaterialIndexOfRefraction = 17;
  MDLMaterialSemanticObjectSpaceNormal = 18;
  MDLMaterialSemanticTangentSpaceNormal = 19;
  MDLMaterialSemanticDisplacement = 20;
  MDLMaterialSemanticDisplacementScale = 21;
  MDLMaterialSemanticAmbientOcclusion = 22;
  MDLMaterialSemanticAmbientOcclusionScale = 23;
  MDLMaterialSemanticNone = $8000;
  MDLMaterialSemanticUserDefined = $8001;

type
  MDLMaterialPropertyType = NSUInteger;
  MDLMaterialPropertyTypePtr = ^MDLMaterialPropertyType;

const
  MDLMaterialPropertyTypeNone = 0;
  MDLMaterialPropertyTypeString = 1;
  MDLMaterialPropertyTypeURL = 2;
  MDLMaterialPropertyTypeTexture = 3;
  MDLMaterialPropertyTypeColor = 4;
  MDLMaterialPropertyTypeFloat = 5;
  MDLMaterialPropertyTypeFloat2 = 6;
  MDLMaterialPropertyTypeFloat3 = 7;
  MDLMaterialPropertyTypeFloat4 = 8;
  MDLMaterialPropertyTypeMatrix44 = 9;

type
  MDLMaterialTextureWrapMode = NSUInteger;
  MDLMaterialTextureWrapModePtr = ^MDLMaterialTextureWrapMode;

const
  MDLMaterialTextureWrapModeClamp = 0;
  MDLMaterialTextureWrapModeRepeat = 1;
  MDLMaterialTextureWrapModeMirror = 2;

type
  MDLMaterialTextureFilterMode = NSUInteger;
  MDLMaterialTextureFilterModePtr = ^MDLMaterialTextureFilterMode;

const
  MDLMaterialTextureFilterModeNearest = 0;
  MDLMaterialTextureFilterModeLinear = 1;

type
  MDLMaterialMipMapFilterMode = NSUInteger;
  MDLMaterialMipMapFilterModePtr = ^MDLMaterialMipMapFilterMode;

const
  MDLMaterialMipMapFilterModeNearest = 0;
  MDLMaterialMipMapFilterModeLinear = 1;
{$endif}

{$ifdef CLASSES}

type
  MDLTextureFilter = objcclass external (NSObject)
  public
    procedure setSWrapMode(newValue: MDLMaterialTextureWrapMode); message 'setSWrapMode:';
    function sWrapMode: MDLMaterialTextureWrapMode; message 'sWrapMode';
    procedure setTWrapMode(newValue: MDLMaterialTextureWrapMode); message 'setTWrapMode:';
    function tWrapMode: MDLMaterialTextureWrapMode; message 'tWrapMode';
    procedure setRWrapMode(newValue: MDLMaterialTextureWrapMode); message 'setRWrapMode:';
    function rWrapMode: MDLMaterialTextureWrapMode; message 'rWrapMode';
    procedure setMinFilter(newValue: MDLMaterialTextureFilterMode); message 'setMinFilter:';
    function minFilter: MDLMaterialTextureFilterMode; message 'minFilter';
    procedure setMagFilter(newValue: MDLMaterialTextureFilterMode); message 'setMagFilter:';
    function magFilter: MDLMaterialTextureFilterMode; message 'magFilter';
    procedure setMipFilter(newValue: MDLMaterialMipMapFilterMode); message 'setMipFilter:';
    function mipFilter: MDLMaterialMipMapFilterMode; message 'mipFilter';
  end;

type
  MDLTextureSampler = objcclass external (NSObject)
  public
    procedure setTexture(newValue: MDLTexture); message 'setTexture:';
    function texture: MDLTexture; message 'texture';
    procedure setHardwareFilter(newValue: MDLTextureFilter); message 'setHardwareFilter:';
    function hardwareFilter: MDLTextureFilter; message 'hardwareFilter';
    procedure setTransform(newValue: MDLTransform); message 'setTransform:';
    function transform: MDLTransform; message 'transform';
  end;

type
  MDLMaterialProperty = objcclass external (NSObject, MDLNamedProtocol, NSCopyingProtocol)
  public
    function init: id; message 'init';
    function initWithName_semantic (name: NSString; semantic: MDLMaterialSemantic): id; message 'initWithName:semantic:'; { NS_DESIGNATED_INITIALIZER }
    function initWithName_semantic_float (name: NSString; semantic: MDLMaterialSemantic; value: single): id; message 'initWithName:semantic:float:';
    function initWithName_semantic_float2 (name: NSString; semantic: MDLMaterialSemantic; value: vector_float2): id; message 'initWithName:semantic:float2:';
    function initWithName_semantic_float3 (name: NSString; semantic: MDLMaterialSemantic; value: vector_float3): id; message 'initWithName:semantic:float3:';
    function initWithName_semantic_float4 (name: NSString; semantic: MDLMaterialSemantic; value: vector_float4): id; message 'initWithName:semantic:float4:';
    function initWithName_semantic_matrix4x4 (name: NSString; semantic: MDLMaterialSemantic; value: matrix_float4x4): id; message 'initWithName:semantic:matrix4x4:';
    function initWithName_semantic_URL (name: NSString; semantic: MDLMaterialSemantic; URL: NSURL): id; message 'initWithName:semantic:URL:';
    function initWithName_semantic_string (name: NSString; semantic: MDLMaterialSemantic; string_: NSString): id; message 'initWithName:semantic:string:';
    function initWithName_semantic_textureSampler (name: NSString; semantic: MDLMaterialSemantic; textureSampler: MDLTextureSampler): id; message 'initWithName:semantic:textureSampler:';
    function initWithName_semantic_color (name: NSString; semantic: MDLMaterialSemantic; color: CGColorRef): id; message 'initWithName:semantic:color:';
    procedure setProperties (property_: MDLMaterialProperty); message 'setProperties:';
    procedure setSemantic(newValue: MDLMaterialSemantic); message 'setSemantic:';
    function semantic: MDLMaterialSemantic; message 'semantic';
    procedure setType(newValue: MDLMaterialPropertyType); message 'setType:';
    function type_: MDLMaterialPropertyType; message 'type';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setStringValue(newValue: NSString); message 'setStringValue:';
    function stringValue: NSString; message 'stringValue';
    procedure setURLValue(newValue: NSURL); message 'setURLValue:';
    function URLValue: NSURL; message 'URLValue';
    procedure setTextureSamplerValue(newValue: MDLTextureSampler); message 'setTextureSamplerValue:';
    function textureSamplerValue: MDLTextureSampler; message 'textureSamplerValue';
    procedure setColor(newValue: CGColorRef); message 'setColor:';
    function color: CGColorRef; message 'color';
    procedure setFloatValue(newValue: single); message 'setFloatValue:';
    function floatValue: single; message 'floatValue';
    procedure setFloat2Value(newValue: vector_float2); message 'setFloat2Value:';
    function float2Value: vector_float2; message 'float2Value';
    procedure setFloat3Value(newValue: vector_float3); message 'setFloat3Value:';
    function float3Value: vector_float3; message 'float3Value';
    procedure setFloat4Value(newValue: vector_float4); message 'setFloat4Value:';
    function float4Value: vector_float4; message 'float4Value';
    procedure setMatrix4x4(newValue: matrix_float4x4); message 'setMatrix4x4:';
    function matrix4x4: matrix_float4x4; message 'matrix4x4';
    procedure setLuminance(newValue: single); message 'setLuminance:';
    function luminance: single; message 'luminance';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function name_: NSString; message 'name';
    procedure setName_ (newValue: NSString); message 'setName:';
  end;

type
  MDLMaterialPropertyConnection = objcclass external (NSObject, MDLNamedProtocol)
  public
    function init: id; message 'init';
    function initWithOutput_input (output: MDLMaterialProperty; input: MDLMaterialProperty): id; message 'initWithOutput:input:';
    function output: MDLMaterialProperty; message 'output';
    function input: MDLMaterialProperty; message 'input';

    { Adopted protocols }
    function name: NSString; message 'name';
    procedure setName (newValue: NSString); message 'setName:';
  end;

type
  MDLMaterialPropertyNode = objcclass external (NSObject, MDLNamedProtocol)
  public
    function init: id; message 'init';
    function initWithInputs_outputs_evaluationFunction (inputs: NSArray; outputs: NSArray; function_: MDLMaterialInitWithInputsCallback): id; message 'initWithInputs:outputs:evaluationFunction:';
    procedure setEvaluationFunction(newValue: MDLMaterialEvaluationFunctionCallback); message 'setEvaluationFunction:';
    function evaluationFunction: MDLMaterialEvaluationFunctionCallback; message 'evaluationFunction';
    function inputs: NSArray; message 'inputs';
    function outputs: NSArray; message 'outputs';

    { Adopted protocols }
    function name: NSString; message 'name';
    procedure setName (newValue: NSString); message 'setName:';
  end;

type
  MDLMaterialPropertyGraph = objcclass external (MDLMaterialPropertyNode)
  public
    function init: id; message 'init';
    function initWithNodes_connections (nodes: NSArray; connections: NSArray): id; message 'initWithNodes:connections:';
    procedure evaluate; message 'evaluate';
    function nodes: NSArray; message 'nodes';
    function connections: NSArray; message 'connections';
  end;

type
  MDLScatteringFunction = objcclass external (NSObject, MDLNamedProtocol)
  public
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    function baseColor: MDLMaterialProperty; message 'baseColor';
    function emission: MDLMaterialProperty; message 'emission';
    function specular: MDLMaterialProperty; message 'specular';
    function materialIndexOfRefraction: MDLMaterialProperty; message 'materialIndexOfRefraction';
    function interfaceIndexOfRefraction: MDLMaterialProperty; message 'interfaceIndexOfRefraction';
    function normal: MDLMaterialProperty; message 'normal';
    function ambientOcclusion: MDLMaterialProperty; message 'ambientOcclusion';
    function ambientOcclusionScale: MDLMaterialProperty; message 'ambientOcclusionScale';

    { Adopted protocols }
    function name_: NSString; message 'name';
    procedure setName_ (newValue: NSString); message 'setName:';
  end;

type
  MDLPhysicallyPlausibleScatteringFunction = objcclass external (MDLScatteringFunction)
  public
    function version: NSInteger; message 'version';
    function subsurface: MDLMaterialProperty; message 'subsurface';
    function metallic: MDLMaterialProperty; message 'metallic';
    function specularAmount: MDLMaterialProperty; message 'specularAmount';
    function specularTint: MDLMaterialProperty; message 'specularTint';
    function roughness: MDLMaterialProperty; message 'roughness';
    function anisotropic: MDLMaterialProperty; message 'anisotropic';
    function anisotropicRotation: MDLMaterialProperty; message 'anisotropicRotation';
    function sheen: MDLMaterialProperty; message 'sheen';
    function sheenTint: MDLMaterialProperty; message 'sheenTint';
    function clearcoat: MDLMaterialProperty; message 'clearcoat';
    function clearcoatGloss: MDLMaterialProperty; message 'clearcoatGloss';
  end;
{$endif}

{$ifdef TYPES}
type
  MDLMaterialFace = NSUInteger;
  MDLMaterialFacePtr = ^MDLMaterialFace;

const
  MDLMaterialFaceFront = 0;
  MDLMaterialFaceBack = 1;
  MDLMaterialFaceDoubleSided = 2;
{$endif}

{$ifdef CLASSES}

type
  MDLMaterial = objcclass external (NSObject, MDLNamedProtocol, NSFastEnumerationProtocol)
  public
    function initWithName_scatteringFunction (name: NSString; scatteringFunction: MDLScatteringFunction): id; message 'initWithName:scatteringFunction:';
    procedure setProperty (property_: MDLMaterialProperty); message 'setProperty:';
    procedure removeProperty (property_: MDLMaterialProperty); message 'removeProperty:';
    function propertyNamed (name: NSString): MDLMaterialProperty; message 'propertyNamed:';
    function propertyWithSemantic (semantic: MDLMaterialSemantic): MDLMaterialProperty; message 'propertyWithSemantic:';
    function propertiesWithSemantic (semantic: MDLMaterialSemantic): NSArray; message 'propertiesWithSemantic:'; { available in macos , ios , tvos  }
    procedure removeAllProperties; message 'removeAllProperties';
    procedure resolveTexturesWithResolver (resolver: MDLAssetResolverProtocol); message 'resolveTexturesWithResolver:'; { available in macos , ios , tvos  }
    procedure loadTexturesUsingResolver (resolver: MDLAssetResolverProtocol); message 'loadTexturesUsingResolver:'; { available in macos , ios , tvos  }
    function scatteringFunction: MDLScatteringFunction; message 'scatteringFunction';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setBaseMaterial(newValue: MDLMaterial); message 'setBaseMaterial:';
    function baseMaterial: MDLMaterial; message 'baseMaterial';
    function objectAtIndexedSubscript (idx: NSUInteger): MDLMaterialProperty; message 'objectAtIndexedSubscript:';
    function objectForKeyedSubscript (name_: NSString): MDLMaterialProperty; message 'objectForKeyedSubscript:';
    function count: NSUInteger; message 'count';
    procedure setMaterialFace(newValue: MDLMaterialFace); message 'setMaterialFace:';
    function materialFace: MDLMaterialFace; message 'materialFace';

    { Adopted protocols }
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
    function name_: NSString; message 'name';
    procedure setName_ (newValue: NSString); message 'setName:';
  end;
{$endif}

