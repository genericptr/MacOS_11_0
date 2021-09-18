{ Parsed from GameplayKit.framework GKState.h }

{$ifdef TYPES}
type
  GKStatePtr = ^GKState;
{$endif}

{$ifdef CLASSES}

type
  GKState = objcclass external (NSObject)
  public
    function stateMachine: GKStateMachine; message 'stateMachine';
    class function state: id; message 'state';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function isValidNextState (stateClass: pobjc_class): objcbool; message 'isValidNextState:';
    procedure didEnterWithPreviousState (previousState: GKState); message 'didEnterWithPreviousState:';
    procedure updateWithDeltaTime (seconds: NSTimeInterval); message 'updateWithDeltaTime:';
    procedure willExitWithNextState (nextState: GKState); message 'willExitWithNextState:';
  end;
{$endif}

