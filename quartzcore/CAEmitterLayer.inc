{ Parsed from QuartzCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/QuartzCore.framework/Headers/CAEmitterLayer.h }

{$ifdef TYPES}
type
  CAEmitterLayerPtr = ^CAEmitterLayer;
{$endif}

{$ifdef TYPES}
type
  CAEmitterLayerEmitterShape = NSString;
  CAEmitterLayerEmitterShapePtr = ^CAEmitterLayerEmitterShape;
  CAEmitterLayerEmitterMode = NSString;
  CAEmitterLayerEmitterModePtr = ^CAEmitterLayerEmitterMode;
  CAEmitterLayerRenderMode = NSString;
  CAEmitterLayerRenderModePtr = ^CAEmitterLayerRenderMode;
{$endif}

{$ifdef CLASSES}

type
  CAEmitterLayer = objcclass external (CALayer)
  public
    procedure setEmitterCells(newValue: NSArray); message 'setEmitterCells:';
    function emitterCells: NSArray; message 'emitterCells';
    procedure setBirthRate(newValue: single); message 'setBirthRate:';
    function birthRate: single; message 'birthRate';
    procedure setLifetime(newValue: single); message 'setLifetime:';
    function lifetime: single; message 'lifetime';
    procedure setEmitterPosition(newValue: CGPoint); message 'setEmitterPosition:';
    function emitterPosition: CGPoint; message 'emitterPosition';
    procedure setEmitterZPosition(newValue: CGFloat); message 'setEmitterZPosition:';
    function emitterZPosition: CGFloat; message 'emitterZPosition';
    procedure setEmitterSize(newValue: CGSize); message 'setEmitterSize:';
    function emitterSize: CGSize; message 'emitterSize';
    procedure setEmitterDepth(newValue: CGFloat); message 'setEmitterDepth:';
    function emitterDepth: CGFloat; message 'emitterDepth';
    procedure setEmitterShape(newValue: CAEmitterLayerEmitterShape); message 'setEmitterShape:';
    function emitterShape: CAEmitterLayerEmitterShape; message 'emitterShape';
    procedure setEmitterMode(newValue: CAEmitterLayerEmitterMode); message 'setEmitterMode:';
    function emitterMode: CAEmitterLayerEmitterMode; message 'emitterMode';
    procedure setRenderMode(newValue: CAEmitterLayerRenderMode); message 'setRenderMode:';
    function renderMode: CAEmitterLayerRenderMode; message 'renderMode';
    procedure setPreservesDepth(newValue: objcbool); message 'setPreservesDepth:';
    function preservesDepth: objcbool; message 'preservesDepth';
    procedure setVelocity(newValue: single); message 'setVelocity:';
    function velocity: single; message 'velocity';
    procedure setScale(newValue: single); message 'setScale:';
    function scale: single; message 'scale';
    procedure setSpin(newValue: single); message 'setSpin:';
    function spin: single; message 'spin';
    procedure setSeed(newValue: cuint); message 'setSeed:';
    function seed: cuint; message 'seed';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCAEmitterLayerPoint: CAEmitterLayerEmitterShape { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAEmitterLayerLine: CAEmitterLayerEmitterShape { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAEmitterLayerRectangle: CAEmitterLayerEmitterShape { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAEmitterLayerCuboid: CAEmitterLayerEmitterShape { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAEmitterLayerCircle: CAEmitterLayerEmitterShape { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAEmitterLayerSphere: CAEmitterLayerEmitterShape { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAEmitterLayerPoints: CAEmitterLayerEmitterMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAEmitterLayerOutline: CAEmitterLayerEmitterMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAEmitterLayerSurface: CAEmitterLayerEmitterMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAEmitterLayerVolume: CAEmitterLayerEmitterMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAEmitterLayerUnordered: CAEmitterLayerRenderMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAEmitterLayerOldestFirst: CAEmitterLayerRenderMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAEmitterLayerOldestLast: CAEmitterLayerRenderMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAEmitterLayerBackToFront: CAEmitterLayerRenderMode { available in macos , ios , watchos , tvos  }; cvar; external;
  kCAEmitterLayerAdditive: CAEmitterLayerRenderMode { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

