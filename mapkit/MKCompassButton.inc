{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKCompassButton.h }

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
