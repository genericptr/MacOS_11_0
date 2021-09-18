{ Parsed from ModelIO.framework MDLAnimatedValueTypes.h }

{$ifdef TYPES}
type
  MDLAnimatedValuePtr = ^MDLAnimatedValue;
  MDLAnimatedScalarArrayPtr = ^MDLAnimatedScalarArray;
  MDLAnimatedVector3ArrayPtr = ^MDLAnimatedVector3Array;
  MDLAnimatedQuaternionArrayPtr = ^MDLAnimatedQuaternionArray;
  MDLAnimatedScalarPtr = ^MDLAnimatedScalar;
  MDLAnimatedVector2Ptr = ^MDLAnimatedVector2;
  MDLAnimatedVector3Ptr = ^MDLAnimatedVector3;
  MDLAnimatedVector4Ptr = ^MDLAnimatedVector4;
  MDLAnimatedQuaternionPtr = ^MDLAnimatedQuaternion;
  MDLAnimatedMatrix4x4Ptr = ^MDLAnimatedMatrix4x4;
{$endif}

{$ifdef TYPES}
type
  MDLAnimatedValueInterpolation = NSUInteger;
  MDLAnimatedValueInterpolationPtr = ^MDLAnimatedValueInterpolation;

const
  MDLAnimatedValueInterpolationConstant = 0;
  MDLAnimatedValueInterpolationLinear = 1;
{$endif}

{$ifdef CLASSES}

type
  MDLAnimatedValue = objcclass external (NSObject, NSCopyingProtocol)
  public
    function isAnimated: objcbool; message 'isAnimated';
    function precision: MDLDataPrecision; message 'precision';
    function timeSampleCount: NSUInteger; message 'timeSampleCount';
    function minimumTime: NSTimeInterval; message 'minimumTime';
    function maximumTime: NSTimeInterval; message 'maximumTime';
    procedure setInterpolation(newValue: MDLAnimatedValueInterpolation); message 'setInterpolation:';
    function interpolation: MDLAnimatedValueInterpolation; message 'interpolation';
    function keyTimes: NSArray; message 'keyTimes';
    procedure clear; message 'clear';
    function getTimes_maxCount (timesArray: NSTimeIntervalPtr; maxCount: NSUInteger): NSUInteger; message 'getTimes:maxCount:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MDLAnimatedScalarArray = objcclass external (MDLAnimatedValue)
  public
    function elementCount: NSUInteger; message 'elementCount';
    function initWithElementCount (arrayElementCount: NSUInteger): id; message 'initWithElementCount:';
    procedure setFloatArray_count_atTime (array_: psingle; count: NSUInteger; time: NSTimeInterval); message 'setFloatArray:count:atTime:';
    procedure setDoubleArray_count_atTime (array_: pdouble; count: NSUInteger; time: NSTimeInterval); message 'setDoubleArray:count:atTime:';
    function getFloatArray_maxCount_atTime (array_: psingle; maxCount: NSUInteger; time: NSTimeInterval): NSUInteger; message 'getFloatArray:maxCount:atTime:';
    function getDoubleArray_maxCount_atTime (array_: pdouble; maxCount: NSUInteger; time: NSTimeInterval): NSUInteger; message 'getDoubleArray:maxCount:atTime:';
    procedure resetWithFloatArray_count_atTimes_count (valuesArray: psingle; valuesCount: NSUInteger; timesArray: NSTimeIntervalPtr; timesCount: NSUInteger); message 'resetWithFloatArray:count:atTimes:count:';
    procedure resetWithDoubleArray_count_atTimes_count (valuesArray: pdouble; valuesCount: NSUInteger; timesArray: NSTimeIntervalPtr; timesCount: NSUInteger); message 'resetWithDoubleArray:count:atTimes:count:';
    function getFloatArray_maxCount (valuesArray: psingle; maxCount: NSUInteger): NSUInteger; message 'getFloatArray:maxCount:';
    function getDoubleArray_maxCount (valuesArray: pdouble; maxCount: NSUInteger): NSUInteger; message 'getDoubleArray:maxCount:';
  end;

