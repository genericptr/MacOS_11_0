{ Parsed from CoreImage.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreImage.framework/Headers/CoreImageDefines.h }

{$ifndef COREIMAGEDEFINES_H}

{$if defined(TARGET_OS_MAC) or not defined(TARGET_OS_SIMULATOR) or (defined(__IPHONE_13_0))}
{$ifdef TYPES}
const
  COREIMAGE_SUPPORTS_IOSURFACE = 1;
{$endif}

{$else}
{$ifdef TYPES}
const
  COREIMAGE_SUPPORTS_IOSURFACE = 0;
{$endif}

{$endif}
{$endif}
