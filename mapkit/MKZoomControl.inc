{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKZoomControl.h }

{ Types from MKZoomControl }
{$ifdef TYPES}
{$else}
{$endif}


{$ifdef TYPES}
type
  MKZoomControlPtr = ^MKZoomControl;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  MKZoomControl = objcclass external (UIView)
  public
    {$else}
    class function zoomControlWithMapView (mapView: MKMapView): id; message 'zoomControlWithMapView:';
    procedure setMapView(newValue: MKMapView); message 'setMapView:';
    function mapView: MKMapView; message 'mapView';
  end;
{$endif}

{$endif}
