{ Parsed from CoreLocation.framework CLLocationManagerDelegate.h }

{$ifdef TYPES}
type
  CLLocationManagerDelegateProtocolPtr = ^CLLocationManagerDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  CLLocationManagerDelegateProtocol = objcprotocol external name 'CLLocationManagerDelegate' (NSObjectProtocol)
  optional
    procedure locationManager_didUpdateToLocation_fromLocation (manager: CLLocationManager; newLocation: CLLocation; oldLocation: CLLocation); message 'locationManager:didUpdateToLocation:fromLocation:'; { unavailable in watchos, tvos } { available in macos 10.6 }
    procedure locationManager_didUpdateLocations (manager: CLLocationManager; locations: NSArray); message 'locationManager:didUpdateLocations:'; { available in ios 6.0, macos 10.9 }
    procedure locationManager_didUpdateHeading (manager: CLLocationManager; newHeading: CLHeading); message 'locationManager:didUpdateHeading:'; { unavailable in tvos } { available in ios 3.0, macos 10.15, watchos 2.0 }
    function locationManagerShouldDisplayHeadingCalibration (manager: CLLocationManager): objcbool; message 'locationManagerShouldDisplayHeadingCalibration:'; { unavailable in tvos } { available in ios 3.0, macos 10.15, watchos 2.0 }
    procedure locationManager_didDetermineState_forRegion (manager: CLLocationManager; state: CLRegionState; region: CLRegion); message 'locationManager:didDetermineState:forRegion:'; { unavailable in watchos, tvos } { available in ios 7.0, macos 10.10 }
    procedure locationManager_didRangeBeacons_inRegion (manager: CLLocationManager; beacons: NSArray; region: CLBeaconRegion); message 'locationManager:didRangeBeacons:inRegion:'; { unavailable in watchos, tvos }
    procedure locationManager_rangingBeaconsDidFailForRegion_withError (manager: CLLocationManager; region: CLBeaconRegion; error: NSError); message 'locationManager:rangingBeaconsDidFailForRegion:withError:'; { unavailable in watchos, tvos }
    procedure locationManager_didRangeBeacons_satisfyingConstraint (manager: CLLocationManager; beacons: NSArray; beaconConstraint: CLBeaconIdentityConstraint); message 'locationManager:didRangeBeacons:satisfyingConstraint:'; { unavailable in watchos, tvos } { available in ios 13.0, macos 10.15 }
    procedure locationManager_didFailRangingBeaconsForConstraint_error (manager: CLLocationManager; beaconConstraint: CLBeaconIdentityConstraint; error: NSError); message 'locationManager:didFailRangingBeaconsForConstraint:error:'; { unavailable in watchos, tvos } { available in ios 13.0, macos 10.15 }
    procedure locationManager_didEnterRegion (manager: CLLocationManager; region: CLRegion); message 'locationManager:didEnterRegion:'; { unavailable in watchos, tvos } { available in ios 4.0, macos 10.8 }
    procedure locationManager_didExitRegion (manager: CLLocationManager; region: CLRegion); message 'locationManager:didExitRegion:'; { unavailable in watchos, tvos } { available in ios 4.0, macos 10.8 }
    procedure locationManager_didFailWithError (manager: CLLocationManager; error: NSError); message 'locationManager:didFailWithError:';
    procedure locationManager_monitoringDidFailForRegion_withError (manager: CLLocationManager; region: CLRegion; error: NSError); message 'locationManager:monitoringDidFailForRegion:withError:'; { unavailable in watchos, tvos } { available in ios 4.0, macos 10.8 }
    procedure locationManager_didChangeAuthorizationStatus (manager: CLLocationManager; status: CLAuthorizationStatus); message 'locationManager:didChangeAuthorizationStatus:'; deprecated 'replace with -locationManagerDidChangeAuthorization:';
    procedure locationManagerDidChangeAuthorization (manager: CLLocationManager); message 'locationManagerDidChangeAuthorization:'; { available in ios 14.0, macos 11.0, watchos 7.0, tvos 14.0 }
    procedure locationManager_didStartMonitoringForRegion (manager: CLLocationManager; region: CLRegion); message 'locationManager:didStartMonitoringForRegion:'; { unavailable in watchos, tvos } { available in ios 5.0, macos 10.8 }
    procedure locationManagerDidPauseLocationUpdates (manager: CLLocationManager); message 'locationManagerDidPauseLocationUpdates:'; { unavailable in watchos, tvos } { available in ios 6.0, macos 10.15 }
    procedure locationManagerDidResumeLocationUpdates (manager: CLLocationManager); message 'locationManagerDidResumeLocationUpdates:'; { unavailable in watchos, tvos } { available in ios 6.0, macos 10.15 }
    procedure locationManager_didFinishDeferredUpdatesWithError (manager: CLLocationManager; error: NSError); message 'locationManager:didFinishDeferredUpdatesWithError:'; { unavailable in watchos, tvos } { available in ios 6.0, macos 10.9 }
    procedure locationManager_didVisit (manager: CLLocationManager; visit: CLVisit); message 'locationManager:didVisit:'; { unavailable in watchos, tvos } { available in ios 8.0, macos 10.15 }
  end;
{$endif}

