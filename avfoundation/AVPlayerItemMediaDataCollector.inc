{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVPlayerItemMediaDataCollector.h }

{$ifdef TYPES}
type
  AVPlayerItemMediaDataCollectorPtr = ^AVPlayerItemMediaDataCollector;
  AVPlayerItemMetadataCollectorPtr = ^AVPlayerItemMetadataCollector;
  AVPlayerItemMetadataCollectorPushDelegateProtocolPtr = ^AVPlayerItemMetadataCollectorPushDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVPlayerItemMediaDataCollector = objcclass external (NSObject)
  private
    _collectorInternal: AVPlayerItemMediaDataCollectorInternal;
  end;

type
  AVPlayerItemMetadataCollector = objcclass external (AVPlayerItemMediaDataCollector)
  private
    _metadataCollectorInternal: AVPlayerItemMetadataCollectorInternal;
  public
    function initWithIdentifiers_classifyingLabels (identifiers: NSArray; classifyingLabels: NSArray): id; message 'initWithIdentifiers:classifyingLabels:';
    procedure setDelegate_queue (delegate: id; delegateQueue: dispatch_queue_t); message 'setDelegate:queue:';
    function delegate: id; message 'delegate';
    function delegateQueue: dispatch_queue_t; message 'delegateQueue';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVPlayerItemMetadataCollectorPushDelegateProtocol = objcprotocol external name 'AVPlayerItemMetadataCollectorPushDelegate' (NSObjectProtocol)
    procedure metadataCollector_didCollectDateRangeMetadataGroups_indexesOfNewGroups_indexesOfModifiedGroups (metadataCollector: AVPlayerItemMetadataCollector; metadataGroups: NSArray; indexesOfNewGroups: NSIndexSet; indexesOfModifiedGroups: NSIndexSet); message 'metadataCollector:didCollectDateRangeMetadataGroups:indexesOfNewGroups:indexesOfModifiedGroups:';
  end;
{$endif}

{$else}
{$endif}
