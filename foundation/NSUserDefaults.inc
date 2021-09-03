{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSUserDefaults.h }

{$ifdef TYPES}
type
  NSUserDefaultsPtr = ^NSUserDefaults;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSGlobalDomain: NSString; cvar; external;
  NSArgumentDomain: NSString; cvar; external;
  NSRegistrationDomain: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSUserDefaults = objcclass external (NSObject)
  private
    _kvo_: id;
    _identifier_: CFStringRef;
    _container_: CFStringRef;
    _reserved:array[0..1] of pointer;
  public
    class function standardUserDefaults: NSUserDefaults; message 'standardUserDefaults';
    class procedure resetStandardUserDefaults; message 'resetStandardUserDefaults';
    function init: id; message 'init';
    function initWithSuiteName (suitename: NSString): id; message 'initWithSuiteName:'; { available in macos , ios , watchos , tvos  }
    function initWithUser (username: NSString): id; message 'initWithUser:'; deprecated 'Use -init instead';
    function objectForKey (defaultName: NSString): id; message 'objectForKey:';
    procedure setObject_forKey (value: id; defaultName: NSString); message 'setObject:forKey:';
    procedure removeObjectForKey (defaultName: NSString); message 'removeObjectForKey:';
    function stringForKey (defaultName: NSString): NSString; message 'stringForKey:';
    function arrayForKey (defaultName: NSString): NSArray; message 'arrayForKey:';
    function dictionaryForKey (defaultName: NSString): NSDictionary; message 'dictionaryForKey:';
    function dataForKey (defaultName: NSString): NSData; message 'dataForKey:';
    function stringArrayForKey (defaultName: NSString): NSArray; message 'stringArrayForKey:';
    function integerForKey (defaultName: NSString): NSInteger; message 'integerForKey:';
    function floatForKey (defaultName: NSString): single; message 'floatForKey:';
    function doubleForKey (defaultName: NSString): double; message 'doubleForKey:';
    function boolForKey (defaultName: NSString): objcbool; message 'boolForKey:';
    function URLForKey (defaultName: NSString): NSURL; message 'URLForKey:'; { available in macos , ios , watchos , tvos  }
    procedure setInteger_forKey (value: NSInteger; defaultName: NSString); message 'setInteger:forKey:';
    procedure setFloat_forKey (value: single; defaultName: NSString); message 'setFloat:forKey:';
    procedure setDouble_forKey (value: double; defaultName: NSString); message 'setDouble:forKey:';
    procedure setBool_forKey (value: objcbool; defaultName: NSString); message 'setBool:forKey:';
    procedure setURL_forKey (url: NSURL; defaultName: NSString); message 'setURL:forKey:'; { available in macos , ios , watchos , tvos  }
    procedure registerDefaults (registrationDictionary: NSDictionary); message 'registerDefaults:';
    procedure addSuiteNamed (suiteName: NSString); message 'addSuiteNamed:';
    procedure removeSuiteNamed (suiteName: NSString); message 'removeSuiteNamed:';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation';
    function DomainNames: NSArray; message 'DomainNames';
    function volatileDomainForName (domainName: NSString): NSDictionary; message 'volatileDomainForName:';
    procedure setVolatileDomain_forName (domain: NSDictionary; domainName: NSString); message 'setVolatileDomain:forName:';
    procedure removeVolatileDomainForName (domainName: NSString); message 'removeVolatileDomainForName:';
    function persistentDomainNames: NSArray; message 'persistentDomainNames'; deprecated 'Not recommended';
    function persistentDomainForName (domainName: NSString): NSDictionary; message 'persistentDomainForName:';
    procedure setPersistentDomain_forName (domain: NSDictionary; domainName: NSString); message 'setPersistentDomain:forName:';
    procedure removePersistentDomainForName (domainName: NSString); message 'removePersistentDomainForName:';
    function synchronize: objcbool; message 'synchronize';
    function objectIsForcedForKey (key: NSString): objcbool; message 'objectIsForcedForKey:';
    function objectIsForcedForKey_inDomain (key: NSString; domain: NSString): objcbool; message 'objectIsForcedForKey:inDomain:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSUserDefaultsSizeLimitExceededNotification: NSNotificationName { unavailable in macos }; cvar; external;
  NSUbiquitousUserDefaultsNoCloudAccountNotification: NSNotificationName { unavailable in macos }; cvar; external;
  NSUbiquitousUserDefaultsDidChangeAccountsNotification: NSNotificationName { unavailable in macos }; cvar; external;
  NSUbiquitousUserDefaultsCompletedInitialSyncNotification: NSNotificationName { unavailable in macos }; cvar; external;
  NSUserDefaultsDidChangeNotification: NSNotificationName; cvar; external;
{$endif}

{$if defined(TARGET_OS_OSX)}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSWeekDayNameArray: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSShortWeekDayNameArray: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSMonthNameArray: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSShortMonthNameArray: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSTimeFormatString: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSDateFormatString: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSTimeDateFormatString: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSShortTimeDateFormatString: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSCurrencySymbol: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSDecimalSeparator: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSThousandsSeparator: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSDecimalDigits: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSAMPMDesignation: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSHourNameDesignations: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSYearMonthWeekDesignations: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSEarlierTimeDesignations: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSLaterTimeDesignations: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSThisDayDesignations: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSNextDayDesignations: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSNextNextDayDesignations: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSPriorDayDesignations: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSDateTimeOrdering: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSInternationalCurrencyString: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSShortDateFormatString: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSPositiveCurrencyFormatString: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSNegativeCurrencyFormatString: NSString { unavailable in ios, watchos, tvos }; cvar; external;
{$endif}

{$endif}
