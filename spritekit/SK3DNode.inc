{ Parsed from SpriteKit.framework SK3DNode.h }

{$ifdef TYPES}
type
  SK3DNodePtr = ^SK3DNode;
{$endif}

{$ifdef CLASSES}

type
  SK3DNode = objcclass external (SKNode)
  public
    function initWithViewportSize (viewportSize: CGSize): id; message 'initWithViewportSize:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function nodeWithViewportSize (viewportSize: CGSize): id; message 'nodeWithViewportSize:';
    procedure setViewportSize(newValue: CGSize); message 'setViewportSize:';
    function viewportSize: CGSize; message 'viewportSize';
    procedure setScnScene(newValue: SCNScene); message 'setScnScene:';
    function scnScene: SCNScene; message 'scnScene';
    procedure setSceneTime(newValue: NSTimeInterval); message 'setSceneTime:';
    function sceneTime: NSTimeInterval; message 'sceneTime';
    function hitTest_options (point: CGPoint; options: NSDictionary): NSArray; message 'hitTest:options:';
    function projectPoint (point: vector_float3): vector_float3; message 'projectPoint:';
    function unprojectPoint (point: vector_float3): vector_float3; message 'unprojectPoint:';
    procedure setPlaying(newValue: objcbool); message 'setPlaying:';
    function isPlaying: objcbool; message 'isPlaying';
    procedure setLoops(newValue: objcbool); message 'setLoops:';
    function loops: objcbool; message 'loops';
    procedure setPointOfView(newValue: SCNNode); message 'setPointOfView:';
    function pointOfView: SCNNode; message 'pointOfView';
    procedure setAutoenablesDefaultLighting(newValue: objcbool); message 'setAutoenablesDefaultLighting:';
    function autoenablesDefaultLighting: objcbool; message 'autoenablesDefaultLighting';
  end;
{$endif}

