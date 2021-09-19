{ Parsed from AVFoundation.framework AVAssetWriterInput.h }

{ Types from AVAssetWriterInputFileTypeSpecificProperties }
{$ifdef TYPES}

type
  AVAssetWriterInputMediaDataLocation = NSString { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 };
type
  AVAssetWriterInputMediaDataLocationPtr = ^AVAssetWriterInputMediaDataLocation { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 };
{$endif}


{$ifdef CALLBACKS}
type
  AVAssetWriterInputRequestMediaDataWhenReadyOnQueueCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVAssetWriterInputPtr = ^AVAssetWriterInput;
  AVAssetWriterInputPassDescriptionPtr = ^AVAssetWriterInputPassDescription;
  AVAssetWriterInputPixelBufferAdaptorPtr = ^AVAssetWriterInputPixelBufferAdaptor;
  AVAssetWriterInputMetadataAdaptorPtr = ^AVAssetWriterInputMetadataAdaptor;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVAssetWriterInput = objcclass external (NSObject)
  private
    _internal: AVAssetWriterInputInternal;
  public
    class function assetWriterInputWithMediaType_outputSettings (mediaType: AVMediaType; outputSettings: NSDictionary): id; message 'assetWriterInputWithMediaType:outputSettings:';
    class function assetWriterInputWithMediaType_outputSettings_sourceFormatHint (mediaType: AVMediaType; outputSettings: NSDictionary; sourceFormatHint: CMFormatDescriptionRef): id; message 'assetWriterInputWithMediaType:outputSettings:sourceFormatHint:'; { unavailable in watchos } { available in macos 10.8, ios 6.0, tvos 9.0 }
    function initWithMediaType_outputSettings (mediaType: AVMediaType; outputSettings: NSDictionary): id; message 'initWithMediaType:outputSettings:';
    function initWithMediaType_outputSettings_sourceFormatHint (mediaType: AVMediaType; outputSettings: NSDictionary; sourceFormatHint: CMFormatDescriptionRef): id; message 'initWithMediaType:outputSettings:sourceFormatHint:'; { unavailable in watchos } { available in macos 10.8, ios 6.0, tvos 9.0 }
    function mediaType: AVMediaType; message 'mediaType';
    function outputSettings: NSDictionary; message 'outputSettings';
    function sourceFormatHint: CMFormatDescriptionRef; message 'sourceFormatHint'; { unavailable in watchos } { available in macos 10.8, ios 6.0, tvos 9.0 }
    procedure setMetadata(newValue: NSArray); message 'setMetadata:';
    function metadata: NSArray; message 'metadata';
    function isReadyForMoreMediaData: objcbool; message 'isReadyForMoreMediaData';
    procedure setExpectsMediaDataInRealTime(newValue: objcbool); message 'setExpectsMediaDataInRealTime:';
    function expectsMediaDataInRealTime: objcbool; message 'expectsMediaDataInRealTime';
    procedure requestMediaDataWhenReadyOnQueue_usingBlock (queue: dispatch_queue_t; block: AVAssetWriterInputRequestMediaDataWhenReadyOnQueueCallback); message 'requestMediaDataWhenReadyOnQueue:usingBlock:';
    function appendSampleBuffer (sampleBuffer: CMSampleBufferRef): objcbool; message 'appendSampleBuffer:';
    procedure markAsFinished; message 'markAsFinished';
  end;


type
  AVAssetWriterInputLanguageProperties = objccategory external (AVAssetWriterInput)
    procedure setLanguageCode(newValue: NSString); message 'setLanguageCode:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function languageCode: NSString; message 'languageCode'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    procedure setExtendedLanguageTag(newValue: NSString); message 'setExtendedLanguageTag:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function extendedLanguageTag: NSString; message 'extendedLanguageTag'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
  end;

type
  AVAssetWriterInputPropertiesForVisualCharacteristic = objccategory external (AVAssetWriterInput)
    procedure setNaturalSize(newValue: CGSize); message 'setNaturalSize:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function naturalSize: CGSize; message 'naturalSize'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    procedure setTransform(newValue: CGAffineTransform); message 'setTransform:';
    function transform: CGAffineTransform; message 'transform';
  end;

type
  AVAssetWriterInputPropertiesForAudibleCharacteristic = objccategory external (AVAssetWriterInput)
    procedure setPreferredVolume(newValue: single); message 'setPreferredVolume:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function preferredVolume: single; message 'preferredVolume'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
  end;

