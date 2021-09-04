{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVAsynchronousKeyValueLoading.h }

{$ifdef CALLBACKS}
type
  AVAsynchronousKeyValueLoadingLoadValuesAsynchronouslyForKeysCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVAsynchronousKeyValueLoadingProtocolPtr = ^AVAsynchronousKeyValueLoadingProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVKeyValueStatus = NSInteger;
  AVKeyValueStatusPtr = ^AVKeyValueStatus;

const
  AVKeyValueStatusUnknown = 0;
  AVKeyValueStatusLoading = 1;
  AVKeyValueStatusLoaded = 2;
  AVKeyValueStatusFailed = 3;
  AVKeyValueStatusCancelled = 4;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAsynchronousKeyValueLoadingProtocol = objcprotocol external name 'AVAsynchronousKeyValueLoading'
  required
    function statusOfValueForKey_error (key: NSString; outError: NSErrorPtr): AVKeyValueStatus; message 'statusOfValueForKey:error:';
    procedure loadValuesAsynchronouslyForKeys_completionHandler (keys: NSArray; handler: AVAsynchronousKeyValueLoadingLoadValuesAsynchronouslyForKeysCallback); message 'loadValuesAsynchronouslyForKeys:completionHandler:';
  end;
{$endif}

{$else}
{$endif}
