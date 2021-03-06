{ Parsed from Foundation.framework NSBackgroundActivityScheduler.h }

{$ifdef CALLBACKS}
type
  NSBackgroundActivitySchedulerScheduleWithBlockCallback = reference to procedure (completionHandler: NSBackgroundActivityCompletionHandler); cblock; cdecl;
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
  NSBackgroundActivityCompletionHandler = reference to procedure (result_: NSBackgroundActivityResult); cblock; cdecl;
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

