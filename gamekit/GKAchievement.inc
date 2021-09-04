{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKAchievement.h }

{$ifdef CALLBACKS}
type
  GKAchievementLoadAchievementsWithCompletionHandlerCallback = reference to procedure (achievements: NSArray; error: NSError); cblock; cdecl;
  GKAchievementResetAchievementsWithCompletionHandlerCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKAchievementReportAchievementsCallback = reference to procedure (error: NSError); cblock; cdecl;
  GKAchievementReportAchievementWithCompletionHandlerCallback = reference to procedure (error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKAchievementPtr = ^GKAchievement;
{$endif}

{$ifdef CLASSES}

type
  GKAchievement = objcclass external (NSObject, NSCodingProtocol, NSSecureCodingProtocol)
  public
    class procedure loadAchievementsWithCompletionHandler (completionHandler: GKAchievementLoadAchievementsWithCompletionHandlerCallback); message 'loadAchievementsWithCompletionHandler:';
    class procedure resetAchievementsWithCompletionHandler (completionHandler: GKAchievementResetAchievementsWithCompletionHandlerCallback); message 'resetAchievementsWithCompletionHandler:';
    function initWithIdentifier (identifier: NSString): id; message 'initWithIdentifier:';
    function initWithIdentifier_player (identifier: NSString; player: GKPlayer): id; message 'initWithIdentifier:player:'; { available in 10_10, 8_0 }
    class procedure reportAchievements_withCompletionHandler (achievements: NSArray; completionHandler: GKAchievementReportAchievementsCallback); message 'reportAchievements:withCompletionHandler:'; { available in 10_8, 6_0 }
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    procedure setPercentComplete(newValue: double); message 'setPercentComplete:';
    function percentComplete: double; message 'percentComplete';
    function isCompleted: objcbool; message 'isCompleted';
    function lastReportedDate: NSDate; message 'lastReportedDate';
    procedure setShowsCompletionBanner(newValue: objcbool); message 'setShowsCompletionBanner:'; { available in 10_8, 5_0 }
    function showsCompletionBanner: objcbool; message 'showsCompletionBanner'; { available in 10_8, 5_0 }
    function player: GKPlayer; message 'player'; { available in 10_10, 8_0 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  GKAchievement_Deprecated = objccategory external name 'Deprecated' (GKAchievement)
    procedure reportAchievementWithCompletionHandler (completionHandler: GKAchievementReportAchievementWithCompletionHandlerCallback); message 'reportAchievementWithCompletionHandler:'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "Use +reportAchievements:withCompletionHandler:"';
    function isHidden: objcbool; message 'isHidden'; deprecated 'in 10_8, 10_10, 4_1, 6_0, "Use isHidden on the GKAchievementDescription class instead"';
  end;

type
  GKAchievement_Obsoleted = objccategory external name 'Obsoleted' (GKAchievement)
    function initWithIdentifier_forPlayer (identifier_: NSString; playerID: NSString): id; message 'initWithIdentifier:forPlayer:'; deprecated 'in 7_0, 8_0, "This is never invoked and its implementation does nothing, use initWithIdentifier:player:"';
    function playerID: NSString; message 'playerID'; deprecated 'in 7_0, 8_0, "This will return a null string, use player instead"';
  end;
{$endif}

