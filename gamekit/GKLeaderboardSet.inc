{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKLeaderboardSet.h }

{ Types from GKLeaderboardSet_UI }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  GKLeaderboardSetLoadLeaderboardSetsWithCompletionHandlerCallback = reference to function (leaderboardSets: NSArray; error: NSError): pointer; cblock; cdecl;
  GKLeaderboardSetLoadLeaderboardsWithHandlerCallback = reference to function (leaderboards: NSArray; error: NSError): pointer; cblock; cdecl;
  GKLeaderboardSetLoadLeaderboardsWithCompletionHandlerCallback = reference to function (leaderboards: NSArray; error: NSError): pointer; cblock; cdecl;
  GKLeaderboardSetLoadImageWithCompletionHandlerCallback = reference to function (image: UIImage; error: NSError): pointer; cblock; cdecl;
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
    class procedure loadLeaderboardSetsWithCompletionHandler (completionHandler: GKLeaderboardSetLoadLeaderboardSetsWithCompletionHandlerCallback); message 'loadLeaderboardSetsWithCompletionHandler:'; { available in 10_10, 7_0 }
    procedure loadLeaderboardsWithHandler (handler: GKLeaderboardSetLoadLeaderboardsWithHandlerCallback); message 'loadLeaderboardsWithHandler:'; { available in ios , macos , tvos , watchos  }

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

