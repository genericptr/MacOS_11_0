{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKAnnotation.h }

{$ifdef TYPES}
type
  MKAnnotationProtocolPtr = ^MKAnnotationProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MKAnnotationProtocol = objcprotocol external name 'MKAnnotation' (NSObjectProtocol)
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
  optional
    function title: NSString; message 'title';
    function subtitle: NSString; message 'subtitle';
    procedure setCoordinate (newCoordinate: CLLocationCoordinate2D); message 'setCoordinate:'; { available in 10_9, 4_0 }
  end;
{$endif}

