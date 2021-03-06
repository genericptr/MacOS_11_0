{ Parsed from AVFoundation.framework AVPlayerItemOutput.h }

{ Types from AVPlayerItemOutput }
{$ifdef TYPES}

{$endif}


{ Types from AVPlayerItemLegibleOutput_TextStylingResolution }
{$ifdef TYPES}

type
  AVPlayerItemLegibleOutputTextStylingResolution = NSString;
type
  AVPlayerItemLegibleOutputTextStylingResolutionPtr = ^AVPlayerItemLegibleOutputTextStylingResolution;
{$endif}


{$ifdef TYPES}
type
  AVPlayerItemOutputPtr = ^AVPlayerItemOutput;
  AVPlayerItemVideoOutputPtr = ^AVPlayerItemVideoOutput;
  AVPlayerItemLegibleOutputPtr = ^AVPlayerItemLegibleOutput;
  AVPlayerItemMetadataOutputPtr = ^AVPlayerItemMetadataOutput;
  AVPlayerItemOutputPullDelegateProtocolPtr = ^AVPlayerItemOutputPullDelegateProtocol;
  AVPlayerItemLegibleOutputPushDelegateProtocolPtr = ^AVPlayerItemLegibleOutputPushDelegateProtocol;
  AVPlayerItemOutputPushDelegateProtocolPtr = ^AVPlayerItemOutputPushDelegateProtocol;
  AVPlayerItemMetadataOutputPushDelegateProtocolPtr = ^AVPlayerItemMetadataOutputPushDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}

{$ifdef CLASSES}

type
  AVPlayerItemOutput = objcclass external (NSObject)
  private
    _outputInternal: AVPlayerItemOutputInternal;
  public
    function itemTimeForHostTime (hostTimeInSeconds: CFTimeInterval): CMTime; message 'itemTimeForHostTime:';
    function itemTimeForMachAbsoluteTime (machAbsoluteTime: cint64): CMTime; message 'itemTimeForMachAbsoluteTime:';
    {$if  not defined(TARGET_OS_IPHONE)}
    function itemTimeForCVTimeStamp (timestamp: CVTimeStamp): CMTime; message 'itemTimeForCVTimeStamp:'; { unavailable in ios, tvos, watchos } { available in macos 10.8 }
    {$endif}
    procedure setSuppressesPlayerRendering(newValue: objcbool); message 'setSuppressesPlayerRendering:'; { unavailable in watchos } { available in macos 10.8, ios 6.0, tvos 9.0 }
    function suppressesPlayerRendering: objcbool; message 'suppressesPlayerRendering'; { unavailable in watchos } { available in macos 10.8, ios 6.0, tvos 9.0 }
  end;

type
  AVPlayerItemVideoOutput = objcclass external (AVPlayerItemOutput)
  private
    _videoOutputInternal: AVPlayerItemVideoOutputInternal;
  public
    function initWithPixelBufferAttributes (pixelBufferAttributes: NSDictionary): id; message 'initWithPixelBufferAttributes:'; { NS_DESIGNATED_INITIALIZER }
    function initWithOutputSettings (outputSettings: NSDictionary): id; message 'initWithOutputSettings:'; { unavailable in watchos } { available in macos 10.12, ios 10.0, tvos 10.0 }
    function hasNewPixelBufferForItemTime (itemTime: CMTime): objcbool; message 'hasNewPixelBufferForItemTime:';
    function copyPixelBufferForItemTime_itemTimeForDisplay (itemTime: CMTime; outItemTimeForDisplay: CMTimePtr): CVPixelBufferRef; message 'copyPixelBufferForItemTime:itemTimeForDisplay:'; { CF_RETURNS_RETAINED }
    procedure setDelegate_queue (delegate: AVPlayerItemOutputPullDelegateProtocol; delegateQueue: dispatch_queue_t); message 'setDelegate:queue:';
    procedure requestNotificationOfMediaDataChangeWithAdvanceInterval (interval: NSTimeInterval); message 'requestNotificationOfMediaDataChangeWithAdvanceInterval:';
    function delegate: AVPlayerItemOutputPullDelegateProtocol; message 'delegate';
    function delegateQueue: dispatch_queue_t; message 'delegateQueue';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVPlayerItemOutputPullDelegateProtocol = objcprotocol external name 'AVPlayerItemOutputPullDelegate' (NSObjectProtocol)
  optional
    procedure outputMediaDataWillChange (sender: AVPlayerItemOutput); message 'outputMediaDataWillChange:'; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }
    procedure outputSequenceWasFlushed (output: AVPlayerItemOutput); message 'outputSequenceWasFlushed:'; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 1.0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerItemLegibleOutput = objcclass external (AVPlayerItemOutput)
  private
    _legibleOutputInternal: AVPlayerItemLegibleOutputInternal;
  public
    procedure setDelegate_queue (delegate: AVPlayerItemLegibleOutputPushDelegateProtocol; delegateQueue: dispatch_queue_t); message 'setDelegate:queue:';
    function delegate: AVPlayerItemLegibleOutputPushDelegateProtocol; message 'delegate';
    function delegateQueue: dispatch_queue_t; message 'delegateQueue';
    procedure setAdvanceIntervalForDelegateInvocation(newValue: NSTimeInterval); message 'setAdvanceIntervalForDelegateInvocation:';
    function advanceIntervalForDelegateInvocation: NSTimeInterval; message 'advanceIntervalForDelegateInvocation';
  end;


