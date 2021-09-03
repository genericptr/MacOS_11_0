{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSByteOrder.h }
{$ifdef TYPES}
const
  NS_UnknownByteOrder = CFByteOrderUnknown;
  NS_LittleEndian = CFByteOrderLittleEndian;
  NS_BigEndian = CFByteOrderBigEndian;

type
  NSSwappedFloat = record
    v: cuint;
  end;
type
  NSSwappedFloatPtr = ^NSSwappedFloat;
type
  NSSwappedDouble = record
    v: culonglong;
  end;
type
  NSSwappedDoublePtr = ^NSSwappedDouble;
{$endif}

