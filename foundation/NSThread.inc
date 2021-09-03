{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSThread.h }

{$ifdef CALLBACKS}
type
  NSThreadDetachNewThreadWithBlockCallback = reference to function : pointer; cblock; cdecl;
  NSThreadInitWithBlockCallback = reference to function : pointer; cblock; cdecl;
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
    class procedure detachNewThreadWithBlock (block: NSThreadDetachNewThreadWithBlockCallback); message 'detachNewThreadWithBlock:'; { available in macosx , ios , watchos , tvos  }
    class procedure detachNewThreadSelector_toTarget_withObject (selector: SEL; target: id; argument: id); message 'detachNewThreadSelector:toTarget:withObject:';
    class function isMultiThreaded: objcbool; message 'isMultiThreaded';
    function threadDictionary: NSMutableDictionary; message 'threadDictionary';
    class procedure sleepUntilDate (date: NSDate); message 'sleepUntilDate:';
    class procedure sleepForTimeInterval (ti: NSTimeInterval); message 'sleepForTimeInterval:';
    class procedure exit; message 'exit';
    class function classThreadPriority: double; message 'threadPriority';
    class function setThreadPriority (p: double): objcbool; message 'setThreadPriority:';
    procedure setThreadPriority_(newValue: double); message 'setThreadPriority:'; { available in macos , ios , watchos , tvos  }
    function threadPriority: double; message 'threadPriority'; { available in macos , ios , watchos , tvos  }
    procedure setQualityOfService(newValue: NSQualityOfService); message 'setQualityOfService:'; { available in macos , ios , watchos , tvos  }
    function qualityOfService: NSQualityOfService; message 'qualityOfService'; { available in macos , ios , watchos , tvos  }
    class function callStackReturnAddresses: NSArray; message 'callStackReturnAddresses'; { available in macos , ios , watchos , tvos  }
    class function callStackSymbols: NSArray; message 'callStackSymbols'; { available in macos , ios , watchos , tvos  }
    procedure setName(newValue: NSString); message 'setName:'; { available in macos , ios , watchos , tvos  }
    function name: NSString; message 'name'; { available in macos , ios , watchos , tvos  }
    procedure setStackSize(newValue: NSUInteger); message 'setStackSize:'; { available in macos , ios , watchos , tvos  }
    function stackSize: NSUInteger; message 'stackSize'; { available in macos , ios , watchos , tvos  }
    function isMainThread: objcbool; message 'isMainThread'; { available in macos , ios , watchos , tvos  }
    class function isMainThread_: objcbool; message 'isMainThread'; { available in macos , ios , watchos , tvos  }
    class function mainThread: NSThread; message 'mainThread'; { available in macos , ios , watchos , tvos  }
    function init: id; message 'init'; { available in macos , ios , watchos , tvos  }
    function initWithTarget_selector_object (target: id; selector: SEL; argument: id): id; message 'initWithTarget:selector:object:'; { available in macos , ios , watchos , tvos  }
    function initWithBlock (block: NSThreadInitWithBlockCallback): id; message 'initWithBlock:'; { available in macosx , ios , watchos , tvos  }
    function isExecuting: objcbool; message 'isExecuting'; { available in macos , ios , watchos , tvos  }
    function isFinished: objcbool; message 'isFinished'; { available in macos , ios , watchos , tvos  }
    function isCancelled: objcbool; message 'isCancelled'; { available in macos , ios , watchos , tvos  }
    procedure cancel; message 'cancel'; { available in macos , ios , watchos , tvos  }
    procedure start; message 'start'; { available in macos , ios , watchos , tvos  }
    procedure main; message 'main'; { available in macos , ios , watchos , tvos  }
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
    procedure performSelector_onThread_withObject_waitUntilDone_modes (aSelector: SEL; thr: NSThread; arg: id; wait: objcbool; array_: NSArray); message 'performSelector:onThread:withObject:waitUntilDone:modes:'; { available in macos , ios , watchos , tvos  }
    procedure performSelector_onThread_withObject_waitUntilDone (aSelector: SEL; thr: NSThread; arg: id; wait: objcbool); message 'performSelector:onThread:withObject:waitUntilDone:'; { available in macos , ios , watchos , tvos  }
    procedure performSelectorInBackground_withObject (aSelector: SEL; arg: id); message 'performSelectorInBackground:withObject:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

