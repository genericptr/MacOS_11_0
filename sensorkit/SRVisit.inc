{ Parsed from SensorKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SensorKit.framework/Headers/SRVisit.h }

{$ifdef TYPES}
type
  SRVisitPtr = ^SRVisit;
{$endif}

{$ifdef TYPES}
type
  SRLocationCategory = NSInteger;
  SRLocationCategoryPtr = ^SRLocationCategory;

const
  SRLocationCategoryUnknown = 0;
  SRLocationCategoryHome = 1;
  SRLocationCategoryWork = 2;
  SRLocationCategorySchool = 3;
  SRLocationCategoryGym = 4;
{$endif}

{$ifdef CLASSES}

type
  SRVisit = objcclass external (NSObject)
  public
    function distanceFromHome: CLLocationDistance; message 'distanceFromHome';
    function arrivalDateInterval: NSDateInterval; message 'arrivalDateInterval';
    function departureDateInterval: NSDateInterval; message 'departureDateInterval';
    function locationCategory: SRLocationCategory; message 'locationCategory';
    function identifier: NSUUID; message 'identifier';
  end;
{$endif}

