{ Parsed from GameplayKit.framework GKMonteCarloStrategist.h }

{$ifdef TYPES}
type
  GKMonteCarloStrategistPtr = ^GKMonteCarloStrategist;
{$endif}

{$ifdef CLASSES}

type
  GKMonteCarloStrategist = objcclass external (NSObject, GKStrategistProtocol)
  public
    procedure setBudget(newValue: NSUInteger); message 'setBudget:';
    function budget: NSUInteger; message 'budget';
    procedure setExplorationParameter(newValue: NSUInteger); message 'setExplorationParameter:';
    function explorationParameter: NSUInteger; message 'explorationParameter';

    { Adopted protocols }
    function bestMoveForActivePlayer: GKGameModelUpdateProtocol; message 'bestMoveForActivePlayer';
    function gameModel: GKGameModelProtocol; message 'gameModel';
    function randomSource: GKRandomProtocol; message 'randomSource';
    procedure setGameModel (newValue: GKGameModelProtocol); message 'setGameModel:';
    procedure setRandomSource (newValue: GKRandomProtocol); message 'setRandomSource:';
  end;
{$endif}

