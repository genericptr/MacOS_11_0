{ Parsed from SceneKit.framework SCNLayer.h }

{$ifdef TYPES}
type
  SCNLayerPtr = ^SCNLayer;
{$endif}

{$ifdef CLASSES}

type
  SCNLayer = objcclass external (CAOpenGLLayer, SCNSceneRendererProtocol, SCNTechniqueSupportProtocol)
  public
    procedure setScene(newValue: SCNScene); message 'setScene:';
    function scene: SCNScene; message 'scene';

    { Adopted protocols }
    function audioEngine: AVAudioEngine; message 'audioEngine'; { available in macos 10.11, ios 9.0 }
    function audioEnvironmentNode: AVAudioEnvironmentNode; message 'audioEnvironmentNode'; { unavailable in watchos } { available in macos 10.11, ios 9.0 }
    function audioListener: SCNNode; message 'audioListener'; { available in macos 10.11, ios 9.0 }
    function autoenablesDefaultLighting: objcbool; message 'autoenablesDefaultLighting';
    function colorPixelFormat: MTLPixelFormat; message 'colorPixelFormat'; { available in macos 10.11, ios 9.0 }
    function commandQueue: MTLCommandQueueProtocol; message 'commandQueue'; { available in macos 10.11, ios 9.0 }
    function context: pointer; message 'context';
    function currentRenderCommandEncoder: MTLRenderCommandEncoderProtocol; message 'currentRenderCommandEncoder'; { available in macos 10.11, ios 9.0 }
    function currentRenderPassDescriptor: MTLRenderPassDescriptor; message 'currentRenderPassDescriptor'; { unavailable in watchos } { available in macos 10.11, ios 9.0, tvos 9.0 }
    function currentTime: NSTimeInterval; message 'currentTime'; { unavailable in ios, tvos, watchos, macCatalyst }
    function currentViewport: CGRect; message 'currentViewport'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function debugOptions: SCNDebugOptions; message 'debugOptions'; { available in macos 10.11, ios 9.0 }
    function delegate: SCNSceneRendererDelegateProtocol; message 'delegate';
    function depthPixelFormat: MTLPixelFormat; message 'depthPixelFormat'; { available in macos 10.11, ios 9.0 }
    function device: MTLDeviceProtocol; message 'device'; { available in macos 10.11, ios 9.0 }
    function hitTest_options (point: CGPoint; options: NSDictionary): NSArray; message 'hitTest:options:';
    function isJitteringEnabled: objcbool; message 'isJitteringEnabled';
    function isNodeInsideFrustum_withPointOfView (node: SCNNode; pointOfView: SCNNode): objcbool; message 'isNodeInsideFrustum:withPointOfView:'; { available in macos 10.9 }
    function isPlaying: objcbool; message 'isPlaying';
    function isTemporalAntialiasingEnabled: objcbool; message 'isTemporalAntialiasingEnabled'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function loops: objcbool; message 'loops';
    function nodesInsideFrustumWithPointOfView (pointOfView: SCNNode): NSArray; message 'nodesInsideFrustumWithPointOfView:'; { available in macos 10.11, ios 9.0 }
    function overlaySKScene: SKScene; message 'overlaySKScene'; { available in macos 10.10 }
    function pointOfView: SCNNode; message 'pointOfView';
    function prepareObject_shouldAbortBlock (object_: id; block: SCNSceneRendererPrepareObjectCallback): objcbool; message 'prepareObject:shouldAbortBlock:'; { available in macos 10.9 }
    procedure prepareObjects_withCompletionHandler (objects: NSArray; completionHandler: SCNSceneRendererPrepareObjectsCallback); message 'prepareObjects:withCompletionHandler:'; { available in macos 10.10 }
    procedure presentScene_withTransition_incomingPointOfView_completionHandler (scene_: SCNScene; transition: SKTransition; pointOfView: SCNNode; completionHandler: SCNSceneRendererPresentSceneCallback); message 'presentScene:withTransition:incomingPointOfView:completionHandler:'; { available in macos 10.11, ios 9.0 }
    function projectPoint (point: SCNVector3): SCNVector3; message 'projectPoint:'; { available in macos 10.9 }
    function renderingAPI: SCNRenderingAPI; message 'renderingAPI'; { available in macos 10.11, ios 9.0 }
    function scene_: SCNScene; message 'scene';
    function sceneTime: NSTimeInterval; message 'sceneTime'; { available in macos 10.10 }
    procedure setAudioListener (newValue: SCNNode); message 'setAudioListener:'; { available in macos 10.11, ios 9.0 }
    procedure setAutoenablesDefaultLighting (newValue: objcbool); message 'setAutoenablesDefaultLighting:';
    procedure setCurrentTime (newValue: NSTimeInterval); message 'setCurrentTime:'; { unavailable in ios, tvos, watchos, macCatalyst }
    procedure setDebugOptions (newValue: SCNDebugOptions); message 'setDebugOptions:'; { available in macos 10.11, ios 9.0 }
    procedure setDelegate (newValue: SCNSceneRendererDelegateProtocol); message 'setDelegate:';
    procedure setJitteringEnabled (newValue: objcbool); message 'setJitteringEnabled:';
    procedure setLoops (newValue: objcbool); message 'setLoops:';
    procedure setOverlaySKScene (newValue: SKScene); message 'setOverlaySKScene:'; { available in macos 10.10 }
    procedure setPlaying (newValue: objcbool); message 'setPlaying:';
    procedure setPointOfView (newValue: SCNNode); message 'setPointOfView:';
    procedure setScene_ (newValue: SCNScene); message 'setScene:';
    procedure setSceneTime (newValue: NSTimeInterval); message 'setSceneTime:'; { available in macos 10.10 }
    procedure setShowsStatistics (newValue: objcbool); message 'setShowsStatistics:'; { available in macos 10.9 }
    procedure setTechnique (newValue: SCNTechnique); message 'setTechnique:'; { available in macos 10.10 }
    procedure setTemporalAntialiasingEnabled (newValue: objcbool); message 'setTemporalAntialiasingEnabled:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setUsesReverseZ (newValue: objcbool); message 'setUsesReverseZ:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    function showsStatistics: objcbool; message 'showsStatistics'; { available in macos 10.9 }
    function stencilPixelFormat: MTLPixelFormat; message 'stencilPixelFormat'; { available in macos 10.11, ios 9.0 }
    function technique: SCNTechnique; message 'technique'; { available in macos 10.10 }
    function unprojectPoint (point: SCNVector3): SCNVector3; message 'unprojectPoint:'; { available in macos 10.9 }
    function usesReverseZ: objcbool; message 'usesReverseZ'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
  end;
{$endif}

