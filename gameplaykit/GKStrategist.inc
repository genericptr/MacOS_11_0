{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKStrategist.h }

{$ifdef TYPES}
type
  GKStrategistProtocolPtr = ^GKStrategistProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKStrategistProtocol = objcprotocol external name 'GKStrategist' (NSObjectProtocol)
    procedure setGameModel(newValue: GKGameModelProtocol); message 'setGameModel:';
    function gameModel: GKGameModelProtocol; message 'gameModel';
    procedure setRandomSource(newValue: GKRandomProtocol); message 'setRandomSource:';
    function randomSource: GKRandomProtocol; message 'randomSource';
    function bestMoveForActivePlayer: GKGameModelUpdateProtocol; message 'bestMoveForActivePlayer';
  end;
{$endif}

