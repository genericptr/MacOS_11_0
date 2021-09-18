{ Parsed from AVFoundation.framework AVSynchronizedLayer.h }

{$ifdef TYPES}
type
  AVSynchronizedLayerPtr = ^AVSynchronizedLayer;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVSynchronizedLayer = objcclass external (CALayer)
  private
    _syncLayer: AVSynchronizedLayerInternal;
  public
    class function synchronizedLayerWithPlayerItem (playerItem: AVPlayerItem): AVSynchronizedLayer; message 'synchronizedLayerWithPlayerItem:';
    procedure setPlayerItem(newValue: AVPlayerItem); message 'setPlayerItem:';
    function playerItem: AVPlayerItem; message 'playerItem';
  end;
{$endif}

{$endif}

{$else}
{$endif}
