{ Parsed from GameplayKit.framework GKSCNNodeComponent.h }

{$ifdef TYPES}
type
  GKSCNNodeComponentPtr = ^GKSCNNodeComponent;
{$endif}

{$ifdef CLASSES}

type
  GKSCNNodeComponent = objcclass external (GKComponent, GKAgentDelegateProtocol)
  public
    class function componentWithNode (node: SCNNode): id; message 'componentWithNode:';
    function initWithNode (node: SCNNode): id; message 'initWithNode:';
    function node: SCNNode; message 'node';

    { Adopted protocols }
    procedure agentDidUpdate (agent: GKAgent); message 'agentDidUpdate:';
    procedure agentWillUpdate (agent: GKAgent); message 'agentWillUpdate:';
  end;
{$endif}

