{ Parsed from AVFoundation.framework AVPlayerItemTrack.h }

{ Types from AVPlayerItemTrack }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVPlayerItemTrackPtr = ^AVPlayerItemTrack;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVPlayerItemTrack = objcclass external (NSObject)
  private
    _playerItemTrack: AVPlayerItemTrackInternal;
  public
    function assetTrack: AVAssetTrack; message 'assetTrack';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    function currentVideoFrameRate: single; message 'currentVideoFrameRate'; { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    procedure setVideoFieldMode(newValue: NSString); message 'setVideoFieldMode:'; { unavailable in ios, tvos, watchos } { available in macos 10.10 }
    function videoFieldMode: NSString; message 'videoFieldMode'; { unavailable in ios, tvos, watchos } { available in macos 10.10 }
    {$endif}
  end;
{$endif}

{$else}
{$endif}
