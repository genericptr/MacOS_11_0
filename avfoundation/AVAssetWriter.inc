{ Parsed from AVFoundation.framework AVAssetWriter.h }

{$ifdef CALLBACKS}
type
  AVAssetWriterFinishWritingWithCompletionHandlerCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVAssetWriterPtr = ^AVAssetWriter;
  AVAssetWriterInputGroupPtr = ^AVAssetWriterInputGroup;
  AVAssetWriterDelegateProtocolPtr = ^AVAssetWriterDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVAssetWriterStatus = NSInteger;
  AVAssetWriterStatusPtr = ^AVAssetWriterStatus;

const
  AVAssetWriterStatusUnknown = 0;
  AVAssetWriterStatusWriting = 1;
  AVAssetWriterStatusCompleted = 2;
  AVAssetWriterStatusFailed = 3;
  AVAssetWriterStatusCancelled = 4;
{$endif}

{$ifdef CLASSES}

type
  AVAssetWriter = objcclass external (NSObject)
  private
    _internal: AVAssetWriterInternal;
  public
    class function assetWriterWithURL_fileType_error (outputURL: NSURL; outputFileType: AVFileType; outError: NSErrorPtr): id; message 'assetWriterWithURL:fileType:error:';
    function initWithURL_fileType_error (outputURL: NSURL; outputFileType: AVFileType; outError: NSErrorPtr): id; message 'initWithURL:fileType:error:'; { NS_DESIGNATED_INITIALIZER }
    function initWithContentType (outputContentType: UTTypePtr): id; message 'initWithContentType:'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    function outputURL: NSURL; message 'outputURL';
    function outputFileType: AVFileType; message 'outputFileType';
    function availableMediaTypes: NSArray; message 'availableMediaTypes';
    function status: AVAssetWriterStatus; message 'status';
    function error: NSError; message 'error';
    procedure setMetadata(newValue: NSArray); message 'setMetadata:';
    function metadata: NSArray; message 'metadata';
    procedure setShouldOptimizeForNetworkUse(newValue: objcbool); message 'setShouldOptimizeForNetworkUse:';
    function shouldOptimizeForNetworkUse: objcbool; message 'shouldOptimizeForNetworkUse';
    procedure setDirectoryForTemporaryFiles(newValue: NSURL); message 'setDirectoryForTemporaryFiles:'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    function directoryForTemporaryFiles: NSURL; message 'directoryForTemporaryFiles'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    function inputs: NSArray; message 'inputs';
    function canApplyOutputSettings_forMediaType (outputSettings: NSDictionary; mediaType: AVMediaType): objcbool; message 'canApplyOutputSettings:forMediaType:';
    function canAddInput (input: AVAssetWriterInput): objcbool; message 'canAddInput:';
    procedure addInput (input: AVAssetWriterInput); message 'addInput:';
    function startWriting: objcbool; message 'startWriting';
    procedure startSessionAtSourceTime (startTime: CMTime); message 'startSessionAtSourceTime:';
    procedure endSessionAtSourceTime (endTime: CMTime); message 'endSessionAtSourceTime:';
    procedure cancelWriting; message 'cancelWriting';
    function finishWriting: objcbool; message 'finishWriting'; { unavailable in watchos }
    procedure finishWritingWithCompletionHandler (handler: AVAssetWriterFinishWritingWithCompletionHandlerCallback); message 'finishWritingWithCompletionHandler:'; { unavailable in watchos } { available in macos 10.9, ios 6.0, tvos 9.0 }
  end;


type
  AVAssetWriterFileTypeSpecificProperties = objccategory external (AVAssetWriter)
    procedure setMovieFragmentInterval(newValue: CMTime); message 'setMovieFragmentInterval:';
    function movieFragmentInterval: CMTime; message 'movieFragmentInterval';
    procedure setInitialMovieFragmentSequenceNumber(newValue: NSInteger); message 'setInitialMovieFragmentSequenceNumber:'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    function initialMovieFragmentSequenceNumber: NSInteger; message 'initialMovieFragmentSequenceNumber'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    procedure setProducesCombinableFragments(newValue: objcbool); message 'setProducesCombinableFragments:'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    function producesCombinableFragments: objcbool; message 'producesCombinableFragments'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    procedure setOverallDurationHint(newValue: CMTime); message 'setOverallDurationHint:';
    function overallDurationHint: CMTime; message 'overallDurationHint';
    procedure setMovieTimeScale(newValue: CMTimeScale); message 'setMovieTimeScale:'; { unavailable in watchos } { available in macos 10.7, ios 4.3, tvos 9.0 }
    function movieTimeScale: CMTimeScale; message 'movieTimeScale'; { unavailable in watchos } { available in macos 10.7, ios 4.3, tvos 9.0 }
  end;

type
  AVAssetWriterInputGroups = objccategory external (AVAssetWriter)
    function canAddInputGroup (inputGroup: AVAssetWriterInputGroup): objcbool; message 'canAddInputGroup:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    procedure addInputGroup (inputGroup: AVAssetWriterInputGroup); message 'addInputGroup:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function inputGroups: NSArray; message 'inputGroups'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
  end;


type
  AVAssetWriterInputGroup = objcclass external (AVMediaSelectionGroup)
  private
    _internal: AVAssetWriterInputGroupInternal;
  public
    class function assetWriterInputGroupWithInputs_defaultInput (inputs: NSArray; defaultInput: AVAssetWriterInput): id; message 'assetWriterInputGroupWithInputs:defaultInput:';
    function initWithInputs_defaultInput (inputs: NSArray; defaultInput: AVAssetWriterInput): id; message 'initWithInputs:defaultInput:'; { NS_DESIGNATED_INITIALIZER }
    function inputs: NSArray; message 'inputs';
    function defaultInput: AVAssetWriterInput; message 'defaultInput';
  end;


type
  AVAssetWriterSegmentation = objccategory external (AVAssetWriter)
    procedure setPreferredOutputSegmentInterval(newValue: CMTime); message 'setPreferredOutputSegmentInterval:'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    function preferredOutputSegmentInterval: CMTime; message 'preferredOutputSegmentInterval'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    procedure setInitialSegmentStartTime(newValue: CMTime); message 'setInitialSegmentStartTime:'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    function initialSegmentStartTime: CMTime; message 'initialSegmentStartTime'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    procedure setOutputFileTypeProfile(newValue: AVFileTypeProfile); message 'setOutputFileTypeProfile:'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    function outputFileTypeProfile: AVFileTypeProfile; message 'outputFileTypeProfile'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    procedure setDelegate(newValue: AVAssetWriterDelegateProtocol); message 'setDelegate:'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    function delegate: AVAssetWriterDelegateProtocol; message 'delegate'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
    procedure flushSegment; message 'flushSegment'; { unavailable in watchos } { available in macos 11.0, ios 14.0, tvos 14.0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAssetWriterDelegateProtocol = objcprotocol external name 'AVAssetWriterDelegate' (NSObjectProtocol)
  optional
    procedure assetWriter_didOutputSegmentData_segmentType_segmentReport (writer: AVAssetWriter; segmentData: NSData; segmentType: AVAssetSegmentType; segmentReport: AVAssetSegmentReport); message 'assetWriter:didOutputSegmentData:segmentType:segmentReport:';
    procedure assetWriter_didOutputSegmentData_segmentType (writer: AVAssetWriter; segmentData: NSData; segmentType: AVAssetSegmentType); message 'assetWriter:didOutputSegmentData:segmentType:';
  end;
{$endif}

{$else}
{$endif}
