{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVVideoCompositing.h }

{$ifdef TYPES}
type
  AVVideoCompositionRenderContextPtr = ^AVVideoCompositionRenderContext;
  AVVideoCompositionRenderHintPtr = ^AVVideoCompositionRenderHint;
  AVAsynchronousVideoCompositionRequestPtr = ^AVAsynchronousVideoCompositionRequest;
  AVAsynchronousCIImageFilteringRequestPtr = ^AVAsynchronousCIImageFilteringRequest;
  AVVideoCompositingProtocolPtr = ^AVVideoCompositingProtocol;
  AVVideoCompositionInstructionProtocolPtr = ^AVVideoCompositionInstructionProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVPixelAspectRatio = record
    horizontalSpacing: NSInteger;
    verticalSpacing: NSInteger;
  end;
type
  AVPixelAspectRatioPtr = ^AVPixelAspectRatio;
type
  AVEdgeWidths = record
    left: CGFloat;
    top: CGFloat;
    right: CGFloat;
    bottom: CGFloat;
  end;
type
  AVEdgeWidthsPtr = ^AVEdgeWidths;
{$endif}

{$ifdef CLASSES}

type
  AVVideoCompositionRenderContext = objcclass external (NSObject)
  private
    _internal: AVVideoCompositionRenderContextInternal;
  public
    function size: CGSize; message 'size';
    function renderTransform: CGAffineTransform; message 'renderTransform';
    function renderScale: single; message 'renderScale';
    function pixelAspectRatio: AVPixelAspectRatio; message 'pixelAspectRatio';
    function edgeWidths: AVEdgeWidths; message 'edgeWidths';
    function highQualityRendering: objcbool; message 'highQualityRendering';
    function videoComposition: AVVideoComposition; message 'videoComposition';
    function newPixelBuffer: CVPixelBufferRef; message 'newPixelBuffer'; { CF_RETURNS_RETAINED }
  end;

type
  AVVideoCompositionRenderHint = objcclass external (NSObject)
  private
    _internal: AVVideoCompositionRenderHintInternal;
  public
    function startCompositionTime: CMTime; message 'startCompositionTime';
    function endCompositionTime: CMTime; message 'endCompositionTime';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVVideoCompositingProtocol = objcprotocol external name 'AVVideoCompositing' (NSObjectProtocol)
  required
    function sourcePixelBufferAttributes: NSDictionary; message 'sourcePixelBufferAttributes';
    function requiredPixelBufferAttributesForRenderContext: NSDictionary; message 'requiredPixelBufferAttributesForRenderContext';
    procedure renderContextChanged (newRenderContext: AVVideoCompositionRenderContext); message 'renderContextChanged:';
    procedure startVideoCompositionRequest (asyncVideoCompositionRequest: AVAsynchronousVideoCompositionRequest); message 'startVideoCompositionRequest:';
  optional
    procedure cancelAllPendingVideoCompositionRequests; message 'cancelAllPendingVideoCompositionRequests';
    function supportsWideColorSourceFrames: objcbool; message 'supportsWideColorSourceFrames'; { unavailable in watchos }
    function supportsHDRSourceFrames: objcbool; message 'supportsHDRSourceFrames'; { unavailable in watchos }
    procedure anticipateRenderingUsingHint (renderHint: AVVideoCompositionRenderHint); message 'anticipateRenderingUsingHint:'; { unavailable in watchos }
    procedure prerollForRenderingUsingHint (renderHint: AVVideoCompositionRenderHint); message 'prerollForRenderingUsingHint:'; { unavailable in watchos }
  end;
{$endif}

{$ifdef CLASSES}

type
  AVAsynchronousVideoCompositionRequest = objcclass external (NSObject, NSCopyingProtocol)
  private
    _internal: AVAsynchronousVideoCompositionRequestInternal;
  public
    function renderContext: AVVideoCompositionRenderContext; message 'renderContext';
    function compositionTime: CMTime; message 'compositionTime';
    function sourceTrackIDs: NSArray; message 'sourceTrackIDs';
    function videoCompositionInstruction: id; message 'videoCompositionInstruction';
    function sourceFrameByTrackID (trackID: CMPersistentTrackID): CVPixelBufferRef; message 'sourceFrameByTrackID:'; { CF_RETURNS_NOT_RETAINED }
    procedure finishWithComposedVideoFrame (composedVideoFrame: CVPixelBufferRef); message 'finishWithComposedVideoFrame:';
    procedure finishWithError (error: NSError); message 'finishWithError:';
    procedure finishCancelledRequest; message 'finishCancelledRequest';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  AVAsynchronousCIImageFilteringRequest = objcclass external (NSObject, NSCopyingProtocol)
  private
    _internal: AVAsynchronousCIImageFilteringRequestInternal;
  public
    function renderSize: CGSize; message 'renderSize';
    function compositionTime: CMTime; message 'compositionTime';
    function sourceImage: CIImage; message 'sourceImage';
    procedure finishWithImage_context (filteredImage: CIImage; context: CIContext); message 'finishWithImage:context:';
    procedure finishWithError (error: NSError); message 'finishWithError:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVVideoCompositionInstructionProtocol = objcprotocol external name 'AVVideoCompositionInstruction' (NSObjectProtocol)
  required
    function timeRange: CMTimeRange; message 'timeRange';
    function enablePostProcessing: objcbool; message 'enablePostProcessing';
    function containsTweening: objcbool; message 'containsTweening';
    function requiredSourceTrackIDs: NSArray; message 'requiredSourceTrackIDs';
    function passthroughTrackID: CMPersistentTrackID; message 'passthroughTrackID';
  end;
{$endif}

{$else}
{$endif}
