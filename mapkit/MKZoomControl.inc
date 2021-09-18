{ Parsed from MapKit.framework MKZoomControl.h }

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
