{ Parsed from Foundation.framework NSUserActivity.h }

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
    procedure setRequiredUserInfoKeys(newValue: NSSet); message 'setRequiredUserInfoKeys:'; { available in macos 10.11, ios 9.0, watchos 3.0, tvos 10.0 }
    function requiredUserInfoKeys: NSSet; message 'requiredUserInfoKeys'; { available in macos 10.11, ios 9.0, watchos 3.0, tvos 10.0 }
    procedure setNeedsSave(newValue: objcbool); message 'setNeedsSave:';
    function needsSave: objcbool; message 'needsSave';
    procedure setWebpageURL(newValue: NSURL); message 'setWebpageURL:';
    function webpageURL: NSURL; message 'webpageURL';
    procedure setReferrerURL(newValue: NSURL); message 'setReferrerURL:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function referrerURL: NSURL; message 'referrerURL'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure setExpirationDate(newValue: NSDate); message 'setExpirationDate:'; { available in macos 10.11, ios 9.0, watchos 3.0, tvos 10.0 }
    function expirationDate: NSDate; message 'expirationDate'; { available in macos 10.11, ios 9.0, watchos 3.0, tvos 10.0 }
    procedure setKeywords(newValue: NSSet); message 'setKeywords:'; { available in macos 10.11, ios 9.0, watchos 3.0, tvos 10.0 }
    function keywords: NSSet; message 'keywords'; { available in macos 10.11, ios 9.0, watchos 3.0, tvos 10.0 }
    procedure setSupportsContinuationStreams(newValue: objcbool); message 'setSupportsContinuationStreams:';
    function supportsContinuationStreams: objcbool; message 'supportsContinuationStreams';
    procedure setDelegate(newValue: NSUserActivityDelegateProtocol); message 'setDelegate:';
    function delegate: NSUserActivityDelegateProtocol; message 'delegate';
    procedure setTargetContentIdentifier(newValue: NSString); message 'setTargetContentIdentifier:'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function targetContentIdentifier: NSString; message 'targetContentIdentifier'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    procedure becomeCurrent; message 'becomeCurrent';
    procedure resignCurrent; message 'resignCurrent'; { available in macos 10.11, ios 9.0, watchos 3.0, tvos 10.0 }
    procedure invalidate; message 'invalidate';
    procedure getContinuationStreamsWithCompletionHandler (completionHandler: NSUserActivityGetContinuationStreamsWithCompletionHandlerCallback); message 'getContinuationStreamsWithCompletionHandler:';
    procedure setEligibleForHandoff(newValue: objcbool); message 'setEligibleForHandoff:'; { available in macos 10.11, ios 9.0, watchos 3.0, tvos 10.0 }
    function isEligibleForHandoff: objcbool; message 'isEligibleForHandoff'; { available in macos 10.11, ios 9.0, watchos 3.0, tvos 10.0 }
    procedure setEligibleForSearch(newValue: objcbool); message 'setEligibleForSearch:'; { available in macos 10.11, ios 9.0, watchos 3.0, tvos 10.0 }
    function isEligibleForSearch: objcbool; message 'isEligibleForSearch'; { available in macos 10.11, ios 9.0, watchos 3.0, tvos 10.0 }
    procedure setEligibleForPublicIndexing(newValue: objcbool); message 'setEligibleForPublicIndexing:'; { available in macos 10.11, ios 9.0, watchos 3.0, tvos 10.0 }
    function isEligibleForPublicIndexing: objcbool; message 'isEligibleForPublicIndexing'; { available in macos 10.11, ios 9.0, watchos 3.0, tvos 10.0 }
    procedure setEligibleForPrediction(newValue: objcbool); message 'setEligibleForPrediction:'; { unavailable in  macos, tvos  } { available in  ios 12.0, watchos 5.0  }
    function isEligibleForPrediction: objcbool; message 'isEligibleForPrediction'; { unavailable in  macos, tvos  } { available in  ios 12.0, watchos 5.0  }
    procedure setPersistentIdentifier(newValue: NSUserActivityPersistentIdentifier); message 'setPersistentIdentifier:'; { unavailable in  tvos  } { available in  macos 10.15, ios 12.0, watchos 5.0  }
    function persistentIdentifier: NSUserActivityPersistentIdentifier; message 'persistentIdentifier'; { unavailable in  tvos  } { available in  macos 10.15, ios 12.0, watchos 5.0  }
    class procedure deleteSavedUserActivitiesWithPersistentIdentifiers_completionHandler (persistentIdentifiers: NSArray; handler: NSUserActivityDeleteSavedUserActivitiesWithPersistentIdentifiersCallback); message 'deleteSavedUserActivitiesWithPersistentIdentifiers:completionHandler:'; { unavailable in  tvos  } { available in  macos 10.15, ios 12.0, watchos 5.0  }
    class procedure deleteAllSavedUserActivitiesWithCompletionHandler (handler: NSUserActivityDeleteAllSavedUserActivitiesWithCompletionHandlerCallback); message 'deleteAllSavedUserActivitiesWithCompletionHandler:'; { unavailable in  tvos  } { available in  macos 10.15, ios 12.0, watchos 5.0  }
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
