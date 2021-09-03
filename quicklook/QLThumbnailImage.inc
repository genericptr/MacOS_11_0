{ Parsed from QuickLook.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/QuickLook.framework/Headers/QLThumbnailImage.h }

{$if  not (defined(__QUICKLOOK_QLTHUMBNAILIMAGE__))}
{$ifdef FUNCTIONS}
function QLThumbnailImageCreate(allocator: CFAllocatorRef; url: CFURLRef; maxThumbnailSize: CGSize; options: CFDictionaryRef): CGImageRef; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kQLThumbnailOptionIconModeKey: CFStringRef; cvar; external;
  kQLThumbnailOptionScaleFactorKey: CFStringRef; cvar; external;
{$endif}

{$endif}
