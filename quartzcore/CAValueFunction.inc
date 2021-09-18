{ Parsed from QuartzCore.framework CAValueFunction.h }

{$ifdef TYPES}
type
  CAValueFunctionPtr = ^CAValueFunction;
{$endif}

{$ifdef TYPES}
type
  CAValueFunctionName = NSString;
  CAValueFunctionNamePtr = ^CAValueFunctionName;
{$endif}

{$ifdef CLASSES}

type
  CAValueFunction = objcclass external (NSObject, NSSecureCodingProtocol)
  private
    _string: NSString;
    _impl: pointer;
  public
    class function functionWithName (name: CAValueFunctionName): id; message 'functionWithName:';
    function name: CAValueFunctionName; message 'name';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCAValueFunctionRotateX: CAValueFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAValueFunctionRotateY: CAValueFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAValueFunctionRotateZ: CAValueFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAValueFunctionScale: CAValueFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAValueFunctionScaleX: CAValueFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAValueFunctionScaleY: CAValueFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAValueFunctionScaleZ: CAValueFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAValueFunctionTranslate: CAValueFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAValueFunctionTranslateX: CAValueFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAValueFunctionTranslateY: CAValueFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAValueFunctionTranslateZ: CAValueFunctionName { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

