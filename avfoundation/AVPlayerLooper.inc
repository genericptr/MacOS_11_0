{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVPlayerLooper.h }

{$ifdef TYPES}
type
  AVPlayerLooperPtr = ^AVPlayerLooper;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVPlayerLooperStatus = NSInteger;
  AVPlayerLooperStatusPtr = ^AVPlayerLooperStatus;

const
  AVPlayerLooperStatusUnknown = 0;
  AVPlayerLooperStatusReady = 1;
  AVPlayerLooperStatusFailed = 2;
  AVPlayerLooperStatusCancelled = 3;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerLooper = objcclass external (NSObject)
  private
    _looper: AVPlayerLooperInternal;
  public
    class function playerLooperWithPlayer_templateItem_timeRange (player: AVQueuePlayer; itemToLoop: AVPlayerItem; loopRange: CMTimeRange): id; message 'playerLooperWithPlayer:templateItem:timeRange:';
    class function playerLooperWithPlayer_templateItem (player: AVQueuePlayer; itemToLoop: AVPlayerItem): id; message 'playerLooperWithPlayer:templateItem:';
    function initWithPlayer_templateItem_timeRange (player: AVQueuePlayer; itemToLoop: AVPlayerItem; loopRange: CMTimeRange): id; message 'initWithPlayer:templateItem:timeRange:'; { NS_DESIGNATED_INITIALIZER }
    function status: AVPlayerLooperStatus; message 'status';
    function error: NSError; message 'error';
    procedure disableLooping; message 'disableLooping';
    function loopCount: NSInteger; message 'loopCount';
    function loopingPlayerItems: NSArray; message 'loopingPlayerItems';
  end;
{$endif}

{$else}
{$endif}
