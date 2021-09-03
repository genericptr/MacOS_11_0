{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLTypes.h }
{$ifdef TYPES}
const
  MTLCounterDontSample = -1;

type
  MTLOrigin = record
    x, y, z: NSUInteger;
  end;
type
  MTLOriginPtr = ^MTLOrigin;
type
  MTLSize = record
    width, height, depth: NSUInteger;
  end;
type
  MTLSizePtr = ^MTLSize;
type
  MTLRegion = record
    origin: MTLOrigin;
    size: MTLSize;
  end;
type
  MTLRegionPtr = ^MTLRegion;
type
  MTLSamplePosition = record
    x, y: single;
  end;
type
  MTLSamplePositionPtr = ^MTLSamplePosition;

type
  MTLCoordinate2D = MTLSamplePosition;
  MTLCoordinate2DPtr = ^MTLCoordinate2D;
{$endif}

