{ Parsed from QuartzCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/QuartzCore.framework/Headers/CAMediaTimingFunction.h }

{$ifdef TYPES}
type
  CAMediaTimingFunctionPtr = ^CAMediaTimingFunction;
{$endif}

{$ifdef TYPES}
type
  CAMediaTimingFunctionName = NSString;
  CAMediaTimingFunctionNamePtr = ^CAMediaTimingFunctionName;
{$endif}

{$ifdef CLASSES}

type
  CAMediaTimingFunction = objcclass external (NSObject, NSSecureCodingProtocol)
  private
    _priv: CAMediaTimingFunctionPrivatePtr;
  public
    class function functionWithName (name: CAMediaTimingFunctionName): id; message 'functionWithName:';
    class function functionWithControlPoints_c1y (c1x: single; c2x: single): id; message 'functionWithControlPoints:c1y:';
    function initWithControlPoints_c1y (c1x: single; c2x: single): id; message 'initWithControlPoints:c1y:';
    procedure getControlPointAtIndex_values (idx: size_t; ptr: psingle { 2 element array of single }); message 'getControlPointAtIndex:values:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCAMediaTimingFunctionLinear: CAMediaTimingFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAMediaTimingFunctionEaseIn: CAMediaTimingFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAMediaTimingFunctionEaseOut: CAMediaTimingFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAMediaTimingFunctionEaseInEaseOut: CAMediaTimingFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAMediaTimingFunctionDefault: CAMediaTimingFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

