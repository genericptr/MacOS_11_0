{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVSampleCursor.h }

{$ifdef TYPES}
type
  AVSampleCursorPtr = ^AVSampleCursor;

type
  AVSampleCursorSyncInfo = record
    sampleIsFullSync: objcbool;
    sampleIsPartialSync: objcbool;
    sampleIsDroppable: objcbool;
  end;
  AVSampleCursorSyncInfoPtr = ^AVSampleCursorSyncInfo;

type
  AVSampleCursorStorageRange = record
    offset: cint64;
    length: cint64;
  end;
  AVSampleCursorStorageRangePtr = ^AVSampleCursorStorageRange;

type
  AVSampleCursorDependencyInfo = record
    sampleIndicatesWhetherItHasDependentSamples: objcbool;
    sampleHasDependentSamples: objcbool;
    sampleIndicatesWhetherItDependsOnOthers: objcbool;
    sampleDependsOnOthers: objcbool;
    sampleIndicatesWhetherItHasRedundantCoding: objcbool;
    sampleHasRedundantCoding: objcbool;
  end;
  AVSampleCursorDependencyInfoPtr = ^AVSampleCursorDependencyInfo;

type
  AVSampleCursorAudioDependencyInfo = record
    audioSampleIsIndependentlyDecodable: objcbool;
    audioSamplePacketRefreshCount: NSInteger;
  end;
  AVSampleCursorAudioDependencyInfoPtr = ^AVSampleCursorAudioDependencyInfo;

type
  AVSampleCursorChunkInfo = record
    chunkSampleCount: cint64;
    chunkHasUniformSampleSizes: objcbool;
    chunkHasUniformSampleDurations: objcbool;
    chunkHasUniformFormatDescriptions: objcbool;
  end;
  AVSampleCursorChunkInfoPtr = ^AVSampleCursorChunkInfo;

{$endif}

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  AVSampleCursor = objcclass external (NSObject, NSCopyingProtocol)
  private
    _sampleCursor: AVSampleCursorInternal;
  public
    function stepInDecodeOrderByCount (stepCount: cint64): cint64; message 'stepInDecodeOrderByCount:';
    function stepInPresentationOrderByCount (stepCount: cint64): cint64; message 'stepInPresentationOrderByCount:';
    function stepByDecodeTime_wasPinned (deltaDecodeTime: CMTime; outWasPinned: objcboolPtr): CMTime; message 'stepByDecodeTime:wasPinned:';
    function stepByPresentationTime_wasPinned (deltaPresentationTime: CMTime; outWasPinned: objcboolPtr): CMTime; message 'stepByPresentationTime:wasPinned:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;


type
  AVSampleCursorTemporalPosition = objccategory external (AVSampleCursor)
    function presentationTimeStamp: CMTime; message 'presentationTimeStamp';
    function decodeTimeStamp: CMTime; message 'decodeTimeStamp';
    function comparePositionInDecodeOrderWithPositionOfCursor (cursor: AVSampleCursor): NSComparisonResult; message 'comparePositionInDecodeOrderWithPositionOfCursor:';
    function samplesWithEarlierDecodeTimeStampsMayHaveLaterPresentationTimeStampsThanCursor (cursor: AVSampleCursor): objcbool; message 'samplesWithEarlierDecodeTimeStampsMayHaveLaterPresentationTimeStampsThanCursor:';
    function samplesWithLaterDecodeTimeStampsMayHaveEarlierPresentationTimeStampsThanCursor (cursor: AVSampleCursor): objcbool; message 'samplesWithLaterDecodeTimeStampsMayHaveEarlierPresentationTimeStampsThanCursor:';
  end;

type
  AVSampleCursorCurrentSampleInfo = objccategory external (AVSampleCursor)
    function currentSampleDuration: CMTime; message 'currentSampleDuration';
    function copyCurrentSampleFormatDescription: CMFormatDescriptionRef; message 'copyCurrentSampleFormatDescription'; { CF_RETURNS_RETAINED }
    function currentSampleSyncInfo: AVSampleCursorSyncInfo; message 'currentSampleSyncInfo';
    function currentSampleDependencyInfo: AVSampleCursorDependencyInfo; message 'currentSampleDependencyInfo';
    function currentSampleAudioDependencyInfo: AVSampleCursorAudioDependencyInfo; message 'currentSampleAudioDependencyInfo'; { unavailable in ios, tvos, watchos }
    function samplesRequiredForDecoderRefresh: NSInteger; message 'samplesRequiredForDecoderRefresh'; { unavailable in ios, tvos, watchos }
  end;

type
  AVSampleCursorSampleStorageInfo = objccategory external (AVSampleCursor)
    function currentChunkStorageURL: NSURL; message 'currentChunkStorageURL';
    function currentChunkStorageRange: AVSampleCursorStorageRange; message 'currentChunkStorageRange';
    function currentChunkInfo: AVSampleCursorChunkInfo; message 'currentChunkInfo';
    function currentSampleIndexInChunk: cint64; message 'currentSampleIndexInChunk';
    function currentSampleStorageRange: AVSampleCursorStorageRange; message 'currentSampleStorageRange';
  end;
{$endif}

{$endif}

{$else}
{$endif}
