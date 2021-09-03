{ Parsed from CoreVideo.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreVideo.framework/Headers/CVHostTime.h }

{$if  not (defined(__COREVIDEO_CVHOSTTIME_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVHOSTTIME_H__ = 1;
{$endif}

{$ifdef FUNCTIONS}
function CVGetCurrentHostTime: cuint64; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVGetHostClockFrequency: double; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
function CVGetHostClockMinimumTimeDelta: cuint32; cdecl; external; { available starting in __MAC_10_4,__IPHONE_4_0 }
{$endif}

{$endif}
