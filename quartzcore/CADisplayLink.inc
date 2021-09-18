{ Parsed from QuartzCore.framework CADisplayLink.h }

{$ifdef TYPES}
type
  CADisplayLinkPtr = ^CADisplayLink;
{$endif}

{$ifdef CLASSES}

type
  CADisplayLink = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    class function displayLinkWithTarget_selector (target: id; sel_: SEL): CADisplayLink; message 'displayLinkWithTarget:selector:';
    procedure addToRunLoop_forMode (runloop: NSRunLoop; mode: NSRunLoopMode); message 'addToRunLoop:forMode:';
    procedure removeFromRunLoop_forMode (runloop: NSRunLoop; mode: NSRunLoopMode); message 'removeFromRunLoop:forMode:';
    procedure invalidate; message 'invalidate';
    function timestamp: CFTimeInterval; message 'timestamp';
    function duration: CFTimeInterval; message 'duration';
    function targetTimestamp: CFTimeInterval; message 'targetTimestamp'; { available in ios , watchos , tvos  }
    procedure setPaused(newValue: objcbool); message 'setPaused:';
    function isPaused: objcbool; message 'isPaused';
    procedure setFrameInterval(newValue: NSInteger); message 'setFrameInterval:'; deprecated 'preferredFramesPerSecond';
    function frameInterval: NSInteger; message 'frameInterval'; deprecated 'preferredFramesPerSecond';
    procedure setPreferredFramesPerSecond(newValue: NSInteger); message 'setPreferredFramesPerSecond:'; { available in ios , watchos , tvos  }
    function preferredFramesPerSecond: NSInteger; message 'preferredFramesPerSecond'; { available in ios , watchos , tvos  }
  end;
{$endif}

