{ Parsed from AVFoundation.framework AVAssetCache.h }

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
