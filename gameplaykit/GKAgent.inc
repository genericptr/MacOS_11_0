{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKAgent.h }

{$ifdef TYPES}
type
  GKAgentPtr = ^GKAgent;
  GKAgent2DPtr = ^GKAgent2D;
  GKAgent3DPtr = ^GKAgent3D;
  GKAgentDelegateProtocolPtr = ^GKAgentDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKAgentDelegateProtocol = objcprotocol external name 'GKAgentDelegate' (NSObjectProtocol)
  optional
    procedure agentWillUpdate (agent: GKAgent); message 'agentWillUpdate:';
    procedure agentDidUpdate (agent: GKAgent); message 'agentDidUpdate:';
  end;
{$endif}

{$ifdef CLASSES}

type
  GKAgent = objcclass external (GKComponent, NSSecureCodingProtocol)
  public
    procedure setDelegate(newValue: GKAgentDelegateProtocol); message 'setDelegate:';
    function delegate: GKAgentDelegateProtocol; message 'delegate';
    procedure setBehavior(newValue: GKBehavior); message 'setBehavior:';
    function behavior: GKBehavior; message 'behavior';
    procedure setMass(newValue: single); message 'setMass:';
    function mass: single; message 'mass';
    procedure setRadius(newValue: single); message 'setRadius:';
    function radius: single; message 'radius';
    procedure setSpeed(newValue: single); message 'setSpeed:';
    function speed: single; message 'speed';
    procedure setMaxAcceleration(newValue: single); message 'setMaxAcceleration:';
    function maxAcceleration: single; message 'maxAcceleration';
    procedure setMaxSpeed(newValue: single); message 'setMaxSpeed:';
    function maxSpeed: single; message 'maxSpeed';
  end;

type
  GKAgent2D = objcclass external (GKAgent, NSSecureCodingProtocol)
  public
    procedure setPosition(newValue: vector_float2); message 'setPosition:';
    function position: vector_float2; message 'position';
    function velocity: vector_float2; message 'velocity';
    procedure setRotation(newValue: single); message 'setRotation:';
    function rotation: single; message 'rotation';
    procedure updateWithDeltaTime (seconds: NSTimeInterval); message 'updateWithDeltaTime:';
  end;

type
  GKAgent3D = objcclass external (GKAgent)
  public
    procedure setPosition(newValue: vector_float3); message 'setPosition:';
    function position: vector_float3; message 'position';
    function velocity: vector_float3; message 'velocity';
    procedure setRightHanded(newValue: objcbool); message 'setRightHanded:';
    function rightHanded: objcbool; message 'rightHanded';
    procedure setRotation(newValue: matrix_float3x3); message 'setRotation:';
    function rotation: matrix_float3x3; message 'rotation';
    procedure updateWithDeltaTime (seconds: NSTimeInterval); message 'updateWithDeltaTime:';
  end;
{$endif}

