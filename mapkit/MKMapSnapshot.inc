{ Parsed from MapKit.framework MKMapSnapshot.h }

{ Types from MKMapSnapshot }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  MKMapSnapshotPtr = ^MKMapSnapshot;
{$endif}

{$ifdef CLASSES}

type
  MKMapSnapshot = objcclass external (NSObject)
  public
    {$if defined(TARGET_OS_IPHONE)}
    function image: UIImagePtr; message 'image';
    function pointForCoordinate (coordinate: CLLocationCoordinate2D): CGPoint; message 'pointForCoordinate:';
    function traitCollection: UITraitCollectionPtr; message 'traitCollection'; { unavailable in watchos } { unavailable in macos }
    {$else}
    function image_: NSImage; message 'image';
    function appearance: NSAppearancePtr; message 'appearance'; { unavailable in ios, tvos, watchos } { available in macos 10.14 }
    function pointForCoordinate (coordinate: CLLocationCoordinate2D): NSPoint; message 'pointForCoordinate:';
    {$endif}
  end;
{$endif}