type
  MDLAnimatedVector3Array = objcclass external (MDLAnimatedValue)
  public
    function elementCount: NSUInteger; message 'elementCount';
    function initWithElementCount (arrayElementCount: NSUInteger): id; message 'initWithElementCount:';
    procedure setFloat3Array_count_atTime (array_: vector_float3Ptr; count: NSUInteger; time: NSTimeInterval); message 'setFloat3Array:count:atTime:';
    procedure setDouble3Array_count_atTime (array_: vector_double3Ptr; count: NSUInteger; time: NSTimeInterval); message 'setDouble3Array:count:atTime:';
    function getFloat3Array_maxCount_atTime (array_: vector_float3Ptr; maxCount: NSUInteger; time: NSTimeInterval): NSUInteger; message 'getFloat3Array:maxCount:atTime:';
    function getDouble3Array_maxCount_atTime (array_: vector_double3Ptr; maxCount: NSUInteger; time: NSTimeInterval): NSUInteger; message 'getDouble3Array:maxCount:atTime:';
    procedure resetWithFloat3Array_count_atTimes_count (valuesArray: vector_float3Ptr; valuesCount: NSUInteger; timesArray: NSTimeIntervalPtr; timesCount: NSUInteger); message 'resetWithFloat3Array:count:atTimes:count:';
    procedure resetWithDouble3Array_count_atTimes_count (valuesArray: vector_double3Ptr; valuesCount: NSUInteger; timesArray: NSTimeIntervalPtr; timesCount: NSUInteger); message 'resetWithDouble3Array:count:atTimes:count:';
    function getFloat3Array_maxCount (valuesArray: vector_float3Ptr; maxCount: NSUInteger): NSUInteger; message 'getFloat3Array:maxCount:';
    function getDouble3Array_maxCount (valuesArray: vector_double3Ptr; maxCount: NSUInteger): NSUInteger; message 'getDouble3Array:maxCount:';
  end;

type
  MDLAnimatedQuaternionArray = objcclass external (MDLAnimatedValue)
  public
    function elementCount: NSUInteger; message 'elementCount';
    function initWithElementCount (arrayElementCount: NSUInteger): id; message 'initWithElementCount:';
    procedure setFloatQuaternionArray_count_atTime (array_: simd_quatfPtr; count: NSUInteger; time: NSTimeInterval); message 'setFloatQuaternionArray:count:atTime:';
    procedure setDoubleQuaternionArray_count_atTime (array_: simd_quatdPtr; count: NSUInteger; time: NSTimeInterval); message 'setDoubleQuaternionArray:count:atTime:';
    function getFloatQuaternionArray_maxCount_atTime (array_: simd_quatfPtr; maxCount: NSUInteger; time: NSTimeInterval): NSUInteger; message 'getFloatQuaternionArray:maxCount:atTime:';
    function getDoubleQuaternionArray_maxCount_atTime (array_: simd_quatdPtr; maxCount: NSUInteger; time: NSTimeInterval): NSUInteger; message 'getDoubleQuaternionArray:maxCount:atTime:';
    procedure resetWithFloatQuaternionArray_count_atTimes_count (valuesArray: simd_quatfPtr; valuesCount: NSUInteger; timesArray: NSTimeIntervalPtr; timesCount: NSUInteger); message 'resetWithFloatQuaternionArray:count:atTimes:count:';
    procedure resetWithDoubleQuaternionArray_count_atTimes_count (valuesArray: simd_quatdPtr; valuesCount: NSUInteger; timesArray: NSTimeIntervalPtr; timesCount: NSUInteger); message 'resetWithDoubleQuaternionArray:count:atTimes:count:';
    function getFloatQuaternionArray_maxCount (valuesArray: simd_quatfPtr; maxCount: NSUInteger): NSUInteger; message 'getFloatQuaternionArray:maxCount:';
    function getDoubleQuaternionArray_maxCount (valuesArray: simd_quatdPtr; maxCount: NSUInteger): NSUInteger; message 'getDoubleQuaternionArray:maxCount:';
  end;

