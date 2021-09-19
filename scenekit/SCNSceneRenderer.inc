{ Parsed from SceneKit.framework SCNSceneRenderer.h }

{ Types from SCNSceneRendererProtocol }
{$ifdef TYPES}


{$endif}


{$ifdef CALLBACKS}
type
  SCNSceneRendererPresentSceneCallback = reference to procedure; cblock; cdecl;
  SCNSceneRendererPrepareObjectCallback = reference to function : objcbool; cblock; cdecl;
  SCNSceneRendererPrepareObjectsCallback = reference to procedure (success: objcbool); cblock; cdecl;
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
  SCNDebugOptionRenderAsWireframe = 1 shl 6 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  SCNDebugOptionShowSkeletons = 1 shl 7 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  SCNDebugOptionShowCreases = 1 shl 8 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  SCNDebugOptionShowConstraints = 1 shl 9 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
  SCNDebugOptionShowCameras = 1 shl 10 { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 };
{$endif}

{$ifdef PROTOCOLS}

type
  SCNSceneRendererProtocol = objcprotocol external name 'SCNSceneRenderer' (NSObjectProtocol)
  required
    procedure setScene(newValue: SCNScene); message 'setScene:';
    function scene: SCNScene; message 'scene';
    procedure presentScene_withTransition_incomingPointOfView_completionHandler (scene_: SCNScene; transition: SKTransition; pointOfView: SCNNode; completionHandler: SCNSceneRendererPresentSceneCallback); message 'presentScene:withTransition:incomingPointOfView:completionHandler:'; { available in macos 10.11, ios 9.0 }
    procedure setSceneTime(newValue: NSTimeInterval); message 'setSceneTime:'; { available in macos 10.10 }
    function sceneTime: NSTimeInterval; message 'sceneTime'; { available in macos 10.10 }
    procedure setDelegate(newValue: SCNSceneRendererDelegateProtocol); message 'setDelegate:';
    function delegate: SCNSceneRendererDelegateProtocol; message 'delegate';
    function hitTest_options (point: CGPoint; options: NSDictionary): NSArray; message 'hitTest:options:';
    function isNodeInsideFrustum_withPointOfView (node: SCNNode; pointOfView: SCNNode): objcbool; message 'isNodeInsideFrustum:withPointOfView:'; { available in macos 10.9 }
    function nodesInsideFrustumWithPointOfView (pointOfView: SCNNode): NSArray; message 'nodesInsideFrustumWithPointOfView:'; { available in macos 10.11, ios 9.0 }
    function projectPoint (point: SCNVector3): SCNVector3; message 'projectPoint:'; { available in macos 10.9 }
    function unprojectPoint (point: SCNVector3): SCNVector3; message 'unprojectPoint:'; { available in macos 10.9 }
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
    procedure setTemporalAntialiasingEnabled(newValue: objcbool); message 'setTemporalAntialiasingEnabled:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function isTemporalAntialiasingEnabled: objcbool; message 'isTemporalAntialiasingEnabled'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function prepareObject_shouldAbortBlock (object_: id; block: SCNSceneRendererPrepareObjectCallback): objcbool; message 'prepareObject:shouldAbortBlock:'; { available in macos 10.9 }
    procedure prepareObjects_withCompletionHandler (objects: NSArray; completionHandler: SCNSceneRendererPrepareObjectsCallback); message 'prepareObjects:withCompletionHandler:'; { available in macos 10.10 }
    procedure setShowsStatistics(newValue: objcbool); message 'setShowsStatistics:'; { available in macos 10.9 }
    function showsStatistics: objcbool; message 'showsStatistics'; { available in macos 10.9 }
    procedure setDebugOptions(newValue: SCNDebugOptions); message 'setDebugOptions:'; { available in macos 10.11, ios 9.0 }
    function debugOptions: SCNDebugOptions; message 'debugOptions'; { available in macos 10.11, ios 9.0 }
    procedure setOverlaySKScene(newValue: SKScene); message 'setOverlaySKScene:'; { available in macos 10.10 }
    function overlaySKScene: SKScene; message 'overlaySKScene'; { available in macos 10.10 }
    function renderingAPI: SCNRenderingAPI; message 'renderingAPI'; { available in macos 10.11, ios 9.0 }
    {$if defined(SCN_ENABLE_OPENGL)}
    function context: pointer; message 'context';
    {$endif}
    {$if defined(SCN_ENABLE_METAL)}
    function currentRenderCommandEncoder: MTLRenderCommandEncoderProtocol; message 'currentRenderCommandEncoder'; { available in macos 10.11, ios 9.0 }
    function currentRenderPassDescriptor: MTLRenderPassDescriptor; message 'currentRenderPassDescriptor'; { unavailable in watchos } { available in macos 10.11, ios 9.0, tvos 9.0 }
    function device: MTLDeviceProtocol; message 'device'; { available in macos 10.11, ios 9.0 }
    function colorPixelFormat: MTLPixelFormat; message 'colorPixelFormat'; { available in macos 10.11, ios 9.0 }
    function depthPixelFormat: MTLPixelFormat; message 'depthPixelFormat'; { available in macos 10.11, ios 9.0 }
    function stencilPixelFormat: MTLPixelFormat; message 'stencilPixelFormat'; { available in macos 10.11, ios 9.0 }
    function commandQueue: MTLCommandQueueProtocol; message 'commandQueue'; { available in macos 10.11, ios 9.0 }
    {$endif}
    function audioEngine: AVAudioEngine; message 'audioEngine'; { available in macos 10.11, ios 9.0 }
    function audioEnvironmentNode: AVAudioEnvironmentNode; message 'audioEnvironmentNode'; { unavailable in watchos } { available in macos 10.11, ios 9.0 }
    procedure setAudioListener(newValue: SCNNode); message 'setAudioListener:'; { available in macos 10.11, ios 9.0 }
    function audioListener: SCNNode; message 'audioListener'; { available in macos 10.11, ios 9.0 }
    function currentViewport: CGRect; message 'currentViewport'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setCurrentTime(newValue: NSTimeInterval); message 'setCurrentTime:'; { unavailable in ios, tvos, watchos, macCatalyst }
    function currentTime: NSTimeInterval; message 'currentTime'; { unavailable in ios, tvos, watchos, macCatalyst }
    procedure setUsesReverseZ(newValue: objcbool); message 'setUsesReverseZ:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function usesReverseZ: objcbool; message 'usesReverseZ'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
  end;

