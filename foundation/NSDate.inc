{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSDate.h }

{$ifdef TYPES}
type
  NSDatePtr = ^NSDate;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSystemClockDidChangeNotification: NSNotificationName { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSTimeInterval = double;
  NSTimeIntervalPtr = ^NSTimeInterval;

const
  NSTimeIntervalSince1970 = 978307200.0;
{$endif}

{$ifdef CLASSES}

type
  NSDate = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function timeIntervalSinceReferenceDate: NSTimeInterval; message 'timeIntervalSinceReferenceDate';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithTimeIntervalSinceReferenceDate (ti: NSTimeInterval): id; message 'initWithTimeIntervalSinceReferenceDate:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSExtendedDate = objccategory external (NSDate)
    function timeIntervalSinceDate (anotherDate: NSDate): NSTimeInterval; message 'timeIntervalSinceDate:';
    function timeIntervalSinceNow: NSTimeInterval; message 'timeIntervalSinceNow';
    function timeIntervalSince1970: NSTimeInterval; message 'timeIntervalSince1970';
    function addTimeInterval (seconds: NSTimeInterval): id; message 'addTimeInterval:'; deprecated 'Use dateByAddingTimeInterval instead';
    function dateByAddingTimeInterval (ti: NSTimeInterval): id; message 'dateByAddingTimeInterval:'; { available in macos , ios , watchos , tvos  }
    function earlierDate (anotherDate: NSDate): NSDate; message 'earlierDate:';
    function laterDate (anotherDate: NSDate): NSDate; message 'laterDate:';
    function compare (other: NSDate): NSComparisonResult; message 'compare:';
    function isEqualToDate (otherDate: NSDate): objcbool; message 'isEqualToDate:';
    function description: NSString; message 'description';
    function descriptionWithLocale (locale: id): NSString; message 'descriptionWithLocale:';
    class function timeIntervalSinceReferenceDate: NSTimeInterval; message 'timeIntervalSinceReferenceDate';
  end;

type
  NSDateCreation = objccategory external (NSDate)
    class function date: id; message 'date';
    class function dateWithTimeIntervalSinceNow (secs: NSTimeInterval): id; message 'dateWithTimeIntervalSinceNow:';
    class function dateWithTimeIntervalSinceReferenceDate (ti: NSTimeInterval): id; message 'dateWithTimeIntervalSinceReferenceDate:';
    class function dateWithTimeIntervalSince1970 (secs: NSTimeInterval): id; message 'dateWithTimeIntervalSince1970:';
    class function dateWithTimeInterval_sinceDate (secsToBeAdded: NSTimeInterval; date_: NSDate): id; message 'dateWithTimeInterval:sinceDate:';
    class function distantFuture: NSDate; message 'distantFuture';
    class function distantPast: NSDate; message 'distantPast';
    class function now: NSDate; message 'now'; { available in macos , ios , watchos , tvos  }
    function initWithTimeIntervalSinceNow (secs: NSTimeInterval): id; message 'initWithTimeIntervalSinceNow:';
    function initWithTimeIntervalSince1970 (secs: NSTimeInterval): id; message 'initWithTimeIntervalSince1970:';
    function initWithTimeInterval_sinceDate (secsToBeAdded: NSTimeInterval; date_: NSDate): id; message 'initWithTimeInterval:sinceDate:';
  end;
{$endif}

