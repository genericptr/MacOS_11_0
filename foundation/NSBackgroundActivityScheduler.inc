{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSBackgroundActivityScheduler.h }

{$ifdef CALLBACKS}
type
  NSBackgroundActivitySchedulerScheduleWithBlockCallback = reference to function (completionHandler: NSBackgroundActivityCompletionHandler): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSBackgroundActivitySchedulerPtr = ^NSBackgroundActivityScheduler;
{$endif}

{$ifdef TYPES}
type
  NSBackgroundActivityResult = NSInteger;
  NSBackgroundActivityResultPtr = ^NSBackgroundActivityResult;

const
  NSBackgroundActivityResultFinished = 1;
  NSBackgroundActivityResultDeferred = 2;

type
  NSBackgroundActivityCompletionHandler = reference to function (result_: NSBackgroundActivityResult): pointer; cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  NSBackgroundActivityScheduler = objcclass external (NSObject)
  private
    _private1: id;
    _private2: id;
    _private3: id;
    _flags: cint64;
  public
    function initWithIdentifier (identifier: NSString): id; message 'initWithIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function identifier: NSString; message 'identifier';
    procedure setQualityOfService(newValue: NSQualityOfService); message 'setQualityOfService:';
    function qualityOfService: NSQualityOfService; message 'qualityOfService';
    procedure setRepeats(newValue: objcbool); message 'setRepeats:';
    function repeats: objcbool; message 'repeats';
    procedure setInterval(newValue: NSTimeInterval); message 'setInterval:';
    function interval: NSTimeInterval; message 'interval';
    procedure setTolerance(newValue: NSTimeInterval); message 'setTolerance:';
    function tolerance: NSTimeInterval; message 'tolerance';
    procedure scheduleWithBlock (block: NSBackgroundActivitySchedulerScheduleWithBlockCallback); message 'scheduleWithBlock:';
    procedure invalidate; message 'invalidate';
    function shouldDefer: objcbool; message 'shouldDefer';
  end;
{$endif}

