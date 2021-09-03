{ Parsed from CoreLocation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreLocation.framework/Headers/CLLocationManager.h }

{$ifdef CALLBACKS}
type
  CLLocationManagerRequestTemporaryFullAccuracyAuthorizationWithPurposeKeyCallback = reference to function (param1: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CLLocationManagerPtr = ^CLLocationManager;
{$endif}

{$ifdef TYPES}
type
  CLDeviceOrientation = cint;
  CLDeviceOrientationPtr = ^CLDeviceOrientation;

const
  CLDeviceOrientationUnknown = 0;
  CLDeviceOrientationPortrait = 1;
  CLDeviceOrientationPortraitUpsideDown = 2;
  CLDeviceOrientationLandscapeLeft = 3;
  CLDeviceOrientationLandscapeRight = 4;
  CLDeviceOrientationFaceUp = 5;
  CLDeviceOrientationFaceDown = 6;

type
  CLAuthorizationStatus = cint;
  CLAuthorizationStatusPtr = ^CLAuthorizationStatus;

const
  kCLAuthorizationStatusNotDetermined = 0;
  kCLAuthorizationStatusRestricted = 1;
  kCLAuthorizationStatusDenied = 2;
  kCLAuthorizationStatusAuthorizedAlways = 3 { available in macos , ios  };
  kCLAuthorizationStatusAuthorizedWhenInUse = 4 { unavailable in macos };
  kCLAuthorizationStatusAuthorized = kCLAuthorizationStatusAuthorizedAlways { unavailable in watchos, tvos };

type
  CLAccuracyAuthorization = NSInteger;
  CLAccuracyAuthorizationPtr = ^CLAccuracyAuthorization;

const
  CLAccuracyAuthorizationFullAccuracy = 0;
  CLAccuracyAuthorizationReducedAccuracy = 1;

type
  CLActivityType = NSInteger;
  CLActivityTypePtr = ^CLActivityType;

const
  CLActivityTypeOther = 1;
  CLActivityTypeAutomotiveNavigation = 2;
  CLActivityTypeFitness = 3;
  CLActivityTypeOtherNavigation = 4;
  CLActivityTypeAirborne = 5 { available in ios , macos , tvos , watchos  };
{$endif}

{$ifdef CLASSES}

type
  CLLocationManager = objcclass external (NSObject)
  private
    _internal: id;
  public
    class function classLocationServicesEnabled: objcbool; message 'locationServicesEnabled'; { available in ios , macos  }
    class function classHeadingAvailable: objcbool; message 'headingAvailable'; { unavailable in tvos }
    class function significantLocationChangeMonitoringAvailable: objcbool; message 'significantLocationChangeMonitoringAvailable'; { unavailable in watchos, tvos }
    class function isMonitoringAvailableForClass (regionClass: pobjc_class): objcbool; message 'isMonitoringAvailableForClass:'; { unavailable in watchos, tvos }
    class function regionMonitoringAvailable: objcbool; message 'regionMonitoringAvailable'; { unavailable in watchos, tvos }
    class function regionMonitoringEnabled: objcbool; message 'regionMonitoringEnabled'; { unavailable in watchos, tvos }
    class function isRangingAvailable: objcbool; message 'isRangingAvailable'; { unavailable in watchos, tvos }
    function authorizationStatus: CLAuthorizationStatus; message 'authorizationStatus'; { available in ios , macos , watchos , tvos  }
    class function classAuthorizationStatus: CLAuthorizationStatus; message 'authorizationStatus'; deprecated 'replace with -authorizationStatus';
    function accuracyAuthorization: CLAccuracyAuthorization; message 'accuracyAuthorization'; { available in ios , macos , watchos , tvos  }
    function isAuthorizedForWidgetUpdates: objcbool; message 'isAuthorizedForWidgetUpdates'; { unavailable in watchos, tvos }
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function locationServicesEnabled: objcbool; message 'locationServicesEnabled'; { unavailable in watchos, tvos }
    procedure setPurpose(newValue: NSString); message 'setPurpose:'; { unavailable in watchos, tvos }
    function purpose: NSString; message 'purpose'; { unavailable in watchos, tvos }
    procedure setActivityType(newValue: CLActivityType); message 'setActivityType:'; { unavailable in tvos }
    function activityType: CLActivityType; message 'activityType'; { unavailable in tvos }
    procedure setDistanceFilter(newValue: CLLocationDistance); message 'setDistanceFilter:';
    function distanceFilter: CLLocationDistance; message 'distanceFilter';
    procedure setDesiredAccuracy(newValue: CLLocationAccuracy); message 'setDesiredAccuracy:';
    function desiredAccuracy: CLLocationAccuracy; message 'desiredAccuracy';
    procedure setPausesLocationUpdatesAutomatically(newValue: objcbool); message 'setPausesLocationUpdatesAutomatically:'; { unavailable in watchos, tvos }
    function pausesLocationUpdatesAutomatically: objcbool; message 'pausesLocationUpdatesAutomatically'; { unavailable in watchos, tvos }
    procedure setAllowsBackgroundLocationUpdates(newValue: objcbool); message 'setAllowsBackgroundLocationUpdates:'; { unavailable in tvos }
    function allowsBackgroundLocationUpdates: objcbool; message 'allowsBackgroundLocationUpdates'; { unavailable in tvos }
    procedure setShowsBackgroundLocationIndicator(newValue: objcbool); message 'setShowsBackgroundLocationIndicator:'; { unavailable in watchos, tvos, macos }
    function showsBackgroundLocationIndicator: objcbool; message 'showsBackgroundLocationIndicator'; { unavailable in watchos, tvos, macos }
    function location: CLLocation; message 'location';
    function headingAvailable: objcbool; message 'headingAvailable'; { unavailable in watchos, tvos }
    procedure setHeadingFilter(newValue: CLLocationDegrees); message 'setHeadingFilter:'; { unavailable in tvos }
    function headingFilter: CLLocationDegrees; message 'headingFilter'; { unavailable in tvos }
    procedure setHeadingOrientation(newValue: CLDeviceOrientation); message 'setHeadingOrientation:'; { unavailable in tvos }
    function headingOrientation: CLDeviceOrientation; message 'headingOrientation'; { unavailable in tvos }
    function heading: CLHeading; message 'heading'; { unavailable in tvos }
    function maximumRegionMonitoringDistance: CLLocationDistance; message 'maximumRegionMonitoringDistance'; { unavailable in watchos, tvos }
    function monitoredRegions: NSSet; message 'monitoredRegions'; { unavailable in watchos, tvos }
    function rangedRegions: NSSet; message 'rangedRegions'; { unavailable in watchos, tvos }
    function rangedBeaconConstraints: NSSet; message 'rangedBeaconConstraints'; { unavailable in watchos, tvos }
    procedure requestWhenInUseAuthorization; message 'requestWhenInUseAuthorization'; { available in ios , macos  }
    procedure requestAlwaysAuthorization; message 'requestAlwaysAuthorization'; { unavailable in tvos }
    procedure requestTemporaryFullAccuracyAuthorizationWithPurposeKey_completion (purposeKey: NSString; completion: CLLocationManagerRequestTemporaryFullAccuracyAuthorizationWithPurposeKeyCallback); message 'requestTemporaryFullAccuracyAuthorizationWithPurposeKey:completion:'; { available in ios , macos , watchos , tvos  }
    procedure requestTemporaryFullAccuracyAuthorizationWithPurposeKey (purposeKey: NSString); message 'requestTemporaryFullAccuracyAuthorizationWithPurposeKey:'; { available in ios , macos , watchos , tvos  }
    procedure startUpdatingLocation; message 'startUpdatingLocation'; { unavailable in tvos }
    procedure stopUpdatingLocation; message 'stopUpdatingLocation';
    procedure requestLocation; message 'requestLocation'; { available in ios , macos  }
    procedure startUpdatingHeading; message 'startUpdatingHeading'; { unavailable in tvos }
    procedure stopUpdatingHeading; message 'stopUpdatingHeading'; { unavailable in tvos, macos }
    procedure dismissHeadingCalibrationDisplay; message 'dismissHeadingCalibrationDisplay'; { unavailable in tvos }
    procedure startMonitoringSignificantLocationChanges; message 'startMonitoringSignificantLocationChanges'; { unavailable in watchos, tvos }
    procedure stopMonitoringSignificantLocationChanges; message 'stopMonitoringSignificantLocationChanges'; { unavailable in watchos, tvos }
    procedure startMonitoringForRegion_desiredAccuracy (region: CLRegion; accuracy: CLLocationAccuracy); message 'startMonitoringForRegion:desiredAccuracy:'; { unavailable in watchos, tvos }
    procedure stopMonitoringForRegion (region: CLRegion); message 'stopMonitoringForRegion:'; { unavailable in watchos, tvos }
    procedure startMonitoringForRegion (region: CLRegion); message 'startMonitoringForRegion:'; { unavailable in watchos, tvos }
    procedure requestStateForRegion (region: CLRegion); message 'requestStateForRegion:'; { unavailable in watchos, tvos }
    procedure startRangingBeaconsInRegion (region: CLBeaconRegion); message 'startRangingBeaconsInRegion:'; { unavailable in watchos, tvos }
    procedure stopRangingBeaconsInRegion (region: CLBeaconRegion); message 'stopRangingBeaconsInRegion:'; { unavailable in watchos, tvos }
    procedure startRangingBeaconsSatisfyingConstraint (constraint: CLBeaconIdentityConstraint); message 'startRangingBeaconsSatisfyingConstraint:'; { unavailable in watchos, tvos }
    procedure stopRangingBeaconsSatisfyingConstraint (constraint: CLBeaconIdentityConstraint); message 'stopRangingBeaconsSatisfyingConstraint:'; { unavailable in watchos, tvos }
    procedure allowDeferredLocationUpdatesUntilTraveled_timeout (distance: CLLocationDistance; timeout: NSTimeInterval); message 'allowDeferredLocationUpdatesUntilTraveled:timeout:'; { unavailable in watchos, tvos }
    procedure disallowDeferredLocationUpdates; message 'disallowDeferredLocationUpdates'; { unavailable in watchos, tvos }
    class function deferredLocationUpdatesAvailable: objcbool; message 'deferredLocationUpdatesAvailable'; { unavailable in watchos, tvos }
  end;
{$endif}

