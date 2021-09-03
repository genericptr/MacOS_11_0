{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNSceneRenderer.h }

{ Types from SCNSceneRendererProtocol }
{$ifdef TYPES}


{$endif}


{$ifdef CALLBACKS}
type
  SCNSceneRendererPresentSceneCallback = reference to function : pointer; cblock; cdecl;
  SCNSceneRendererPrepareObjectCallback = reference to function : objcbool; cblock; cdecl;
  SCNSceneRendererPrepareObjectsCallback = reference to function (success: objcbool): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SCNSceneRendererProtocolPtr = ^SCNSceneRendererProtocol;
  SCNSceneRendererDelegateProtocolPtr = ^SCNSceneRendererDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  SCNAntialiasingMode = NSUInteger;
  SCNAntialiasingModePtr = ^SCNAntialiasingMode;

const
  SCNAntialiasingModeNone = 0;
  SCNAntialiasingModeMultisampling2X = 1;
  SCNAntialiasingModeMultisampling4X = 2;
  SCNAntialiasingModeMultisampling8X = 3;
  SCNAntialiasingModeMultisampling16X = 4;

type
  SCNRenderingAPI = NSUInteger;
  SCNRenderingAPIPtr = ^SCNRenderingAPI;

const
  SCNRenderingAPIMetal = 0;
  SCNRenderingAPIOpenGLLegacy = 1;
  SCNRenderingAPIOpenGLCore32 = 2;
  SCNRenderingAPIOpenGLCore41 = 3;

type
  SCNDebugOptions = NSUInteger;
  SCNDebugOptionsPtr = ^SCNDebugOptions;

const
  SCNDebugOptionNone = 0;
  SCNDebugOptionShowPhysicsShapes = 1 shl 0;
  SCNDebugOptionShowBoundingBoxes = 1 shl 1;
  SCNDebugOptionShowLightInfluences = 1 shl 2;
  SCNDebugOptionShowLightExtents = 1 shl 3;
  SCNDebugOptionShowPhysicsFields = 1 shl 4;
  SCNDebugOptionShowWireframe = 1 shl 5;
  SCNDebugOptionRenderAsWireframe = 1 shl 6 { available in macos , ios , tvos , watchos  };
  SCNDebugOptionShowSkeletons = 1 shl 7 { available in macos , ios , tvos , watchos  };
  SCNDebugOptionShowCreases = 1 shl 8 { available in macos , ios , tvos , watchos  };
  SCNDebugOptionShowConstraints = 1 shl 9 { available in macos , ios , tvos , watchos  };
  SCNDebugOptionShowCameras = 1 shl 10 { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef PROTOCOLS}

