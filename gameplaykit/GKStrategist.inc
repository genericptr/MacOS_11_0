{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKStrategist.h }

{$ifdef TYPES}
type
  GKStrategistProtocolPtr = ^GKStrategistProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKStrategistProtocol = objcprotocol external name 'GKStrategist' (NSObjectProtocol)
    procedure setGameModel(newValue: id); message 'setGameModel:';
    function gameModel: id; message 'gameModel';
    procedure setRandomSource(newValue: id); message 'setRandomSource:';
    function randomSource: id; message 'randomSource';
    function bestMoveForActivePlayer: id; message 'bestMoveForActivePlayer';
  end;
{$endif}

