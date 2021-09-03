{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKMapCamera.h }

{$ifdef TYPES}
type
  MKMapCameraPtr = ^MKMapCamera;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  MKMapCamera = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    procedure setCenterCoordinate(newValue: CLLocationCoordinate2D); message 'setCenterCoordinate:';
    function centerCoordinate: CLLocationCoordinate2D; message 'centerCoordinate';
    procedure setCenterCoordinateDistance(newValue: CLLocationDistance); message 'setCenterCoordinateDistance:'; { unavailable in watchos }
    function centerCoordinateDistance: CLLocationDistance; message 'centerCoordinateDistance'; { unavailable in watchos }
    procedure setHeading(newValue: CLLocationDirection); message 'setHeading:';
    function heading: CLLocationDirection; message 'heading';
    procedure setPitch(newValue: CGFloat); message 'setPitch:';
    function pitch: CGFloat; message 'pitch';
    procedure setAltitude(newValue: CLLocationDistance); message 'setAltitude:'; { unavailable in watchos }
    function altitude: CLLocationDistance; message 'altitude'; { unavailable in watchos }
    class function camera: id; message 'camera';
    class function cameraLookingAtCenterCoordinate_fromEyeCoordinate_eyeAltitude (centerCoordinate_: CLLocationCoordinate2D; eyeCoordinate: CLLocationCoordinate2D; eyeAltitude: CLLocationDistance): id; message 'cameraLookingAtCenterCoordinate:fromEyeCoordinate:eyeAltitude:';
    class function cameraLookingAtCenterCoordinate_fromDistance_pitch_heading (centerCoordinate_: CLLocationCoordinate2D; distance: CLLocationDistance; pitch_: CGFloat; heading_: CLLocationDirection): id; message 'cameraLookingAtCenterCoordinate:fromDistance:pitch:heading:'; { available in 10_11, 9_0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$endif}
