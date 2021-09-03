{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKDownload.h }

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
  SKDownloadTimeRemainingUnknown: NSTimeInterval { available in ios , macos , watchos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SKDownload = objcclass external (NSObject)
  private
    _internal: id;
  public
    function state: SKDownloadState; message 'state'; { available in ios , macos , watchos  }
    function downloadState: SKDownloadState; message 'downloadState'; { unavailable in macos, watchos }
    {$if defined(TARGET_OS_OSX)}
    function contentLength: NSNumber; message 'contentLength'; { unavailable in ios, watchos, tvos }
    {$else}
    function contentLength_: clonglong; message 'contentLength'; { unavailable in macos, watchos }
    {$endif}
    function expectedContentLength: clonglong; message 'expectedContentLength'; { available in ios , macos , tvos , watchos  }
    function contentIdentifier: NSString; message 'contentIdentifier'; { available in ios , macos , watchos  }
    function contentURL: NSURL; message 'contentURL'; { available in ios , macos , watchos  }
    function contentVersion: NSString; message 'contentVersion'; { available in ios , macos , watchos  }
    function error: NSError; message 'error'; { available in ios , macos , watchos  }
    function progress: single; message 'progress'; { available in ios , macos , watchos  }
    function timeRemaining: NSTimeInterval; message 'timeRemaining'; { available in ios , macos , watchos  }
    function transaction: SKPaymentTransaction; message 'transaction'; { available in ios , macos , watchos  }
    class function contentURLForProductID (productID: NSString): NSURL; message 'contentURLForProductID:'; { unavailable in ios, tvos, watchos }
    class procedure deleteContentForProductID (productID: NSString); message 'deleteContentForProductID:'; { unavailable in ios, tvos, watchos }
  end;
{$endif}

