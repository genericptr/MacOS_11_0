{ Parsed from AVFoundation.framework AVAssetTrackSegment.h }

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
