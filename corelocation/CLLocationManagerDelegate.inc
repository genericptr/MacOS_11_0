{ Parsed from CoreLocation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreLocation.framework/Headers/CLLocationManagerDelegate.h }

{$ifdef TYPES}
type
  CLLocationManagerDelegateProtocolPtr = ^CLLocationManagerDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  CLLocationManagerDelegateProtocol = objcprotocol external name 'CLLocationManagerDelegate' (NSObjectProtocol)
  optional
    procedure locationManager_didUpdateToLocation_fromLocation (manager: CLLocationManager; newLocation: CLLocation; oldLocation: CLLocation); message 'locationManager:didUpdateToLocation:fromLocation:'; { unavailable in watchos, tvos }
    procedure locationManager_didUpdateLocations (manager: CLLocationManager; locations: NSArray); message 'locationManager:didUpdateLocations:'; { available in ios , macos  }
    procedure locationManager_didUpdateHeading (manager: CLLocationManager; newHeading: CLHeading); message 'locationManager:didUpdateHeading:'; { unavailable in tvos }
    function locationManagerShouldDisplayHeadingCalibration (manager: CLLocationManager): objcbool; message 'locationManagerShouldDisplayHeadingCalibration:'; { unavailable in tvos }
    procedure locationManager_didDetermineState_forRegion (manager: CLLocationManager; state: CLRegionState; region: CLRegion); message 'locationManager:didDetermineState:forRegion:'; { unavailable in watchos, tvos }
    procedure locationManager_didRangeBeacons_inRegion (manager: CLLocationManager; beacons: NSArray; region: CLBeaconRegion); message 'locationManager:didRangeBeacons:inRegion:'; { unavailable in watchos, tvos }
    procedure locationManager_rangingBeaconsDidFailForRegion_withError (manager: CLLocationManager; region: CLBeaconRegion; error: NSError); message 'locationManager:rangingBeaconsDidFailForRegion:withError:'; { unavailable in watchos, tvos }
    procedure locationManager_didRangeBeacons_satisfyingConstraint (manager: CLLocationManager; beacons: NSArray; beaconConstraint: CLBeaconIdentityConstraint); message 'locationManager:didRangeBeacons:satisfyingConstraint:'; { unavailable in watchos, tvos }
    procedure locationManager_didFailRangingBeaconsForConstraint_error (manager: CLLocationManager; beaconConstraint: CLBeaconIdentityConstraint; error: NSError); message 'locationManager:didFailRangingBeaconsForConstraint:error:'; { unavailable in watchos, tvos }
    procedure locationManager_didEnterRegion (manager: CLLocationManager; region: CLRegion); message 'locationManager:didEnterRegion:'; { unavailable in watchos, tvos }
    procedure locationManager_didExitRegion (manager: CLLocationManager; region: CLRegion); message 'locationManager:didExitRegion:'; { unavailable in watchos, tvos }
    procedure locationManager_didFailWithError (manager: CLLocationManager; error: NSError); message 'locationManager:didFailWithError:';
    procedure locationManager_monitoringDidFailForRegion_withError (manager: CLLocationManager; region: CLRegion; error: NSError); message 'locationManager:monitoringDidFailForRegion:withError:'; { unavailable in watchos, tvos }
    procedure locationManager_didChangeAuthorizationStatus (manager: CLLocationManager; status: CLAuthorizationStatus); message 'locationManager:didChangeAuthorizationStatus:'; deprecated 'replace with -locationManagerDidChangeAuthorization:';
    procedure locationManagerDidChangeAuthorization (manager: CLLocationManager); message 'locationManagerDidChangeAuthorization:'; { available in ios , macos , watchos , tvos  }
    procedure locationManager_didStartMonitoringForRegion (manager: CLLocationManager; region: CLRegion); message 'locationManager:didStartMonitoringForRegion:'; { unavailable in watchos, tvos }
    procedure locationManagerDidPauseLocationUpdates (manager: CLLocationManager); message 'locationManagerDidPauseLocationUpdates:'; { unavailable in watchos, tvos }
    procedure locationManagerDidResumeLocationUpdates (manager: CLLocationManager); message 'locationManagerDidResumeLocationUpdates:'; { unavailable in watchos, tvos }
    procedure locationManager_didFinishDeferredUpdatesWithError (manager: CLLocationManager; error: NSError); message 'locationManager:didFinishDeferredUpdatesWithError:'; { unavailable in watchos, tvos }
    procedure locationManager_didVisit (manager: CLLocationManager; visit: CLVisit); message 'locationManager:didVisit:'; { unavailable in watchos, tvos }
  end;
{$endif}

