{ Parsed from QuartzCore.framework CAGradientLayer.h }

{$ifdef TYPES}
type
  CAGradientLayerPtr = ^CAGradientLayer;
{$endif}

{$ifdef TYPES}
type
  CAGradientLayerType = NSString;
  CAGradientLayerTypePtr = ^CAGradientLayerType;
{$endif}

{$ifdef CLASSES}

type
  CAGradientLayer = objcclass external (CALayer)
  public
    procedure setColors(newValue: NSArray); message 'setColors:';
    function colors: NSArray; message 'colors';
    procedure setLocations(newValue: NSArray); message 'setLocations:';
    function locations: NSArray; message 'locations';
    procedure setStartPoint(newValue: CGPoint); message 'setStartPoint:';
    function startPoint: CGPoint; message 'startPoint';
    procedure setEndPoint(newValue: CGPoint); message 'setEndPoint:';
    function endPoint: CGPoint; message 'endPoint';
    procedure setType(newValue: CAGradientLayerType); message 'setType:';
    function type_: CAGradientLayerType; message 'type';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCAGradientLayerAxial: CAGradientLayerType { available in macos 10.6, ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAGradientLayerRadial: CAGradientLayerType { available in macos 10.6, ios 3.2, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAGradientLayerConic: CAGradientLayerType { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 }; cvar; external;
{$endif}

