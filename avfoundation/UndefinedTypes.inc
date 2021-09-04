
{$include SIMDTypes.inc}

type
  UTTypePtr = OpaquePointer;

{ ImageIO }

type
  CGImagePropertyOrientation = cuint32;
  CGImagePropertyOrientationPtr = ^CGImagePropertyOrientation;

const
  kCGImagePropertyOrientationUp = 1;
  kCGImagePropertyOrientationUpMirrored = 2;
  kCGImagePropertyOrientationDown = 3;
  kCGImagePropertyOrientationDownMirrored = 4;
  kCGImagePropertyOrientationLeftMirrored = 5;
  kCGImagePropertyOrientationRight = 6;
  kCGImagePropertyOrientationRightMirrored = 7;
  kCGImagePropertyOrientationLeft = 8;
