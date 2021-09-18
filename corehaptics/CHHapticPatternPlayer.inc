{ Parsed from CoreHaptics.framework CHHapticPatternPlayer.h }

{$ifdef TYPES}
type
  CHHapticPatternPlayerProtocolPtr = ^CHHapticPatternPlayerProtocol;
  CHHapticAdvancedPatternPlayerProtocolPtr = ^CHHapticAdvancedPatternPlayerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  CHHapticPatternPlayerProtocol = objcprotocol external name 'CHHapticPatternPlayer' (NSObjectProtocol)
    function startAtTime_error (time: NSTimeInterval; outError: NSErrorPtr): objcbool; message 'startAtTime:error:';
    function stopAtTime_error (time: NSTimeInterval; outError: NSErrorPtr): objcbool; message 'stopAtTime:error:';
    function sendParameters_atTime_error (parameters: NSArray; time: NSTimeInterval; outError: NSErrorPtr): objcbool; message 'sendParameters:atTime:error:';
    function scheduleParameterCurve_atTime_error (parameterCurve: CHHapticParameterCurve; time: NSTimeInterval; outError: NSErrorPtr): objcbool; message 'scheduleParameterCurve:atTime:error:';
    function cancelAndReturnError (outError: NSErrorPtr): objcbool; message 'cancelAndReturnError:';
    procedure setIsMuted(newValue: objcbool); message 'setIsMuted:';
    function isMuted: objcbool; message 'isMuted';
  end;
{$endif}

{$ifdef TYPES}
type
  CHHapticAdvancedPatternPlayerCompletionHandler = reference to procedure (error: NSError); cblock; cdecl;
{$endif}

{$ifdef PROTOCOLS}

type
  CHHapticAdvancedPatternPlayerProtocol = objcprotocol external name 'CHHapticAdvancedPatternPlayer' (CHHapticPatternPlayerProtocol)
    function pauseAtTime_error (time: NSTimeInterval; outError: NSErrorPtr): objcbool; message 'pauseAtTime:error:';
    function resumeAtTime_error (time: NSTimeInterval; outError: NSErrorPtr): objcbool; message 'resumeAtTime:error:';
    function seekToOffset_error (offsetTime: NSTimeInterval; outError: NSErrorPtr): objcbool; message 'seekToOffset:error:';
    procedure setLoopEnabled(newValue: objcbool); message 'setLoopEnabled:';
    function loopEnabled: objcbool; message 'loopEnabled';
    procedure setLoopEnd(newValue: NSTimeInterval); message 'setLoopEnd:';
    function loopEnd: NSTimeInterval; message 'loopEnd';
    procedure setPlaybackRate(newValue: single); message 'setPlaybackRate:';
    function playbackRate: single; message 'playbackRate';
    procedure setIsMuted(newValue: objcbool); message 'setIsMuted:';
    function isMuted: objcbool; message 'isMuted';
    procedure setCompletionHandler(newValue: CHHapticAdvancedPatternPlayerCompletionHandler); message 'setCompletionHandler:';
    function completionHandler: CHHapticAdvancedPatternPlayerCompletionHandler; message 'completionHandler';
  end;
{$endif}

