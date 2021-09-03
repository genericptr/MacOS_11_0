{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVPlayerLayer.h }

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
    function videoRect: CGRect; message 'videoRect'; { unavailable in watchos }
    procedure setPixelBufferAttributes(newValue: NSDictionary); message 'setPixelBufferAttributes:'; { unavailable in watchos }
    function pixelBufferAttributes: NSDictionary; message 'pixelBufferAttributes'; { unavailable in watchos }
  end;
{$endif}

{$endif}

{$else}
{$endif}
