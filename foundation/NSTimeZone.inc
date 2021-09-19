{ Parsed from Foundation.framework NSTimeZone.h }

{ Types from NSExtendedTimeZone }
{$ifdef TYPES}

type
  NSTimeZoneNameStyle = NSInteger;
type
  NSTimeZoneNameStylePtr = ^NSTimeZoneNameStyle;

const
  NSTimeZoneNameStyleStandard = 0;
  NSTimeZoneNameStyleShortStandard = 1;
  NSTimeZoneNameStyleDaylightSaving = 2;
  NSTimeZoneNameStyleShortDaylightSaving = 3;
  NSTimeZoneNameStyleGeneric = 4;
  NSTimeZoneNameStyleShortGeneric = 5;
{$endif}


{$ifdef TYPES}
type
  NSTimeZonePtr = ^NSTimeZone;
{$endif}

{$ifdef CLASSES}

type
  NSTimeZone = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function name: NSString; message 'name';
    function data: NSData; message 'data';
    function secondsFromGMTForDate (aDate: NSDate): NSInteger; message 'secondsFromGMTForDate:';
    function abbreviationForDate (aDate: NSDate): NSString; message 'abbreviationForDate:';
    function isDaylightSavingTimeForDate (aDate: NSDate): objcbool; message 'isDaylightSavingTimeForDate:';
    function daylightSavingTimeOffsetForDate (aDate: NSDate): NSTimeInterval; message 'daylightSavingTimeOffsetForDate:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function nextDaylightSavingTimeTransitionAfterDate (aDate: NSDate): NSDate; message 'nextDaylightSavingTimeTransitionAfterDate:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSExtendedTimeZone = objccategory external (NSTimeZone)
    class function systemTimeZone: NSTimeZone; message 'systemTimeZone';
    class procedure resetSystemTimeZone; message 'resetSystemTimeZone';
    class procedure setDefaultTimeZone(newValue: NSTimeZone); message 'setDefaultTimeZone:';
    class function defaultTimeZone: NSTimeZone; message 'defaultTimeZone';
    class function localTimeZone: NSTimeZone; message 'localTimeZone';
    class function knownTimeZoneNames: NSArray; message 'knownTimeZoneNames';
    class procedure setAbbreviationDictionary(newValue: NSDictionary); message 'setAbbreviationDictionary:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    class function abbreviationDictionary: NSDictionary; message 'abbreviationDictionary'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    class function abbreviationDictionary_: NSDictionary; message 'abbreviationDictionary';
    class function timeZoneDataVersion: NSString; message 'timeZoneDataVersion'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function secondsFromGMT: NSInteger; message 'secondsFromGMT';
    function abbreviation: NSString; message 'abbreviation';
    function isDaylightSavingTime: objcbool; message 'isDaylightSavingTime';
    function daylightSavingTimeOffset: NSTimeInterval; message 'daylightSavingTimeOffset'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function nextDaylightSavingTimeTransition: NSDate; message 'nextDaylightSavingTimeTransition'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function description: NSString; message 'description';
    function isEqualToTimeZone (aTimeZone: NSTimeZone): objcbool; message 'isEqualToTimeZone:';
    function localizedName_locale (style: NSTimeZoneNameStyle; locale: NSLocale): NSString; message 'localizedName:locale:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
  end;

type
  NSTimeZoneCreation = objccategory external (NSTimeZone)
    class function timeZoneWithName (tzName: NSString): id; message 'timeZoneWithName:';
    class function timeZoneWithName_data (tzName: NSString; aData: NSData): id; message 'timeZoneWithName:data:';
    function initWithName (tzName: NSString): id; message 'initWithName:';
    function initWithName_data (tzName: NSString; aData: NSData): id; message 'initWithName:data:';
    class function timeZoneForSecondsFromGMT (seconds: NSInteger): id; message 'timeZoneForSecondsFromGMT:';
    class function timeZoneWithAbbreviation (abbreviation: NSString): id; message 'timeZoneWithAbbreviation:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSystemTimeZoneDidChangeNotification: NSNotificationName { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

