{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSUbiquitousKeyValueStore.h }

{$ifdef TYPES}
type
  NSUbiquitousKeyValueStorePtr = ^NSUbiquitousKeyValueStore;
{$endif}

{$ifdef CLASSES}

type
  NSUbiquitousKeyValueStore = objcclass external (NSObject)
  private
    _private1: id;
    _private2: id;
    _private3: id;
    _private4: pointer;
    _reserved:array[0..2] of pointer;
    _daemonWakeToken: cint;
    {$if defined(TARGET_OS_OSX) or defined(TARGET_OS_MACCATALYST)}
    _disabledSuddenTermination: objcbool;
    {$endif}
  public
    class function defaultStore: NSUbiquitousKeyValueStore; message 'defaultStore';
    function objectForKey (aKey: NSString): id; message 'objectForKey:';
    procedure setObject_forKey (anObject: id; aKey: NSString); message 'setObject:forKey:';
    procedure removeObjectForKey (aKey: NSString); message 'removeObjectForKey:';
    function stringForKey (aKey: NSString): NSString; message 'stringForKey:';
    function arrayForKey (aKey: NSString): NSArray; message 'arrayForKey:';
    function dictionaryForKey (aKey: NSString): NSDictionary; message 'dictionaryForKey:';
    function dataForKey (aKey: NSString): NSData; message 'dataForKey:';
    function longLongForKey (aKey: NSString): clonglong; message 'longLongForKey:';
    function doubleForKey (aKey: NSString): double; message 'doubleForKey:';
    function boolForKey (aKey: NSString): objcbool; message 'boolForKey:';
    procedure setString_forKey (aString: NSString; aKey: NSString); message 'setString:forKey:';
    procedure setData_forKey (aData: NSData; aKey: NSString); message 'setData:forKey:';
    procedure setArray_forKey (anArray: NSArray; aKey: NSString); message 'setArray:forKey:';
    procedure setDictionary_forKey (aDictionary: NSDictionary; aKey: NSString); message 'setDictionary:forKey:';
    procedure setLongLong_forKey (value: clonglong; aKey: NSString); message 'setLongLong:forKey:';
    procedure setDouble_forKey (value: double; aKey: NSString); message 'setDouble:forKey:';
    procedure setBool_forKey (value: objcbool; aKey: NSString); message 'setBool:forKey:';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation';
    function synchronize: objcbool; message 'synchronize';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSUbiquitousKeyValueStoreDidChangeExternallyNotification: NSNotificationName { available in macos , ios , watchos , tvos  }; cvar; external;
  NSUbiquitousKeyValueStoreChangeReasonKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSUbiquitousKeyValueStoreChangedKeysKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

