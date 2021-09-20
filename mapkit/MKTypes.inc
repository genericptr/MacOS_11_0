{ Parsed from MapKit.framework MKTypes.h }
{$ifdef TYPES}
type
  MKMapType = NSUInteger;
  MKMapTypePtr = ^MKMapType;

const
  MKMapTypeStandard = 0;
  MKMapTypeSatellite = 1;
  MKMapTypeHybrid = 2;
  MKMapTypeSatelliteFlyover = 3 { available in macos 10.11, ios 9.0 };
  MKMapTypeHybridFlyover = 4 { available in macos 10.11, ios 9.0 };
  MKMapTypeMutedStandard = 5 { available in macos 10.13, ios 11.0 } { available in 11_0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MKErrorDomain: NSString { available in 9_2 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MKErrorCode = NSUInteger;
  MKErrorCodePtr = ^MKErrorCode;

const
  MKErrorUnknown = 1;
  MKErrorServerFailure = 2;
  MKErrorLoadingThrottled = 3;
  MKErrorPlacemarkNotFound = 4;
  MKErrorDirectionsNotFound = 5 { available in macos 10.9, ios 7.0 };
  MKErrorDecodingFailed = 6 { unavailable in watchos } { available in ios 13.0, tvos 13.0, macos 10.15 };

type
  MKFeatureVisibility = NSInteger;
  MKFeatureVisibilityPtr = ^MKFeatureVisibility;

const
  MKFeatureVisibilityAdaptive = 0;
  MKFeatureVisibilityHidden = 1;
  MKFeatureVisibilityVisible = 2;
{$endif}

