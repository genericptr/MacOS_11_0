{ Parsed from Foundation.framework NSProcessInfo.h }

{$ifdef CALLBACKS}
type
  NSProcessInfoPerformActivityWithOptionsCallback = reference to procedure; cblock; cdecl;
  NSProcessInfoPerformExpiringActivityWithReasonCallback = reference to procedure (expired: objcbool); cblock; cdecl;
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
    function operatingSystemVersion: NSOperatingSystemVersion; message 'operatingSystemVersion'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    function processorCount: NSUInteger; message 'processorCount'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function activeProcessorCount: NSUInteger; message 'activeProcessorCount'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function physicalMemory: culonglong; message 'physicalMemory'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function isOperatingSystemAtLeastVersion (version: NSOperatingSystemVersion): objcbool; message 'isOperatingSystemAtLeastVersion:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    function systemUptime: NSTimeInterval; message 'systemUptime'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure disableSuddenTermination; message 'disableSuddenTermination'; { unavailable in ios, watchos, tvos } { available in macos 10.6 }
    procedure enableSuddenTermination; message 'enableSuddenTermination'; { unavailable in ios, watchos, tvos } { available in macos 10.6 }
    procedure disableAutomaticTermination (reason: NSString); message 'disableAutomaticTermination:'; { unavailable in ios, watchos, tvos } { available in macos 10.7 }
    procedure enableAutomaticTermination (reason: NSString); message 'enableAutomaticTermination:'; { unavailable in ios, watchos, tvos } { available in macos 10.7 }
    procedure setAutomaticTerminationSupportEnabled(newValue: objcbool); message 'setAutomaticTerminationSupportEnabled:'; { unavailable in ios, watchos, tvos } { available in macos 10.7 }
    function automaticTerminationSupportEnabled: objcbool; message 'automaticTerminationSupportEnabled'; { unavailable in ios, watchos, tvos } { available in macos 10.7 }
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
  NSActivityUserInitiatedAllowingIdleSystemSleep = NSActivityUserInitiated and (not NSActivityIdleSystemSleepDisabled);
  NSActivityBackground = $000000FF;
  NSActivityLatencyCritical = $FF00000000;
{$endif}

{$ifdef CLASSES}

type
  NSProcessInfoActivity = objccategory external (NSProcessInfo)
    function beginActivityWithOptions_reason (options: NSActivityOptions; reason: NSString): id; message 'beginActivityWithOptions:reason:'; { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure endActivity (activity: NSObjectProtocol); message 'endActivity:'; { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure performActivityWithOptions_reason_usingBlock (options: NSActivityOptions; reason: NSString; block: NSProcessInfoPerformActivityWithOptionsCallback); message 'performActivityWithOptions:reason:usingBlock:'; { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure performExpiringActivityWithReason_usingBlock (reason: NSString; block: NSProcessInfoPerformExpiringActivityWithReasonCallback); message 'performExpiringActivityWithReason:usingBlock:'; { unavailable in macos } { available in ios 8.2, watchos 2.0, tvos 9.0 }
  end;

type
  NSUserInformation = objccategory external (NSProcessInfo)
    function userName: NSString; message 'userName'; { unavailable in ios, watchos, tvos } { available in macosx 10.12 }
    function fullUserName: NSString; message 'fullUserName'; { unavailable in ios, watchos, tvos } { available in macosx 10.12 }
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
    function thermalState: NSProcessInfoThermalState; message 'thermalState'; { available in macosx 10.10.3, ios 11.0, watchos 4.0, tvos 11.0 }
  end;

type
  NSProcessInfoPowerState = objccategory external (NSProcessInfo)
    function isLowPowerModeEnabled: objcbool; message 'isLowPowerModeEnabled'; { unavailable in macos } { available in ios 9.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSProcessInfoThermalStateDidChangeNotification: NSNotificationName { available in macosx 10.10.3, ios 11.0, watchos 4.0, tvos 11.0 }; cvar; external;
  NSProcessInfoPowerStateDidChangeNotification: NSNotificationName { unavailable in macos } { available in ios 9.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSProcessInfoPlatform = objccategory external (NSProcessInfo)
    function isMacCatalystApp: objcbool; message 'isMacCatalystApp'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function isiOSAppOnMac: objcbool; message 'isiOSAppOnMac'; { available in macos 11.0, ios 14.0, watchos 7.0, tvos 14.0 }
  end;
{$endif}

