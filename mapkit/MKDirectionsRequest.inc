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
    procedure setTransportType(newValue: MKDirectionsTransportType); message 'setTransportType:'; { available in macos 10.9, ios 7.0 }
    function transportType: MKDirectionsTransportType; message 'transportType'; { available in macos 10.9, ios 7.0 }
    procedure setRequestsAlternateRoutes(newValue: objcbool); message 'setRequestsAlternateRoutes:'; { available in macos 10.9, ios 7.0 }
    function requestsAlternateRoutes: objcbool; message 'requestsAlternateRoutes'; { available in macos 10.9, ios 7.0 }
    procedure setDepartureDate(newValue: NSDate); message 'setDepartureDate:'; { available in macos 10.9, ios 7.0 }
    function departureDate: NSDate; message 'departureDate'; { available in macos 10.9, ios 7.0 }
    procedure setArrivalDate(newValue: NSDate); message 'setArrivalDate:'; { available in macos 10.9, ios 7.0 }
    function arrivalDate: NSDate; message 'arrivalDate'; { available in macos 10.9, ios 7.0 }
  end;

type
  MKDirectionsURL = objccategory external (MKDirectionsRequest)
    function initWithContentsOfURL (url: NSURL): id; message 'initWithContentsOfURL:'; { available in macos 10.9, ios 6.0 }
    class function isDirectionsRequestURL (url: NSURL): objcbool; message 'isDirectionsRequestURL:'; { available in macos 10.9, ios 6.0 }
  end;
{$endif}

