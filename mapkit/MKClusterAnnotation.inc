{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKClusterAnnotation.h }

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
    procedure setCoordinate (newCoordinate: CLLocationCoordinate2D); message 'setCoordinate:'; { available in 10_9, 4_0 }
    function subtitle_: NSString; message 'subtitle';
    function title_: NSString; message 'title';
  end;
{$endif}

