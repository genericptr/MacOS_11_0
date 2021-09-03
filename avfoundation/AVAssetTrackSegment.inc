{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVAssetTrackSegment.h }

{$ifdef TYPES}
type
  AVAssetTrackSegmentPtr = ^AVAssetTrackSegment;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVAssetTrackSegment = objcclass external (NSObject)
  private
    _timeMapping: CMTimeMapping;
  public
    function timeMapping: CMTimeMapping; message 'timeMapping';
    function isEmpty: objcbool; message 'isEmpty';
  end;
{$endif}

{$else}
{$endif}
