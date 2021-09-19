{ Parsed from AVFoundation.framework AVCaptureVideoDataOutput.h }

{$ifdef TYPES}
type
  AVCaptureVideoDataOutputPtr = ^AVCaptureVideoDataOutput;
  AVCaptureVideoDataOutputSampleBufferDelegateProtocolPtr = ^AVCaptureVideoDataOutputSampleBufferDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVCaptureVideoDataOutput = objcclass external (AVCaptureOutput)
  private
    _internal: AVCaptureVideoDataOutputInternal;
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure setSampleBufferDelegate_queue (sampleBufferDelegate: AVCaptureVideoDataOutputSampleBufferDelegateProtocol; sampleBufferCallbackQueue: dispatch_queue_t); message 'setSampleBufferDelegate:queue:';
    function sampleBufferDelegate: AVCaptureVideoDataOutputSampleBufferDelegateProtocol; message 'sampleBufferDelegate';
    function sampleBufferCallbackQueue: dispatch_queue_t; message 'sampleBufferCallbackQueue';
    procedure setVideoSettings(newValue: NSDictionary); message 'setVideoSettings:';
    function videoSettings: NSDictionary; message 'videoSettings';
    function recommendedVideoSettingsForAssetWriterWithOutputFileType (outputFileType: AVFileType): NSDictionary; message 'recommendedVideoSettingsForAssetWriterWithOutputFileType:'; { unavailable in tvos } { available in macos 10.15, ios 7.0, macCatalyst 14.0 }
    function availableVideoCodecTypesForAssetWriterWithOutputFileType (outputFileType: AVFileType): NSArray; message 'availableVideoCodecTypesForAssetWriterWithOutputFileType:'; { unavailable in tvos } { available in macos 10.15, ios 11.0, macCatalyst 14.0 }
    function recommendedVideoSettingsForVideoCodecType_assetWriterOutputFileType (videoCodecType: AVVideoCodecType; outputFileType: AVFileType): NSDictionary; message 'recommendedVideoSettingsForVideoCodecType:assetWriterOutputFileType:'; { unavailable in tvos } { available in macos 10.15, ios 11.0, macCatalyst 14.0 }
    function availableVideoCVPixelFormatTypes: NSArray; message 'availableVideoCVPixelFormatTypes'; { unavailable in tvos } { available in ios 5.0, macCatalyst 14.0 }
    function availableVideoCodecTypes: NSArray; message 'availableVideoCodecTypes'; { unavailable in tvos } { available in ios 5.0, macCatalyst 14.0 }
    procedure setMinFrameDuration(newValue: CMTime); message 'setMinFrameDuration:'; { unavailable in macos } { unavailable in tvos }
    function minFrameDuration: CMTime; message 'minFrameDuration'; { unavailable in macos } { unavailable in tvos }
    procedure setAlwaysDiscardsLateVideoFrames(newValue: objcbool); message 'setAlwaysDiscardsLateVideoFrames:';
    function alwaysDiscardsLateVideoFrames: objcbool; message 'alwaysDiscardsLateVideoFrames';
    procedure setAutomaticallyConfiguresOutputBufferDimensions(newValue: objcbool); message 'setAutomaticallyConfiguresOutputBufferDimensions:'; { unavailable in macos, tvos } { unavailable in watchos }
    function automaticallyConfiguresOutputBufferDimensions: objcbool; message 'automaticallyConfiguresOutputBufferDimensions'; { unavailable in macos, tvos } { unavailable in watchos }
    procedure setDeliversPreviewSizedOutputBuffers(newValue: objcbool); message 'setDeliversPreviewSizedOutputBuffers:'; { unavailable in macos, tvos } { unavailable in watchos }
    function deliversPreviewSizedOutputBuffers: objcbool; message 'deliversPreviewSizedOutputBuffers'; { unavailable in macos, tvos } { unavailable in watchos }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVCaptureVideoDataOutputSampleBufferDelegateProtocol = objcprotocol external name 'AVCaptureVideoDataOutputSampleBufferDelegate' (NSObjectProtocol)
  optional
    procedure captureOutput_didOutputSampleBuffer_fromConnection (output: AVCaptureOutput; sampleBuffer: CMSampleBufferRef; connection: AVCaptureConnection); message 'captureOutput:didOutputSampleBuffer:fromConnection:';
    procedure captureOutput_didDropSampleBuffer_fromConnection (output: AVCaptureOutput; sampleBuffer: CMSampleBufferRef; connection: AVCaptureConnection); message 'captureOutput:didDropSampleBuffer:fromConnection:'; { unavailable in tvos } { available in ios 6.0, macCatalyst 14.0 }
  end;
{$endif}

{$else}
{$endif}
