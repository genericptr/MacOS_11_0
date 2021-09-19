{ Parsed from CoreLocation.framework CLLocationManager.h }

{$ifdef CALLBACKS}
type
  CLLocationManagerRequestTemporaryFullAccuracyAuthorizationWithPurposeKeyCallback = reference to procedure (param1: NSError); cblock; cdecl;
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
  kCLAuthorizationStatusAuthorizedAlways = 3 { available in macos 10.12, ios 8.0 };
  kCLAuthorizationStatusAuthorizedWhenInUse = 4 { unavailable in macos } { available in ios 8.0 };
  kCLAuthorizationStatusAuthorized = kCLAuthorizationStatusAuthorizedAlways { unavailable in watchos, tvos } { available in macos 10.6 };

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
  CLActivityTypeAirborne = 5 { available in ios 12.0, macos 10.14, tvos 12.0, watchos 5.0 };
{$endif}

{$ifdef CLASSES}

type
  CLLocationManager = objcclass external (NSObject)
  private
    _internal: id;
  public
    class function classLocationServicesEnabled: objcbool; message 'locationServicesEnabled'; { available in ios 4.0, macos 10.7 }
    class function classHeadingAvailable: objcbool; message 'headingAvailable'; { unavailable in tvos } { available in ios 4.0, macos 10.7, watchos 2.0 }
    class function significantLocationChangeMonitoringAvailable: objcbool; message 'significantLocationChangeMonitoringAvailable'; { unavailable in watchos, tvos } { available in ios 4.0, macos 10.7 }
    class function isMonitoringAvailableForClass (regionClass: pobjc_class): objcbool; message 'isMonitoringAvailableForClass:'; { unavailable in watchos, tvos } { available in ios 7.0, macos 10.10 }
    class function regionMonitoringAvailable: objcbool; message 'regionMonitoringAvailable'; { unavailable in watchos, tvos }
    class function regionMonitoringEnabled: objcbool; message 'regionMonitoringEnabled'; { unavailable in watchos, tvos }
    class function isRangingAvailable: objcbool; message 'isRangingAvailable'; { unavailable in watchos, tvos } { available in ios 7.0, macos 10.15 }
    function authorizationStatus: CLAuthorizationStatus; message 'authorizationStatus'; { available in ios 14.0, macos 11.0, watchos 7.0, tvos 14.0 }
    class function classAuthorizationStatus: CLAuthorizationStatus; message 'authorizationStatus'; deprecated 'replace with -authorizationStatus';
    function accuracyAuthorization: CLAccuracyAuthorization; message 'accuracyAuthorization'; { available in ios 14.0, macos 11.0, watchos 7.0, tvos 14.0 }
    function isAuthorizedForWidgetUpdates: objcbool; message 'isAuthorizedForWidgetUpdates'; { unavailable in watchos, tvos } { available in ios 14.0, macos 11.0 }
    procedure setDelegate(newValue: CLLocationManagerDelegateProtocol); message 'setDelegate:';
    function delegate: CLLocationManagerDelegateProtocol; message 'delegate';
    function locationServicesEnabled: objcbool; message 'locationServicesEnabled'; { unavailable in watchos, tvos }
    procedure setPurpose(newValue: NSString); message 'setPurpose:'; { unavailable in watchos, tvos }
    function purpose: NSString; message 'purpose'; { unavailable in watchos, tvos }
    procedure setActivityType(newValue: CLActivityType); message 'setActivityType:'; { unavailable in tvos } { available in ios 6.0, macos 10.15, watchos 4.0 }
    function activityType: CLActivityType; message 'activityType'; { unavailable in tvos } { available in ios 6.0, macos 10.15, watchos 4.0 }
    procedure setDistanceFilter(newValue: CLLocationDistance); message 'setDistanceFilter:';
    function distanceFilter: CLLocationDistance; message 'distanceFilter';
    procedure setDesiredAccuracy(newValue: CLLocationAccuracy); message 'setDesiredAccuracy:';
    function desiredAccuracy: CLLocationAccuracy; message 'desiredAccuracy';
    procedure setPausesLocationUpdatesAutomatically(newValue: objcbool); message 'setPausesLocationUpdatesAutomatically:'; { unavailable in watchos, tvos } { available in ios 6.0, macos 10.15 }
    function pausesLocationUpdatesAutomatically: objcbool; message 'pausesLocationUpdatesAutomatically'; { unavailable in watchos, tvos } { available in ios 6.0, macos 10.15 }
    procedure setAllowsBackgroundLocationUpdates(newValue: objcbool); message 'setAllowsBackgroundLocationUpdates:'; { unavailable in tvos } { available in ios 9.0, macos 10.15, watchos 4.0 }
    function allowsBackgroundLocationUpdates: objcbool; message 'allowsBackgroundLocationUpdates'; { unavailable in tvos } { available in ios 9.0, macos 10.15, watchos 4.0 }
    procedure setShowsBackgroundLocationIndicator(newValue: objcbool); message 'setShowsBackgroundLocationIndicator:'; { unavailable in watchos, tvos, macos } { available in ios 11.0 }
    function showsBackgroundLocationIndicator: objcbool; message 'showsBackgroundLocationIndicator'; { unavailable in watchos, tvos, macos } { available in ios 11.0 }
    function location: CLLocation; message 'location';
    function headingAvailable: objcbool; message 'headingAvailable'; { unavailable in watchos, tvos }
    procedure setHeadingFilter(newValue: CLLocationDegrees); message 'setHeadingFilter:'; { unavailable in tvos } { available in ios 3.0, macos 10.15, watchos 2.0 }
    function headingFilter: CLLocationDegrees; message 'headingFilter'; { unavailable in tvos } { available in ios 3.0, macos 10.15, watchos 2.0 }
    procedure setHeadingOrientation(newValue: CLDeviceOrientation); message 'setHeadingOrientation:'; { unavailable in tvos } { available in ios 4.0, macos 10.15, watchos 2.0 }
    function headingOrientation: CLDeviceOrientation; message 'headingOrientation'; { unavailable in tvos } { available in ios 4.0, macos 10.15, watchos 2.0 }
    function heading: CLHeading; message 'heading'; { unavailable in tvos } { available in ios 4.0, macos 10.15, watchos 2.0 }
    function maximumRegionMonitoringDistance: CLLocationDistance; message 'maximumRegionMonitoringDistance'; { unavailable in watchos, tvos } { available in ios 4.0, macos 10.8 }
    function monitoredRegions: NSSet; message 'monitoredRegions'; { unavailable in watchos, tvos } { available in ios 4.0, macos 10.8 }
    function rangedRegions: NSSet; message 'rangedRegions'; { unavailable in watchos, tvos }
    function rangedBeaconConstraints: NSSet; message 'rangedBeaconConstraints'; { unavailable in watchos, tvos } { available in ios 13.0, macos 10.15 }
    procedure requestWhenInUseAuthorization; message 'requestWhenInUseAuthorization'; { available in ios 8.0, macos 10.15 }
    procedure requestAlwaysAuthorization; message 'requestAlwaysAuthorization'; { unavailable in tvos } { available in ios 8.0, macos 10.15 }
    procedure requestTemporaryFullAccuracyAuthorizationWithPurposeKey_completion (purposeKey: NSString; completion: CLLocationManagerRequestTemporaryFullAccuracyAuthorizationWithPurposeKeyCallback); message 'requestTemporaryFullAccuracyAuthorizationWithPurposeKey:completion:'; { available in ios 14.0, macos 11.0, watchos 7.0, tvos 14.0 }
    procedure requestTemporaryFullAccuracyAuthorizationWithPurposeKey (purposeKey: NSString); message 'requestTemporaryFullAccuracyAuthorizationWithPurposeKey:'; { available in ios 14.0, macos 11.0, watchos 7.0, tvos 14.0 }
    procedure startUpdatingLocation; message 'startUpdatingLocation'; { unavailable in tvos } { available in watchos 3.0 }
    procedure stopUpdatingLocation; message 'stopUpdatingLocation';
    procedure requestLocation; message 'requestLocation'; { available in ios 9.0, macos 10.14 }
    procedure startUpdatingHeading; message 'startUpdatingHeading'; { unavailable in tvos } { available in ios 3.0, macos 10.15, watchos 2.0 }
    procedure stopUpdatingHeading; message 'stopUpdatingHeading'; { unavailable in tvos, macos } { available in ios 3.0, watchos 2.0 }
    procedure dismissHeadingCalibrationDisplay; message 'dismissHeadingCalibrationDisplay'; { unavailable in tvos } { available in ios 3.0, macos 10.15, watchos 2.0 }
    procedure startMonitoringSignificantLocationChanges; message 'startMonitoringSignificantLocationChanges'; { unavailable in watchos, tvos } { available in ios 4.0, macos 10.7 }
    procedure stopMonitoringSignificantLocationChanges; message 'stopMonitoringSignificantLocationChanges'; { unavailable in watchos, tvos } { available in ios 4.0, macos 10.7 }
    procedure startMonitoringForRegion_desiredAccuracy (region: CLRegion; accuracy: CLLocationAccuracy); message 'startMonitoringForRegion:desiredAccuracy:'; { unavailable in watchos, tvos }
    procedure stopMonitoringForRegion (region: CLRegion); message 'stopMonitoringForRegion:'; { unavailable in watchos, tvos } { available in ios 4.0, macos 10.8 }
    procedure startMonitoringForRegion (region: CLRegion); message 'startMonitoringForRegion:'; { unavailable in watchos, tvos } { available in ios 5.0, macos 10.8 }
    procedure requestStateForRegion (region: CLRegion); message 'requestStateForRegion:'; { unavailable in watchos, tvos } { available in ios 7.0, macos 10.10 }
    procedure startRangingBeaconsInRegion (region: CLBeaconRegion); message 'startRangingBeaconsInRegion:'; { unavailable in watchos, tvos }
    procedure stopRangingBeaconsInRegion (region: CLBeaconRegion); message 'stopRangingBeaconsInRegion:'; { unavailable in watchos, tvos }
    procedure startRangingBeaconsSatisfyingConstraint (constraint: CLBeaconIdentityConstraint); message 'startRangingBeaconsSatisfyingConstraint:'; { unavailable in watchos, tvos } { available in ios 13.0, macos 10.15 }
    procedure stopRangingBeaconsSatisfyingConstraint (constraint: CLBeaconIdentityConstraint); message 'stopRangingBeaconsSatisfyingConstraint:'; { unavailable in watchos, tvos } { available in ios 13.0, macos 10.15 }
    procedure allowDeferredLocationUpdatesUntilTraveled_timeout (distance: CLLocationDistance; timeout: NSTimeInterval); message 'allowDeferredLocationUpdatesUntilTraveled:timeout:'; { unavailable in watchos, tvos }
    procedure disallowDeferredLocationUpdates; message 'disallowDeferredLocationUpdates'; { unavailable in watchos, tvos }
    class function deferredLocationUpdatesAvailable: objcbool; message 'deferredLocationUpdatesAvailable'; { unavailable in watchos, tvos }
  end;
{$endif}

