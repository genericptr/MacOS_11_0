{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKMonteCarloStrategist.h }

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
    function bestMoveForActivePlayer: id; message 'bestMoveForActivePlayer';
    function gameModel: id; message 'gameModel';
    function randomSource: id; message 'randomSource';
    procedure setGameModel (newValue: id); message 'setGameModel:';
    procedure setRandomSource (newValue: id); message 'setRandomSource:';
  end;
{$endif}