type
  SCNSceneRendererProtocol = objcprotocol external name 'SCNSceneRenderer' (NSObjectProtocol)
  required
    procedure setScene(newValue: SCNScene); message 'setScene:';
    function scene: SCNScene; message 'scene';
    procedure presentScene_withTransition_incomingPointOfView_completionHandler (scene_: SCNScene; transition: SKTransition; pointOfView: SCNNode; completionHandler: SCNSceneRendererPresentSceneCallback); message 'presentScene:withTransition:incomingPointOfView:completionHandler:'; { available in macos , ios  }
    procedure setSceneTime(newValue: NSTimeInterval); message 'setSceneTime:'; { available in macos  }
    function sceneTime: NSTimeInterval; message 'sceneTime'; { available in macos  }
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function hitTest_options (point: CGPoint; options: NSDictionary): NSArray; message 'hitTest:options:';
    function isNodeInsideFrustum_withPointOfView (node: SCNNode; pointOfView: SCNNode): objcbool; message 'isNodeInsideFrustum:withPointOfView:'; { available in macos  }
    function nodesInsideFrustumWithPointOfView (pointOfView: SCNNode): NSArray; message 'nodesInsideFrustumWithPointOfView:'; { available in macos , ios  }
    function projectPoint (point: SCNVector3): SCNVector3; message 'projectPoint:'; { available in macos  }
    function unprojectPoint (point: SCNVector3): SCNVector3; message 'unprojectPoint:'; { available in macos  }
    procedure setPlaying(newValue: objcbool); message 'setPlaying:';
    function isPlaying: objcbool; message 'isPlaying';
    procedure setLoops(newValue: objcbool); message 'setLoops:';
    function loops: objcbool; message 'loops';
    procedure setPointOfView(newValue: SCNNode); message 'setPointOfView:';
    function pointOfView: SCNNode; message 'pointOfView';
    procedure setAutoenablesDefaultLighting(newValue: objcbool); message 'setAutoenablesDefaultLighting:';
    function autoenablesDefaultLighting: objcbool; message 'autoenablesDefaultLighting';
    procedure setJitteringEnabled(newValue: objcbool); message 'setJitteringEnabled:';
    function isJitteringEnabled: objcbool; message 'isJitteringEnabled';
    procedure setTemporalAntialiasingEnabled(newValue: objcbool); message 'setTemporalAntialiasingEnabled:'; { available in macos , ios , tvos , watchos  }
    function isTemporalAntialiasingEnabled: objcbool; message 'isTemporalAntialiasingEnabled'; { available in macos , ios , tvos , watchos  }
    function prepareObject_shouldAbortBlock (object_: id; block: SCNSceneRendererPrepareObjectCallback): objcbool; message 'prepareObject:shouldAbortBlock:'; { available in macos  }
    procedure prepareObjects_withCompletionHandler (objects: NSArray; completionHandler: SCNSceneRendererPrepareObjectsCallback); message 'prepareObjects:withCompletionHandler:'; { available in macos  }
    procedure setShowsStatistics(newValue: objcbool); message 'setShowsStatistics:'; { available in macos  }
    function showsStatistics: objcbool; message 'showsStatistics'; { available in macos  }
    procedure setDebugOptions(newValue: SCNDebugOptions); message 'setDebugOptions:'; { available in macos , ios  }
    function debugOptions: SCNDebugOptions; message 'debugOptions'; { available in macos , ios  }
    procedure setOverlaySKScene(newValue: SKScene); message 'setOverlaySKScene:'; { available in macos  }
    function overlaySKScene: SKScene; message 'overlaySKScene'; { available in macos  }
    function renderingAPI: SCNRenderingAPI; message 'renderingAPI'; { available in macos , ios  }
    {$if defined(SCN_ENABLE_OPENGL)}
    function context: pointer; message 'context';
    {$endif}
    {$if defined(SCN_ENABLE_METAL)}
    function currentRenderCommandEncoder: id; message 'currentRenderCommandEncoder'; { available in macos , ios  }
    function currentRenderPassDescriptor: MTLRenderPassDescriptor; message 'currentRenderPassDescriptor'; { unavailable in watchos }
    function device: id; message 'device'; { available in macos , ios  }
    function colorPixelFormat: MTLPixelFormat; message 'colorPixelFormat'; { available in macos , ios  }
    function depthPixelFormat: MTLPixelFormat; message 'depthPixelFormat'; { available in macos , ios  }
    function stencilPixelFormat: MTLPixelFormat; message 'stencilPixelFormat'; { available in macos , ios  }
    function commandQueue: id; message 'commandQueue'; { available in macos , ios  }
    {$endif}
    function audioEngine: AVAudioEngine; message 'audioEngine'; { available in macos , ios  }
    function audioEnvironmentNode: AVAudioEnvironmentNode; message 'audioEnvironmentNode'; { unavailable in watchos }
    procedure setAudioListener(newValue: SCNNode); message 'setAudioListener:'; { available in macos , ios  }
    function audioListener: SCNNode; message 'audioListener'; { available in macos , ios  }
    function currentViewport: CGRect; message 'currentViewport'; { available in macos , ios , tvos , watchos  }
    procedure setCurrentTime(newValue: NSTimeInterval); message 'setCurrentTime:'; { unavailable in ios, tvos, watchos, macCatalyst }
    function currentTime: NSTimeInterval; message 'currentTime'; { unavailable in ios, tvos, watchos, macCatalyst }
    procedure setUsesReverseZ(newValue: objcbool); message 'setUsesReverseZ:'; { available in macos , ios , tvos , watchos  }
    function usesReverseZ: objcbool; message 'usesReverseZ'; { available in macos , ios , tvos , watchos  }
  end;

type
  SCNSceneRendererDelegateProtocol = objcprotocol external name 'SCNSceneRendererDelegate' (NSObjectProtocol)
  optional
    procedure renderer_updateAtTime (renderer: id; time: NSTimeInterval); message 'renderer:updateAtTime:'; { available in macos  }
    procedure renderer_didApplyAnimationsAtTime (renderer: id; time: NSTimeInterval); message 'renderer:didApplyAnimationsAtTime:'; { available in macos  }
    procedure renderer_didSimulatePhysicsAtTime (renderer: id; time: NSTimeInterval); message 'renderer:didSimulatePhysicsAtTime:'; { available in macos  }
    procedure renderer_didApplyConstraintsAtTime (renderer: id; time: NSTimeInterval); message 'renderer:didApplyConstraintsAtTime:'; { available in macos , ios , tvos , watchos  }
    procedure renderer_willRenderScene_atTime (renderer: id; scene: SCNScene; time: NSTimeInterval); message 'renderer:willRenderScene:atTime:';
    procedure renderer_didRenderScene_atTime (renderer: id; scene: SCNScene; time: NSTimeInterval); message 'renderer:didRenderScene:atTime:';
  end;
{$endif}

