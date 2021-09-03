{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVPlayerInterstitialEventController.h }

{$ifdef TYPES}
type
  AVPlayerInterstitialEventPtr = ^AVPlayerInterstitialEvent;
  AVPlayerInterstitialEventObserverPtr = ^AVPlayerInterstitialEventObserver;
  AVPlayerInterstitialEventControllerPtr = ^AVPlayerInterstitialEventController;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVPlayerInterstitialEventRestrictions = NSUInteger;
  AVPlayerInterstitialEventRestrictionsPtr = ^AVPlayerInterstitialEventRestrictions;

const
  AVPlayerInterstitialEventRestrictionNone = 0;
  AVPlayerInterstitialEventRestrictionConstrainsSeekingForwardInPrimaryContent = 1 shl 0;
  AVPlayerInterstitialEventRestrictionRequiresPlaybackAtPreferredRateForAdvancement = 1 shl 2;
  AVPlayerInterstitialEventRestrictionDefaultPolicy = AVPlayerInterstitialEventRestrictionNone;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerInterstitialEvent = objcclass external (NSObject)
  public
    class function interstitialEventWithPrimaryItem_time_templateItems_restrictions_resumptionOffset (primaryItem: AVPlayerItem; time: CMTime; templateItems: NSArray; restrictions: AVPlayerInterstitialEventRestrictions; resumptionOffset: CMTime): id; message 'interstitialEventWithPrimaryItem:time:templateItems:restrictions:resumptionOffset:';
    class function playerInterstitialEventWithPrimaryItem_time_interstitialTemplateItems_restrictions_resumptionOffset (primaryItem: AVPlayerItem; time: CMTime; interstitialTemplateItems: NSArray; restrictions: AVPlayerInterstitialEventRestrictions; resumptionOffset: CMTime): id; message 'playerInterstitialEventWithPrimaryItem:time:interstitialTemplateItems:restrictions:resumptionOffset:';
    class function interstitialEventWithPrimaryItem_date_templateItems_restrictions_resumptionOffset (primaryItem: AVPlayerItem; date: NSDate; templateItems: NSArray; restrictions: AVPlayerInterstitialEventRestrictions; resumptionOffset: CMTime): id; message 'interstitialEventWithPrimaryItem:date:templateItems:restrictions:resumptionOffset:';
    class function playerInterstitialEventWithPrimaryItem_date_interstitialTemplateItems_restrictions_resumptionOffset (primaryItem: AVPlayerItem; date: NSDate; interstitialTemplateItems: NSArray; restrictions: AVPlayerInterstitialEventRestrictions; resumptionOffset: CMTime): id; message 'playerInterstitialEventWithPrimaryItem:date:interstitialTemplateItems:restrictions:resumptionOffset:';
    function primaryItem: AVPlayerItem; message 'primaryItem';
    function time: CMTime; message 'time';
    function date: NSDate; message 'date';
    function templateItems: NSArray; message 'templateItems';
    function interstitialTemplateItems: NSArray; message 'interstitialTemplateItems';
    function restrictions: AVPlayerInterstitialEventRestrictions; message 'restrictions';
    function resumptionOffset: CMTime; message 'resumptionOffset';
  end;

type
  AVPlayerInterstitialEventObserver = objcclass external (NSObject)
  public
    class function interstitialEventObserverWithPrimaryPlayer (primaryPlayer: AVPlayer): id; message 'interstitialEventObserverWithPrimaryPlayer:';
    class function playerInterstitialEventObserverWithPrimaryPlayer (primaryPlayer: AVPlayer): id; message 'playerInterstitialEventObserverWithPrimaryPlayer:';
    function initWithPrimaryPlayer (primaryPlayer: AVPlayer): id; message 'initWithPrimaryPlayer:'; { NS_DESIGNATED_INITIALIZER }
    function primaryPlayer: AVPlayer; message 'primaryPlayer';
    function interstitialPlayer: AVQueuePlayer; message 'interstitialPlayer';
    function events: NSArray; message 'events';
    function interstitialEvents: NSArray; message 'interstitialEvents';
    function currentEvent: AVPlayerInterstitialEvent; message 'currentEvent';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVPlayerInterstitialEventObserverEventsDidChangeNotification: NSNotificationName { available in macos , ios , tvos  }; cvar; external;
  AVPlayerInterstitialEventObserverCurrentEventDidChangeNotification: NSNotificationName { available in macos , ios , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerInterstitialEventController = objcclass external (AVPlayerInterstitialEventObserver)
  public
    class function interstitialEventControllerWithPrimaryPlayer (primaryPlayer_: AVPlayer): id; message 'interstitialEventControllerWithPrimaryPlayer:';
    class function playerInterstitialEventControllerWithPrimaryPlayer (primaryPlayer_: AVPlayer): id; message 'playerInterstitialEventControllerWithPrimaryPlayer:';
    function initWithPrimaryPlayer (primaryPlayer_: AVPlayer): id; message 'initWithPrimaryPlayer:';
    procedure setEvents(newValue: NSArray); message 'setEvents:';
    function events: NSArray; message 'events';
    procedure setInterstitialEvents(newValue: NSArray); message 'setInterstitialEvents:';
    function interstitialEvents: NSArray; message 'interstitialEvents';
    procedure cancelCurrentEventWithResumptionOffset (resumptionOffset: CMTime); message 'cancelCurrentEventWithResumptionOffset:';
  end;


type
  AVPlayer_AVPlayerInterstitialSupport = objccategory external name 'AVPlayerInterstitialSupport' (AVPlayer)
  end;

type
  AVPlayerInterstitialSupport = objccategory external (AVPlayerItem)
    procedure setAutomaticallyHandlesInterstitialEvents(newValue: objcbool); message 'setAutomaticallyHandlesInterstitialEvents:'; { available in macos , ios , tvos  }
    function automaticallyHandlesInterstitialEvents: objcbool; message 'automaticallyHandlesInterstitialEvents'; { available in macos , ios , tvos  }
    function templatePlayerItem: AVPlayerItem; message 'templatePlayerItem'; { available in macos , ios , tvos  }
  end;
{$endif}

{$else}
{$endif}
