{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKLocalSearch.h }

{$ifdef TYPES}
type
  MKLocalSearchPtr = ^MKLocalSearch;
{$endif}

{$ifdef TYPES}
type
  MKLocalSearchCompletionHandler = reference to function (response: MKLocalSearchResponse; error: NSError): pointer; cblock; cdecl { unavailable in watchos };
{$endif}

{$ifdef CLASSES}

type
  MKLocalSearch = objcclass external (NSObject)
  public
    function initWithRequest (request: MKLocalSearchRequest): id; message 'initWithRequest:'; { NS_DESIGNATED_INITIALIZER }
    function initWithPointsOfInterestRequest (request: MKLocalPointsOfInterestRequest): id; message 'initWithPointsOfInterestRequest:'; { unavailable in watchos }
    procedure startWithCompletionHandler (completionHandler: MKLocalSearchCompletionHandler); message 'startWithCompletionHandler:';
    procedure cancel; message 'cancel';
    function isSearching: objcbool; message 'isSearching';
  end;
{$endif}

