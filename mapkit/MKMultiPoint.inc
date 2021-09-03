{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKMultiPoint.h }

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

