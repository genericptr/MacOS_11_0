{ Parsed from MapKit.framework MKCompassButton.h }

{ Types from MKCompassButton }
{$ifdef TYPES}
{$else}
{$endif}


{$ifdef TYPES}
type
  MKCompassButtonPtr = ^MKCompassButton;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  MKCompassButton = objcclass external (UIView)
  public
    {$else}
    class function compassButtonWithMapView (mapView: MKMapView): id; message 'compassButtonWithMapView:';
    procedure setMapView(newValue: MKMapView); message 'setMapView:';
    function mapView: MKMapView; message 'mapView';
    procedure setCompassVisibility(newValue: MKFeatureVisibility); message 'setCompassVisibility:';
    function compassVisibility: MKFeatureVisibility; message 'compassVisibility';
  end;
{$endif}

{$endif}
