{ Parsed from CoreMedia.framework CMSampleBuffer.h }

{$ifndef CMSAMPLEBUFFER_H}

{$ifdef TYPES}
type
  CMSampleBufferRef = OpaqueType { available in macos , ios , tvos , watchos  };
  CMSampleBufferRefPtr = ^CMSampleBufferRef { available in macos , ios , tvos , watchos  };

type
  CMSampleTimingInfo = record
    duration: CMTime;
    presentationTimeStamp: CMTime;
    decodeTimeStamp: CMTime;
  end;
type
  CMSampleTimingInfoPtr = ^CMSampleTimingInfo;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimingInfoInvalid: CMSampleTimingInfo { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CMSampleBufferMakeDataReadyCallback = function (sbuf: CMSampleBufferRef; makeDataReadyRefcon: pointer): OSStatus; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMSampleBufferMakeDataReadyHandler = reference to function (sbuf: CMSampleBufferRef): OSStatus; cblock; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CMSampleBufferCreate(allocator: CFAllocatorRef; dataBuffer: CMBlockBufferRef; dataReady: Boolean; makeDataReadyCallback: CMSampleBufferMakeDataReadyCallback; makeDataReadyRefcon: pointer; formatDescription: CMFormatDescriptionRef; numSamples: CMItemCount; numSampleTimingEntries: CMItemCount; sampleTimingArray: CMSampleTimingInfoPtr; numSampleSizeEntries: CMItemCount; sampleSizeArray: size_tPtr; sampleBufferOut: CMSampleBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$ifdef FUNCTIONS}
function CMSampleBufferCreateReady(allocator: CFAllocatorRef; dataBuffer: CMBlockBufferRef; formatDescription: CMFormatDescriptionRef; numSamples: CMItemCount; numSampleTimingEntries: CMItemCount; sampleTimingArray: CMSampleTimingInfoPtr; numSampleSizeEntries: CMItemCount; sampleSizeArray: size_tPtr; sampleBufferOut: CMSampleBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMAudioSampleBufferCreateWithPacketDescriptions(allocator: CFAllocatorRef; dataBuffer: CMBlockBufferRef; dataReady: Boolean; makeDataReadyCallback: CMSampleBufferMakeDataReadyCallback; makeDataReadyRefcon: pointer; formatDescription: CMFormatDescriptionRef; numSamples: CMItemCount; presentationTimeStamp: CMTime; packetDescriptions: AudioStreamPacketDescriptionPtr; sampleBufferOut: CMSampleBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef FUNCTIONS}
function CMAudioSampleBufferCreateWithPacketDescriptionsAndMakeDataReadyHandler(allocator: CFAllocatorRef; dataBuffer: CMBlockBufferRef; dataReady: Boolean; formatDescription: CMFormatDescriptionRef; numSamples: CMItemCount; presentationTimeStamp: CMTime; packetDescriptions: AudioStreamPacketDescriptionPtr; sampleBufferOut: CMSampleBufferRefPtr; makeDataReadyHandler: CMSampleBufferMakeDataReadyHandler): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CMAudioSampleBufferCreateReadyWithPacketDescriptions(allocator: CFAllocatorRef; dataBuffer: CMBlockBufferRef; formatDescription: CMFormatDescriptionRef; numSamples: CMItemCount; presentationTimeStamp: CMTime; packetDescriptions: AudioStreamPacketDescriptionPtr; sampleBufferOut: CMSampleBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferCreateForImageBuffer(allocator: CFAllocatorRef; imageBuffer: CVImageBufferRef; dataReady: Boolean; makeDataReadyCallback: CMSampleBufferMakeDataReadyCallback; makeDataReadyRefcon: pointer; formatDescription: CMVideoFormatDescriptionRef; sampleTiming: CMSampleTimingInfoPtr; sampleBufferOut: CMSampleBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef FUNCTIONS}
function CMSampleBufferCreateForImageBufferWithMakeDataReadyHandler(allocator: CFAllocatorRef; imageBuffer: CVImageBufferRef; dataReady: Boolean; formatDescription: CMVideoFormatDescriptionRef; sampleTiming: CMSampleTimingInfoPtr; sampleBufferOut: CMSampleBufferRefPtr; makeDataReadyHandler: CMSampleBufferMakeDataReadyHandler): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CMSampleBufferCreateReadyWithImageBuffer(allocator: CFAllocatorRef; imageBuffer: CVImageBufferRef; formatDescription: CMVideoFormatDescriptionRef; sampleTiming: CMSampleTimingInfoPtr; sampleBufferOut: CMSampleBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferCreateCopy(allocator: CFAllocatorRef; sbuf: CMSampleBufferRef; sampleBufferOut: CMSampleBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferCreateCopyWithNewTiming(allocator: CFAllocatorRef; originalSBuf: CMSampleBufferRef; numSampleTimingEntries: CMItemCount; sampleTimingArray: CMSampleTimingInfoPtr; sampleBufferOut: CMSampleBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferCopySampleBufferForRange(allocator: CFAllocatorRef; sbuf: CMSampleBufferRef; sampleRange: CFRange; sampleBufferOut: CMSampleBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetTypeID: CFTypeID; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferSetDataBuffer(sbuf: CMSampleBufferRef; dataBuffer: CMBlockBufferRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetDataBuffer(sbuf: CMSampleBufferRef): CMBlockBufferRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetImageBuffer(sbuf: CMSampleBufferRef): CVImageBufferRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferSetDataBufferFromAudioBufferList(sbuf: CMSampleBufferRef; blockBufferStructureAllocator: CFAllocatorRef; blockBufferBlockAllocator: CFAllocatorRef; flags: cuint32; bufferList: AudioBufferListPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetAudioBufferListWithRetainedBlockBuffer(sbuf: CMSampleBufferRef; bufferListSizeNeededOut: size_tPtr; bufferListOut: AudioBufferListPtr; bufferListSize: size_t; blockBufferStructureAllocator: CFAllocatorRef; blockBufferBlockAllocator: CFAllocatorRef; flags: cuint32; blockBufferOut: CMBlockBufferRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetAudioStreamPacketDescriptions(sbuf: CMSampleBufferRef; packetDescriptionsSize: size_t; packetDescriptionsOut: AudioStreamPacketDescriptionPtr; packetDescriptionsSizeNeededOut: size_tPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetAudioStreamPacketDescriptionsPtr(sbuf: CMSampleBufferRef; packetDescriptionsPointerOut: AudioStreamPacketDescriptionPtr; packetDescriptionsSizeOut: size_tPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferCopyPCMDataIntoAudioBufferList(sbuf: CMSampleBufferRef; frameOffset: cint32; numFrames: cint32; bufferList: AudioBufferListPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferSetDataReady(sbuf: CMSampleBufferRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferDataIsReady(sbuf: CMSampleBufferRef): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferSetDataFailed(sbuf: CMSampleBufferRef; status: OSStatus): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferHasDataFailed(sbuf: CMSampleBufferRef; statusOut: OSStatusPtr): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferMakeDataReady(sbuf: CMSampleBufferRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferTrackDataReadiness(sbuf: CMSampleBufferRef; sampleBufferToTrack: CMSampleBufferRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferInvalidate(sbuf: CMSampleBufferRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$ifdef TYPES}
type
  CMSampleBufferInvalidateCallback = procedure (sbuf: CMSampleBufferRef; invalidateRefCon: cuint64); cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef FUNCTIONS}
function CMSampleBufferSetInvalidateCallback(sbuf: CMSampleBufferRef; invalidateCallback: CMSampleBufferInvalidateCallback; invalidateRefCon: cuint64): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMSampleBufferInvalidateHandler = reference to procedure (sbuf: CMSampleBufferRef); cblock; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef FUNCTIONS}
function CMSampleBufferSetInvalidateHandler(sbuf: CMSampleBufferRef; invalidateHandler: CMSampleBufferInvalidateHandler): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CMSampleBufferIsValid(sbuf: CMSampleBufferRef): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMSampleBufferNotification_DataBecameReady: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferNotification_DataFailed: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferNotificationParameter_OSStatus: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferConduitNotification_InhibitOutputUntil: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferConduitNotificationParameter_ResumeTag: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferConduitNotification_ResetOutput: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferConduitNotification_UpcomingOutputPTSRangeChanged: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferConduitNotificationParameter_UpcomingOutputPTSRangeMayOverlapQueuedOutputPTSRange: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferConduitNotificationParameter_MinUpcomingOutputPTS: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferConduitNotificationParameter_MaxUpcomingOutputPTS: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferConsumerNotification_BufferConsumed: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMSampleBufferGetNumSamples(sbuf: CMSampleBufferRef): CMItemCount; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetDuration(sbuf: CMSampleBufferRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetPresentationTimeStamp(sbuf: CMSampleBufferRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetDecodeTimeStamp(sbuf: CMSampleBufferRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetOutputDuration(sbuf: CMSampleBufferRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetOutputPresentationTimeStamp(sbuf: CMSampleBufferRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferSetOutputPresentationTimeStamp(sbuf: CMSampleBufferRef; outputPresentationTimeStamp: CMTime): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetOutputDecodeTimeStamp(sbuf: CMSampleBufferRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetSampleTimingInfoArray(sbuf: CMSampleBufferRef; numSampleTimingEntries: CMItemCount; timingArrayOut: CMSampleTimingInfoPtr; timingArrayEntriesNeededOut: CMItemCountPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetOutputSampleTimingInfoArray(sbuf: CMSampleBufferRef; timingArrayEntries: CMItemCount; timingArrayOut: CMSampleTimingInfoPtr; timingArrayEntriesNeededOut: CMItemCountPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetSampleTimingInfo(sbuf: CMSampleBufferRef; sampleIndex: CMItemIndex; timingInfoOut: CMSampleTimingInfoPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetSampleSizeArray(sbuf: CMSampleBufferRef; sizeArrayEntries: CMItemCount; sizeArrayOut: size_tPtr; sizeArrayEntriesNeededOut: CMItemCountPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetSampleSize(sbuf: CMSampleBufferRef; sampleIndex: CMItemIndex): size_t; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetTotalSampleSize(sbuf: CMSampleBufferRef): size_t; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetFormatDescription(sbuf: CMSampleBufferRef): CMFormatDescriptionRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSampleBufferGetSampleAttachmentsArray(sbuf: CMSampleBufferRef; createIfNecessary: Boolean): CFArrayRef; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMSampleAttachmentKey_NotSync: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleAttachmentKey_PartialSync: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleAttachmentKey_HasRedundantCoding: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleAttachmentKey_IsDependedOnByOthers: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleAttachmentKey_DependsOnOthers: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleAttachmentKey_EarlierDisplayTimesAllowed: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleAttachmentKey_DisplayImmediately: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleAttachmentKey_DoNotDisplay: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_ResetDecoderBeforeDecoding: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_DrainAfterDecoding: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_PostNotificationWhenConsumed: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_ResumeOutput: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleAttachmentKey_HEVCTemporalLevelInfo: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMHEVCTemporalLevelInfoKey_TemporalLevel: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMHEVCTemporalLevelInfoKey_ProfileSpace: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMHEVCTemporalLevelInfoKey_TierFlag: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMHEVCTemporalLevelInfoKey_ProfileIndex: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMHEVCTemporalLevelInfoKey_ProfileCompatibilityFlags: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMHEVCTemporalLevelInfoKey_ConstraintIndicatorFlags: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMHEVCTemporalLevelInfoKey_LevelIndex: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleAttachmentKey_HEVCTemporalSubLayerAccess: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleAttachmentKey_HEVCStepwiseTemporalSubLayerAccess: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleAttachmentKey_HEVCSyncSampleNALUnitType: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleAttachmentKey_AudioIndependentSampleDecoderRefreshCount: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_TransitionID: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_TrimDurationAtStart: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_TrimDurationAtEnd: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_SpeedMultiplier: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_Reverse: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_FillDiscontinuitiesWithSilence: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_EmptyMedia: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_PermanentEmptyMedia: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_DisplayEmptyMediaImmediately: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_EndsPreviousSampleDuration: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_SampleReferenceURL: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_SampleReferenceByteOffset: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_GradualDecoderRefresh: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_DroppedFrameReason: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferDroppedFrameReason_FrameWasLate: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferDroppedFrameReason_OutOfBuffers: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferDroppedFrameReason_Discontinuity: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_DroppedFrameReasonInfo: CFStringRef; cvar; external;
  kCMSampleBufferDroppedFrameReasonInfo_CameraModeSwitch: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_StillImageLensStabilizationInfo: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferLensStabilizationInfo_Active: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferLensStabilizationInfo_OutOfRange: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferLensStabilizationInfo_Unavailable: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferLensStabilizationInfo_Off: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_CameraIntrinsicMatrix: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMSampleBufferAttachmentKey_ForceKeyFrame: CFStringRef; cvar; external;
{$endif}

{$endif}