type
  SCNSceneRendererDelegateProtocol = objcprotocol external name 'SCNSceneRendererDelegate' (NSObjectProtocol)
  optional
    procedure renderer_updateAtTime (renderer: SCNSceneRendererProtocol; time: NSTimeInterval); message 'renderer:updateAtTime:'; { available in macos 10.10 }
    procedure renderer_didApplyAnimationsAtTime (renderer: SCNSceneRendererProtocol; time: NSTimeInterval); message 'renderer:didApplyAnimationsAtTime:'; { available in macos 10.10 }
    procedure renderer_didSimulatePhysicsAtTime (renderer: SCNSceneRendererProtocol; time: NSTimeInterval); message 'renderer:didSimulatePhysicsAtTime:'; { available in macos 10.10 }
    procedure renderer_didApplyConstraintsAtTime (renderer: SCNSceneRendererProtocol; time: NSTimeInterval); message 'renderer:didApplyConstraintsAtTime:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure renderer_willRenderScene_atTime (renderer: SCNSceneRendererProtocol; scene: SCNScene; time: NSTimeInterval); message 'renderer:willRenderScene:atTime:';
    procedure renderer_didRenderScene_atTime (renderer: SCNSceneRendererProtocol; scene: SCNScene; time: NSTimeInterval); message 'renderer:didRenderScene:atTime:';
  end;
{$endif}

