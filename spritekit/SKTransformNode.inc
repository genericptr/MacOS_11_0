{ Parsed from SpriteKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SpriteKit.framework/Headers/SKTransformNode.h }

{$ifdef TYPES}
type
  SKTransformNodePtr = ^SKTransformNode;
{$endif}

{$ifdef CLASSES}

type
  SKTransformNode = objcclass external (SKNode)
  public
    procedure setXRotation(newValue: CGFloat); message 'setXRotation:';
    function xRotation: CGFloat; message 'xRotation';
    procedure setYRotation(newValue: CGFloat); message 'setYRotation:';
    function yRotation: CGFloat; message 'yRotation';
    procedure setEulerAngles (euler: vector_float3); message 'setEulerAngles:';
    function eulerAngles: vector_float3; message 'eulerAngles';
    procedure setRotationMatrix (rotationMatrix: matrix_float3x3); message 'setRotationMatrix:';
    function rotationMatrix: matrix_float3x3; message 'rotationMatrix';
    procedure setQuaternion (quaternion: simd_quatf); message 'setQuaternion:';
    function quaternion: simd_quatf; message 'quaternion';
  end;
{$endif}

