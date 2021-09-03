{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLAccelerationStructureTypes.h }

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
