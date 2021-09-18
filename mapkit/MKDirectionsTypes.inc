{ Parsed from MapKit.framework MKDirectionsTypes.h }
{$ifdef TYPES}
type
  MKDirectionsTransportType = NSUInteger;
  MKDirectionsTransportTypePtr = ^MKDirectionsTransportType;

const
  MKDirectionsTransportTypeAutomobile = 1 shl 0;
  MKDirectionsTransportTypeWalking = 1 shl 1;
  MKDirectionsTransportTypeTransit = 1 shl 2 { available in 10_11, 9_0 };
  MKDirectionsTransportTypeAny = $0FFFFFFF;
{$endif}

