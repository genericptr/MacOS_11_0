{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesCoreLocation;
interface

type
  CLBeacon = objcclass external;
  CLBeaconIdentityConstraint = objcclass external;
  CLBeaconRegion = objcclass external;
  CLCircularRegion = objcclass external;
  CLFloor = objcclass external;
  CLGeocoder = objcclass external;
  CLHeading = objcclass external;
  CLLocation = objcclass external;
  CLLocationManager = objcclass external;
  CLPlacemark = objcclass external;
  CLRegion = objcclass external;
  CLVisit = objcclass external;
  CLLocationManagerDelegateProtocol = objcprotocol external name 'CLLocationManagerDelegate';

type
  CLBeaconInternal = objcclass external;
  CLGeocoderInternal = objcclass external;
  CLPlacemarkInternal = objcclass external;
  CLRegionInternal = objcclass external;
  CNPostalAddress = objcclass external;

implementation
end.
