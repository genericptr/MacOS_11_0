{ Parsed from AVFoundation.framework AVPlayerItemProtectedContentAdditions.h }

{ Types from AVPlayerItemProtectedContent }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  AVPlayerItemProtectedContentAdditionsRequestContentAuthorizationAsynchronouslyWithTimeoutIntervalCallback = reference to procedure; cblock; cdecl;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef TYPES}
type
  AVContentAuthorizationStatus = NSInteger;
  AVContentAuthorizationStatusPtr = ^AVContentAuthorizationStatus;

const
  AVContentAuthorizationUnknown = 0;
  AVContentAuthorizationCompleted = 1;
  AVContentAuthorizationCancelled = 2;
  AVContentAuthorizationTimedOut = 3;
  AVContentAuthorizationBusy = 4;
  AVContentAuthorizationNotAvailable = 5;
  AVContentAuthorizationNotPossible = 6;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  AVPlayerItemProtectedContent = objccategory external (AVPlayerItem)
    function isAuthorizationRequiredForPlayback: objcbool; message 'isAuthorizationRequiredForPlayback'; { unavailable in watchos }
    function isApplicationAuthorizedForPlayback: objcbool; message 'isApplicationAuthorizedForPlayback'; { unavailable in watchos }
    function isContentAuthorizedForPlayback: objcbool; message 'isContentAuthorizedForPlayback'; { unavailable in watchos }
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    procedure requestContentAuthorizationAsynchronouslyWithTimeoutInterval_completionHandler (timeoutInterval: NSTimeInterval; handler: AVPlayerItemProtectedContentAdditionsRequestContentAuthorizationAsynchronouslyWithTimeoutIntervalCallback); message 'requestContentAuthorizationAsynchronouslyWithTimeoutInterval:completionHandler:'; { unavailable in ios, tvos, watchos }
    procedure cancelContentAuthorizationRequest; message 'cancelContentAuthorizationRequest'; { unavailable in ios, tvos, watchos }
    function contentAuthorizationRequestStatus: AVContentAuthorizationStatus; message 'contentAuthorizationRequestStatus'; { unavailable in ios, tvos, watchos }
    {$endif}
  end;
{$endif}

{$else}
{$endif}
