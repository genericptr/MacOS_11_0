{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNMaterial.h }

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
  SCNLightingModelPhysicallyBased: SCNLightingModel { available in macos , ios , tvos  }; cvar; external;
  SCNLightingModelShadowOnly: SCNLightingModel { available in macos , ios , tvos , watchos  }; cvar; external;
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
  SCNTransparencyModeSingleLayer = 2 { available in macos , ios , tvos , watchos  };
  SCNTransparencyModeDualLayer = 3 { available in macos , ios , tvos , watchos  };
  SCNTransparencyModeDefault = SCNTransparencyModeAOne { available in macos , ios , tvos , watchos  };

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
  SCNBlendModeMax = 6 { available in macos , ios , tvos , watchos  };
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
    function displacement: SCNMaterialProperty; message 'displacement'; { available in macos , ios , tvos , watchos  }
    function ambientOcclusion: SCNMaterialProperty; message 'ambientOcclusion'; { available in macos , ios  }
    function selfIllumination: SCNMaterialProperty; message 'selfIllumination'; { available in macos , ios  }
    function metalness: SCNMaterialProperty; message 'metalness'; { available in macos , ios , tvos  }
    function roughness: SCNMaterialProperty; message 'roughness'; { available in macos , ios , tvos  }
    function clearCoat: SCNMaterialProperty; message 'clearCoat'; { available in macos , ios , tvos , watchos  }
    function clearCoatRoughness: SCNMaterialProperty; message 'clearCoatRoughness'; { available in macos , ios , tvos , watchos  }
    function clearCoatNormal: SCNMaterialProperty; message 'clearCoatNormal'; { available in macos , ios , tvos , watchos  }
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
    procedure setFillMode(newValue: SCNFillMode); message 'setFillMode:'; { available in macos , ios , tvos , watchos  }
    function fillMode: SCNFillMode; message 'fillMode'; { available in macos , ios , tvos , watchos  }
    procedure setCullMode(newValue: SCNCullMode); message 'setCullMode:';
    function cullMode: SCNCullMode; message 'cullMode';
    procedure setTransparencyMode(newValue: SCNTransparencyMode); message 'setTransparencyMode:';
    function transparencyMode: SCNTransparencyMode; message 'transparencyMode';
    procedure setLocksAmbientWithDiffuse(newValue: objcbool); message 'setLocksAmbientWithDiffuse:';
    function locksAmbientWithDiffuse: objcbool; message 'locksAmbientWithDiffuse';
    procedure setWritesToDepthBuffer(newValue: objcbool); message 'setWritesToDepthBuffer:';
    function writesToDepthBuffer: objcbool; message 'writesToDepthBuffer';
    procedure setColorBufferWriteMask(newValue: SCNColorMask); message 'setColorBufferWriteMask:'; { available in macos , ios , tvos , watchos  }
    function colorBufferWriteMask: SCNColorMask; message 'colorBufferWriteMask'; { available in macos , ios , tvos , watchos  }
    procedure setReadsFromDepthBuffer(newValue: objcbool); message 'setReadsFromDepthBuffer:'; { available in macos  }
    function readsFromDepthBuffer: objcbool; message 'readsFromDepthBuffer'; { available in macos  }
    procedure setFresnelExponent(newValue: CGFloat); message 'setFresnelExponent:'; { available in macos  }
    function fresnelExponent: CGFloat; message 'fresnelExponent'; { available in macos  }
    procedure setBlendMode(newValue: SCNBlendMode); message 'setBlendMode:'; { available in macos , ios  }
    function blendMode: SCNBlendMode; message 'blendMode'; { available in macos , ios  }

    { Adopted protocols }
    procedure addAnimation_forKey (animation: id; key: NSString); message 'addAnimation:forKey:';
    procedure addAnimationPlayer_forKey (player: SCNAnimationPlayer; key: NSString); message 'addAnimationPlayer:forKey:'; { available in macos , ios , tvos , watchos  }
    function animationForKey (key: NSString): CAAnimationPtr; message 'animationForKey:'; deprecated 'replace with -animationPlayerForKey:';
    function animationKeys: NSArray; message 'animationKeys';
    function animationPlayerForKey (key: NSString): SCNAnimationPlayer; message 'animationPlayerForKey:'; { available in macos , ios , tvos , watchos  }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    procedure handleBindingOfSymbol_usingBlock (symbol: NSString; block: SCNBindingBlock); message 'handleBindingOfSymbol:usingBlock:'; { unavailable in watchos }
    procedure handleUnbindingOfSymbol_usingBlock (symbol: NSString; block: SCNBindingBlock); message 'handleUnbindingOfSymbol:usingBlock:'; { unavailable in watchos }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function isAnimationForKeyPaused (key: NSString): objcbool; message 'isAnimationForKeyPaused:'; deprecated 'Use -[SCNAnimationPlayer paused] instead';
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    function program_: SCNProgram; message 'program'; { unavailable in watchos }
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    procedure removeAnimationForKey_blendOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:blendOutDuration:'; { available in macos , ios , tvos , watchos  }
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; deprecated 'replace with -removeAnimationForKey:blendOutDuration:';
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    procedure setProgram (newValue: SCNProgram); message 'setProgram:'; { unavailable in watchos }
    procedure setShaderModifiers (newValue: NSDictionary); message 'setShaderModifiers:'; { available in macos  }
    procedure setSpeed_forAnimationKey (speed: CGFloat; key: NSString); message 'setSpeed:forAnimationKey:'; deprecated 'Use -[SCNAnimationPlayer setSpeed:] instead';
    function shaderModifiers: NSDictionary; message 'shaderModifiers'; { available in macos  }
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

