{ Parsed from GameplayKit.framework GKStateMachine.h }

{$ifdef TYPES}
type
  GKStateMachinePtr = ^GKStateMachine;
{$endif}

{$ifdef CLASSES}

type
  GKStateMachine = objcclass external (NSObject)
  public
    function currentState: GKState; message 'currentState';
    class function stateMachineWithStates (states: NSArray): id; message 'stateMachineWithStates:';
    function initWithStates (states: NSArray): id; message 'initWithStates:'; { NS_DESIGNATED_INITIALIZER }
    procedure updateWithDeltaTime (sec: NSTimeInterval); message 'updateWithDeltaTime:';
    function stateForClass (stateClass: pobjc_class): GKState; message 'stateForClass:';
    function canEnterState (stateClass: pobjc_class): objcbool; message 'canEnterState:';
    function enterState (stateClass: pobjc_class): objcbool; message 'enterState:';
  end;
{$endif}

