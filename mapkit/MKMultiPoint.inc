{ Parsed from MapKit.framework MKMultiPoint.h }

{$ifdef TYPES}
type
  MKMultiPointPtr = ^MKMultiPoint;
{$endif}

{$ifdef CLASSES}

type
  MKMultiPoint = objcclass external (MKShape)
  public
    function points: MKMapPointPtr; message 'points';
    function pointCount: NSUInteger; message 'pointCount';
    procedure getCoordinates_range (coords: CLLocationCoordinate2DPtr; range: NSRange); message 'getCoordinates:range:';
    function locationAtPointIndex (index: NSUInteger): CGFloat; message 'locationAtPointIndex:'; { unavailable in watchos }
    function locationsAtPointIndexes (indexes: NSIndexSet): NSArray; message 'locationsAtPointIndexes:'; { unavailable in watchos }
  end;
{$endif}

