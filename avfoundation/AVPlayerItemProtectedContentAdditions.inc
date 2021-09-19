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
    function isAuthorizationRequiredForPlayback: objcbool; message 'isAuthorizationRequiredForPlayback'; { unavailable in watchos } { available in macos 10.7, ios 4.2, tvos 9.0 }
    function isApplicationAuthorizedForPlayback: objcbool; message 'isApplicationAuthorizedForPlayback'; { unavailable in watchos } { available in macos 10.7, ios 4.2, tvos 9.0 }
    function isContentAuthorizedForPlayback: objcbool; message 'isContentAuthorizedForPlayback'; { unavailable in watchos } { available in macos 10.7, ios 4.2, tvos 9.0 }
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    procedure requestContentAuthorizationAsynchronouslyWithTimeoutInterval_completionHandler (timeoutInterval: NSTimeInterval; handler: AVPlayerItemProtectedContentAdditionsRequestContentAuthorizationAsynchronouslyWithTimeoutIntervalCallback); message 'requestContentAuthorizationAsynchronouslyWithTimeoutInterval:completionHandler:'; { unavailable in ios, tvos, watchos } { available in macos 10.7 }
    procedure cancelContentAuthorizationRequest; message 'cancelContentAuthorizationRequest'; { unavailable in ios, tvos, watchos } { available in macos 10.7 }
    function contentAuthorizationRequestStatus: AVContentAuthorizationStatus; message 'contentAuthorizationRequestStatus'; { unavailable in ios, tvos, watchos } { available in macos 10.7 }
    {$endif}
  end;
{$endif}

{$else}
{$endif}
