{ Parsed from MapKit.framework MKClusterAnnotation.h }

{$ifdef TYPES}
type
  MKClusterAnnotationPtr = ^MKClusterAnnotation;
{$endif}

{$ifdef CLASSES}

type
  MKClusterAnnotation = objcclass external (NSObject, MKAnnotationProtocol)
  public
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setSubtitle(newValue: NSString); message 'setSubtitle:';
    function subtitle: NSString; message 'subtitle';
    function memberAnnotations: NSArray; message 'memberAnnotations';
    function init: id; message 'init';
    function initWithMemberAnnotations (memberAnnotations_: NSArray): id; message 'initWithMemberAnnotations:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    procedure setCoordinate (newCoordinate: CLLocationCoordinate2D); message 'setCoordinate:'; { available in macos 10.9, ios 4.0 }
    function subtitle_: NSString; message 'subtitle';
    function title_: NSString; message 'title';
  end;
{$endif}

