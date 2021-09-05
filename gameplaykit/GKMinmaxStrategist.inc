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
    function bestMoveForPlayer (player: GKGameModelPlayerProtocol): id; message 'bestMoveForPlayer:';
    function randomMoveForPlayer_fromNumberOfBestMoves (player: GKGameModelPlayerProtocol; numMovesToConsider: NSInteger): id; message 'randomMoveForPlayer:fromNumberOfBestMoves:';

    { Adopted protocols }
    function bestMoveForActivePlayer: GKGameModelUpdateProtocol; message 'bestMoveForActivePlayer';
    function gameModel: GKGameModelProtocol; message 'gameModel';
    function randomSource: GKRandomProtocol; message 'randomSource';
    procedure setGameModel (newValue: GKGameModelProtocol); message 'setGameModel:';
    procedure setRandomSource (newValue: GKRandomProtocol); message 'setRandomSource:';
  end;
{$endif}

