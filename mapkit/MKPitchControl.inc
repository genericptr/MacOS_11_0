{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKPitchControl.h }

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
