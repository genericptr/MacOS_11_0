{ Parsed from AVFoundation.framework AVRouteDetector.h }

{$ifdef TYPES}
type
  AVRouteDetectorPtr = ^AVRouteDetector;
{$endif}

{ Types from AVRouteDetector }
{$ifdef TYPES}
var
  AVRouteDetectorMultipleRoutesDetectedDidChangeNotification: NSNotificationName { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVRouteDetector = objcclass external (NSObject)
  private
    _routeDetectorInternal: AVRouteDetectorInternal;
  public
    procedure setRouteDetectionEnabled(newValue: objcbool); message 'setRouteDetectionEnabled:';
    function isRouteDetectionEnabled: objcbool; message 'isRouteDetectionEnabled';
    function multipleRoutesDetected: objcbool; message 'multipleRoutesDetected';
  end;
{$endif}

{$else}
{$endif}
