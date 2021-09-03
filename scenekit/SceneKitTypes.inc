{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SceneKitTypes.h }

{$ifdef TYPES}
type
  SCNColor = NSColor;
  
type
  SCNActionTimingMode = NSInteger;
  SCNActionTimingModePtr = ^SCNActionTimingMode;

const
  SCNActionTimingModeLinear = 0;
  SCNActionTimingModeEaseIn = 1;
  SCNActionTimingModeEaseOut = 2;
  SCNActionTimingModeEaseInEaseOut = 3;

type
  SCNColorMask = NSInteger;
  SCNColorMaskPtr = ^SCNColorMask;

const
  SCNColorMaskNone = 0;
  SCNColorMaskRed = $1 shl 3;
  SCNColorMaskGreen = $1 shl 2;
  SCNColorMaskBlue = $1 shl 1;
  SCNColorMaskAlpha = $1 shl 0;
  SCNColorMaskAll = $f;

type
  SCNVector3 = record
    x, y, z: CGFloat;
  end;
type
  SCNVector3Ptr = ^SCNVector3;
type
  SCNVector4 = record
    x, y, z, w: CGFloat;
  end;
type
  SCNVector4Ptr = ^SCNVector4;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNVector3Zero: SCNVector3 { available in macos  }; cvar; external;
  SCNVector4Zero: SCNVector4 { available in macos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function SCNVector3EqualToVector3(a: SCNVector3; b: SCNVector3): cbool; cdecl; external;
function SCNVector4EqualToVector4(a: SCNVector4; b: SCNVector4): cbool; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  SCNQuaternion = SCNVector4;
  SCNQuaternionPtr = ^SCNQuaternion;
  SCNMatrix4 = CATransform3D;
  SCNMatrix4Ptr = ^SCNMatrix4;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNMatrix4Identity: SCNMatrix4 { available in macos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function SCNMatrix4IsIdentity(m: SCNMatrix4): cbool; cdecl; external; { available in macos  }
function SCNMatrix4EqualToMatrix4(a: SCNMatrix4; b: SCNMatrix4): cbool; cdecl; external; { available in macos  }
function SCNMatrix4MakeRotation(angle: CGFloat; x: CGFloat; y: CGFloat; z: CGFloat): SCNMatrix4; cdecl; external; { available in macos  }
function SCNMatrix4Scale(m: SCNMatrix4; sx: CGFloat; sy: CGFloat; sz: CGFloat): SCNMatrix4; cdecl; external; { available in macos  }
function SCNMatrix4Rotate(m: SCNMatrix4; angle: CGFloat; x: CGFloat; y: CGFloat; z: CGFloat): SCNMatrix4; cdecl; external; { available in macos  }
function SCNMatrix4Invert(m: SCNMatrix4): SCNMatrix4; cdecl; external; { available in macos  }
function SCNMatrix4Mult(a: SCNMatrix4; b: SCNMatrix4): SCNMatrix4; cdecl; external; { available in macos  }
{$endif}

{$ifdef __OBJC__}
{$ifdef CLASSES}

type
  NSValue_SceneKitAdditions = objccategory external name 'SceneKitAdditions' (NSValue)
    class function valueWithSCNVector3 (v: SCNVector3): NSValue; message 'valueWithSCNVector3:';
    class function valueWithSCNVector4 (v: SCNVector4): NSValue; message 'valueWithSCNVector4:';
    class function valueWithSCNMatrix4 (v: SCNMatrix4): NSValue; message 'valueWithSCNMatrix4:'; { available in macos  }
    function SCNVector3Value: SCNVector3; message 'SCNVector3Value';
    function SCNVector4Value: SCNVector4; message 'SCNVector4Value';
    function SCNMatrix4Value: SCNMatrix4; message 'SCNMatrix4Value'; { available in macos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
const
  SCNProgramCompilationError = 1;
{$endif}

{$endif}
