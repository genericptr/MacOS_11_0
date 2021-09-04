{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSUserActivity.h }

{$ifdef CALLBACKS}
type
  NSUserActivityGetContinuationStreamsWithCompletionHandlerCallback = reference to procedure (inputStream: NSInputStream; outputStream: NSOutputStream; error: NSError); cblock; cdecl;
  NSUserActivityDeleteSavedUserActivitiesWithPersistentIdentifiersCallback = reference to procedure; cblock; cdecl;
  NSUserActivityDeleteAllSavedUserActivitiesWithCompletionHandlerCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSUserActivityPtr = ^NSUserActivity;
  NSUserActivityDelegateProtocolPtr = ^NSUserActivityDelegateProtocol;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef TYPES}
type
  NSUserActivityPersistentIdentifier = NSString;
  NSUserActivityPersistentIdentifierPtr = ^NSUserActivityPersistentIdentifier;
{$endif}

{$ifdef CLASSES}

type
  NSUserActivity = objcclass external (NSObject)
  public
    function initWithActivityType (activityType: NSString): id; message 'initWithActivityType:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init'; deprecated 'Use initWithActivityType: with a specific activity type string';
    function activityType: NSString; message 'activityType';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
    procedure addUserInfoEntriesFromDictionary (otherDictionary: NSDictionary); message 'addUserInfoEntriesFromDictionary:';
    procedure setRequiredUserInfoKeys(newValue: NSSet); message 'setRequiredUserInfoKeys:'; { available in macos , ios , watchos , tvos  }
    function requiredUserInfoKeys: NSSet; message 'requiredUserInfoKeys'; { available in macos , ios , watchos , tvos  }
    procedure setNeedsSave(newValue: objcbool); message 'setNeedsSave:';
    function needsSave: objcbool; message 'needsSave';
    procedure setWebpageURL(newValue: NSURL); message 'setWebpageURL:';
    function webpageURL: NSURL; message 'webpageURL';
    procedure setReferrerURL(newValue: NSURL); message 'setReferrerURL:'; { available in macos , ios , watchos , tvos  }
    function referrerURL: NSURL; message 'referrerURL'; { available in macos , ios , watchos , tvos  }
    procedure setExpirationDate(newValue: NSDate); message 'setExpirationDate:'; { available in macos , ios , watchos , tvos  }
    function expirationDate: NSDate; message 'expirationDate'; { available in macos , ios , watchos , tvos  }
    procedure setKeywords(newValue: NSSet); message 'setKeywords:'; { available in macos , ios , watchos , tvos  }
    function keywords: NSSet; message 'keywords'; { available in macos , ios , watchos , tvos  }
    procedure setSupportsContinuationStreams(newValue: objcbool); message 'setSupportsContinuationStreams:';
    function supportsContinuationStreams: objcbool; message 'supportsContinuationStreams';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setTargetContentIdentifier(newValue: NSString); message 'setTargetContentIdentifier:'; { available in macos , ios , watchos , tvos  }
    function targetContentIdentifier: NSString; message 'targetContentIdentifier'; { available in macos , ios , watchos , tvos  }
    procedure becomeCurrent; message 'becomeCurrent';
    procedure resignCurrent; message 'resignCurrent'; { available in macos , ios , watchos , tvos  }
    procedure invalidate; message 'invalidate';
    procedure getContinuationStreamsWithCompletionHandler (completionHandler: NSUserActivityGetContinuationStreamsWithCompletionHandlerCallback); message 'getContinuationStreamsWithCompletionHandler:';
    procedure setEligibleForHandoff(newValue: objcbool); message 'setEligibleForHandoff:'; { available in macos , ios , watchos , tvos  }
    function isEligibleForHandoff: objcbool; message 'isEligibleForHandoff'; { available in macos , ios , watchos , tvos  }
    procedure setEligibleForSearch(newValue: objcbool); message 'setEligibleForSearch:'; { available in macos , ios , watchos , tvos  }
    function isEligibleForSearch: objcbool; message 'isEligibleForSearch'; { available in macos , ios , watchos , tvos  }
    procedure setEligibleForPublicIndexing(newValue: objcbool); message 'setEligibleForPublicIndexing:'; { available in macos , ios , watchos , tvos  }
    function isEligibleForPublicIndexing: objcbool; message 'isEligibleForPublicIndexing'; { available in macos , ios , watchos , tvos  }
    procedure setEligibleForPrediction(newValue: objcbool); message 'setEligibleForPrediction:'; { unavailable in  macos, tvos  }
    function isEligibleForPrediction: objcbool; message 'isEligibleForPrediction'; { unavailable in  macos, tvos  }
    procedure setPersistentIdentifier(newValue: NSUserActivityPersistentIdentifier); message 'setPersistentIdentifier:'; { unavailable in  tvos  }
    function persistentIdentifier: NSUserActivityPersistentIdentifier; message 'persistentIdentifier'; { unavailable in  tvos  }
    class procedure deleteSavedUserActivitiesWithPersistentIdentifiers_completionHandler (persistentIdentifiers: NSArray; handler: NSUserActivityDeleteSavedUserActivitiesWithPersistentIdentifiersCallback); message 'deleteSavedUserActivitiesWithPersistentIdentifiers:completionHandler:'; { unavailable in  tvos  }
    class procedure deleteAllSavedUserActivitiesWithCompletionHandler (handler: NSUserActivityDeleteAllSavedUserActivitiesWithCompletionHandlerCallback); message 'deleteAllSavedUserActivitiesWithCompletionHandler:'; { unavailable in  tvos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSUserActivityTypeBrowsingWeb: NSString; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  NSUserActivityDelegateProtocol = objcprotocol external name 'NSUserActivityDelegate' (NSObjectProtocol)
  optional
    procedure userActivityWillSave (userActivity: NSUserActivity); message 'userActivityWillSave:';
    procedure userActivityWasContinued (userActivity: NSUserActivity); message 'userActivityWasContinued:';
    procedure userActivity_didReceiveInputStream_outputStream (userActivity: NSUserActivity; inputStream: NSInputStream; outputStream: NSOutputStream); message 'userActivity:didReceiveInputStream:outputStream:';
  end;
{$endif}

{$endif}
