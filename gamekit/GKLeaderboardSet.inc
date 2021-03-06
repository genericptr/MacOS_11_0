{ Parsed from GameKit.framework GKLeaderboardSet.h }

{ Types from GKLeaderboardSet_UI }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  GKLeaderboardSetLoadLeaderboardSetsWithCompletionHandlerCallback = reference to procedure (leaderboardSets: NSArray; error: NSError); cblock; cdecl;
  GKLeaderboardSetLoadLeaderboardsWithHandlerCallback = reference to procedure (leaderboards: NSArray; error: NSError); cblock; cdecl;
  GKLeaderboardSetLoadLeaderboardsWithCompletionHandlerCallback = reference to procedure (leaderboards: NSArray; error: NSError); cblock; cdecl;
  GKLeaderboardSetLoadImageWithCompletionHandlerCallback = reference to procedure (image: UIImage; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKLeaderboardSetPtr = ^GKLeaderboardSet;
{$endif}

{$ifdef CLASSES}

type
  GKLeaderboardSet = objcclass external (NSObject, NSCodingProtocol, NSSecureCodingProtocol)
  public
    function title: NSString; message 'title';
    function groupIdentifier: NSString; message 'groupIdentifier';
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    class procedure loadLeaderboardSetsWithCompletionHandler (completionHandler: GKLeaderboardSetLoadLeaderboardSetsWithCompletionHandlerCallback); message 'loadLeaderboardSetsWithCompletionHandler:'; { available in macos 10.10, ios 7.0 }
    procedure loadLeaderboardsWithHandler (handler: GKLeaderboardSetLoadLeaderboardsWithHandlerCallback); message 'loadLeaderboardsWithHandler:'; { available in ios 14.0, macos 11.0, tvos 14.0, watchos 7.0 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  GKLeaderboardSet_Deprecated = objccategory external name 'Deprecated' (GKLeaderboardSet)
    procedure loadLeaderboardsWithCompletionHandler (completionHandler: GKLeaderboardSetLoadLeaderboardsWithCompletionHandlerCallback); message 'loadLeaderboardsWithCompletionHandler:'; deprecated 'Use loadLeaderboardsWithHandler: instead.';
  end;

type
  GKLeaderboardSet_UI = objccategory external name 'UI' (GKLeaderboardSet)
    {$if defined(TARGET_OS_IPHONE)}
    procedure loadImageWithCompletionHandler (completionHandler: GKLeaderboardSetLoadImageWithCompletionHandlerCallback); message 'loadImageWithCompletionHandler:';
    {$else}
    procedure loadImageWithCompletionHandler (completionHandler: GKLeaderboardSetLoadImageWithCompletionHandlerCallback); message 'loadImageWithCompletionHandler:';
    {$endif}
  end;
{$endif}

