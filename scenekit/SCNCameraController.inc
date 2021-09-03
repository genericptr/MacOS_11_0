{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNCameraController.h }

{$ifdef TYPES}
type
  SCNCameraControllerPtr = ^SCNCameraController;
  SCNCameraControllerDelegateProtocolPtr = ^SCNCameraControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  SCNInteractionMode = NSInteger;
  SCNInteractionModePtr = ^SCNInteractionMode;

const
  SCNInteractionModeFly = 0;
  SCNInteractionModeOrbitTurntable = 1;
  SCNInteractionModeOrbitAngleMapping = 2;
  SCNInteractionModeOrbitCenteredArcball = 3;
  SCNInteractionModeOrbitArcball = 4;
  SCNInteractionModePan = 5;
  SCNInteractionModeTruck = 6;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNCameraControllerDelegateProtocol = objcprotocol external name 'SCNCameraControllerDelegate' (NSObjectProtocol)
  optional
    procedure cameraInertiaWillStartForController (cameraController: SCNCameraController); message 'cameraInertiaWillStartForController:';
    procedure cameraInertiaDidEndForController (cameraController: SCNCameraController); message 'cameraInertiaDidEndForController:';
  end;
{$endif}

{$ifdef CLASSES}

type
  SCNCameraController = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setPointOfView(newValue: SCNNode); message 'setPointOfView:';
    function pointOfView: SCNNode; message 'pointOfView';
    procedure setInteractionMode(newValue: SCNInteractionMode); message 'setInteractionMode:';
    function interactionMode: SCNInteractionMode; message 'interactionMode';
    procedure setTarget(newValue: SCNVector3); message 'setTarget:';
    function target: SCNVector3; message 'target';
    procedure setAutomaticTarget(newValue: objcbool); message 'setAutomaticTarget:';
    function automaticTarget: objcbool; message 'automaticTarget';
    procedure setWorldUp(newValue: SCNVector3); message 'setWorldUp:';
    function worldUp: SCNVector3; message 'worldUp';
    procedure setInertiaEnabled(newValue: objcbool); message 'setInertiaEnabled:';
    function inertiaEnabled: objcbool; message 'inertiaEnabled';
    procedure setInertiaFriction(newValue: single); message 'setInertiaFriction:';
    function inertiaFriction: single; message 'inertiaFriction';
    function isInertiaRunning: objcbool; message 'isInertiaRunning';
    procedure setMinimumVerticalAngle(newValue: single); message 'setMinimumVerticalAngle:';
    function minimumVerticalAngle: single; message 'minimumVerticalAngle';
    procedure setMaximumVerticalAngle(newValue: single); message 'setMaximumVerticalAngle:';
    function maximumVerticalAngle: single; message 'maximumVerticalAngle';
    procedure setMinimumHorizontalAngle(newValue: single); message 'setMinimumHorizontalAngle:';
    function minimumHorizontalAngle: single; message 'minimumHorizontalAngle';
    procedure setMaximumHorizontalAngle(newValue: single); message 'setMaximumHorizontalAngle:';
    function maximumHorizontalAngle: single; message 'maximumHorizontalAngle';
    procedure translateInCameraSpaceByX_Y_Z (deltaX: single; deltaY: single; deltaZ: single); message 'translateInCameraSpaceByX:Y:Z:';
    procedure frameNodes (nodes: NSArray); message 'frameNodes:';
    procedure rotateByX_Y (deltaX: single; deltaY: single); message 'rotateByX:Y:';
    procedure rollBy_aroundScreenPoint_viewport (delta: single; point: CGPoint; viewport: CGSize); message 'rollBy:aroundScreenPoint:viewport:';
    procedure dollyBy_onScreenPoint_viewport (delta: single; point: CGPoint; viewport: CGSize); message 'dollyBy:onScreenPoint:viewport:';
    procedure rollAroundTarget (delta: single); message 'rollAroundTarget:';
    procedure dollyToTarget (delta: single); message 'dollyToTarget:';
    procedure clearRoll; message 'clearRoll';
    procedure stopInertia; message 'stopInertia';
    procedure beginInteraction_withViewport (location: CGPoint; viewport: CGSize); message 'beginInteraction:withViewport:';
    procedure continueInteraction_withViewport_sensitivity (location: CGPoint; viewport: CGSize; sensitivity: CGFloat); message 'continueInteraction:withViewport:sensitivity:';
    procedure endInteraction_withViewport_velocity (location: CGPoint; viewport: CGSize; velocity: CGPoint); message 'endInteraction:withViewport:velocity:';
  end;
{$endif}

