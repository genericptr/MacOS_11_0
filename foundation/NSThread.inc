{ Parsed from Foundation.framework NSThread.h }

{$ifdef CALLBACKS}
type
  NSThreadDetachNewThreadWithBlockCallback = reference to procedure; cblock; cdecl;
  NSThreadInitWithBlockCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSThreadPtr = ^NSThread;
{$endif}

{$ifdef CLASSES}

type
  NSThread = objcclass external (NSObject)
  private
    _private: id;
    _bytes:array[0..43] of cuint8;
  public
    class function currentThread: NSThread; message 'currentThread';
    class procedure detachNewThreadWithBlock (block: NSThreadDetachNewThreadWithBlockCallback); message 'detachNewThreadWithBlock:'; { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 }
    class procedure detachNewThreadSelector_toTarget_withObject (selector: SEL; target: id; argument: id); message 'detachNewThreadSelector:toTarget:withObject:';
    class function isMultiThreaded: objcbool; message 'isMultiThreaded';
    function threadDictionary: NSMutableDictionary; message 'threadDictionary';
    class procedure sleepUntilDate (date: NSDate); message 'sleepUntilDate:';
    class procedure sleepForTimeInterval (ti: NSTimeInterval); message 'sleepForTimeInterval:';
    class procedure exit; message 'exit';
    class function classThreadPriority: double; message 'threadPriority';
    class function setThreadPriority (p: double): objcbool; message 'setThreadPriority:';
    procedure setThreadPriority_(newValue: double); message 'setThreadPriority:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function threadPriority: double; message 'threadPriority'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure setQualityOfService(newValue: NSQualityOfService); message 'setQualityOfService:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    function qualityOfService: NSQualityOfService; message 'qualityOfService'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    class function callStackReturnAddresses: NSArray; message 'callStackReturnAddresses'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    class function callStackSymbols: NSArray; message 'callStackSymbols'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure setName(newValue: NSString); message 'setName:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function name: NSString; message 'name'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setStackSize(newValue: NSUInteger); message 'setStackSize:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function stackSize: NSUInteger; message 'stackSize'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function isMainThread: objcbool; message 'isMainThread'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    class function isMainThread_: objcbool; message 'isMainThread'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    class function mainThread: NSThread; message 'mainThread'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function init: id; message 'init'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function initWithTarget_selector_object (target: id; selector: SEL; argument: id): id; message 'initWithTarget:selector:object:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function initWithBlock (block: NSThreadInitWithBlockCallback): id; message 'initWithBlock:'; { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 }
    function isExecuting: objcbool; message 'isExecuting'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function isFinished: objcbool; message 'isFinished'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function isCancelled: objcbool; message 'isCancelled'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure cancel; message 'cancel'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure start; message 'start'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure main; message 'main'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSWillBecomeMultiThreadedNotification: NSNotificationName; cvar; external;
  NSDidBecomeSingleThreadedNotification: NSNotificationName; cvar; external;
  NSThreadWillExitNotification: NSNotificationName; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSThreadPerformAdditions = objccategory external (NSObject)
    procedure performSelectorOnMainThread_withObject_waitUntilDone_modes (aSelector: SEL; arg: id; wait: objcbool; array_: NSArray); message 'performSelectorOnMainThread:withObject:waitUntilDone:modes:';
    procedure performSelectorOnMainThread_withObject_waitUntilDone (aSelector: SEL; arg: id; wait: objcbool); message 'performSelectorOnMainThread:withObject:waitUntilDone:';
    procedure performSelector_onThread_withObject_waitUntilDone_modes (aSelector: SEL; thr: NSThread; arg: id; wait: objcbool; array_: NSArray); message 'performSelector:onThread:withObject:waitUntilDone:modes:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure performSelector_onThread_withObject_waitUntilDone (aSelector: SEL; thr: NSThread; arg: id; wait: objcbool); message 'performSelector:onThread:withObject:waitUntilDone:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure performSelectorInBackground_withObject (aSelector: SEL; arg: id); message 'performSelectorInBackground:withObject:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

