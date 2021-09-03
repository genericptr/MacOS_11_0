{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKSKNodeComponent.h }

{$ifdef TYPES}
type
  GKSKNodeComponentPtr = ^GKSKNodeComponent;
{$endif}

{$ifdef CLASSES}

type
  GKSKNodeComponent = objcclass external (GKComponent, GKAgentDelegateProtocol)
  public
    class function componentWithNode (node: SKNode): id; message 'componentWithNode:';
    function initWithNode (node: SKNode): id; message 'initWithNode:';
    procedure setNode(newValue: SKNode); message 'setNode:';
    function node: SKNode; message 'node';

    { Adopted protocols }
    procedure agentDidUpdate (agent: GKAgent); message 'agentDidUpdate:';
    procedure agentWillUpdate (agent: GKAgent); message 'agentWillUpdate:';
  end;
{$endif}

