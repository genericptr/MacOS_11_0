
{ SIMD Types }
type
	vector_float2 = record
	  f: array[0..2 - 1] of cfloat;
	end;
	vector_double2 = record
	  f: array[0..2 - 1] of cdouble;
	end;
  vector_float3 = record
    f: array[0..3 - 1] of cfloat;
  end;
  vector_double3 = record
    f: array[0..3 - 1] of cdouble;
  end;
  vector_float4 = record
    f: array[0..4 - 1] of cfloat;
  end;
  vector_double4 = record
    f: array[0..4 - 1] of cdouble;
  end;
  vector_int2 = record
    f: array[0..2 - 1] of cint;
  end;
  vector_int3 = record
    f: array[0..3 - 1] of cint;
  end;
  vector_int4 = record
    f: array[0..4 - 1] of cint;
  end;
  vector_uint2 = record
    f: array[0..2 - 1] of cuint;
  end;
  vector_uint3 = record
    f: array[0..3 - 1] of cuint;
  end;
  vector_uint4 = record
    f: array[0..4 - 1] of cuint;
  end;

  matrix_float2x2 = record
    f: array[0..2 - 1, 0..2 - 1] of cfloat;
  end;
  matrix_float3x3 = record
    f: array[0..3 - 1, 0..3 - 1] of cfloat;
  end;
  matrix_float4x3 = record
    f: array[0..4 - 1, 0..3 - 1] of cfloat;
  end;
  matrix_float4x4 = record
    f: array[0..4 - 1, 0..4 - 1] of cfloat;
  end;
  matrix_double4x4 = record
    f: array[0..4 - 1, 0..4 - 1] of cdouble;
  end;

  vector_int2Ptr = ^vector_int2;
  vector_int3Ptr = ^vector_int3;
  vector_int4Ptr = ^vector_int4;
  vector_uint2Ptr = ^vector_uint2;
  vector_uint3Ptr = ^vector_uint3;
  vector_uint4Ptr = ^vector_uint4;
  vector_double2Ptr = ^vector_double2;
  vector_double3Ptr = ^vector_double3;
  vector_double4Ptr = ^vector_double4;
  vector_float2Ptr = ^vector_float2;
  vector_float3Ptr = ^vector_float3;
  vector_float4Ptr = ^vector_float4;

  matrix_float2x2Ptr = ^matrix_float2x2;
  matrix_float3x3Ptr = ^matrix_float3x3;
  matrix_float4x3Ptr = ^matrix_float4x3;
  matrix_float4x4Ptr = ^matrix_float4x4;
  matrix_double4x4Ptr = ^matrix_double4x4;

  simd_quatf = record
    vector: vector_float4;
  end;
  simd_quatfPtr = ^simd_quatf;

  simd_quatd = record
    vector: vector_double4;
  end;
  simd_quatdPtr = ^simd_quatd;

  simd_float3 = vector_float3;
  simd_float4 = vector_float4;
  simd_float4x4 = matrix_float4x4;
