{ Parsed from MapKit.framework MKMapSnapshotOptions.h }

{ Types from MKMapSnapshotOptions }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  MKMapSnapshotOptionsPtr = ^MKMapSnapshotOptions;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  MKMapSnapshotOptions = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setCamera(newValue: MKMapCamera); message 'setCamera:';
    function camera: MKMapCamera; message 'camera';
    procedure setMapRect(newValue: MKMapRect); message 'setMapRect:';
    function mapRect: MKMapRect; message 'mapRect';
    procedure setRegion(newValue: MKCoordinateRegion); message 'setRegion:';
    function region: MKCoordinateRegion; message 'region';
    procedure setMapType(newValue: MKMapType); message 'setMapType:';
    function mapType: MKMapType; message 'mapType';
    procedure setPointOfInterestFilter(newValue: MKPointOfInterestFilter); message 'setPointOfInterestFilter:'; { unavailable in watchos } { available in ios 13.0, macos 10.15, tvos 13.0 }
    function pointOfInterestFilter: MKPointOfInterestFilter; message 'pointOfInterestFilter'; { unavailable in watchos } { available in ios 13.0, macos 10.15, tvos 13.0 }
    procedure setShowsPointsOfInterest(newValue: objcbool); message 'setShowsPointsOfInterest:'; { unavailable in watchos }
    function showsPointsOfInterest: objcbool; message 'showsPointsOfInterest'; { unavailable in watchos }
    procedure setShowsBuildings(newValue: objcbool); message 'setShowsBuildings:';
    function showsBuildings: objcbool; message 'showsBuildings';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setSize(newValue: CGSize); message 'setSize:';
    function size: CGSize; message 'size';
    {$else}
    procedure setSize_(newValue: NSSize); message 'setSize:';
    function size_: NSSize; message 'size';
    procedure setAppearance(newValue: NSAppearancePtr); message 'setAppearance:'; { unavailable in ios, tvos, watchos } { available in macos 10.14 }
    function appearance: NSAppearancePtr; message 'appearance'; { unavailable in ios, tvos, watchos } { available in macos 10.14 }
    {$endif}
    {$if defined(TARGET_OS_IPHONE)}
    procedure setScale(newValue: CGFloat); message 'setScale:'; deprecated 'Use traitCollection.displayScale';
    function scale: CGFloat; message 'scale'; deprecated 'Use traitCollection.displayScale';
    procedure setTraitCollection(newValue: UITraitCollectionPtr); message 'setTraitCollection:'; { unavailable in watchos } { unavailable in macos }
    function traitCollection: UITraitCollectionPtr; message 'traitCollection'; { unavailable in watchos } { unavailable in macos }
    {$endif}

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$endif}
