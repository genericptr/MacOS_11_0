{ Parsed from WebKit.framework WebKitErrors.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  WebKitErrorDomain: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebKitErrorMIMETypeKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebKitErrorPlugInNameKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebKitErrorPlugInPageURLStringKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
{$endif}

{$ifdef TYPES}
const
  WebKitErrorCannotShowMIMEType = 100;
  WebKitErrorCannotShowURL = 101;
  WebKitErrorFrameLoadInterruptedByPolicyChange = 102;
const
  WebKitErrorCannotFindPlugIn = 200;
  WebKitErrorCannotLoadPlugIn = 201;
  WebKitErrorJavaUnavailable = 202;
  WebKitErrorBlockedPlugInVersion = 203;
{$endif}

