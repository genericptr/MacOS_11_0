{ Parsed from SceneKit.framework SCNView.h }

{ Types from SCNView }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SCNViewPtr = ^SCNView;
  SCNCameraControlConfigurationProtocolPtr = ^SCNCameraControlConfigurationProtocol;
{$endif}

{$ifdef TYPES}
type
  SCNViewOption = NSString;
  SCNViewOptionPtr = ^SCNViewOption;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNPreferredRenderingAPIKey: SCNViewOption { unavailable in watchos, macCatalyst } { available in macos 10.11, ios 9.0 }; cvar; external;
  SCNPreferredDeviceKey: SCNViewOption { available in macos 10.11, ios 9.0 }; cvar; external;
  SCNPreferLowPowerDeviceKey: SCNViewOption { available in macos 10.11, ios 9.0 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNCameraControlConfigurationProtocol = objcprotocol external name 'SCNCameraControlConfiguration' (NSObjectProtocol)
    procedure setAutoSwitchToFreeCamera(newValue: objcbool); message 'setAutoSwitchToFreeCamera:';
    function autoSwitchToFreeCamera: objcbool; message 'autoSwitchToFreeCamera';
    procedure setAllowsTranslation(newValue: objcbool); message 'setAllowsTranslation:';
    function allowsTranslation: objcbool; message 'allowsTranslation';
    procedure setFlyModeVelocity(newValue: CGFloat); message 'setFlyModeVelocity:';
    function flyModeVelocity: CGFloat; message 'flyModeVelocity';
    procedure setPanSensitivity(newValue: CGFloat); message 'setPanSensitivity:';
    function panSensitivity: CGFloat; message 'panSensitivity';
    procedure setTruckSensitivity(newValue: CGFloat); message 'setTruckSensitivity:';
    function truckSensitivity: CGFloat; message 'truckSensitivity';
    procedure setRotationSensitivity(newValue: CGFloat); message 'setRotationSensitivity:';
    function rotationSensitivity: CGFloat; message 'rotationSensitivity';
  end;
{$endif}

{$ifdef CLASSES}

type
  SCNView = objcclass external (NSView, SCNSceneRendererProtocol, SCNTechniqueSupportProtocol)
  public
    function initWithFrame_options (frame: NSRect; options: NSDictionary): id; message 'initWithFrame:options:';
    procedure setScene(newValue: SCNScene); message 'setScene:';
    function scene: SCNScene; message 'scene';
    procedure setRendersContinuously(newValue: objcbool); message 'setRendersContinuously:';
    function rendersContinuously: objcbool; message 'rendersContinuously';
    procedure setBackgroundColor(newValue: NSColorPtr); message 'setBackgroundColor:';
    function backgroundColor: NSColorPtr; message 'backgroundColor';
    procedure setAllowsCameraControl(newValue: objcbool); message 'setAllowsCameraControl:';
    function allowsCameraControl: objcbool; message 'allowsCameraControl';
    function cameraControlConfiguration: SCNCameraControlConfigurationProtocol; message 'cameraControlConfiguration'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function defaultCameraController: SCNCameraController; message 'defaultCameraController'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function snapshot: NSImage; message 'snapshot'; { available in macos 10.10 }
    procedure play (sender: id); message 'play:';
    procedure pause (sender: id); message 'pause:';
    procedure stop (sender: id); message 'stop:';
    procedure setPreferredFramesPerSecond(newValue: NSInteger); message 'setPreferredFramesPerSecond:'; { available in macos 10.12 }
    function preferredFramesPerSecond: NSInteger; message 'preferredFramesPerSecond'; { available in macos 10.12 }
    procedure setDrawableResizesAsynchronously(newValue: objcbool); message 'setDrawableResizesAsynchronously:'; { available in macos 10.15 }
    function drawableResizesAsynchronously: objcbool; message 'drawableResizesAsynchronously'; { available in macos 10.15 }
    {$if defined(SCN_ENABLE_OPENGL)}
    procedure setOpenGLContext(newValue: NSOpenGLContextPtr); message 'setOpenGLContext:'; deprecated 'in 10_8, 10_14';
    function openGLContext: NSOpenGLContextPtr; message 'openGLContext'; deprecated 'in 10_8, 10_14';
    {$endif}
    procedure setAntialiasingMode(newValue: SCNAntialiasingMode); message 'setAntialiasingMode:'; { available in macos 10.10 }
    function antialiasingMode: SCNAntialiasingMode; message 'antialiasingMode'; { available in macos 10.10 }
    procedure setPixelFormat(newValue: NSOpenGLPixelFormatPtr); message 'setPixelFormat:'; deprecated 'in 10_8, 10_14';
    function pixelFormat: NSOpenGLPixelFormatPtr; message 'pixelFormat'; deprecated 'in 10_8, 10_14';

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

