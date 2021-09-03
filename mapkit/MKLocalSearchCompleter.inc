{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKLocalSearchCompleter.h }

{$ifdef TYPES}
type
  MKLocalSearchCompleterPtr = ^MKLocalSearchCompleter;
{$endif}

{$ifdef TYPES}
type
  MKSearchCompletionFilterType = NSInteger;
  MKSearchCompletionFilterTypePtr = ^MKSearchCompletionFilterType;

const
  MKSearchCompletionFilterTypeLocationsAndQueries = 0;
  MKSearchCompletionFilterTypeLocationsOnly = 1;

type
  MKLocalSearchCompleterResultType = NSUInteger;
  MKLocalSearchCompleterResultTypePtr = ^MKLocalSearchCompleterResultType;

const
  MKLocalSearchCompleterResultTypeAddress = 1 shl 0;
  MKLocalSearchCompleterResultTypePointOfInterest = 1 shl 1;
  MKLocalSearchCompleterResultTypeQuery = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  MKLocalSearchCompleter = objcclass external (NSObject)
  public
    procedure setQueryFragment(newValue: NSString); message 'setQueryFragment:';
    function queryFragment: NSString; message 'queryFragment';
    procedure setRegion(newValue: MKCoordinateRegion); message 'setRegion:';
    function region: MKCoordinateRegion; message 'region';
    procedure setFilterType(newValue: MKSearchCompletionFilterType); message 'setFilterType:'; { unavailable in watchos }
    function filterType: MKSearchCompletionFilterType; message 'filterType'; { unavailable in watchos }
    procedure setResultTypes(newValue: MKLocalSearchCompleterResultType); message 'setResultTypes:'; { unavailable in watchos }
    function resultTypes: MKLocalSearchCompleterResultType; message 'resultTypes'; { unavailable in watchos }
    procedure setPointOfInterestFilter(newValue: MKPointOfInterestFilter); message 'setPointOfInterestFilter:'; { unavailable in watchos }
    function pointOfInterestFilter: MKPointOfInterestFilter; message 'pointOfInterestFilter'; { unavailable in watchos }
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function results: NSArray; message 'results';
    function isSearching: objcbool; message 'isSearching';
    procedure cancel; message 'cancel';
    procedure completerDidUpdateResults (completer: MKLocalSearchCompleter); message 'completerDidUpdateResults:';
    procedure completer_didFailWithError (completer: MKLocalSearchCompleter; error: NSError); message 'completer:didFailWithError:';
    function title: NSString; message 'title';
    function titleHighlightRanges: NSArray; message 'titleHighlightRanges';
    function subtitle: NSString; message 'subtitle';
    function subtitleHighlightRanges: NSArray; message 'subtitleHighlightRanges';
  end;


type
  MKLocalSearchRequestCategory = objccategory external (MKLocalSearchRequest)
    function initWithCompletion (completion: MKLocalSearchCompletion): id; message 'initWithCompletion:'; { unavailable in watchos }
  end;
{$endif}