type
  MDLAnimatedScalar = objcclass external (MDLAnimatedValue)
  public
    procedure setFloat_atTime (value: single; time: NSTimeInterval); message 'setFloat:atTime:';
    procedure setDouble_atTime (value: double; time: NSTimeInterval); message 'setDouble:atTime:';
    function floatAtTime (time: NSTimeInterval): single; message 'floatAtTime:';
    function doubleAtTime (time: NSTimeInterval): double; message 'doubleAtTime:';
    procedure resetWithFloatArray_atTimes_count (valuesArray: psingle; timesArray: NSTimeIntervalPtr; count: NSUInteger); message 'resetWithFloatArray:atTimes:count:';
    procedure resetWithDoubleArray_atTimes_count (valuesArray: pdouble; timesArray: NSTimeIntervalPtr; count: NSUInteger); message 'resetWithDoubleArray:atTimes:count:';
    function getFloatArray_maxCount (valuesArray: psingle; maxCount: NSUInteger): NSUInteger; message 'getFloatArray:maxCount:';
    function getDoubleArray_maxCount (valuesArray: pdouble; maxCount: NSUInteger): NSUInteger; message 'getDoubleArray:maxCount:';
  end;

type
  MDLAnimatedVector2 = objcclass external (MDLAnimatedValue)
  public
    procedure setFloat2_atTime (value: vector_float2; time: NSTimeInterval); message 'setFloat2:atTime:';
    procedure setDouble2_atTime (value: vector_double2; time: NSTimeInterval); message 'setDouble2:atTime:';
    function float2AtTime (time: NSTimeInterval): vector_float2; message 'float2AtTime:';
    function double2AtTime (time: NSTimeInterval): vector_double2; message 'double2AtTime:';
    procedure resetWithFloat2Array_atTimes_count (valuesArray: vector_float2Ptr; timesArray: NSTimeIntervalPtr; count: NSUInteger); message 'resetWithFloat2Array:atTimes:count:';
    procedure resetWithDouble2Array_atTimes_count (valuesArray: vector_double2Ptr; timesArray: NSTimeIntervalPtr; count: NSUInteger); message 'resetWithDouble2Array:atTimes:count:';
    function getFloat2Array_maxCount (valuesArray: vector_float2Ptr; maxCount: NSUInteger): NSUInteger; message 'getFloat2Array:maxCount:';
    function getDouble2Array_maxCount (valuesArray: vector_double2Ptr; maxCount: NSUInteger): NSUInteger; message 'getDouble2Array:maxCount:';
  end;

type
  MDLAnimatedVector3 = objcclass external (MDLAnimatedValue)
  public
    procedure setFloat3_atTime (value: vector_float3; time: NSTimeInterval); message 'setFloat3:atTime:';
    procedure setDouble3_atTime (value: vector_double3; time: NSTimeInterval); message 'setDouble3:atTime:';
    function float3AtTime (time: NSTimeInterval): vector_float3; message 'float3AtTime:';
    function double3AtTime (time: NSTimeInterval): vector_double3; message 'double3AtTime:';
    procedure resetWithFloat3Array_atTimes_count (valuesArray: vector_float3Ptr; timesArray: NSTimeIntervalPtr; count: NSUInteger); message 'resetWithFloat3Array:atTimes:count:';
    procedure resetWithDouble3Array_atTimes_count (valuesArray: vector_double3Ptr; timesArray: NSTimeIntervalPtr; count: NSUInteger); message 'resetWithDouble3Array:atTimes:count:';
    function getFloat3Array_maxCount (valuesArray: vector_float3Ptr; maxCount: NSUInteger): NSUInteger; message 'getFloat3Array:maxCount:';
    function getDouble3Array_maxCount (valuesArray: vector_double3Ptr; maxCount: NSUInteger): NSUInteger; message 'getDouble3Array:maxCount:';
  end;

