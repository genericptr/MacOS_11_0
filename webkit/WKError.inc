{ Parsed from WebKit.framework WKError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  WKErrorDomain: NSString { available in macos 10.10, ios 8.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  WKErrorCode = NSInteger;
  WKErrorCodePtr = ^WKErrorCode;

const
  WKErrorUnknown = 1;
  WKErrorWebContentProcessTerminated = 2;
  WKErrorWebViewInvalidated = 3;
  WKErrorJavaScriptExceptionOccurred = 4;
  WKErrorJavaScriptResultTypeIsUnsupported = 5 { available in macos 10.11, ios 9.0 };
  WKErrorContentRuleListStoreCompileFailed = 6 { available in macos 10.13, ios 11.0 };
  WKErrorContentRuleListStoreLookUpFailed = 7 { available in macos 10.13, ios 11.0 };
  WKErrorContentRuleListStoreRemoveFailed = 8 { available in macos 10.13, ios 11.0 };
  WKErrorContentRuleListStoreVersionMismatch = 9 { available in macos 10.13, ios 11.0 };
  WKErrorAttributedStringContentFailedToLoad = 10 { available in macos 10.15, ios 13.0 };
  WKErrorAttributedStringContentLoadTimedOut = 11 { available in macos 10.15, ios 13.0 };
  WKErrorJavaScriptInvalidFrameTarget = 12 { available in macos 11.0, ios 14.0 };
  WKErrorNavigationAppBoundDomain = 13 { available in macos 11.0, ios 14.0 };
  WKErrorJavaScriptAppBoundDomain = 14 { available in macos 11.0, ios 14.0 };
{$endif}

