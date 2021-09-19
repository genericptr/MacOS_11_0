{ Parsed from AVFoundation.framework AVPlayerLayer.h }

{$ifdef TYPES}
type
  AVPlayerLayerPtr = ^AVPlayerLayer;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVPlayerLayer = objcclass external (CALayer)
  private
    _playerLayer: AVPlayerLayerInternal;
  public
    class function playerLayerWithPlayer (player: AVPlayer): AVPlayerLayer; message 'playerLayerWithPlayer:';
    procedure setPlayer(newValue: AVPlayer); message 'setPlayer:';
    function player: AVPlayer; message 'player';
    procedure setVideoGravity(newValue: AVLayerVideoGravity); message 'setVideoGravity:';
    function videoGravity: AVLayerVideoGravity; message 'videoGravity';
    function isReadyForDisplay: objcbool; message 'isReadyForDisplay';
    function videoRect: CGRect; message 'videoRect'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    procedure setPixelBufferAttributes(newValue: NSDictionary); message 'setPixelBufferAttributes:'; { unavailable in watchos } { available in macos 10.11, ios 9.0, tvos 9.0 }
    function pixelBufferAttributes: NSDictionary; message 'pixelBufferAttributes'; { unavailable in watchos } { available in macos 10.11, ios 9.0, tvos 9.0 }
  end;
{$endif}

{$endif}

{$else}
{$endif}
