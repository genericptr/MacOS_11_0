{ Parsed from CoreMedia.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreMedia.framework/Headers/CMBase.h }

{$ifndef CMBASE_H}

{$ifdef TYPES}
type
  CMItemCount = CFIndex;
  CMItemCountPtr = ^CMItemCount;
  CMItemIndex = CFIndex;
  CMItemIndexPtr = ^CMItemIndex;

const
  CMITEMCOUNT_MAX = INTPTR_MAX;
{$endif}

{$ifndef COREMEDIA_USE_ALIGNED_CMBASECLASS_VERSION}

{$else}

{$if (defined(TARGET_OS_OSX) or defined(TARGET_OS_MACCATALYST) or 0) and defined(TARGET_CPU_X86_64)}
{$ifdef TYPES}
type
  CMStructVersion = uint32_t CMBaseClassVersion,;
  CMStructVersionPtr = ^CMStructVersion;
{$endif}

{$else}
{$ifdef TYPES}
type
  CMStructVersion = uintptr_t CMBaseClassVersion,;
  CMStructVersionPtr = ^CMStructVersion;

const
  COREMEDIA_CMBASECLASS_VERSION_IS_POINTER_ALIGNED = COREMEDIA_TRUE;
{$endif}

{$endif}
{$endif}


{$ifdef TYPES}
type
  CMPersistentTrackID = cint32;
  CMPersistentTrackIDPtr = ^CMPersistentTrackID;
{$endif}

{$endif}
