{ Parsed from UserNotifications.framework UNError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  UNErrorDomain: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  UNErrorCode = NSInteger;
  UNErrorCodePtr = ^UNErrorCode;

const
  UNErrorCodeNotificationsNotAllowed = 1;
  UNErrorCodeAttachmentInvalidURL = 100;
  UNErrorCodeAttachmentUnrecognizedType = 101;
  UNErrorCodeAttachmentInvalidFileSize = 102;
  UNErrorCodeAttachmentNotInDataStore = 103;
  UNErrorCodeAttachmentMoveIntoDataStoreFailed = 104;
  UNErrorCodeAttachmentCorrupt = 105;
  UNErrorCodeNotificationInvalidNoDate = 1400;
  UNErrorCodeNotificationInvalidNoContent = 1401;
{$endif}

