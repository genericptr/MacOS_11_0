{ Parsed from AppKit.framework NSRunningApplication.h }

{$ifdef TYPES}
type
  NSRunningApplicationPtr = ^NSRunningApplication;
{$endif}

{$ifdef TYPES}
type
  NSApplicationActivationOptions = NSUInteger;
  NSApplicationActivationOptionsPtr = ^NSApplicationActivationOptions;

const
  NSApplicationActivateAllWindows = 1 shl 0;
  NSApplicationActivateIgnoringOtherApps = 1 shl 1;

type
  NSApplicationActivationPolicy = NSInteger;
  NSApplicationActivationPolicyPtr = ^NSApplicationActivationPolicy;

const
  NSApplicationActivationPolicyRegular = 0;
  NSApplicationActivationPolicyAccessory = 1;
  NSApplicationActivationPolicyProhibited = 2;
{$endif}

{$ifdef CLASSES}

type
  NSRunningApplication = objcclass external (NSObject)
  public
    function isTerminated: objcbool; message 'isTerminated';
    function isFinishedLaunching: objcbool; message 'isFinishedLaunching';
    function isHidden: objcbool; message 'isHidden';
    function isActive: objcbool; message 'isActive';
    function ownsMenuBar: objcbool; message 'ownsMenuBar'; { available in macos  }
    function activationPolicy: NSApplicationActivationPolicy; message 'activationPolicy';
    function localizedName: NSString; message 'localizedName';
    function bundleIdentifier: NSString; message 'bundleIdentifier';
    function bundleURL: NSURL; message 'bundleURL';
    function executableURL: NSURL; message 'executableURL';
    function processIdentifier: pid_t; message 'processIdentifier';
    function launchDate: NSDate; message 'launchDate';
    function icon: NSImage; message 'icon';
    function executableArchitecture: NSInteger; message 'executableArchitecture';
    function hide: objcbool; message 'hide';
    function unhide: objcbool; message 'unhide';
    function activateWithOptions (options: NSApplicationActivationOptions): objcbool; message 'activateWithOptions:';
    function terminate: objcbool; message 'terminate';
    function forceTerminate: objcbool; message 'forceTerminate';
    class function runningApplicationsWithBundleIdentifier (bundleIdentifier_: NSString): NSArray; message 'runningApplicationsWithBundleIdentifier:';
    class function runningApplicationWithProcessIdentifier (pid: pid_t): id; message 'runningApplicationWithProcessIdentifier:';
    class function currentApplication: NSRunningApplication; message 'currentApplication';
    class procedure terminateAutomaticallyTerminableApplications; message 'terminateAutomaticallyTerminableApplications';
  end;


type
  NSWorkspaceRunningApplications = objccategory external (NSWorkspace)
    function runningApplications: NSArray; message 'runningApplications'; { available in macos  }
  end;
{$endif}

