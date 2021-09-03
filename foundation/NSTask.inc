{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSTask.h }

{$ifdef CALLBACKS}
type
  NSTaskTerminationHandlerCallback = reference to function (param1: NSTask): pointer; cblock; cdecl;
  NSTaskLaunchedTaskWithExecutableURLCallback = reference to function (param1: NSTask): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSTaskPtr = ^NSTask;
{$endif}

{$ifdef TYPES}
type
  NSTaskTerminationReason = NSInteger;
  NSTaskTerminationReasonPtr = ^NSTaskTerminationReason;

const
  NSTaskTerminationReasonExit = 1;
  NSTaskTerminationReasonUncaughtSignal = 2;
{$endif}

{$ifdef CLASSES}

type
  NSTask = objcclass external (NSObject)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setExecutableURL(newValue: NSURL); message 'setExecutableURL:'; { unavailable in ios, watchos, tvos }
    function executableURL: NSURL; message 'executableURL'; { unavailable in ios, watchos, tvos }
    procedure setArguments(newValue: NSArray); message 'setArguments:';
    function arguments: NSArray; message 'arguments';
    procedure setEnvironment(newValue: NSDictionary); message 'setEnvironment:';
    function environment: NSDictionary; message 'environment';
    procedure setCurrentDirectoryURL(newValue: NSURL); message 'setCurrentDirectoryURL:'; { unavailable in ios, watchos, tvos }
    function currentDirectoryURL: NSURL; message 'currentDirectoryURL'; { unavailable in ios, watchos, tvos }
    procedure setStandardInput(newValue: id); message 'setStandardInput:';
    function standardInput: id; message 'standardInput';
    procedure setStandardOutput(newValue: id); message 'setStandardOutput:';
    function standardOutput: id; message 'standardOutput';
    procedure setStandardError(newValue: id); message 'setStandardError:';
    function standardError: id; message 'standardError';
    function launchAndReturnError (error: NSErrorPtr): objcbool; message 'launchAndReturnError:'; { unavailable in ios, watchos, tvos }
    procedure interrupt; message 'interrupt';
    procedure terminate; message 'terminate';
    function suspend: objcbool; message 'suspend';
    function resume: objcbool; message 'resume';
    function processIdentifier: cint; message 'processIdentifier';
    function isRunning: objcbool; message 'isRunning';
    function terminationStatus: cint; message 'terminationStatus';
    function terminationReason: NSTaskTerminationReason; message 'terminationReason'; { unavailable in ios, watchos, tvos }
    procedure setTerminationHandler(newValue: NSTaskTerminationHandlerCallback); message 'setTerminationHandler:'; { unavailable in ios, watchos, tvos }
    function terminationHandler: NSTaskTerminationHandlerCallback; message 'terminationHandler'; { unavailable in ios, watchos, tvos }
    procedure setQualityOfService(newValue: NSQualityOfService); message 'setQualityOfService:'; { available in macos , ios , watchos , tvos  }
    function qualityOfService: NSQualityOfService; message 'qualityOfService'; { available in macos , ios , watchos , tvos  }
  end;


type
  NSTaskConveniences = objccategory external (NSTask)
    class function launchedTaskWithExecutableURL_arguments_error_terminationHandler (url: NSURL; arguments_: NSArray; error: NSErrorPtr; terminationHandler_: NSTaskLaunchedTaskWithExecutableURLCallback): NSTask; message 'launchedTaskWithExecutableURL:arguments:error:terminationHandler:'; { unavailable in ios, watchos, tvos }
    procedure waitUntilExit; message 'waitUntilExit';
  end;

type
  NSTask_NSDeprecated = objccategory external name 'NSDeprecated' (NSTask)
    procedure setLaunchPath(newValue: NSString); message 'setLaunchPath:'; { unavailable in ios, watchos, tvos }
    function launchPath: NSString; message 'launchPath'; { unavailable in ios, watchos, tvos }
    procedure setCurrentDirectoryPath(newValue: NSString); message 'setCurrentDirectoryPath:'; { unavailable in ios, watchos, tvos }
    function currentDirectoryPath: NSString; message 'currentDirectoryPath'; { unavailable in ios, watchos, tvos }
    procedure launch; message 'launch'; { unavailable in ios, watchos, tvos }
    class function launchedTaskWithLaunchPath_arguments (path: NSString; arguments_: NSArray): NSTask; message 'launchedTaskWithLaunchPath:arguments:'; { unavailable in ios, watchos, tvos }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTaskDidTerminateNotification: NSNotificationName; cvar; external;
{$endif}

