{ Parsed from EventKit.framework EKError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  EKErrorDomain: NSString { available in 10_8, 4_0 }; cvar; external;
{$endif}

{$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED) or not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  EKErrorCode = NSInteger;
  EKErrorCodePtr = ^EKErrorCode;

const
  EKErrorEventNotMutable = 0;
  EKErrorNoCalendar = 1;
  EKErrorNoStartDate = 2;
  EKErrorNoEndDate = 3;
  EKErrorDatesInverted = 4;
  EKErrorInternalFailure = 5;
  EKErrorCalendarReadOnly = 6;
  EKErrorDurationGreaterThanRecurrence = 7;
  EKErrorAlarmGreaterThanRecurrence = 8;
  EKErrorStartDateTooFarInFuture = 9;
  EKErrorStartDateCollidesWithOtherOccurrence = 10;
  EKErrorObjectBelongsToDifferentStore = 11;
  EKErrorInvitesCannotBeMoved = 12;
  EKErrorInvalidSpan = 13;
  EKErrorCalendarHasNoSource = 14;
  EKErrorCalendarSourceCannotBeModified = 15;
  EKErrorCalendarIsImmutable = 16;
  EKErrorSourceDoesNotAllowCalendarAddDelete = 17;
  EKErrorRecurringReminderRequiresDueDate = 18;
  EKErrorStructuredLocationsNotSupported = 19;
  EKErrorReminderLocationsNotSupported = 20;
  EKErrorAlarmProximityNotSupported = 21;
  EKErrorCalendarDoesNotAllowEvents = 22;
  EKErrorCalendarDoesNotAllowReminders = 23;
  EKErrorSourceDoesNotAllowReminders = 24;
  EKErrorSourceDoesNotAllowEvents = 25;
  EKErrorPriorityIsInvalid = 26;
  EKErrorInvalidEntityType = 27;
  EKErrorProcedureAlarmsNotMutable = 28;
  EKErrorEventStoreNotAuthorized = 29;
  EKErrorOSNotSupported = 30;
  EKErrorInvalidInviteReplyCalendar = 31;
  EKErrorNotificationsCollectionFlagNotSet = 32;
  EKErrorSourceMismatch = 33;
  EKErrorNotificationCollectionMismatch = 34;
  EKErrorNotificationSavedWithoutCollection = 35;
  EKErrorLast = 36;
{$endif}

{$endif}
