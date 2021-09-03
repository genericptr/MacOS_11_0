{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKPrimitives.h }
{$ifdef TYPES}
type
  GKBox = record
    boxMin: vector_float3;
    boxMax: vector_float3;
  end;
type
  GKBoxPtr = ^GKBox;
type
  GKQuad = record
    quadMin: vector_float2;
    quadMax: vector_float2;
  end;
type
  GKQuadPtr = ^GKQuad;
type
  GKTriangle = record
    points:array[0..2] of vector_float3;
  end;
type
  GKTrianglePtr = ^GKTriangle;
{$endif}

