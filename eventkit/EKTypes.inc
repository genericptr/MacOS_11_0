{ Parsed from EventKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/EventKit.framework/Headers/EKTypes.h }
{$ifdef TYPES}
type
  EKAuthorizationStatus = NSInteger;
  EKAuthorizationStatusPtr = ^EKAuthorizationStatus;

const
  EKAuthorizationStatusNotDetermined = 0;
  EKAuthorizationStatusRestricted = 1;
  EKAuthorizationStatusDenied = 2;
  EKAuthorizationStatusAuthorized = 3;

type
  EKWeekday = NSInteger;
  EKWeekdayPtr = ^EKWeekday;

const
  EKWeekdaySunday = 1;
  EKWeekdayMonday = 2;
  EKWeekdayTuesday = 3;
  EKWeekdayWednesday = 4;
  EKWeekdayThursday = 5;
  EKWeekdayFriday = 6;
  EKWeekdaySaturday = 7;
  EKSunday = EKWeekdaySunday deprecated 'in 10_8, 10_11, 4_0, 9_0, "Use EKWeekdaySunday instead"';
  EKMonday = EKWeekdayMonday deprecated 'in 10_8, 10_11, 4_0, 9_0, "Use EKWeekdayMonday instead"';
  EKTuesday = EKWeekdayTuesday deprecated 'in 10_8, 10_11, 4_0, 9_0, "Use EKWeekdayTuesday instead"';
  EKWednesday = EKWeekdayWednesday deprecated 'in 10_8, 10_11, 4_0, 9_0, "Use EKWeekdayWednesday instead"';
  EKThursday = EKWeekdayThursday deprecated 'in 10_8, 10_11, 4_0, 9_0, "Use EKWeekdayThursday instead"';
  EKFriday = EKWeekdayFriday deprecated 'in 10_8, 10_11, 4_0, 9_0, "Use EKWeekdayFriday instead"';
  EKSaturday = EKWeekdaySaturday deprecated 'in 10_8, 10_11, 4_0, 9_0, "Use EKWeekdaySaturday instead"';

type
  EKRecurrenceFrequency = NSInteger;
  EKRecurrenceFrequencyPtr = ^EKRecurrenceFrequency;

const
  EKRecurrenceFrequencyDaily = 0;
  EKRecurrenceFrequencyWeekly = 1;
  EKRecurrenceFrequencyMonthly = 2;
  EKRecurrenceFrequencyYearly = 3;

type
  EKParticipantType = NSInteger;
  EKParticipantTypePtr = ^EKParticipantType;

const
  EKParticipantTypeUnknown = 0;
  EKParticipantTypePerson = 1;
  EKParticipantTypeRoom = 2;
  EKParticipantTypeResource = 3;
  EKParticipantTypeGroup = 4;

type
  EKParticipantRole = NSInteger;
  EKParticipantRolePtr = ^EKParticipantRole;

const
  EKParticipantRoleUnknown = 0;
  EKParticipantRoleRequired = 1;
  EKParticipantRoleOptional = 2;
  EKParticipantRoleChair = 3;
  EKParticipantRoleNonParticipant = 4;

type
  EKParticipantScheduleStatus = NSInteger;
  EKParticipantScheduleStatusPtr = ^EKParticipantScheduleStatus;

const
  EKParticipantScheduleStatusNone = 0;
  EKParticipantScheduleStatusPending = 1;
  EKParticipantScheduleStatusSent = 2;
  EKParticipantScheduleStatusDelivered = 3;
  EKParticipantScheduleStatusRecipientNotRecognized = 4;
  EKParticipantScheduleStatusNoPrivileges = 5;
  EKParticipantScheduleStatusDeliveryFailed = 6;
  EKParticipantScheduleStatusCannotDeliver = 7;
  EKParticipantScheduleStatusRecipientNotAllowed = 8;

type
  EKParticipantStatus = NSInteger;
  EKParticipantStatusPtr = ^EKParticipantStatus;

const
  EKParticipantStatusUnknown = 0;
  EKParticipantStatusPending = 1;
  EKParticipantStatusAccepted = 2;
  EKParticipantStatusDeclined = 3;
  EKParticipantStatusTentative = 4;
  EKParticipantStatusDelegated = 5;
  EKParticipantStatusCompleted = 6;
  EKParticipantStatusInProcess = 7;

type
  EKCalendarType = NSInteger;
  EKCalendarTypePtr = ^EKCalendarType;

const
  EKCalendarTypeLocal = 0;
  EKCalendarTypeCalDAV = 1;
  EKCalendarTypeExchange = 2;
  EKCalendarTypeSubscription = 3;
  EKCalendarTypeBirthday = 4;

type
  EKCalendarEventAvailabilityMask = NSUInteger;
  EKCalendarEventAvailabilityMaskPtr = ^EKCalendarEventAvailabilityMask;

const
  EKCalendarEventAvailabilityNone = 0;
  EKCalendarEventAvailabilityBusy = 1 shl 0;
  EKCalendarEventAvailabilityFree = 1 shl 1;
  EKCalendarEventAvailabilityTentative = 1 shl 2;
  EKCalendarEventAvailabilityUnavailable = 1 shl 3;

type
  EKSourceType = NSInteger;
  EKSourceTypePtr = ^EKSourceType;

const
  EKSourceTypeLocal = 0;
  EKSourceTypeExchange = 1;
  EKSourceTypeCalDAV = 2;
  EKSourceTypeMobileMe = 3;
  EKSourceTypeSubscribed = 4;
  EKSourceTypeBirthdays = 5;

type
  EKEntityType = NSUInteger;
  EKEntityTypePtr = ^EKEntityType;

const
  EKEntityTypeEvent = 0;
  EKEntityTypeReminder = 1;

type
  EKEntityMask = NSUInteger;
  EKEntityMaskPtr = ^EKEntityMask;

const
  EKEntityMaskEvent = 1 shl EKEntityTypeEvent;
  EKEntityMaskReminder = 1 shl EKEntityTypeReminder;

type
  EKAlarmProximity = NSInteger;
  EKAlarmProximityPtr = ^EKAlarmProximity;

const
  EKAlarmProximityNone = 0;
  EKAlarmProximityEnter = 1;
  EKAlarmProximityLeave = 2;

type
  EKAlarmType = NSInteger;
  EKAlarmTypePtr = ^EKAlarmType;

const
  EKAlarmTypeDisplay = 0;
  EKAlarmTypeAudio = 1;
  EKAlarmTypeProcedure = 2;
  EKAlarmTypeEmail = 3;

type
  EKReminderPriority = NSUInteger;
  EKReminderPriorityPtr = ^EKReminderPriority;

const
  EKReminderPriorityNone = 0;
  EKReminderPriorityHigh = 1;
  EKReminderPriorityMedium = 5;
  EKReminderPriorityLow = 9;
{$endif}

