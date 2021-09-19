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
  SCNSceneExportDestinationURL: NSString { available in macos 10.9 }; cvar; external;
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
  SCNSceneUpAxisAttributeKey: SCNSceneAttribute { available in macos 10.10 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SCNScene = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function scene: id; message 'scene';
    function rootNode: SCNNode; message 'rootNode';
    function physicsWorld: SCNPhysicsWorld; message 'physicsWorld'; { available in macos 10.10 }
    function attributeForKey (key: NSString): id; message 'attributeForKey:';
    procedure setAttribute_forKey (attribute: id; key: NSString); message 'setAttribute:forKey:';
    function background: SCNMaterialProperty; message 'background'; { available in macos 10.9 }
    function lightingEnvironment: SCNMaterialProperty; message 'lightingEnvironment'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    class function sceneNamed (name: NSString): id; message 'sceneNamed:'; { available in macos 10.9 }
    class function sceneNamed_inDirectory_options (name: NSString; directory: NSString; options: NSDictionary): id; message 'sceneNamed:inDirectory:options:'; { available in macos 10.10 }
    class function sceneWithURL_options_error (url: NSURL; options: NSDictionary; error: NSErrorPtr): id; message 'sceneWithURL:options:error:';
    function writeToURL_options_delegate_progressHandler (url: NSURL; options: NSDictionary; delegate: SCNSceneExportDelegateProtocol; progressHandler: SCNSceneExportProgressHandler): objcbool; message 'writeToURL:options:delegate:progressHandler:'; { unavailable in watchos } { available in macos 10.9, ios 10.0, tvos 10.0 }
    procedure setFogStartDistance(newValue: CGFloat); message 'setFogStartDistance:'; { available in macos 10.10 }
    function fogStartDistance: CGFloat; message 'fogStartDistance'; { available in macos 10.10 }
    procedure setFogEndDistance(newValue: CGFloat); message 'setFogEndDistance:'; { available in macos 10.10 }
    function fogEndDistance: CGFloat; message 'fogEndDistance'; { available in macos 10.10 }
    procedure setFogDensityExponent(newValue: CGFloat); message 'setFogDensityExponent:'; { available in macos 10.10 }
    function fogDensityExponent: CGFloat; message 'fogDensityExponent'; { available in macos 10.10 }
    procedure setFogColor(newValue: id); message 'setFogColor:'; { available in macos 10.10 }
    function fogColor: id; message 'fogColor'; { available in macos 10.10 }
    procedure setWantsScreenSpaceReflection(newValue: objcbool); message 'setWantsScreenSpaceReflection:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function wantsScreenSpaceReflection: objcbool; message 'wantsScreenSpaceReflection'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setScreenSpaceReflectionSampleCount(newValue: NSInteger); message 'setScreenSpaceReflectionSampleCount:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function screenSpaceReflectionSampleCount: NSInteger; message 'screenSpaceReflectionSampleCount'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setScreenSpaceReflectionMaximumDistance(newValue: CGFloat); message 'setScreenSpaceReflectionMaximumDistance:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function screenSpaceReflectionMaximumDistance: CGFloat; message 'screenSpaceReflectionMaximumDistance'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setScreenSpaceReflectionStride(newValue: CGFloat); message 'setScreenSpaceReflectionStride:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function screenSpaceReflectionStride: CGFloat; message 'screenSpaceReflectionStride'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setPaused(newValue: objcbool); message 'setPaused:'; { available in macos 10.10 }
    function isPaused: objcbool; message 'isPaused'; { available in macos 10.10 }

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
    function writeImage_withSceneDocumentURL_originalImageURL (image: NSImage; documentURL: NSURL; originalImageURL: NSURL): NSURL; message 'writeImage:withSceneDocumentURL:originalImageURL:'; { unavailable in watchos } { available in macos 10.9, ios 10.0, tvos 10.0 }
  end;
{$endif}

