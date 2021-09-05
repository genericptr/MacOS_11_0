{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKGameModel.h }

{$ifdef TYPES}
type
  GKGameModelUpdateProtocolPtr = ^GKGameModelUpdateProtocol;
  GKGameModelPlayerProtocolPtr = ^GKGameModelPlayerProtocol;
  GKGameModelProtocolPtr = ^GKGameModelProtocol;
{$endif}

{$ifdef TYPES}
const
  GKGameModelMaxScore = 1 << 24;
  GKGameModelMinScore = -(1 << 24);
{$endif}

{$ifdef PROTOCOLS}

type
  GKGameModelUpdateProtocol = objcprotocol external name 'GKGameModelUpdate' (NSObjectProtocol)
    procedure setValue(newValue: NSInteger); message 'setValue:';
    function value: NSInteger; message 'value';
  end;

type
  GKGameModelPlayerProtocol = objcprotocol external name 'GKGameModelPlayer' (NSObjectProtocol)
    function playerId: NSInteger; message 'playerId';
  end;

type
  GKGameModelProtocol = objcprotocol external name 'GKGameModel' (NSObjectProtocol, NSCopyingProtocol)
    function players: NSArray; message 'players';
    function activePlayer: GKGameModelPlayerProtocol; message 'activePlayer';
    procedure setGameModel (gameModel: GKGameModelProtocol); message 'setGameModel:';
    function gameModelUpdatesForPlayer (player: GKGameModelPlayerProtocol): NSArray; message 'gameModelUpdatesForPlayer:';
    procedure applyGameModelUpdate (gameModelUpdate: GKGameModelUpdateProtocol); message 'applyGameModelUpdate:';
  optional
    function scoreForPlayer (player: GKGameModelPlayerProtocol): NSInteger; message 'scoreForPlayer:';
    function isWinForPlayer (player: GKGameModelPlayerProtocol): objcbool; message 'isWinForPlayer:';
    function isLossForPlayer (player: GKGameModelPlayerProtocol): objcbool; message 'isLossForPlayer:';
    procedure unapplyGameModelUpdate (gameModelUpdate: GKGameModelUpdateProtocol); message 'unapplyGameModelUpdate:';
  end;
{$endif}

