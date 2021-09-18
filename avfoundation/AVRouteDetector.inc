{ Parsed from AVFoundation.framework AVRouteDetector.h }

{$ifdef TYPES}
type
  AVRouteDetectorPtr = ^AVRouteDetector;
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
