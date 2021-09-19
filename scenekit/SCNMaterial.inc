{ Parsed from SceneKit.framework SCNMaterial.h }

{$ifdef TYPES}
type
  SCNMaterialPtr = ^SCNMaterial;
{$endif}

{$ifdef TYPES}
type
  SCNLightingModel = NSString;
  SCNLightingModelPtr = ^SCNLightingModel;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNLightingModelPhong: SCNLightingModel; cvar; external;
  SCNLightingModelBlinn: SCNLightingModel; cvar; external;
  SCNLightingModelLambert: SCNLightingModel; cvar; external;
  SCNLightingModelConstant: SCNLightingModel; cvar; external;
  SCNLightingModelPhysicallyBased: SCNLightingModel { available in macos 10.12, ios 10.0, tvos 10.0 }; cvar; external;
  SCNLightingModelShadowOnly: SCNLightingModel { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCNFillMode = NSUInteger;
  SCNFillModePtr = ^SCNFillMode;

const
  SCNFillModeFill = 0;
  SCNFillModeLines = 1;

type
  SCNCullMode = NSInteger;
  SCNCullModePtr = ^SCNCullMode;

const
  SCNCullModeBack = 0;
  SCNCullModeFront = 1;

const
  SCNCullBack = SCNCullModeBack;
  SCNCullFront = SCNCullModeFront;

type
  SCNTransparencyMode = NSInteger;
  SCNTransparencyModePtr = ^SCNTransparencyMode;

const
  SCNTransparencyModeAOne = 0;
  SCNTransparencyModeRGBZero = 1;
  SCNTransparencyModeSingleLayer = 2 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  SCNTransparencyModeDualLayer = 3 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  SCNTransparencyModeDefault = SCNTransparencyModeAOne { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };

type
  SCNBlendMode = NSInteger;
  SCNBlendModePtr = ^SCNBlendMode;

const
  SCNBlendModeAlpha = 0;
  SCNBlendModeAdd = 1;
  SCNBlendModeSubtract = 2;
  SCNBlendModeMultiply = 3;
  SCNBlendModeScreen = 4;
  SCNBlendModeReplace = 5;
  SCNBlendModeMax = 6 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
{$endif}

{$ifdef CLASSES}

type
  SCNMaterial = objcclass external (NSObject, SCNAnimatableProtocol, SCNShadableProtocol, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function material: id; message 'material';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    function diffuse: SCNMaterialProperty; message 'diffuse';
    function ambient: SCNMaterialProperty; message 'ambient';
    function specular: SCNMaterialProperty; message 'specular';
    function emission: SCNMaterialProperty; message 'emission';
    function transparent: SCNMaterialProperty; message 'transparent';
    function reflective: SCNMaterialProperty; message 'reflective';
    function multiply: SCNMaterialProperty; message 'multiply';
    function normal: SCNMaterialProperty; message 'normal';
    function displacement: SCNMaterialProperty; message 'displacement'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function ambientOcclusion: SCNMaterialProperty; message 'ambientOcclusion'; { available in macos 10.11, ios 9.0 }
    function selfIllumination: SCNMaterialProperty; message 'selfIllumination'; { available in macos 10.11, ios 9.0 }
    function metalness: SCNMaterialProperty; message 'metalness'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function roughness: SCNMaterialProperty; message 'roughness'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function clearCoat: SCNMaterialProperty; message 'clearCoat'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function clearCoatRoughness: SCNMaterialProperty; message 'clearCoatRoughness'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function clearCoatNormal: SCNMaterialProperty; message 'clearCoatNormal'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setShininess(newValue: CGFloat); message 'setShininess:';
    function shininess: CGFloat; message 'shininess';
    procedure setTransparency(newValue: CGFloat); message 'setTransparency:';
    function transparency: CGFloat; message 'transparency';
    procedure setLightingModelName(newValue: SCNLightingModel); message 'setLightingModelName:';
    function lightingModelName: SCNLightingModel; message 'lightingModelName';
    procedure setLitPerPixel(newValue: objcbool); message 'setLitPerPixel:';
    function isLitPerPixel: objcbool; message 'isLitPerPixel';
    procedure setDoubleSided(newValue: objcbool); message 'setDoubleSided:';
    function isDoubleSided: objcbool; message 'isDoubleSided';
    procedure setFillMode(newValue: SCNFillMode); message 'setFillMode:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function fillMode: SCNFillMode; message 'fillMode'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setCullMode(newValue: SCNCullMode); message 'setCullMode:';
    function cullMode: SCNCullMode; message 'cullMode';
    procedure setTransparencyMode(newValue: SCNTransparencyMode); message 'setTransparencyMode:';
    function transparencyMode: SCNTransparencyMode; message 'transparencyMode';
    procedure setLocksAmbientWithDiffuse(newValue: objcbool); message 'setLocksAmbientWithDiffuse:';
    function locksAmbientWithDiffuse: objcbool; message 'locksAmbientWithDiffuse';
    procedure setWritesToDepthBuffer(newValue: objcbool); message 'setWritesToDepthBuffer:';
    function writesToDepthBuffer: objcbool; message 'writesToDepthBuffer';
    procedure setColorBufferWriteMask(newValue: SCNColorMask); message 'setColorBufferWriteMask:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function colorBufferWriteMask: SCNColorMask; message 'colorBufferWriteMask'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setReadsFromDepthBuffer(newValue: objcbool); message 'setReadsFromDepthBuffer:'; { available in macos 10.9 }
    function readsFromDepthBuffer: objcbool; message 'readsFromDepthBuffer'; { available in macos 10.9 }
    procedure setFresnelExponent(newValue: CGFloat); message 'setFresnelExponent:'; { available in macos 10.9 }
    function fresnelExponent: CGFloat; message 'fresnelExponent'; { available in macos 10.9 }
    procedure setBlendMode(newValue: SCNBlendMode); message 'setBlendMode:'; { available in macos 10.11, ios 9.0 }
    function blendMode: SCNBlendMode; message 'blendMode'; { available in macos 10.11, ios 9.0 }

    { Adopted protocols }
    procedure addAnimation_forKey (animation: SCNAnimationProtocol; key: NSString); message 'addAnimation:forKey:';
    procedure addAnimationPlayer_forKey (player: SCNAnimationPlayer; key: NSString); message 'addAnimationPlayer:forKey:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function animationForKey (key: NSString): CAAnimationPtr; message 'animationForKey:'; deprecated 'replace with -animationPlayerForKey:';
    function animationKeys: NSArray; message 'animationKeys';
    function animationPlayerForKey (key: NSString): SCNAnimationPlayer; message 'animationPlayerForKey:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    procedure handleBindingOfSymbol_usingBlock (symbol: NSString; block: SCNBindingBlock); message 'handleBindingOfSymbol:usingBlock:'; { unavailable in watchos } { available in macos 10.9 }
    procedure handleUnbindingOfSymbol_usingBlock (symbol: NSString; block: SCNBindingBlock); message 'handleUnbindingOfSymbol:usingBlock:'; { unavailable in watchos } { available in macos 10.9 }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function isAnimationForKeyPaused (key: NSString): objcbool; message 'isAnimationForKeyPaused:'; deprecated 'Use -[SCNAnimationPlayer paused] instead';
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    function program_: SCNProgram; message 'program'; { unavailable in watchos }
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    procedure removeAnimationForKey_blendOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:blendOutDuration:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; deprecated 'replace with -removeAnimationForKey:blendOutDuration:';
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    procedure setProgram (newValue: SCNProgram); message 'setProgram:'; { unavailable in watchos }
    procedure setShaderModifiers (newValue: NSDictionary); message 'setShaderModifiers:'; { available in macos 10.9 }
    procedure setSpeed_forAnimationKey (speed: CGFloat; key: NSString); message 'setSpeed:forAnimationKey:'; deprecated 'Use -[SCNAnimationPlayer setSpeed:] instead';
    function shaderModifiers: NSDictionary; message 'shaderModifiers'; { available in macos 10.9 }
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

