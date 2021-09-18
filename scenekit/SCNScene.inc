{ Parsed from SceneKit.framework SCNScene.h }

{$ifdef TYPES}
type
  SCNScenePtr = ^SCNScene;
  SCNSceneExportDelegateProtocolPtr = ^SCNSceneExportDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  SCNSceneExportProgressHandler = reference to procedure (totalProgress: single; error: NSError; stop: objcboolPtr); cblock; cdecl;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNSceneExportDestinationURL: NSString { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCNSceneAttribute = NSString;
  SCNSceneAttributePtr = ^SCNSceneAttribute;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNSceneStartTimeAttributeKey: SCNSceneAttribute; cvar; external;
  SCNSceneEndTimeAttributeKey: SCNSceneAttribute; cvar; external;
  SCNSceneFrameRateAttributeKey: SCNSceneAttribute; cvar; external;
  SCNSceneUpAxisAttributeKey: SCNSceneAttribute { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SCNScene = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function scene: id; message 'scene';
    function rootNode: SCNNode; message 'rootNode';
    function physicsWorld: SCNPhysicsWorld; message 'physicsWorld'; { available in macos  }
    function attributeForKey (key: NSString): id; message 'attributeForKey:';
    procedure setAttribute_forKey (attribute: id; key: NSString); message 'setAttribute:forKey:';
    function background: SCNMaterialProperty; message 'background'; { available in macos  }
    function lightingEnvironment: SCNMaterialProperty; message 'lightingEnvironment'; { available in macos , ios , tvos  }
    class function sceneNamed (name: NSString): id; message 'sceneNamed:'; { available in macos  }
    class function sceneNamed_inDirectory_options (name: NSString; directory: NSString; options: NSDictionary): id; message 'sceneNamed:inDirectory:options:'; { available in macos  }
    class function sceneWithURL_options_error (url: NSURL; options: NSDictionary; error: NSErrorPtr): id; message 'sceneWithURL:options:error:';
    function writeToURL_options_delegate_progressHandler (url: NSURL; options: NSDictionary; delegate: SCNSceneExportDelegateProtocol; progressHandler: SCNSceneExportProgressHandler): objcbool; message 'writeToURL:options:delegate:progressHandler:'; { unavailable in watchos }
    procedure setFogStartDistance(newValue: CGFloat); message 'setFogStartDistance:'; { available in macos  }
    function fogStartDistance: CGFloat; message 'fogStartDistance'; { available in macos  }
    procedure setFogEndDistance(newValue: CGFloat); message 'setFogEndDistance:'; { available in macos  }
    function fogEndDistance: CGFloat; message 'fogEndDistance'; { available in macos  }
    procedure setFogDensityExponent(newValue: CGFloat); message 'setFogDensityExponent:'; { available in macos  }
    function fogDensityExponent: CGFloat; message 'fogDensityExponent'; { available in macos  }
    procedure setFogColor(newValue: id); message 'setFogColor:'; { available in macos  }
    function fogColor: id; message 'fogColor'; { available in macos  }
    procedure setWantsScreenSpaceReflection(newValue: objcbool); message 'setWantsScreenSpaceReflection:'; { available in macos , ios , tvos , watchos  }
    function wantsScreenSpaceReflection: objcbool; message 'wantsScreenSpaceReflection'; { available in macos , ios , tvos , watchos  }
    procedure setScreenSpaceReflectionSampleCount(newValue: NSInteger); message 'setScreenSpaceReflectionSampleCount:'; { available in macos , ios , tvos , watchos  }
    function screenSpaceReflectionSampleCount: NSInteger; message 'screenSpaceReflectionSampleCount'; { available in macos , ios , tvos , watchos  }
    procedure setScreenSpaceReflectionMaximumDistance(newValue: CGFloat); message 'setScreenSpaceReflectionMaximumDistance:'; { available in macos , ios , tvos , watchos  }
    function screenSpaceReflectionMaximumDistance: CGFloat; message 'screenSpaceReflectionMaximumDistance'; { available in macos , ios , tvos , watchos  }
    procedure setScreenSpaceReflectionStride(newValue: CGFloat); message 'setScreenSpaceReflectionStride:'; { available in macos , ios , tvos , watchos  }
    function screenSpaceReflectionStride: CGFloat; message 'screenSpaceReflectionStride'; { available in macos , ios , tvos , watchos  }
    procedure setPaused(newValue: objcbool); message 'setPaused:'; { available in macos  }
    function isPaused: objcbool; message 'isPaused'; { available in macos  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNSceneExportDelegateProtocol = objcprotocol external name 'SCNSceneExportDelegate' (NSObjectProtocol)
  optional
    function writeImage_withSceneDocumentURL_originalImageURL (image: NSImage; documentURL: NSURL; originalImageURL: NSURL): NSURL; message 'writeImage:withSceneDocumentURL:originalImageURL:'; { unavailable in watchos }
  end;
{$endif}

