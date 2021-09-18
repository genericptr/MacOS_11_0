{ Parsed from MapKit.framework MKPitchControl.h }

{ Types from MKPitchControl }
{$ifdef TYPES}
{$else}
{$endif}


{$ifdef TYPES}
type
  MKPitchControlPtr = ^MKPitchControl;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  MKPitchControl = objcclass external (UIView)
  public
    {$else}
    class function pitchControlWithMapView (mapView: MKMapView): id; message 'pitchControlWithMapView:';
    procedure setMapView(newValue: MKMapView); message 'setMapView:';
    function mapView: MKMapView; message 'mapView';
  end;
{$endif}

{$endif}
