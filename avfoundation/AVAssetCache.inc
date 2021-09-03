{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVAssetCache.h }

{$ifdef TYPES}
type
  AVAssetCachePtr = ^AVAssetCache;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVAssetCache = objcclass external (NSObject)
  public
    function isPlayableOffline: objcbool; message 'isPlayableOffline';
    function mediaSelectionOptionsInMediaSelectionGroup (mediaSelectionGroup: AVMediaSelectionGroup): NSArray; message 'mediaSelectionOptionsInMediaSelectionGroup:';
  end;
{$endif}

{$else}
{$endif}
