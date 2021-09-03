{ Parsed from QuartzCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/QuartzCore.framework/Headers/CAMediaTiming.h }

{$ifdef TYPES}
type
  CAMediaTimingProtocolPtr = ^CAMediaTimingProtocol;
{$endif}

{$ifdef TYPES}
type
  CAMediaTimingFillMode = NSString;
  CAMediaTimingFillModePtr = ^CAMediaTimingFillMode;
{$endif}

{$ifdef PROTOCOLS}

type
  CAMediaTimingProtocol = objcprotocol external name 'CAMediaTiming'
    procedure setBeginTime(newValue: CFTimeInterval); message 'setBeginTime:';
    function beginTime: CFTimeInterval; message 'beginTime';
    procedure setDuration(newValue: CFTimeInterval); message 'setDuration:';
    function duration: CFTimeInterval; message 'duration';
    procedure setSpeed(newValue: single); message 'setSpeed:';
    function speed: single; message 'speed';
    procedure setTimeOffset(newValue: CFTimeInterval); message 'setTimeOffset:';
    function timeOffset: CFTimeInterval; message 'timeOffset';
    procedure setRepeatCount(newValue: single); message 'setRepeatCount:';
    function repeatCount: single; message 'repeatCount';
    procedure setRepeatDuration(newValue: CFTimeInterval); message 'setRepeatDuration:';
    function repeatDuration: CFTimeInterval; message 'repeatDuration';
    procedure setAutoreverses(newValue: objcbool); message 'setAutoreverses:';
    function autoreverses: objcbool; message 'autoreverses';
    procedure setFillMode(newValue: CAMediaTimingFillMode); message 'setFillMode:';
    function fillMode: CAMediaTimingFillMode; message 'fillMode';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCAFillModeForwards: CAMediaTimingFillMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAFillModeBackwards: CAMediaTimingFillMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAFillModeBoth: CAMediaTimingFillMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAFillModeRemoved: CAMediaTimingFillMode { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

