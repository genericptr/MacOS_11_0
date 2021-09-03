{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKMarkNotificationsReadOperation.h }

{$ifdef CALLBACKS}
type
  CKMarkNotificationsReadOperationMarkNotificationsReadCompletionBlockCallback = reference to function (notificationIDsMarkedRead: NSArray; operationError: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKMarkNotificationsReadOperationPtr = ^CKMarkNotificationsReadOperation;
{$endif}

{$ifdef CLASSES}

type
  CKMarkNotificationsReadOperation = objcclass external (CKOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithNotificationIDsToMarkRead (notificationIDs: NSArray): id; message 'initWithNotificationIDsToMarkRead:';
    procedure setNotificationIDs(newValue: NSArray); message 'setNotificationIDs:';
    function notificationIDs: NSArray; message 'notificationIDs';
    procedure setMarkNotificationsReadCompletionBlock(newValue: CKMarkNotificationsReadOperationMarkNotificationsReadCompletionBlockCallback); message 'setMarkNotificationsReadCompletionBlock:';
    function markNotificationsReadCompletionBlock: CKMarkNotificationsReadOperationMarkNotificationsReadCompletionBlockCallback; message 'markNotificationsReadCompletionBlock';
  end;
{$endif}

