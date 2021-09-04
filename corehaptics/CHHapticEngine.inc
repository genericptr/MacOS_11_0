{ Parsed from CoreHaptics.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreHaptics.framework/Headers/CHHapticEngine.h }

{$ifdef TYPES}
type
  CHHapticEnginePtr = ^CHHapticEngine;

const
  CHHapticTimeImmediate = 0.0;
{$endif}

{$ifdef TYPES}
type
  CHHapticCompletionHandler = reference to procedure (error: NSError); cblock; cdecl;
  CHHapticEngineFinishedAction = NSInteger;
  CHHapticEngineFinishedActionPtr = ^CHHapticEngineFinishedAction;

const
  CHHapticEngineFinishedActionStopEngine = 1;
  CHHapticEngineFinishedActionLeaveEngineRunning = 2;

type
  CHHapticEngineStoppedReason = NSInteger;

const
  CHHapticEngineStoppedReasonAudioSessionInterrupt = 1;
  CHHapticEngineStoppedReasonApplicationSuspended = 2;
  CHHapticEngineStoppedReasonIdleTimeout = 3;
  CHHapticEngineStoppedReasonNotifyWhenFinished = 4;
  CHHapticEngineStoppedReasonEngineDestroyed = 5;
  CHHapticEngineStoppedReasonGameControllerDisconnect = 6;
  CHHapticEngineStoppedReasonSystemError = -1;

type
  CHHapticEngineFinishedHandler = reference to function (error: NSErrorPtr): CHHapticEngineFinishedAction; cblock; cdecl;
  CHHapticEngineResetHandler = reference to procedure; cblock; cdecl;
  CHHapticEngineStoppedHandler = reference to procedure (stoppedReason: CHHapticEngineStoppedReason); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  CHHapticEngine = objcclass external (NSObject)
  public
    class function capabilitiesForHardware: id; message 'capabilitiesForHardware';
    function currentTime: NSTimeInterval; message 'currentTime';
    procedure setStoppedHandler(newValue: CHHapticEngineStoppedHandler); message 'setStoppedHandler:';
    function stoppedHandler: CHHapticEngineStoppedHandler; message 'stoppedHandler';
    procedure setResetHandler(newValue: CHHapticEngineResetHandler); message 'setResetHandler:';
    function resetHandler: CHHapticEngineResetHandler; message 'resetHandler';
    procedure setPlaysHapticsOnly(newValue: objcbool); message 'setPlaysHapticsOnly:';
    function playsHapticsOnly: objcbool; message 'playsHapticsOnly';
    procedure setIsMutedForAudio(newValue: objcbool); message 'setIsMutedForAudio:';
    function isMutedForAudio: objcbool; message 'isMutedForAudio';
    procedure setIsMutedForHaptics(newValue: objcbool); message 'setIsMutedForHaptics:';
    function isMutedForHaptics: objcbool; message 'isMutedForHaptics';
    procedure setAutoShutdownEnabled(newValue: objcbool); message 'setAutoShutdownEnabled:';
    function isAutoShutdownEnabled: objcbool; message 'isAutoShutdownEnabled';
    function init: id; message 'init';
    function initAndReturnError (error: NSErrorPtr): id; message 'initAndReturnError:'; { NS_DESIGNATED_INITIALIZER }
    function initWithAudioSession_error (audioSession: AVAudioSession; error: NSErrorPtr): id; message 'initWithAudioSession:error:'; { NS_DESIGNATED_INITIALIZER }
    procedure startWithCompletionHandler (completionHandler: CHHapticCompletionHandler); message 'startWithCompletionHandler:';
    function startAndReturnError (outError: NSErrorPtr): objcbool; message 'startAndReturnError:';
    procedure stopWithCompletionHandler (completionHandler: CHHapticCompletionHandler); message 'stopWithCompletionHandler:';
    procedure notifyWhenPlayersFinished (finishedHandler: CHHapticEngineFinishedHandler); message 'notifyWhenPlayersFinished:';
    function createPlayerWithPattern_error (pattern: CHHapticPattern; outError: NSErrorPtr): id; message 'createPlayerWithPattern:error:';
    function createAdvancedPlayerWithPattern_error (pattern: CHHapticPattern; outError: NSErrorPtr): id; message 'createAdvancedPlayerWithPattern:error:';
    function registerAudioResource_options_error (resourceURL: NSURL; options: NSDictionary; outError: NSErrorPtr): CHHapticAudioResourceID; message 'registerAudioResource:options:error:';
    function unregisterAudioResource_error (resourceID: CHHapticAudioResourceID; outError: NSErrorPtr): objcbool; message 'unregisterAudioResource:error:';
    function playPatternFromURL_error (fileURL: NSURL; outError: NSErrorPtr): objcbool; message 'playPatternFromURL:error:';
    function playPatternFromData_error (data: NSData; outError: NSErrorPtr): objcbool; message 'playPatternFromData:error:';
  end;
{$endif}