type
  AVPlayerItemLegibleOutput_NativeRepresentation = objccategory external (AVPlayerItemLegibleOutput)
    function initWithMediaSubtypesForNativeRepresentation (subtypes: NSArray): id; message 'initWithMediaSubtypesForNativeRepresentation:';
  end;

type
  AVPlayerItemLegibleOutput_TextStylingResolution = objccategory external (AVPlayerItemLegibleOutput)
    procedure setTextStylingResolution(newValue: AVPlayerItemLegibleOutputTextStylingResolution); message 'setTextStylingResolution:';
    function textStylingResolution: AVPlayerItemLegibleOutputTextStylingResolution; message 'textStylingResolution';
  end;
{$endif}

{$ifdef PROTOCOLS}
type
  AVPlayerItemOutputPushDelegateProtocol = objcprotocol external name 'AVPlayerItemOutputPushDelegate' (NSObjectProtocol)
  optional
    procedure outputSequenceWasFlushed (output: AVPlayerItemOutput); message 'outputSequenceWasFlushed:';
  end;

type
  AVPlayerItemLegibleOutputPushDelegateProtocol = objcprotocol external name 'AVPlayerItemLegibleOutputPushDelegate' (AVPlayerItemOutputPushDelegateProtocol)
  optional
    procedure legibleOutput_didOutputAttributedStrings_nativeSampleBuffers_forItemTime (output: AVPlayerItemLegibleOutput; strings: NSArray; nativeSamples: NSArray; itemTime: CMTime); message 'legibleOutput:didOutputAttributedStrings:nativeSampleBuffers:forItemTime:'; { unavailable in watchos }
  end;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerItemMetadataOutput = objcclass external (AVPlayerItemOutput)
  private
    _metadataOutputInternal: AVPlayerItemMetadataOutputInternal;
  public
    function initWithIdentifiers (identifiers: NSArray): id; message 'initWithIdentifiers:'; { NS_DESIGNATED_INITIALIZER }
    procedure setDelegate_queue (delegate: id; delegateQueue: dispatch_queue_t); message 'setDelegate:queue:';
    function delegate: AVPlayerItemMetadataOutputPushDelegateProtocol; message 'delegate';
    function delegateQueue: dispatch_queue_t; message 'delegateQueue';
    procedure setAdvanceIntervalForDelegateInvocation(newValue: NSTimeInterval); message 'setAdvanceIntervalForDelegateInvocation:';
    function advanceIntervalForDelegateInvocation: NSTimeInterval; message 'advanceIntervalForDelegateInvocation';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVPlayerItemMetadataOutputPushDelegateProtocol = objcprotocol external name 'AVPlayerItemMetadataOutputPushDelegate' (AVPlayerItemOutputPushDelegateProtocol)
  optional
    procedure metadataOutput_didOutputTimedMetadataGroups_fromPlayerItemTrack (output: AVPlayerItemMetadataOutput; groups: NSArray; track: AVPlayerItemTrack); message 'metadataOutput:didOutputTimedMetadataGroups:fromPlayerItemTrack:'; { available in macos , ios , tvos , watchos  }
  end;
{$endif}

{$else}
{$endif}
