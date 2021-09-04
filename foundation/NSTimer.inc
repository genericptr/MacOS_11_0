{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSTimer.h }

{$ifdef CALLBACKS}
type
  NSTimerTimerWithTimeIntervalCallback = reference to procedure (timer: NSTimer); cblock; cdecl;
  NSTimerScheduledTimerWithTimeIntervalCallback = reference to procedure (timer: NSTimer); cblock; cdecl;
  NSTimerInitWithFireDateCallback = reference to procedure (timer: NSTimer); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSTimerPtr = ^NSTimer;
{$endif}

{$ifdef CLASSES}

type
  NSTimer = objcclass external (NSObject)
  public
    class function timerWithTimeInterval_invocation_repeats (ti: NSTimeInterval; invocation: NSInvocation; yesOrNo: objcbool): NSTimer; message 'timerWithTimeInterval:invocation:repeats:';
    class function scheduledTimerWithTimeInterval_invocation_repeats (ti: NSTimeInterval; invocation: NSInvocation; yesOrNo: objcbool): NSTimer; message 'scheduledTimerWithTimeInterval:invocation:repeats:';
    class function timerWithTimeInterval_target_selector_userInfo_repeats (ti: NSTimeInterval; aTarget: id; aSelector: SEL; userInfo: id; yesOrNo: objcbool): NSTimer; message 'timerWithTimeInterval:target:selector:userInfo:repeats:';
    class function scheduledTimerWithTimeInterval_target_selector_userInfo_repeats (ti: NSTimeInterval; aTarget: id; aSelector: SEL; userInfo: id; yesOrNo: objcbool): NSTimer; message 'scheduledTimerWithTimeInterval:target:selector:userInfo:repeats:';
    class function timerWithTimeInterval_repeats_block (interval: NSTimeInterval; repeats: objcbool; block: NSTimerTimerWithTimeIntervalCallback): NSTimer; message 'timerWithTimeInterval:repeats:block:'; { available in macosx , ios , watchos , tvos  }
    class function scheduledTimerWithTimeInterval_repeats_block (interval: NSTimeInterval; repeats: objcbool; block: NSTimerScheduledTimerWithTimeIntervalCallback): NSTimer; message 'scheduledTimerWithTimeInterval:repeats:block:'; { available in macosx , ios , watchos , tvos  }
    function initWithFireDate_interval_repeats_block (date: NSDate; interval: NSTimeInterval; repeats: objcbool; block: NSTimerInitWithFireDateCallback): id; message 'initWithFireDate:interval:repeats:block:'; { available in macosx , ios , watchos , tvos  }
    function initWithFireDate_interval_target_selector_userInfo_repeats (date: NSDate; ti: NSTimeInterval; t: id; s: SEL; ui: id; rep: objcbool): id; message 'initWithFireDate:interval:target:selector:userInfo:repeats:'; { NS_DESIGNATED_INITIALIZER }
    procedure fire; message 'fire';
    procedure setFireDate(newValue: NSDate); message 'setFireDate:';
    function fireDate: NSDate; message 'fireDate';
    function timeInterval: NSTimeInterval; message 'timeInterval';
    procedure setTolerance(newValue: NSTimeInterval); message 'setTolerance:'; { available in macos , ios , watchos , tvos  }
    function tolerance: NSTimeInterval; message 'tolerance'; { available in macos , ios , watchos , tvos  }
    procedure invalidate; message 'invalidate';
    function isValid: objcbool; message 'isValid';
    function userInfo: id; message 'userInfo';
  end;
{$endif}

