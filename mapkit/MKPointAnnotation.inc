{ Parsed from MapKit.framework MKPointAnnotation.h }

{$ifdef TYPES}
type
  MKPointAnnotationPtr = ^MKPointAnnotation;
{$endif}

{$ifdef CLASSES}

type
  MKPointAnnotation = objcclass external (MKShape)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoordinate (coordinate: CLLocationCoordinate2D): id; message 'initWithCoordinate:'; { unavailable in watchos } { available in ios 13.0, tvos 13.0, macos 10.15 }
    function initWithCoordinate_title_subtitle (coordinate: CLLocationCoordinate2D; title_: NSString; subtitle_: NSString): id; message 'initWithCoordinate:title:subtitle:'; { unavailable in watchos } { available in ios 13.0, tvos 13.0, macos 10.15 }
    procedure setCoordinate(newValue: CLLocationCoordinate2D); message 'setCoordinate:';
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
  end;
{$endif}

