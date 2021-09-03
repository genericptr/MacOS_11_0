{ Parsed from CoreHaptics.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreHaptics.framework/Headers/CHHapticEvent.h }

{$ifdef TYPES}
type
  CHHapticEventPtr = ^CHHapticEvent;
{$endif}

{$ifdef TYPES}
type
  CHHapticEventType = NSString;
  CHHapticEventTypePtr = ^CHHapticEventType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CHHapticEventTypeHapticTransient: CHHapticEventType { unavailable in watchos }; cvar; external;
  CHHapticEventTypeHapticContinuous: CHHapticEventType { unavailable in watchos }; cvar; external;
  CHHapticEventTypeAudioContinuous: CHHapticEventType { unavailable in watchos }; cvar; external;
  CHHapticEventTypeAudioCustom: CHHapticEventType { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CHHapticAudioResourceID = NSUInteger;
  CHHapticAudioResourceIDPtr = ^CHHapticAudioResourceID;
{$endif}

{$ifdef CLASSES}

type
  CHHapticEvent = objcclass external (NSObject)
  public
    function type_: CHHapticEventType; message 'type';
    function eventParameters: NSArray; message 'eventParameters';
    procedure setRelativeTime(newValue: NSTimeInterval); message 'setRelativeTime:';
    function relativeTime: NSTimeInterval; message 'relativeTime';
    procedure setDuration(newValue: NSTimeInterval); message 'setDuration:';
    function duration: NSTimeInterval; message 'duration';
    function init: id; message 'init';
    function initWithEventType_parameters_relativeTime (type_: CHHapticEventType; eventParams: NSArray; time: NSTimeInterval): id; message 'initWithEventType:parameters:relativeTime:';
    function initWithEventType_parameters_relativeTime_duration (type_: CHHapticEventType; eventParams: NSArray; time: NSTimeInterval; duration_: NSTimeInterval): id; message 'initWithEventType:parameters:relativeTime:duration:';
    function initWithAudioResourceID_parameters_relativeTime (resID: CHHapticAudioResourceID; eventParams: NSArray; time: NSTimeInterval): id; message 'initWithAudioResourceID:parameters:relativeTime:';
    function initWithAudioResourceID_parameters_relativeTime_duration (resID: CHHapticAudioResourceID; eventParams: NSArray; time: NSTimeInterval; duration_: NSTimeInterval): id; message 'initWithAudioResourceID:parameters:relativeTime:duration:';
  end;
{$endif}

