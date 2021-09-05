{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSHapticFeedback.h }

{$ifdef TYPES}
type
  NSHapticFeedbackManagerPtr = ^NSHapticFeedbackManager;
  NSHapticFeedbackPerformerProtocolPtr = ^NSHapticFeedbackPerformerProtocol;
{$endif}

{$ifdef TYPES}
type
  NSHapticFeedbackPattern = NSInteger;
  NSHapticFeedbackPatternPtr = ^NSHapticFeedbackPattern;

const
  NSHapticFeedbackPatternGeneric = 0;
  NSHapticFeedbackPatternAlignment = 1;
  NSHapticFeedbackPatternLevelChange = 2;

type
  NSHapticFeedbackPerformanceTime = NSUInteger;
  NSHapticFeedbackPerformanceTimePtr = ^NSHapticFeedbackPerformanceTime;

const
  NSHapticFeedbackPerformanceTimeDefault = 0;
  NSHapticFeedbackPerformanceTimeNow = 1;
  NSHapticFeedbackPerformanceTimeDrawCompleted = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  NSHapticFeedbackPerformerProtocol = objcprotocol external name 'NSHapticFeedbackPerformer' (NSObjectProtocol)
  required
    procedure performFeedbackPattern_performanceTime (pattern: NSHapticFeedbackPattern; performanceTime: NSHapticFeedbackPerformanceTime); message 'performFeedbackPattern:performanceTime:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSHapticFeedbackManager = objcclass external (NSObject)
  public
    class function defaultPerformer: NSHapticFeedbackPerformerProtocol; message 'defaultPerformer';
  end;
{$endif}

