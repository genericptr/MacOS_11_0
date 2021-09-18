{ Parsed from SpriteKit.framework SKUniform.h }

{ Types from SKUniform }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SKUniformPtr = ^SKUniform;
{$endif}

{$ifdef TYPES}
type
  SKUniformType = NSInteger;
  SKUniformTypePtr = ^SKUniformType;

const
  SKUniformTypeNone = 0;
  SKUniformTypeFloat = 1;
  SKUniformTypeFloatVector2 = 2;
  SKUniformTypeFloatVector3 = 3;
  SKUniformTypeFloatVector4 = 4;
  SKUniformTypeFloatMatrix2 = 5;
  SKUniformTypeFloatMatrix3 = 6;
  SKUniformTypeFloatMatrix4 = 7;
  SKUniformTypeTexture = 8;
{$endif}

{$ifdef CLASSES}

type
  SKUniform = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function uniformWithName (name: NSString): id; message 'uniformWithName:';
    class function uniformWithName_texture (name: NSString; texture: SKTexture): id; message 'uniformWithName:texture:';
    class function uniformWithName_float (name: NSString; value: single): id; message 'uniformWithName:float:';
    class function uniformWithName_vectorFloat2 (name: NSString; value: vector_float2): id; message 'uniformWithName:vectorFloat2:'; { available in ios , tvos , watchos , macos  }
    class function uniformWithName_vectorFloat3 (name: NSString; value: vector_float3): id; message 'uniformWithName:vectorFloat3:'; { available in ios , tvos , watchos , macos  }
    class function uniformWithName_vectorFloat4 (name: NSString; value: vector_float4): id; message 'uniformWithName:vectorFloat4:'; { available in ios , tvos , watchos , macos  }
    class function uniformWithName_matrixFloat2x2 (name: NSString; value: matrix_float2x2): id; message 'uniformWithName:matrixFloat2x2:'; { available in ios , tvos , watchos , macos  }
    class function uniformWithName_matrixFloat3x3 (name: NSString; value: matrix_float3x3): id; message 'uniformWithName:matrixFloat3x3:'; { available in ios , tvos , watchos , macos  }
    class function uniformWithName_matrixFloat4x4 (name: NSString; value: matrix_float4x4): id; message 'uniformWithName:matrixFloat4x4:'; { available in ios , tvos , watchos , macos  }
    function name: NSString; message 'name';
    function uniformType: SKUniformType; message 'uniformType';
    procedure setTextureValue(newValue: SKTexture); message 'setTextureValue:';
    function textureValue: SKTexture; message 'textureValue';
    procedure setFloatValue(newValue: single); message 'setFloatValue:';
    function floatValue: single; message 'floatValue';
    procedure setVectorFloat2Value(newValue: vector_float2); message 'setVectorFloat2Value:'; { available in ios , tvos , watchos , macos  }
    function vectorFloat2Value: vector_float2; message 'vectorFloat2Value'; { available in ios , tvos , watchos , macos  }
    procedure setVectorFloat3Value(newValue: vector_float3); message 'setVectorFloat3Value:'; { available in ios , tvos , watchos , macos  }
    function vectorFloat3Value: vector_float3; message 'vectorFloat3Value'; { available in ios , tvos , watchos , macos  }
    procedure setVectorFloat4Value(newValue: vector_float4); message 'setVectorFloat4Value:'; { available in ios , tvos , watchos , macos  }
    function vectorFloat4Value: vector_float4; message 'vectorFloat4Value'; { available in ios , tvos , watchos , macos  }
    procedure setMatrixFloat2x2Value(newValue: matrix_float2x2); message 'setMatrixFloat2x2Value:'; { available in ios , tvos , watchos , macos  }
    function matrixFloat2x2Value: matrix_float2x2; message 'matrixFloat2x2Value'; { available in ios , tvos , watchos , macos  }
    procedure setMatrixFloat3x3Value(newValue: matrix_float3x3); message 'setMatrixFloat3x3Value:'; { available in ios , tvos , watchos , macos  }
    function matrixFloat3x3Value: matrix_float3x3; message 'matrixFloat3x3Value'; { available in ios , tvos , watchos , macos  }
    procedure setMatrixFloat4x4Value(newValue: matrix_float4x4); message 'setMatrixFloat4x4Value:'; { available in ios , tvos , watchos , macos  }
    function matrixFloat4x4Value: matrix_float4x4; message 'matrixFloat4x4Value'; { available in ios , tvos , watchos , macos  }
    function initWithName (name_: NSString): id; message 'initWithName:';
    function initWithName_texture (name_: NSString; texture: SKTexture): id; message 'initWithName:texture:';
    function initWithName_float (name_: NSString; value: single): id; message 'initWithName:float:';
    function initWithName_vectorFloat2 (name_: NSString; value: vector_float2): id; message 'initWithName:vectorFloat2:'; { available in ios , tvos , watchos , macos  }
    function initWithName_vectorFloat3 (name_: NSString; value: vector_float3): id; message 'initWithName:vectorFloat3:'; { available in ios , tvos , watchos , macos  }
    function initWithName_vectorFloat4 (name_: NSString; value: vector_float4): id; message 'initWithName:vectorFloat4:'; { available in ios , tvos , watchos , macos  }
    function initWithName_matrixFloat2x2 (name_: NSString; value: matrix_float2x2): id; message 'initWithName:matrixFloat2x2:'; { available in ios , tvos , watchos , macos  }
    function initWithName_matrixFloat3x3 (name_: NSString; value: matrix_float3x3): id; message 'initWithName:matrixFloat3x3:'; { available in ios , tvos , watchos , macos  }
    function initWithName_matrixFloat4x4 (name_: NSString; value: matrix_float4x4): id; message 'initWithName:matrixFloat4x4:'; { available in ios , tvos , watchos , macos  }
    {$if defined(FRAMEWORK_LOADED_GAMEKIT)}
    procedure setFloatVector2Value(newValue: GLKVector2); message 'setFloatVector2Value:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function floatVector2Value: GLKVector2; message 'floatVector2Value'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    procedure setFloatVector3Value(newValue: GLKVector3); message 'setFloatVector3Value:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function floatVector3Value: GLKVector3; message 'floatVector3Value'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    procedure setFloatVector4Value(newValue: GLKVector4); message 'setFloatVector4Value:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function floatVector4Value: GLKVector4; message 'floatVector4Value'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    procedure setFloatMatrix2Value(newValue: GLKMatrix2); message 'setFloatMatrix2Value:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function floatMatrix2Value: GLKMatrix2; message 'floatMatrix2Value'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    procedure setFloatMatrix3Value(newValue: GLKMatrix3); message 'setFloatMatrix3Value:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function floatMatrix3Value: GLKMatrix3; message 'floatMatrix3Value'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    procedure setFloatMatrix4Value(newValue: GLKMatrix4); message 'setFloatMatrix4Value:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function floatMatrix4Value: GLKMatrix4; message 'floatMatrix4Value'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    class function uniformWithName_floatVector2 (name_: NSString; value: GLKVector2): id; message 'uniformWithName:floatVector2:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    class function uniformWithName_floatVector3 (name_: NSString; value: GLKVector3): id; message 'uniformWithName:floatVector3:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    class function uniformWithName_floatVector4 (name_: NSString; value: GLKVector4): id; message 'uniformWithName:floatVector4:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    class function uniformWithName_floatMatrix2 (name_: NSString; value: GLKMatrix2): id; message 'uniformWithName:floatMatrix2:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    class function uniformWithName_floatMatrix3 (name_: NSString; value: GLKMatrix3): id; message 'uniformWithName:floatMatrix3:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    class function uniformWithName_floatMatrix4 (name_: NSString; value: GLKMatrix4): id; message 'uniformWithName:floatMatrix4:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function initWithName_floatVector2 (name_: NSString; value: GLKVector2): id; message 'initWithName:floatVector2:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function initWithName_floatVector3 (name_: NSString; value: GLKVector3): id; message 'initWithName:floatVector3:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function initWithName_floatVector4 (name_: NSString; value: GLKVector4): id; message 'initWithName:floatVector4:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function initWithName_floatMatrix2 (name_: NSString; value: GLKMatrix2): id; message 'initWithName:floatMatrix2:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function initWithName_floatMatrix3 (name_: NSString; value: GLKMatrix3): id; message 'initWithName:floatMatrix3:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function initWithName_floatMatrix4 (name_: NSString; value: GLKMatrix4): id; message 'initWithName:floatMatrix4:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    {$endif}

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