type
  AVAssetWriterInputFileTypeSpecificProperties = objccategory external (AVAssetWriterInput)
    procedure setMarksOutputTrackAsEnabled(newValue: objcbool); message 'setMarksOutputTrackAsEnabled:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    function marksOutputTrackAsEnabled: objcbool; message 'marksOutputTrackAsEnabled'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    procedure setMediaTimeScale(newValue: CMTimeScale); message 'setMediaTimeScale:'; { unavailable in watchos } { available in macos 10.7, ios 4.3, tvos 9.0 }
    function mediaTimeScale: CMTimeScale; message 'mediaTimeScale'; { unavailable in watchos } { available in macos 10.7, ios 4.3, tvos 9.0 }
    procedure setPreferredMediaChunkDuration(newValue: CMTime); message 'setPreferredMediaChunkDuration:'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    function preferredMediaChunkDuration: CMTime; message 'preferredMediaChunkDuration'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    procedure setPreferredMediaChunkAlignment(newValue: NSInteger); message 'setPreferredMediaChunkAlignment:'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    function preferredMediaChunkAlignment: NSInteger; message 'preferredMediaChunkAlignment'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    procedure setSampleReferenceBaseURL(newValue: NSURL); message 'setSampleReferenceBaseURL:'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    function sampleReferenceBaseURL: NSURL; message 'sampleReferenceBaseURL'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    procedure setMediaDataLocation(newValue: AVAssetWriterInputMediaDataLocation); message 'setMediaDataLocation:'; { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }
    function mediaDataLocation: AVAssetWriterInputMediaDataLocation; message 'mediaDataLocation'; { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }
  end;

type
  AVAssetWriterInputTrackAssociations = objccategory external (AVAssetWriterInput)
    function canAddTrackAssociationWithTrackOfInput_type (input: AVAssetWriterInput; trackAssociationType: NSString): objcbool; message 'canAddTrackAssociationWithTrackOfInput:type:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    procedure addTrackAssociationWithTrackOfInput_type (input: AVAssetWriterInput; trackAssociationType: NSString); message 'addTrackAssociationWithTrackOfInput:type:'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
  end;

type
  AVAssetWriterInputMultiPass = objccategory external (AVAssetWriterInput)
    procedure setPerformsMultiPassEncodingIfSupported(newValue: objcbool); message 'setPerformsMultiPassEncodingIfSupported:'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    function performsMultiPassEncodingIfSupported: objcbool; message 'performsMultiPassEncodingIfSupported'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    function canPerformMultiplePasses: objcbool; message 'canPerformMultiplePasses'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    function currentPassDescription: AVAssetWriterInputPassDescription; message 'currentPassDescription'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    procedure respondToEachPassDescriptionOnQueue_usingBlock (queue: dispatch_queue_t; block: dispatch_block_t); message 'respondToEachPassDescriptionOnQueue:usingBlock:'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    procedure markCurrentPassAsFinished; message 'markCurrentPassAsFinished'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
  end;


type
  AVAssetWriterInputPassDescription = objcclass external (NSObject)
  private
    _internal: AVAssetWriterInputPassDescriptionInternal;
  public
    function sourceTimeRanges: NSArray; message 'sourceTimeRanges';
  end;

type
  AVAssetWriterInputPixelBufferAdaptor = objcclass external (NSObject)
  private
    _internal: AVAssetWriterInputPixelBufferAdaptorInternal;
  public
    class function assetWriterInputPixelBufferAdaptorWithAssetWriterInput_sourcePixelBufferAttributes (input: AVAssetWriterInput; sourcePixelBufferAttributes: NSDictionary): id; message 'assetWriterInputPixelBufferAdaptorWithAssetWriterInput:sourcePixelBufferAttributes:';
    function initWithAssetWriterInput_sourcePixelBufferAttributes (input: AVAssetWriterInput; sourcePixelBufferAttributes: NSDictionary): id; message 'initWithAssetWriterInput:sourcePixelBufferAttributes:'; { NS_DESIGNATED_INITIALIZER }
    function assetWriterInput: AVAssetWriterInput; message 'assetWriterInput';
    function sourcePixelBufferAttributes: NSDictionary; message 'sourcePixelBufferAttributes';
    function pixelBufferPool: CVPixelBufferPoolRef; message 'pixelBufferPool';
    function appendPixelBuffer_withPresentationTime (pixelBuffer: CVPixelBufferRef; presentationTime: CMTime): objcbool; message 'appendPixelBuffer:withPresentationTime:';
  end;

type
  AVAssetWriterInputMetadataAdaptor = objcclass external (NSObject)
  private
    _internal: AVAssetWriterInputMetadataAdaptorInternal;
  public
    class function assetWriterInputMetadataAdaptorWithAssetWriterInput (input: AVAssetWriterInput): id; message 'assetWriterInputMetadataAdaptorWithAssetWriterInput:';
    function initWithAssetWriterInput (input: AVAssetWriterInput): id; message 'initWithAssetWriterInput:'; { NS_DESIGNATED_INITIALIZER }
    function assetWriterInput: AVAssetWriterInput; message 'assetWriterInput';
    function appendTimedMetadataGroup (timedMetadataGroup: AVTimedMetadataGroup): objcbool; message 'appendTimedMetadataGroup:';
  end;
{$endif}

{$else}
{$endif}
