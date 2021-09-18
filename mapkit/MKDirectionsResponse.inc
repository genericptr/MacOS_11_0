{ Parsed from MapKit.framework MKDirectionsResponse.h }

{$ifdef TYPES}
type
  MKDirectionsResponsePtr = ^MKDirectionsResponse;
{$endif}

{$ifdef CLASSES}

type
  MKDirectionsResponse = objcclass external (NSObject)
  public
    function source: MKMapItem; message 'source';
    function destination: MKMapItem; message 'destination';
    function routes: NSArray; message 'routes';
    function name: NSString; message 'name';
    function advisoryNotices: NSArray; message 'advisoryNotices';
    function distance: CLLocationDistance; message 'distance';
    function expectedTravelTime: NSTimeInterval; message 'expectedTravelTime';
    function transportType: MKDirectionsTransportType; message 'transportType';
    function polyline: MKPolyline; message 'polyline';
    function steps: NSArray; message 'steps';
    function instructions: NSString; message 'instructions';
    function notice: NSString; message 'notice';
    function polyline_: MKPolyline; message 'polyline';
    function distance_: CLLocationDistance; message 'distance';
    function transportType_: MKDirectionsTransportType; message 'transportType';
    function source_: MKMapItem; message 'source';
    function destination_: MKMapItem; message 'destination';
    function expectedTravelTime_: NSTimeInterval; message 'expectedTravelTime';
    function distance__: CLLocationDistance; message 'distance'; { available in 10_11, 9_0 }
    function expectedArrivalDate: NSDate; message 'expectedArrivalDate'; { available in 10_11, 9_0 }
    function expectedDepartureDate: NSDate; message 'expectedDepartureDate'; { available in 10_11, 9_0 }
    function transportType__: MKDirectionsTransportType; message 'transportType'; { available in 10_11, 9_0 }
  end;
{$endif}