type
  MDLAnimatedVector4 = objcclass external (MDLAnimatedValue)
  public
    procedure setFloat4_atTime (value: vector_float4; time: NSTimeInterval); message 'setFloat4:atTime:';
    procedure setDouble4_atTime (value: vector_double4; time: NSTimeInterval); message 'setDouble4:atTime:';
    function float4AtTime (time: NSTimeInterval): vector_float4; message 'float4AtTime:';
    function double4AtTime (time: NSTimeInterval): vector_double4; message 'double4AtTime:';
    procedure resetWithFloat4Array_atTimes_count (valuesArray: vector_float4Ptr; timesArray: NSTimeIntervalPtr; count: NSUInteger); message 'resetWithFloat4Array:atTimes:count:';
    procedure resetWithDouble4Array_atTimes_count (valuesArray: vector_double4Ptr; timesArray: NSTimeIntervalPtr; count: NSUInteger); message 'resetWithDouble4Array:atTimes:count:';
    function getFloat4Array_maxCount (valuesArray: vector_float4Ptr; maxCount: NSUInteger): NSUInteger; message 'getFloat4Array:maxCount:';
    function getDouble4Array_maxCount (valuesArray: vector_double4Ptr; maxCount: NSUInteger): NSUInteger; message 'getDouble4Array:maxCount:';
  end;

type
  MDLAnimatedQuaternion = objcclass external (MDLAnimatedValue)
  public
    procedure setFloatQuaternion_atTime (value: simd_quatf; time: NSTimeInterval); message 'setFloatQuaternion:atTime:';
    procedure setDoubleQuaternion_atTime (value: simd_quatd; time: NSTimeInterval); message 'setDoubleQuaternion:atTime:';
    function floatQuaternionAtTime (time: NSTimeInterval): simd_quatf; message 'floatQuaternionAtTime:';
    function doubleQuaternionAtTime (time: NSTimeInterval): simd_quatd; message 'doubleQuaternionAtTime:';
    procedure resetWithFloatQuaternionArray_atTimes_count (valuesArray: simd_quatfPtr; timesArray: NSTimeIntervalPtr; count: NSUInteger); message 'resetWithFloatQuaternionArray:atTimes:count:';
    procedure resetWithDoubleQuaternionArray_atTimes_count (valuesArray: simd_quatdPtr; timesArray: NSTimeIntervalPtr; count: NSUInteger); message 'resetWithDoubleQuaternionArray:atTimes:count:';
    function getFloatQuaternionArray_maxCount (valuesArray: simd_quatfPtr; maxCount: NSUInteger): NSUInteger; message 'getFloatQuaternionArray:maxCount:';
    function getDoubleQuaternionArray_maxCount (valuesArray: simd_quatdPtr; maxCount: NSUInteger): NSUInteger; message 'getDoubleQuaternionArray:maxCount:';
  end;

type
  MDLAnimatedMatrix4x4 = objcclass external (MDLAnimatedValue)
  public
    procedure setFloat4x4_atTime (value: matrix_float4x4; time: NSTimeInterval); message 'setFloat4x4:atTime:';
    procedure setDouble4x4_atTime (value: matrix_double4x4; time: NSTimeInterval); message 'setDouble4x4:atTime:';
    function float4x4AtTime (time: NSTimeInterval): matrix_float4x4; message 'float4x4AtTime:';
    function double4x4AtTime (time: NSTimeInterval): matrix_double4x4; message 'double4x4AtTime:';
    procedure resetWithFloat4x4Array_atTimes_count (valuesArray: matrix_float4x4Ptr; timesArray: NSTimeIntervalPtr; count: NSUInteger); message 'resetWithFloat4x4Array:atTimes:count:';
    procedure resetWithDouble4x4Array_atTimes_count (valuesArray: matrix_double4x4Ptr; timesArray: NSTimeIntervalPtr; count: NSUInteger); message 'resetWithDouble4x4Array:atTimes:count:';
    function getFloat4x4Array_maxCount (valuesArray: matrix_float4x4Ptr; maxCount: NSUInteger): NSUInteger; message 'getFloat4x4Array:maxCount:';
    function getDouble4x4Array_maxCount (valuesArray: matrix_double4x4Ptr; maxCount: NSUInteger): NSUInteger; message 'getDouble4x4Array:maxCount:';
  end;
{$endif}

