{ Parsed from QuartzCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/QuartzCore.framework/Headers/CAGradientLayer.h }

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
  kCAGradientLayerAxial: CAGradientLayerType { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAGradientLayerRadial: CAGradientLayerType { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAGradientLayerConic: CAGradientLayerType { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

