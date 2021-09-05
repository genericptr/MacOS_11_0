{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVCaptureAudioDataOutput.h }

{$ifdef TYPES}
type
  AVCaptureAudioDataOutputPtr = ^AVCaptureAudioDataOutput;
  AVCaptureAudioDataOutputSampleBufferDelegateProtocolPtr = ^AVCaptureAudioDataOutputSampleBufferDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVCaptureAudioDataOutput = objcclass external (AVCaptureOutput)
  private
    _internal: AVCaptureAudioDataOutputInternal;
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure setSampleBufferDelegate_queue (sampleBufferDelegate: AVCaptureAudioDataOutputSampleBufferDelegateProtocol; sampleBufferCallbackQueue: dispatch_queue_t); message 'setSampleBufferDelegate:queue:';
    function sampleBufferDelegate: AVCaptureAudioDataOutputSampleBufferDelegateProtocol; message 'sampleBufferDelegate';
    function sampleBufferCallbackQueue: dispatch_queue_t; message 'sampleBufferCallbackQueue';
    procedure setAudioSettings(newValue: NSDictionary); message 'setAudioSettings:'; { unavailable in ios, macCatalyst, watchos, tvos }
    function audioSettings: NSDictionary; message 'audioSettings'; { unavailable in ios, macCatalyst, watchos, tvos }
    function recommendedAudioSettingsForAssetWriterWithOutputFileType (outputFileType: AVFileType): NSDictionary; message 'recommendedAudioSettingsForAssetWriterWithOutputFileType:'; { unavailable in tvos }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVCaptureAudioDataOutputSampleBufferDelegateProtocol = objcprotocol external name 'AVCaptureAudioDataOutputSampleBufferDelegate' (NSObjectProtocol)
  optional
    procedure captureOutput_didOutputSampleBuffer_fromConnection (output: AVCaptureOutput; sampleBuffer: CMSampleBufferRef; connection: AVCaptureConnection); message 'captureOutput:didOutputSampleBuffer:fromConnection:';
  end;
{$endif}

{$else}
{$endif}
