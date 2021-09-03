{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVCaptureVideoDataOutput.h }

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
    procedure setSampleBufferDelegate_queue (sampleBufferDelegate: id; sampleBufferCallbackQueue: dispatch_queue_t); message 'setSampleBufferDelegate:queue:';
    function sampleBufferDelegate: id; message 'sampleBufferDelegate';
    function sampleBufferCallbackQueue: dispatch_queue_t; message 'sampleBufferCallbackQueue';
    procedure setVideoSettings(newValue: NSDictionary); message 'setVideoSettings:';
    function videoSettings: NSDictionary; message 'videoSettings';
    function recommendedVideoSettingsForAssetWriterWithOutputFileType (outputFileType: AVFileType): NSDictionary; message 'recommendedVideoSettingsForAssetWriterWithOutputFileType:'; { unavailable in tvos }
    function availableVideoCodecTypesForAssetWriterWithOutputFileType (outputFileType: AVFileType): NSArray; message 'availableVideoCodecTypesForAssetWriterWithOutputFileType:'; { unavailable in tvos }
    function recommendedVideoSettingsForVideoCodecType_assetWriterOutputFileType (videoCodecType: AVVideoCodecType; outputFileType: AVFileType): NSDictionary; message 'recommendedVideoSettingsForVideoCodecType:assetWriterOutputFileType:'; { unavailable in tvos }
    function availableVideoCVPixelFormatTypes: NSArray; message 'availableVideoCVPixelFormatTypes'; { unavailable in tvos }
    function availableVideoCodecTypes: NSArray; message 'availableVideoCodecTypes'; { unavailable in tvos }
    procedure setMinFrameDuration(newValue: CMTime); message 'setMinFrameDuration:'; { unavailable in macos }
    function minFrameDuration: CMTime; message 'minFrameDuration'; { unavailable in macos }
    procedure setAlwaysDiscardsLateVideoFrames(newValue: objcbool); message 'setAlwaysDiscardsLateVideoFrames:';
    function alwaysDiscardsLateVideoFrames: objcbool; message 'alwaysDiscardsLateVideoFrames';
    procedure setAutomaticallyConfiguresOutputBufferDimensions(newValue: objcbool); message 'setAutomaticallyConfiguresOutputBufferDimensions:'; { unavailable in macos, tvos }
    function automaticallyConfiguresOutputBufferDimensions: objcbool; message 'automaticallyConfiguresOutputBufferDimensions'; { unavailable in macos, tvos }
    procedure setDeliversPreviewSizedOutputBuffers(newValue: objcbool); message 'setDeliversPreviewSizedOutputBuffers:'; { unavailable in macos, tvos }
    function deliversPreviewSizedOutputBuffers: objcbool; message 'deliversPreviewSizedOutputBuffers'; { unavailable in macos, tvos }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVCaptureVideoDataOutputSampleBufferDelegateProtocol = objcprotocol external name 'AVCaptureVideoDataOutputSampleBufferDelegate' (NSObjectProtocol)
  optional
    procedure captureOutput_didOutputSampleBuffer_fromConnection (output: AVCaptureOutput; sampleBuffer: CMSampleBufferRef; connection: AVCaptureConnection); message 'captureOutput:didOutputSampleBuffer:fromConnection:';
    procedure captureOutput_didDropSampleBuffer_fromConnection (output: AVCaptureOutput; sampleBuffer: CMSampleBufferRef; connection: AVCaptureConnection); message 'captureOutput:didDropSampleBuffer:fromConnection:'; { unavailable in tvos }
  end;
{$endif}

{$else}
{$endif}
