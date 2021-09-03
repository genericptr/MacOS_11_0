{ Parsed from CoreLocation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreLocation.framework/Headers/CLError.h }
{$ifdef TYPES}
type
  CLError = NSInteger;
  CLErrorPtr = ^CLError;

const
  kCLErrorLocationUnknown = 0;
  kCLErrorDenied = 1;
  kCLErrorNetwork = 2;
  kCLErrorHeadingFailure = 3;
  kCLErrorRegionMonitoringDenied = 4;
  kCLErrorRegionMonitoringFailure = 5;
  kCLErrorRegionMonitoringSetupDelayed = 6;
  kCLErrorRegionMonitoringResponseDelayed = 7;
  kCLErrorGeocodeFoundNoResult = 8;
  kCLErrorGeocodeFoundPartialResult = 9;
  kCLErrorGeocodeCanceled = 10;
  kCLErrorDeferredFailed = 11;
  kCLErrorDeferredNotUpdatingLocation = 12;
  kCLErrorDeferredAccuracyTooLow = 13;
  kCLErrorDeferredDistanceFiltered = 14;
  kCLErrorDeferredCanceled = 15;
  kCLErrorRangingUnavailable = 16;
  kCLErrorRangingFailure = 17;
  kCLErrorPromptDeclined = 18;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCLErrorUserInfoAlternateRegionKey: NSString { unavailable in watchos, tvos }; cvar; external;
{$endif}

