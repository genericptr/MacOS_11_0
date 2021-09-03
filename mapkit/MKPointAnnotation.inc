{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKPointAnnotation.h }

{$ifdef TYPES}
type
  MKPointAnnotationPtr = ^MKPointAnnotation;
{$endif}

{$ifdef CLASSES}

type
  MKPointAnnotation = objcclass external (MKShape)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoordinate (coordinate: CLLocationCoordinate2D): id; message 'initWithCoordinate:'; { unavailable in watchos }
    function initWithCoordinate_title_subtitle (coordinate: CLLocationCoordinate2D; title_: NSString; subtitle_: NSString): id; message 'initWithCoordinate:title:subtitle:'; { unavailable in watchos }
    procedure setCoordinate(newValue: CLLocationCoordinate2D); message 'setCoordinate:';
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
  end;
{$endif}

