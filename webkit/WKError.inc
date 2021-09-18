{ Parsed from WebKit.framework WKError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  WKErrorDomain: NSString { available in macos , ios  }; cvar; external;
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
  WKErrorJavaScriptResultTypeIsUnsupported = 5 { available in macos , ios  };
  WKErrorContentRuleListStoreCompileFailed = 6 { available in macos , ios  };
  WKErrorContentRuleListStoreLookUpFailed = 7 { available in macos , ios  };
  WKErrorContentRuleListStoreRemoveFailed = 8 { available in macos , ios  };
  WKErrorContentRuleListStoreVersionMismatch = 9 { available in macos , ios  };
  WKErrorAttributedStringContentFailedToLoad = 10 { available in macos , ios  };
  WKErrorAttributedStringContentLoadTimedOut = 11 { available in macos , ios  };
  WKErrorJavaScriptInvalidFrameTarget = 12 { available in macos , ios  };
  WKErrorNavigationAppBoundDomain = 13 { available in macos , ios  };
  WKErrorJavaScriptAppBoundDomain = 14 { available in macos , ios  };
{$endif}

