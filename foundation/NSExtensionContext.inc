{ Parsed from Foundation.framework NSExtensionContext.h }

{$ifdef CALLBACKS}
type
  NSExtensionContextCompleteRequestReturningItemsCallback = reference to procedure (expired: objcbool); cblock; cdecl;
  NSExtensionContextOpenURLCallback = reference to procedure (success: objcbool); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSExtensionContextPtr = ^NSExtensionContext;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef CLASSES}

type
  NSExtensionContext = objcclass external (NSObject)
  public
    function inputItems: NSArray; message 'inputItems';
    procedure completeRequestReturningItems_completionHandler (items: NSArray; completionHandler: NSExtensionContextCompleteRequestReturningItemsCallback); message 'completeRequestReturningItems:completionHandler:';
    procedure cancelRequestWithError (error: NSError); message 'cancelRequestWithError:';
    procedure openURL_completionHandler (URL: NSURL; completionHandler: NSExtensionContextOpenURLCallback); message 'openURL:completionHandler:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSExtensionItemsAndErrorsKey: NSString { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSExtensionHostWillEnterForegroundNotification: NSString { unavailable in macos } { available in ios 8.2, watchos 2.0, tvos 9.0 }; cvar; external;
  NSExtensionHostDidEnterBackgroundNotification: NSString { unavailable in macos } { available in ios 8.2, watchos 2.0, tvos 9.0 }; cvar; external;
  NSExtensionHostWillResignActiveNotification: NSString { unavailable in macos } { available in ios 8.2, watchos 2.0, tvos 9.0 }; cvar; external;
  NSExtensionHostDidBecomeActiveNotification: NSString { unavailable in macos } { available in ios 8.2, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$endif}
