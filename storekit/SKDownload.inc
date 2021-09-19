{ Parsed from StoreKit.framework SKDownload.h }

{ Types from SKDownload }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SKDownloadPtr = ^SKDownload;
{$endif}

{$ifdef TYPES}
type
  SKDownloadState = NSInteger;
  SKDownloadStatePtr = ^SKDownloadState;

const
  SKDownloadStateWaiting = 0;
  SKDownloadStateActive = 1;
  SKDownloadStatePaused = 2;
  SKDownloadStateFinished = 3;
  SKDownloadStateFailed = 4;
  SKDownloadStateCancelled = 5;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKDownloadTimeRemainingUnknown: NSTimeInterval { available in ios 6.0, macos 10.14, watchos 6.2 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SKDownload = objcclass external (NSObject)
  private
    _internal: id;
  public
    function state: SKDownloadState; message 'state'; { available in ios 12.0, macos 10.8, watchos 6.2 }
    function downloadState: SKDownloadState; message 'downloadState'; { unavailable in macos, watchos }
    {$if defined(TARGET_OS_OSX)}
    function contentLength: NSNumber; message 'contentLength'; { unavailable in ios, watchos, tvos }
    {$else}
    function contentLength_: clonglong; message 'contentLength'; { unavailable in macos, watchos }
    {$endif}
    function expectedContentLength: clonglong; message 'expectedContentLength'; { available in ios 13.0, macos 10.15, tvos 13.0, watchos 6.2 }
    function contentIdentifier: NSString; message 'contentIdentifier'; { available in ios 6.0, macos 10.8, watchos 6.2 }
    function contentURL: NSURL; message 'contentURL'; { available in ios 6.0, macos 10.8, watchos 6.2 }
    function contentVersion: NSString; message 'contentVersion'; { available in ios 6.0, macos 10.8, watchos 6.2 }
    function error: NSError; message 'error'; { available in ios 6.0, macos 10.8, watchos 6.2 }
    function progress: single; message 'progress'; { available in ios 6.0, macos 10.8, watchos 6.2 }
    function timeRemaining: NSTimeInterval; message 'timeRemaining'; { available in ios 6.0, macos 10.8, watchos 6.2 }
    function transaction: SKPaymentTransaction; message 'transaction'; { available in ios 6.0, macos 10.11, watchos 6.2 }
    class function contentURLForProductID (productID: NSString): NSURL; message 'contentURLForProductID:'; { unavailable in ios, tvos, watchos } { available in macos 10.8, macCatalyst 13.0 }
    class procedure deleteContentForProductID (productID: NSString); message 'deleteContentForProductID:'; { unavailable in ios, tvos, watchos } { available in macos 10.8, macCatalyst 13.0 }
  end;
{$endif}

