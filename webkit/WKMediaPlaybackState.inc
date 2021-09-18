{ Parsed from WebKit.framework WKMediaPlaybackState.h }
{$ifdef TYPES}
type
  WKMediaPlaybackState = NSUInteger;
  WKMediaPlaybackStatePtr = ^WKMediaPlaybackState;

const
  WKMediaPlaybackStateNone = 0;
  WKMediaPlaybackStatePaused = 1;
  WKMediaPlaybackStateSuspended = 2;
  WKMediaPlaybackStatePlaying = 3;
{$endif}

