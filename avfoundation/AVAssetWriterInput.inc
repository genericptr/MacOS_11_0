{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVAssetWriterInput.h }

{ Types from AVAssetWriterInputFileTypeSpecificProperties }
{$ifdef TYPES}

type
  AVAssetWriterInputMediaDataLocation = NSString { unavailable in watchos };
type
  AVAssetWriterInputMediaDataLocationPtr = ^AVAssetWriterInputMediaDataLocation { unavailable in watchos };
{$endif}


{$ifdef CALLBACKS}
type
  AVAssetWriterInputRequestMediaDataWhenReadyOnQueueCallback = reference to function : pointer; cblock; cdecl;
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
    class function assetWriterInputWithMediaType_outputSettings_sourceFormatHint (mediaType: AVMediaType; outputSettings: NSDictionary; sourceFormatHint: CMFormatDescriptionRef): id; message 'assetWriterInputWithMediaType:outputSettings:sourceFormatHint:'; { unavailable in watchos }
    function initWithMediaType_outputSettings (mediaType: AVMediaType; outputSettings: NSDictionary): id; message 'initWithMediaType:outputSettings:';
    function initWithMediaType_outputSettings_sourceFormatHint (mediaType: AVMediaType; outputSettings: NSDictionary; sourceFormatHint: CMFormatDescriptionRef): id; message 'initWithMediaType:outputSettings:sourceFormatHint:'; { unavailable in watchos }
    function mediaType: AVMediaType; message 'mediaType';
    function outputSettings: NSDictionary; message 'outputSettings';
    function sourceFormatHint: CMFormatDescriptionRef; message 'sourceFormatHint'; { unavailable in watchos }
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
    procedure setLanguageCode(newValue: NSString); message 'setLanguageCode:'; { unavailable in watchos }
    function languageCode: NSString; message 'languageCode'; { unavailable in watchos }
    procedure setExtendedLanguageTag(newValue: NSString); message 'setExtendedLanguageTag:'; { unavailable in watchos }
    function extendedLanguageTag: NSString; message 'extendedLanguageTag'; { unavailable in watchos }
  end;

type
  AVAssetWriterInputPropertiesForVisualCharacteristic = objccategory external (AVAssetWriterInput)
    procedure setNaturalSize(newValue: CGSize); message 'setNaturalSize:'; { unavailable in watchos }
    function naturalSize: CGSize; message 'naturalSize'; { unavailable in watchos }
    procedure setTransform(newValue: CGAffineTransform); message 'setTransform:';
    function transform: CGAffineTransform; message 'transform';
  end;

type
  AVAssetWriterInputPropertiesForAudibleCharacteristic = objccategory external (AVAssetWriterInput)
    procedure setPreferredVolume(newValue: single); message 'setPreferredVolume:'; { unavailable in watchos }
    function preferredVolume: single; message 'preferredVolume'; { unavailable in watchos }
  end;

type
  AVAssetWriterInputFileTypeSpecificProperties = objccategory external (AVAssetWriterInput)
    procedure setMarksOutputTrackAsEnabled(newValue: objcbool); message 'setMarksOutputTrackAsEnabled:'; { unavailable in watchos }
    function marksOutputTrackAsEnabled: objcbool; message 'marksOutputTrackAsEnabled'; { unavailable in watchos }
    procedure setMediaTimeScale(newValue: CMTimeScale); message 'setMediaTimeScale:'; { unavailable in watchos }
    function mediaTimeScale: CMTimeScale; message 'mediaTimeScale'; { unavailable in watchos }
    procedure setPreferredMediaChunkDuration(newValue: CMTime); message 'setPreferredMediaChunkDuration:'; { unavailable in watchos }
    function preferredMediaChunkDuration: CMTime; message 'preferredMediaChunkDuration'; { unavailable in watchos }
    procedure setPreferredMediaChunkAlignment(newValue: NSInteger); message 'setPreferredMediaChunkAlignment:'; { unavailable in watchos }
    function preferredMediaChunkAlignment: NSInteger; message 'preferredMediaChunkAlignment'; { unavailable in watchos }
    procedure setSampleReferenceBaseURL(newValue: NSURL); message 'setSampleReferenceBaseURL:'; { unavailable in watchos }
    function sampleReferenceBaseURL: NSURL; message 'sampleReferenceBaseURL'; { unavailable in watchos }
    procedure setMediaDataLocation(newValue: AVAssetWriterInputMediaDataLocation); message 'setMediaDataLocation:'; { unavailable in watchos }
    function mediaDataLocation: AVAssetWriterInputMediaDataLocation; message 'mediaDataLocation'; { unavailable in watchos }
  end;

type
  AVAssetWriterInputTrackAssociations = objccategory external (AVAssetWriterInput)
    function canAddTrackAssociationWithTrackOfInput_type (input: AVAssetWriterInput; trackAssociationType: NSString): objcbool; message 'canAddTrackAssociationWithTrackOfInput:type:'; { unavailable in watchos }
    procedure addTrackAssociationWithTrackOfInput_type (input: AVAssetWriterInput; trackAssociationType: NSString); message 'addTrackAssociationWithTrackOfInput:type:'; { unavailable in watchos }
  end;

type
  AVAssetWriterInputMultiPass = objccategory external (AVAssetWriterInput)
    procedure setPerformsMultiPassEncodingIfSupported(newValue: objcbool); message 'setPerformsMultiPassEncodingIfSupported:'; { unavailable in watchos }
    function performsMultiPassEncodingIfSupported: objcbool; message 'performsMultiPassEncodingIfSupported'; { unavailable in watchos }
    function canPerformMultiplePasses: objcbool; message 'canPerformMultiplePasses'; { unavailable in watchos }
    function currentPassDescription: AVAssetWriterInputPassDescription; message 'currentPassDescription'; { unavailable in watchos }
    procedure respondToEachPassDescriptionOnQueue_usingBlock (queue: dispatch_queue_t; block: dispatch_block_t); message 'respondToEachPassDescriptionOnQueue:usingBlock:'; { unavailable in watchos }
    procedure markCurrentPassAsFinished; message 'markCurrentPassAsFinished'; { unavailable in watchos }
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
