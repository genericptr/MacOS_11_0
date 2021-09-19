{ Parsed from MapKit.framework MKLocalSearch.h }

{$ifdef TYPES}
type
  MKLocalSearchPtr = ^MKLocalSearch;
{$endif}

{$ifdef TYPES}
type
  MKLocalSearchCompletionHandler = reference to procedure (response: MKLocalSearchResponse; error: NSError); cblock; cdecl { unavailable in watchos } { available in 9_2 };
{$endif}

{$ifdef CLASSES}

type
  MKLocalSearch = objcclass external (NSObject)
  public
    function initWithRequest (request: MKLocalSearchRequest): id; message 'initWithRequest:'; { NS_DESIGNATED_INITIALIZER }
    function initWithPointsOfInterestRequest (request: MKLocalPointsOfInterestRequest): id; message 'initWithPointsOfInterestRequest:'; { unavailable in watchos } { available in ios 14.0, macos 11.0, tvos 14.0 }
    procedure startWithCompletionHandler (completionHandler: MKLocalSearchCompletionHandler); message 'startWithCompletionHandler:';
    procedure cancel; message 'cancel';
    function isSearching: objcbool; message 'isSearching';
  end;
{$endif}

