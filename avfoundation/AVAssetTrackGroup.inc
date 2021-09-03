{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVAssetTrackGroup.h }

{$ifdef TYPES}
type
  AVAssetTrackGroupPtr = ^AVAssetTrackGroup;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVAssetTrackGroup = objcclass external (NSObject, NSCopyingProtocol)
  private
    _assetTrackGroup: AVAssetTrackGroupInternal;
  public
    function trackIDs: NSArray; message 'trackIDs';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$else}
{$endif}
