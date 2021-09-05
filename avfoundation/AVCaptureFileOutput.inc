{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVCaptureFileOutput.h }

{$ifdef TYPES}
type
  AVCaptureFileOutputPtr = ^AVCaptureFileOutput;
  AVCaptureMovieFileOutputPtr = ^AVCaptureMovieFileOutput;
  AVCaptureAudioFileOutputPtr = ^AVCaptureAudioFileOutput;
  AVCaptureFileOutputRecordingDelegateProtocolPtr = ^AVCaptureFileOutputRecordingDelegateProtocol;
  AVCaptureFileOutputDelegateProtocolPtr = ^AVCaptureFileOutputDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVCaptureFileOutput = objcclass external (AVCaptureOutput)
  private
    _fileOutputInternal: AVCaptureFileOutputInternal;
  public
    procedure setDelegate(newValue: AVCaptureFileOutputDelegateProtocol); message 'setDelegate:'; { unavailable in ios, macCatalyst, watchos, tvos }
    function delegate: AVCaptureFileOutputDelegateProtocol; message 'delegate'; { unavailable in ios, macCatalyst, watchos, tvos }
    function outputFileURL: NSURL; message 'outputFileURL';
    procedure startRecordingToOutputFileURL_recordingDelegate (outputFileURL_: NSURL; delegate_: AVCaptureFileOutputRecordingDelegateProtocol); message 'startRecordingToOutputFileURL:recordingDelegate:';
    procedure stopRecording; message 'stopRecording';
    function isRecording: objcbool; message 'isRecording';
    function isRecordingPaused: objcbool; message 'isRecordingPaused';
    procedure pauseRecording; message 'pauseRecording';
    procedure resumeRecording; message 'resumeRecording';
    function recordedDuration: CMTime; message 'recordedDuration';
    function recordedFileSize: cint64; message 'recordedFileSize';
    procedure setMaxRecordedDuration(newValue: CMTime); message 'setMaxRecordedDuration:';
    function maxRecordedDuration: CMTime; message 'maxRecordedDuration';
    procedure setMaxRecordedFileSize(newValue: cint64); message 'setMaxRecordedFileSize:';
    function maxRecordedFileSize: cint64; message 'maxRecordedFileSize';
    procedure setMinFreeDiskSpaceLimit(newValue: cint64); message 'setMinFreeDiskSpaceLimit:';
    function minFreeDiskSpaceLimit: cint64; message 'minFreeDiskSpaceLimit';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVCaptureFileOutputRecordingDelegateProtocol = objcprotocol external name 'AVCaptureFileOutputRecordingDelegate' (NSObjectProtocol)
  optional
    procedure captureOutput_didStartRecordingToOutputFileAtURL_fromConnections (output: AVCaptureFileOutput; fileURL: NSURL; connections: NSArray); message 'captureOutput:didStartRecordingToOutputFileAtURL:fromConnections:';
    procedure captureOutput_didPauseRecordingToOutputFileAtURL_fromConnections (output: AVCaptureFileOutput; fileURL: NSURL; connections: NSArray); message 'captureOutput:didPauseRecordingToOutputFileAtURL:fromConnections:'; { unavailable in ios, macCatalyst, watchos, tvos }
    procedure captureOutput_didResumeRecordingToOutputFileAtURL_fromConnections (output: AVCaptureFileOutput; fileURL: NSURL; connections: NSArray); message 'captureOutput:didResumeRecordingToOutputFileAtURL:fromConnections:'; { unavailable in ios, macCatalyst, watchos, tvos }
    procedure captureOutput_willFinishRecordingToOutputFileAtURL_fromConnections_error (output: AVCaptureFileOutput; fileURL: NSURL; connections: NSArray; error: NSError); message 'captureOutput:willFinishRecordingToOutputFileAtURL:fromConnections:error:'; { unavailable in ios, macCatalyst, watchos, tvos }
  required
    procedure captureOutput_didFinishRecordingToOutputFileAtURL_fromConnections_error (output: AVCaptureFileOutput; outputFileURL: NSURL; connections: NSArray; error: NSError); message 'captureOutput:didFinishRecordingToOutputFileAtURL:fromConnections:error:';
  end;

type
  AVCaptureFileOutputDelegateProtocol = objcprotocol external name 'AVCaptureFileOutputDelegate' (NSObjectProtocol)
  required
    function captureOutputShouldProvideSampleAccurateRecordingStart (output: AVCaptureOutput): objcbool; message 'captureOutputShouldProvideSampleAccurateRecordingStart:'; { unavailable in ios, macCatalyst, watchos, tvos }
  optional
    procedure captureOutput_didOutputSampleBuffer_fromConnection (output: AVCaptureFileOutput; sampleBuffer: CMSampleBufferRef; connection: AVCaptureConnection); message 'captureOutput:didOutputSampleBuffer:fromConnection:';
  end;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureMovieFileOutput = objcclass external (AVCaptureFileOutput)
  private
    _internal: AVCaptureMovieFileOutputInternal;
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure setMovieFragmentInterval(newValue: CMTime); message 'setMovieFragmentInterval:';
    function movieFragmentInterval: CMTime; message 'movieFragmentInterval';
    procedure setMetadata(newValue: NSArray); message 'setMetadata:';
    function metadata: NSArray; message 'metadata';
    function availableVideoCodecTypes: NSArray; message 'availableVideoCodecTypes'; { unavailable in macos, tvos }
    function supportedOutputSettingsKeysForConnection (connection: AVCaptureConnection): NSArray; message 'supportedOutputSettingsKeysForConnection:'; { unavailable in macos, tvos }
    function outputSettingsForConnection (connection: AVCaptureConnection): NSDictionary; message 'outputSettingsForConnection:'; { unavailable in tvos }
    procedure setOutputSettings_forConnection (outputSettings: NSDictionary; connection: AVCaptureConnection); message 'setOutputSettings:forConnection:'; { unavailable in tvos }
    function recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection (connection: AVCaptureConnection): objcbool; message 'recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:'; { unavailable in macos, tvos }
    procedure setRecordsVideoOrientationAndMirroringChanges_asMetadataTrackForConnection (doRecordChanges: objcbool; connection: AVCaptureConnection); message 'setRecordsVideoOrientationAndMirroringChanges:asMetadataTrackForConnection:'; { unavailable in macos, tvos }
  end;

type
  AVCaptureAudioFileOutput = objcclass external (AVCaptureFileOutput)
  private
    _internal: AVCaptureAudioFileOutputInternal;
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    class function availableOutputFileTypes: NSArray; message 'availableOutputFileTypes';
    procedure startRecordingToOutputFileURL_outputFileType_recordingDelegate (outputFileURL_: NSURL; fileType: AVFileType; delegate_: AVCaptureFileOutputRecordingDelegateProtocol); message 'startRecordingToOutputFileURL:outputFileType:recordingDelegate:';
    procedure setMetadata(newValue: NSArray); message 'setMetadata:';
    function metadata: NSArray; message 'metadata';
    procedure setAudioSettings(newValue: NSDictionary); message 'setAudioSettings:';
    function audioSettings: NSDictionary; message 'audioSettings';
  end;
{$endif}

{$else}
{$endif}
