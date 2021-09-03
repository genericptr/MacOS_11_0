{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKMinmaxStrategist.h }

{$ifdef TYPES}
type
  GKMinmaxStrategistPtr = ^GKMinmaxStrategist;
{$endif}

{$ifdef CLASSES}

type
  GKMinmaxStrategist = objcclass external (NSObject, GKStrategistProtocol)
  public
    procedure setMaxLookAheadDepth(newValue: NSInteger); message 'setMaxLookAheadDepth:';
    function maxLookAheadDepth: NSInteger; message 'maxLookAheadDepth';
    function bestMoveForPlayer (player: id): id; message 'bestMoveForPlayer:';
    function randomMoveForPlayer_fromNumberOfBestMoves (player: id; numMovesToConsider: NSInteger): id; message 'randomMoveForPlayer:fromNumberOfBestMoves:';

    { Adopted protocols }
    function bestMoveForActivePlayer: id; message 'bestMoveForActivePlayer';
    function gameModel: id; message 'gameModel';
    function randomSource: id; message 'randomSource';
    procedure setGameModel (newValue: id); message 'setGameModel:';
    procedure setRandomSource (newValue: id); message 'setRandomSource:';
  end;
{$endif}

