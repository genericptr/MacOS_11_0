{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNPhysicsWorld.h }

{$ifdef TYPES}
type
  SCNPhysicsWorldPtr = ^SCNPhysicsWorld;
  SCNPhysicsContactDelegateProtocolPtr = ^SCNPhysicsContactDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  SCNPhysicsTestOption = NSString;
  SCNPhysicsTestOptionPtr = ^SCNPhysicsTestOption;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNPhysicsTestCollisionBitMaskKey: SCNPhysicsTestOption { available in macos  }; cvar; external;
  SCNPhysicsTestSearchModeKey: SCNPhysicsTestOption { available in macos  }; cvar; external;
  SCNPhysicsTestBackfaceCullingKey: SCNPhysicsTestOption { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCNPhysicsTestSearchMode = NSString;
  SCNPhysicsTestSearchModePtr = ^SCNPhysicsTestSearchMode;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNPhysicsTestSearchModeAny: SCNPhysicsTestSearchMode { available in macos  }; cvar; external;
  SCNPhysicsTestSearchModeClosest: SCNPhysicsTestSearchMode { available in macos  }; cvar; external;
  SCNPhysicsTestSearchModeAll: SCNPhysicsTestSearchMode { available in macos  }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNPhysicsContactDelegateProtocol = objcprotocol external name 'SCNPhysicsContactDelegate' (NSObjectProtocol)
  optional
    procedure physicsWorld_didBeginContact (world: SCNPhysicsWorld; contact: SCNPhysicsContact); message 'physicsWorld:didBeginContact:';
    procedure physicsWorld_didUpdateContact (world: SCNPhysicsWorld; contact: SCNPhysicsContact); message 'physicsWorld:didUpdateContact:';
    procedure physicsWorld_didEndContact (world: SCNPhysicsWorld; contact: SCNPhysicsContact); message 'physicsWorld:didEndContact:';
  end;
{$endif}

{$ifdef CLASSES}

type
  SCNPhysicsWorld = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    procedure setGravity(newValue: SCNVector3); message 'setGravity:';
    function gravity: SCNVector3; message 'gravity';
    procedure setSpeed(newValue: CGFloat); message 'setSpeed:';
    function speed: CGFloat; message 'speed';
    procedure setTimeStep(newValue: NSTimeInterval); message 'setTimeStep:';
    function timeStep: NSTimeInterval; message 'timeStep';
    procedure setContactDelegate(newValue: id); message 'setContactDelegate:';
    function contactDelegate: id; message 'contactDelegate';
    procedure addBehavior (behavior: SCNPhysicsBehavior); message 'addBehavior:';
    procedure removeBehavior (behavior: SCNPhysicsBehavior); message 'removeBehavior:';
    procedure removeAllBehaviors; message 'removeAllBehaviors';
    function allBehaviors: NSArray; message 'allBehaviors';
    function rayTestWithSegmentFromPoint_toPoint_options (origin: SCNVector3; dest: SCNVector3; options: NSDictionary): NSArray; message 'rayTestWithSegmentFromPoint:toPoint:options:';
    function contactTestBetweenBody_andBody_options (bodyA: SCNPhysicsBody; bodyB: SCNPhysicsBody; options: NSDictionary): NSArray; message 'contactTestBetweenBody:andBody:options:';
    function contactTestWithBody_options (body: SCNPhysicsBody; options: NSDictionary): NSArray; message 'contactTestWithBody:options:';
    function convexSweepTestWithShape_fromTransform_toTransform_options (shape: SCNPhysicsShape; from: SCNMatrix4; to_: SCNMatrix4; options: NSDictionary): NSArray; message 'convexSweepTestWithShape:fromTransform:toTransform:options:';
    procedure updateCollisionPairs; message 'updateCollisionPairs';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

