{ Parsed from MapKit.framework MKLocalSearchRequest.h }

{$ifdef TYPES}
type
  MKLocalSearchRequestPtr = ^MKLocalSearchRequest;
{$endif}

{$ifdef TYPES}
type
  MKLocalSearchResultType = NSUInteger;
  MKLocalSearchResultTypePtr = ^MKLocalSearchResultType;

const
  MKLocalSearchResultTypeAddress = 1 shl 0;
  MKLocalSearchResultTypePointOfInterest = 1 shl 1;
{$endif}

{$ifdef CLASSES}

type
  MKLocalSearchRequest = objcclass external (NSObject, NSCopyingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithNaturalLanguageQuery (naturalLanguageQuery: NSString): id; message 'initWithNaturalLanguageQuery:'; { unavailable in watchos } { available in ios 13.0, tvos 13.0, macos 10.15 }
    function initWithNaturalLanguageQuery_region (naturalLanguageQuery: NSString; region: MKCoordinateRegion): id; message 'initWithNaturalLanguageQuery:region:'; { unavailable in watchos } { available in ios 13.0, tvos 13.0, macos 10.15 }
    procedure setNaturalLanguageQuery(newValue: NSString); message 'setNaturalLanguageQuery:';
    function naturalLanguageQuery: NSString; message 'naturalLanguageQuery';
    procedure setRegion(newValue: MKCoordinateRegion); message 'setRegion:';
    function region: MKCoordinateRegion; message 'region';
    procedure setResultTypes(newValue: MKLocalSearchResultType); message 'setResultTypes:'; { unavailable in watchos } { available in ios 13.0, macos 10.15, tvos 13.0 }
    function resultTypes: MKLocalSearchResultType; message 'resultTypes'; { unavailable in watchos } { available in ios 13.0, macos 10.15, tvos 13.0 }
    procedure setPointOfInterestFilter(newValue: MKPointOfInterestFilter); message 'setPointOfInterestFilter:'; { unavailable in watchos } { available in ios 13.0, macos 10.15, tvos 13.0 }
    function pointOfInterestFilter: MKPointOfInterestFilter; message 'pointOfInterestFilter'; { unavailable in watchos } { available in ios 13.0, macos 10.15, tvos 13.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

