{ Parsed from GameKit.framework GKAchievementDescription.h }

{ Types from GKAchievementDescription_UI }
{$ifdef TYPES}


{$endif}


{$ifdef CALLBACKS}
type
  GKAchievementDescriptionLoadAchievementDescriptionsWithCompletionHandlerCallback = reference to procedure (descriptions: NSArray; error: NSError); cblock; cdecl;
  GKAchievementDescriptionLoadImageWithCompletionHandlerCallback = reference to procedure (image: UIImage; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKAchievementDescriptionPtr = ^GKAchievementDescription;
{$endif}

{$ifdef CLASSES}

type
  GKAchievementDescription = objcclass external (NSObject, NSCodingProtocol, NSSecureCodingProtocol)
  public
    class procedure loadAchievementDescriptionsWithCompletionHandler (completionHandler: GKAchievementDescriptionLoadAchievementDescriptionsWithCompletionHandlerCallback); message 'loadAchievementDescriptionsWithCompletionHandler:';
    function identifier: NSString; message 'identifier';
    function groupIdentifier: NSString; message 'groupIdentifier'; { available in 10_8, 6_0 }
    function title: NSString; message 'title';
    function achievedDescription: NSString; message 'achievedDescription';
    function unachievedDescription: NSString; message 'unachievedDescription';
    function maximumPoints: NSInteger; message 'maximumPoints';
    function isHidden: objcbool; message 'isHidden';
    function isReplayable: objcbool; message 'isReplayable'; { available in 10_8, 6_0 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef CLASSES}

type
  GKAchievementDescription_UI = objccategory external name 'UI' (GKAchievementDescription)
    {$if defined(TARGET_OS_IPHONE)}
    function image: UIImage; message 'image'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "Use loadImageWithCompletionHandler: instead"';
    procedure loadImageWithCompletionHandler (completionHandler: GKAchievementDescriptionLoadImageWithCompletionHandlerCallback); message 'loadImageWithCompletionHandler:';
    {$else}
    function image_: NSImage; message 'image'; deprecated 'in __MAC_10_8, __MAC_NA, __IPHONE_4_1, __IPHONE_7_0';
    procedure loadImageWithCompletionHandler (completionHandler: GKAchievementDescriptionLoadImageWithCompletionHandlerCallback); message 'loadImageWithCompletionHandler:';
    {$endif}
    {$if defined(TARGET_OS_IPHONE)}
    class function incompleteAchievementImage: UIImage; message 'incompleteAchievementImage';
    class function placeholderCompletedAchievementImage: UIImage; message 'placeholderCompletedAchievementImage';
    {$else}
    class function incompleteAchievementImage: NSImage; message 'incompleteAchievementImage';
    class function placeholderCompletedAchievementImage: NSImage; message 'placeholderCompletedAchievementImage';
    {$endif}
  end;
{$endif}

