{ Parsed from SpriteKit.framework SKScene.h }

{ Types from SKScene }
{$ifdef TYPES}



{$endif}


{$ifdef TYPES}
type
  SKScenePtr = ^SKScene;
  SKSceneDelegateProtocolPtr = ^SKSceneDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  SKSceneScaleMode = NSInteger;
  SKSceneScaleModePtr = ^SKSceneScaleMode;

const
  SKSceneScaleModeFill = 0;
  SKSceneScaleModeAspectFill = 1;
  SKSceneScaleModeAspectFit = 2;
  SKSceneScaleModeResizeFill = 3;
{$endif}

{$ifdef PROTOCOLS}

type
  SKSceneDelegateProtocol = objcprotocol external name 'SKSceneDelegate' (NSObjectProtocol)
  optional
    procedure update_forScene (currentTime: NSTimeInterval; scene: SKScene); message 'update:forScene:';
    procedure didEvaluateActionsForScene (scene: SKScene); message 'didEvaluateActionsForScene:';
    procedure didSimulatePhysicsForScene (scene: SKScene); message 'didSimulatePhysicsForScene:';
    procedure didApplyConstraintsForScene (scene: SKScene); message 'didApplyConstraintsForScene:';
    procedure didFinishUpdateForScene (scene: SKScene); message 'didFinishUpdateForScene:';
  end;
{$endif}

{$ifdef CLASSES}

type
  SKScene = objcclass external (SKEffectNode)
  public
    function initWithSize (size: CGSize): id; message 'initWithSize:';
    class function sceneWithSize (size: CGSize): id; message 'sceneWithSize:';
    procedure sceneDidLoad; message 'sceneDidLoad'; { available in ios 10.0, tvos 10.0, watchos 3.0, macos 10.12 }
    procedure setSize(newValue: CGSize); message 'setSize:';
    function size: CGSize; message 'size';
    procedure setScaleMode(newValue: SKSceneScaleMode); message 'setScaleMode:';
    function scaleMode: SKSceneScaleMode; message 'scaleMode';
    procedure setCamera(newValue: SKCameraNode); message 'setCamera:'; { available in ios 9.0, tvos 9.0, watchos 2.0, macos 10.11 }
    function camera: SKCameraNode; message 'camera'; { available in ios 9.0, tvos 9.0, watchos 2.0, macos 10.11 }
    procedure setListener(newValue: SKNode); message 'setListener:'; { available in ios 9.0, tvos 9.0, watchos 2.0, macos 10.11 }
    function listener: SKNode; message 'listener'; { available in ios 9.0, tvos 9.0, watchos 2.0, macos 10.11 }
    {$if defined(__NULL_MACRO__)}
    function audioEngine: AVAudioEngine; message 'audioEngine'; { available in ios 9.0, tvos 9.0, watchos 2.0, macos 10.11 }
    {$endif}
    procedure setBackgroundColor(newValue: SKColor); message 'setBackgroundColor:';
    function backgroundColor: SKColor; message 'backgroundColor';
    procedure setDelegate(newValue: SKSceneDelegateProtocol); message 'setDelegate:'; { available in ios 8.0, tvos 9.0, watchos 2.0, macos 10.10 }
    function delegate: SKSceneDelegateProtocol; message 'delegate'; { available in ios 8.0, tvos 9.0, watchos 2.0, macos 10.10 }
    procedure setAnchorPoint(newValue: CGPoint); message 'setAnchorPoint:';
    function anchorPoint: CGPoint; message 'anchorPoint';
    function physicsWorld: SKPhysicsWorld; message 'physicsWorld';
    {$if defined(SKVIEW_AVAILABLE)}
    function view: SKView; message 'view';
    function convertPointFromView (point: CGPoint): CGPoint; message 'convertPointFromView:';
    function convertPointToView (point: CGPoint): CGPoint; message 'convertPointToView:';
    {$endif}
    procedure update (currentTime: NSTimeInterval); message 'update:';
    procedure didEvaluateActions; message 'didEvaluateActions';
    procedure didSimulatePhysics; message 'didSimulatePhysics';
    procedure didApplyConstraints; message 'didApplyConstraints'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    procedure didFinishUpdate; message 'didFinishUpdate'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    {$if defined(SKVIEW_AVAILABLE)}
    procedure didMoveToView (view_: SKView); message 'didMoveToView:';
    procedure willMoveFromView (view_: SKView); message 'willMoveFromView:';
    {$endif}
    procedure didChangeSize (oldSize: CGSize); message 'didChangeSize:';
  end;
{$endif}

