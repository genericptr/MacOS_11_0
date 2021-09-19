{ Parsed from AVFoundation.framework AVQueuedSampleBufferRendering.h }

{$ifdef CALLBACKS}
type
  AVQueuedSampleBufferRenderingRequestMediaDataWhenReadyOnQueueCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVQueuedSampleBufferRenderingProtocolPtr = ^AVQueuedSampleBufferRenderingProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVQueuedSampleBufferRenderingStatus = NSInteger;
  AVQueuedSampleBufferRenderingStatusPtr = ^AVQueuedSampleBufferRenderingStatus;

const
  AVQueuedSampleBufferRenderingStatusUnknown = 0;
  AVQueuedSampleBufferRenderingStatusRendering = 1;
  AVQueuedSampleBufferRenderingStatusFailed = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  AVQueuedSampleBufferRenderingProtocol = objcprotocol external name 'AVQueuedSampleBufferRendering' (NSObjectProtocol)
    function timebase: CMTimebaseRef; message 'timebase';
    procedure enqueueSampleBuffer (sampleBuffer: CMSampleBufferRef); message 'enqueueSampleBuffer:';
    procedure flush; message 'flush';
    function isReadyForMoreMediaData: objcbool; message 'isReadyForMoreMediaData';
    procedure requestMediaDataWhenReadyOnQueue_usingBlock (queue: dispatch_queue_t; block: AVQueuedSampleBufferRenderingRequestMediaDataWhenReadyOnQueueCallback); message 'requestMediaDataWhenReadyOnQueue:usingBlock:';
    procedure stopRequestingMediaData; message 'stopRequestingMediaData';
    function hasSufficientMediaDataForReliablePlaybackStart: objcbool; message 'hasSufficientMediaDataForReliablePlaybackStart'; { available in macos 11.3, ios 14.5, tvos 14.5, watchos 7.4 }
  end;
{$endif}

{$else}
{$endif}
