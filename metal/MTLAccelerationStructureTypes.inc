{ Parsed from Metal.framework MTLAccelerationStructureTypes.h }

{$ifdef TYPES}
type
  MTLPackedFloat3 = packed record
    v: array[0..9 - 1] of cfloat;
  end;
  MTLPackedFloat3Ptr = ^MTLPackedFloat3;

type
  MTLPackedFloat4x3 = packed record
    v: array[0..12 - 1] of cfloat;
  end;
  MTLPackedFloat4x3Ptr = ^MTLPackedFloat4x3;
{$endif}
