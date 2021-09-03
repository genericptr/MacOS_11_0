{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSProcessInfo.h }

{$ifdef CALLBACKS}
type
  NSProcessInfoPerformActivityWithOptionsCallback = reference to function : pointer; cblock; cdecl;
  NSProcessInfoPerformExpiringActivityWithReasonCallback = reference to function (expired: objcbool): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSProcessInfoPtr = ^NSProcessInfo;
{$endif}

{$ifdef TYPES}
const
  NSWindowsNTOperatingSystem = 1;
  NSWindows95OperatingSystem = 2;
  NSSolarisOperatingSystem = 3;
  NSHPUXOperatingSystem = 4;
  NSMACHOperatingSystem = 5;
  NSSunOSOperatingSystem = 6;
  NSOSF1OperatingSystem = 7;

type
  NSOperatingSystemVersion = record
    majorVersion: NSInteger;
    minorVersion: NSInteger;
    patchVersion: NSInteger;
  end;
type
  NSOperatingSystemVersionPtr = ^NSOperatingSystemVersion;
{$endif}

{$ifdef CLASSES}

type
  NSProcessInfo = objcclass external (NSObject)
  private
    environment: NSDictionary;
    arguments: NSArray;
    hostName: NSString;
    name: NSString;
    automaticTerminationOptOutCounter: NSInteger;
  public
    class function processInfo: NSProcessInfo; message 'processInfo';
    function environment_: NSDictionary; message 'environment';
    function arguments_: NSArray; message 'arguments';
    function hostName_: NSString; message 'hostName';
    procedure setProcessName(newValue: NSString); message 'setProcessName:';
    function processName: NSString; message 'processName';
    function processIdentifier: cint; message 'processIdentifier';
    function globallyUniqueString: NSString; message 'globallyUniqueString';
    function operatingSystem: NSUInteger; message 'operatingSystem'; deprecated '-operatingSystem always returns NSMACHOperatingSystem, use -operatingSystemVersion or -isOperatingSystemAtLeastVersion: instead';
    function operatingSystemName: NSString; message 'operatingSystemName'; deprecated '-operatingSystemName always returns NSMACHOperatingSystem, use -operatingSystemVersionString instead';
    function operatingSystemVersionString: NSString; message 'operatingSystemVersionString';
    function operatingSystemVersion: NSOperatingSystemVersion; message 'operatingSystemVersion'; { available in macos , ios , watchos , tvos  }
    function processorCount: NSUInteger; message 'processorCount'; { available in macos , ios , watchos , tvos  }
    function activeProcessorCount: NSUInteger; message 'activeProcessorCount'; { available in macos , ios , watchos , tvos  }
    function physicalMemory: culonglong; message 'physicalMemory'; { available in macos , ios , watchos , tvos  }
    function isOperatingSystemAtLeastVersion (version: NSOperatingSystemVersion): objcbool; message 'isOperatingSystemAtLeastVersion:'; { available in macos , ios , watchos , tvos  }
    function systemUptime: NSTimeInterval; message 'systemUptime'; { available in macos , ios , watchos , tvos  }
    procedure disableSuddenTermination; message 'disableSuddenTermination'; { unavailable in ios, watchos, tvos }
    procedure enableSuddenTermination; message 'enableSuddenTermination'; { unavailable in ios, watchos, tvos }
    procedure disableAutomaticTermination (reason: NSString); message 'disableAutomaticTermination:'; { unavailable in ios, watchos, tvos }
    procedure enableAutomaticTermination (reason: NSString); message 'enableAutomaticTermination:'; { unavailable in ios, watchos, tvos }
    procedure setAutomaticTerminationSupportEnabled(newValue: objcbool); message 'setAutomaticTerminationSupportEnabled:'; { unavailable in ios, watchos, tvos }
    function automaticTerminationSupportEnabled: objcbool; message 'automaticTerminationSupportEnabled'; { unavailable in ios, watchos, tvos }
  end;
{$endif}

{$ifdef TYPES}
type
  NSActivityOptions = cuint64;
  NSActivityOptionsPtr = ^NSActivityOptions;

const
  NSActivityIdleDisplaySleepDisabled = 1 shl 40;
  NSActivityIdleSystemSleepDisabled = 1 shl 20;
  NSActivitySuddenTerminationDisabled = 1 shl 14;
  NSActivityAutomaticTerminationDisabled = 1 shl 15;
  NSActivityUserInitiated = $00FFFFFF + NSActivityIdleSystemSleepDisabled;
  NSActivityUserInitiatedAllowingIdleSystemSleep = NSActivityUserInitiated and not NSActivityIdleSystemSleepDisabled;
  NSActivityBackground = $000000FF;
  NSActivityLatencyCritical = $FF00000000;
{$endif}

{$ifdef CLASSES}

type
  NSProcessInfoActivity = objccategory external (NSProcessInfo)
    function beginActivityWithOptions_reason (options: NSActivityOptions; reason: NSString): id; message 'beginActivityWithOptions:reason:'; { available in macos , ios , watchos , tvos  }
    procedure endActivity (activity: id); message 'endActivity:'; { available in macos , ios , watchos , tvos  }
    procedure performActivityWithOptions_reason_usingBlock (options: NSActivityOptions; reason: NSString; block: NSProcessInfoPerformActivityWithOptionsCallback); message 'performActivityWithOptions:reason:usingBlock:'; { available in macos , ios , watchos , tvos  }
    procedure performExpiringActivityWithReason_usingBlock (reason: NSString; block: NSProcessInfoPerformExpiringActivityWithReasonCallback); message 'performExpiringActivityWithReason:usingBlock:'; { unavailable in macos }
  end;

type
  NSUserInformation = objccategory external (NSProcessInfo)
    function userName: NSString; message 'userName'; { unavailable in ios, watchos, tvos }
    function fullUserName: NSString; message 'fullUserName'; { unavailable in ios, watchos, tvos }
  end;
{$endif}

{$ifdef TYPES}
type
  NSProcessInfoThermalState = NSInteger;
  NSProcessInfoThermalStatePtr = ^NSProcessInfoThermalState;

const
  NSProcessInfoThermalStateNominal = 0;
  NSProcessInfoThermalStateFair = 1;
  NSProcessInfoThermalStateSerious = 2;
  NSProcessInfoThermalStateCritical = 3;
{$endif}

{$ifdef CLASSES}

type
  NSProcessInfo_NSProcessInfoThermalState = objccategory external name 'NSProcessInfoThermalState' (NSProcessInfo)
    function thermalState: NSProcessInfoThermalState; message 'thermalState'; { available in macosx , ios , watchos , tvos  }
  end;

type
  NSProcessInfoPowerState = objccategory external (NSProcessInfo)
    function isLowPowerModeEnabled: objcbool; message 'isLowPowerModeEnabled'; { unavailable in macos }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSProcessInfoThermalStateDidChangeNotification: NSNotificationName { available in macosx , ios , watchos , tvos  }; cvar; external;
  NSProcessInfoPowerStateDidChangeNotification: NSNotificationName { unavailable in macos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSProcessInfoPlatform = objccategory external (NSProcessInfo)
    function isMacCatalystApp: objcbool; message 'isMacCatalystApp'; { available in macos , ios , watchos , tvos  }
    function isiOSAppOnMac: objcbool; message 'isiOSAppOnMac'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

