{ Parsed from MapKit.framework MKDirectionsRequest.h }

{$ifdef TYPES}
type
  MKDirectionsRequestPtr = ^MKDirectionsRequest;
{$endif}

{$ifdef CLASSES}

type
  MKDirectionsRequest = objcclass external (NSObject)
  public
    procedure setSource(newValue: MKMapItem); message 'setSource:';
    function source: MKMapItem; message 'source';
    procedure setDestination(newValue: MKMapItem); message 'setDestination:';
    function destination: MKMapItem; message 'destination';
  end;


type
  MKRequestOptions = objccategory external (MKDirectionsRequest)
    procedure setTransportType(newValue: MKDirectionsTransportType); message 'setTransportType:'; { available in 10_9, 7_0 }
    function transportType: MKDirectionsTransportType; message 'transportType'; { available in 10_9, 7_0 }
    procedure setRequestsAlternateRoutes(newValue: objcbool); message 'setRequestsAlternateRoutes:'; { available in 10_9, 7_0 }
    function requestsAlternateRoutes: objcbool; message 'requestsAlternateRoutes'; { available in 10_9, 7_0 }
    procedure setDepartureDate(newValue: NSDate); message 'setDepartureDate:'; { available in 10_9, 7_0 }
    function departureDate: NSDate; message 'departureDate'; { available in 10_9, 7_0 }
    procedure setArrivalDate(newValue: NSDate); message 'setArrivalDate:'; { available in 10_9, 7_0 }
    function arrivalDate: NSDate; message 'arrivalDate'; { available in 10_9, 7_0 }
  end;

type
  MKDirectionsURL = objccategory external (MKDirectionsRequest)
    function initWithContentsOfURL (url: NSURL): id; message 'initWithContentsOfURL:'; { available in 10_9, 6_0 }
    class function isDirectionsRequestURL (url: NSURL): objcbool; message 'isDirectionsRequestURL:'; { available in 10_9, 6_0 }
  end;
{$endif}

