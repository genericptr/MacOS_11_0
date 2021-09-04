{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSRunLoop.h }

{ Types from NSRunLoopConveniences }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  NSRunLoopPerformInModesCallback = reference to procedure; cblock; cdecl;
  NSRunLoopPerformBlockCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSRunLoopPtr = ^NSRunLoop;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSDefaultRunLoopMode: NSRunLoopMode; cvar; external;
  NSRunLoopCommonModes: NSRunLoopMode { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSRunLoop = objcclass external (NSObject)
  private
    _rl: id;
    _dperf: id;
    _perft: id;
    _info: id;
    _ports: id;
    _reserved:array[0..5] of pointer;
  public
    class function currentRunLoop: NSRunLoop; message 'currentRunLoop';
    class function mainRunLoop: NSRunLoop; message 'mainRunLoop'; { available in macos , ios , watchos , tvos  }
    function currentMode: NSRunLoopMode; message 'currentMode';
    function getCFRunLoop: CFRunLoopRef; message 'getCFRunLoop'; { CF_RETURNS_NOT_RETAINED }
    procedure addTimer_forMode (timer: NSTimer; mode: NSRunLoopMode); message 'addTimer:forMode:';
    procedure addPort_forMode (aPort: NSPort; mode: NSRunLoopMode); message 'addPort:forMode:';
    procedure removePort_forMode (aPort: NSPort; mode: NSRunLoopMode); message 'removePort:forMode:';
    function limitDateForMode (mode: NSRunLoopMode): NSDate; message 'limitDateForMode:';
    procedure acceptInputForMode_beforeDate (mode: NSRunLoopMode; limitDate: NSDate); message 'acceptInputForMode:beforeDate:';
  end;


type
  NSRunLoopConveniences = objccategory external (NSRunLoop)
    procedure run; message 'run';
    procedure runUntilDate (limitDate: NSDate); message 'runUntilDate:';
    function runMode_beforeDate (mode: NSRunLoopMode; limitDate: NSDate): objcbool; message 'runMode:beforeDate:';
    {$if defined(TARGET_OS_OSX)}
    procedure configureAsServer; message 'configureAsServer'; deprecated 'Not supported';
    {$endif}
    procedure performInModes_block (modes: NSArray; block: NSRunLoopPerformInModesCallback); message 'performInModes:block:'; { available in macosx , ios , watchos , tvos  }
    procedure performBlock (block: NSRunLoopPerformBlockCallback); message 'performBlock:'; { available in macosx , ios , watchos , tvos  }
  end;

type
  NSDelayedPerforming = objccategory external (NSObject)
    procedure performSelector_withObject_afterDelay_inModes (aSelector: SEL; anArgument: id; delay: NSTimeInterval; modes: NSArray); message 'performSelector:withObject:afterDelay:inModes:';
    procedure performSelector_withObject_afterDelay (aSelector: SEL; anArgument: id; delay: NSTimeInterval); message 'performSelector:withObject:afterDelay:';
    class procedure cancelPreviousPerformRequestsWithTarget_selector_object (aTarget: id; aSelector: SEL; anArgument: id); message 'cancelPreviousPerformRequestsWithTarget:selector:object:';
    class procedure cancelPreviousPerformRequestsWithTarget (aTarget: id); message 'cancelPreviousPerformRequestsWithTarget:';
  end;

type
  NSOrderedPerform = objccategory external (NSRunLoop)
    procedure performSelector_target_argument_order_modes (aSelector: SEL; target: id; arg: id; order: NSUInteger; modes: NSArray); message 'performSelector:target:argument:order:modes:';
    procedure cancelPerformSelector_target_argument (aSelector: SEL; target: id; arg: id); message 'cancelPerformSelector:target:argument:';
    procedure cancelPerformSelectorsWithTarget (target: id); message 'cancelPerformSelectorsWithTarget:';
  end;
{$endif}

