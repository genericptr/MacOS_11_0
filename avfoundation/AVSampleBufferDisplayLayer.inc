{ Parsed from AVFoundation.framework AVSampleBufferDisplayLayer.h }

{$ifdef CALLBACKS}
type
  AVSampleBufferDisplayLayerRequestMediaDataWhenReadyOnQueueCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVSampleBufferDisplayLayerPtr = ^AVSampleBufferDisplayLayer;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if defined(__NULL_MACRO__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVSampleBufferDisplayLayerFailedToDecodeNotification: NSString { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 10.2 }; cvar; external;
  AVSampleBufferDisplayLayerFailedToDecodeNotificationErrorKey: NSString { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 10.2 }; cvar; external;
  AVSampleBufferDisplayLayerRequiresFlushToResumeDecodingDidChangeNotification: NSNotificationName { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }; cvar; external;
  AVSampleBufferDisplayLayerOutputObscuredDueToInsufficientExternalProtectionDidChangeNotification: NSNotificationName { available in macos 11.3, ios 14.5, tvos 14.5, watchos 7.4 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVSampleBufferDisplayLayer = objcclass external (CALayer)
  private
    _sampleBufferDisplayLayerInternal: AVSampleBufferDisplayLayerInternal;
  public
    procedure setControlTimebase(newValue: CMTimebaseRef); message 'setControlTimebase:';
    function controlTimebase: CMTimebaseRef; message 'controlTimebase';
    procedure setVideoGravity(newValue: AVLayerVideoGravity); message 'setVideoGravity:';
    function videoGravity: AVLayerVideoGravity; message 'videoGravity';
  end;


type
  AVSampleBufferDisplayLayerQueueManagement = objccategory external (AVSampleBufferDisplayLayer)
    function status: AVQueuedSampleBufferRenderingStatus; message 'status'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 10.2 }
    function error: NSError; message 'error'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 10.2 }
    procedure enqueueSampleBuffer (sampleBuffer: CMSampleBufferRef); message 'enqueueSampleBuffer:';
    procedure flush; message 'flush';
    procedure flushAndRemoveImage; message 'flushAndRemoveImage';
    function requiresFlushToResumeDecoding: objcbool; message 'requiresFlushToResumeDecoding'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    function isReadyForMoreMediaData: objcbool; message 'isReadyForMoreMediaData';
    procedure requestMediaDataWhenReadyOnQueue_usingBlock (queue: dispatch_queue_t; block: AVSampleBufferDisplayLayerRequestMediaDataWhenReadyOnQueueCallback); message 'requestMediaDataWhenReadyOnQueue:usingBlock:';
    procedure stopRequestingMediaData; message 'stopRequestingMediaData';
  end;

type
  AVSampleBufferDisplayLayerImageProtection = objccategory external (AVSampleBufferDisplayLayer)
    procedure setPreventsCapture(newValue: objcbool); message 'setPreventsCapture:'; { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }
    function preventsCapture: objcbool; message 'preventsCapture'; { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }
  end;

type
  AVSampleBufferDisplayLayerVideoDisplaySleepPrevention = objccategory external (AVSampleBufferDisplayLayer)
    procedure setPreventsDisplaySleepDuringVideoPlayback(newValue: objcbool); message 'setPreventsDisplaySleepDuringVideoPlayback:'; { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }
    function preventsDisplaySleepDuringVideoPlayback: objcbool; message 'preventsDisplaySleepDuringVideoPlayback'; { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }
  end;

type
  ProtectedContent = objccategory external (AVSampleBufferDisplayLayer)
    function outputObscuredDueToInsufficientExternalProtection: objcbool; message 'outputObscuredDueToInsufficientExternalProtection'; { available in macos 11.3, ios 14.5, tvos 14.5, watchos 7.4 }
  end;
{$endif}

{$endif}

{$else}
{$endif}
