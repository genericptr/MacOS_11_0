{ Parsed from MapKit.framework MKDirections.h }

{$ifdef TYPES}
type
  MKDirectionsPtr = ^MKDirections;
{$endif}

{$ifdef TYPES}
type
  MKDirectionsHandler = reference to procedure (response: MKDirectionsResponse; error: NSError); cblock; cdecl;
  MKETAHandler = reference to procedure (response: MKETAResponse; error: NSError); cblock; cdecl { unavailable in watchos } { available in 9_2 };
{$endif}

{$ifdef CLASSES}

type
  MKDirections = objcclass external (NSObject)
  public
    function initWithRequest (request: MKDirectionsRequest): id; message 'initWithRequest:'; { NS_DESIGNATED_INITIALIZER }
    procedure calculateDirectionsWithCompletionHandler (completionHandler: MKDirectionsHandler); message 'calculateDirectionsWithCompletionHandler:';
    procedure calculateETAWithCompletionHandler (completionHandler: MKETAHandler); message 'calculateETAWithCompletionHandler:';
    procedure cancel; message 'cancel';
    function isCalculating: objcbool; message 'isCalculating';
  end;
{$endif}

