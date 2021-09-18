{ Parsed from CoreImage.framework CoreImageDefines.h }

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
