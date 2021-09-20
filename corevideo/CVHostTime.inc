{ Parsed from CoreVideo.framework CVHostTime.h }

{$if  not (defined(__COREVIDEO_CVHOSTTIME_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVHOSTTIME_H__ = 1;
{$endif}

{$ifdef FUNCTIONS}
function CVGetCurrentHostTime: cuint64; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVGetHostClockFrequency: double; cdecl; external; { available starting in macos 10.4, ios 4.0 }
function CVGetHostClockMinimumTimeDelta: cuint32; cdecl; external; { available starting in macos 10.4, ios 4.0 }
{$endif}

{$endif}
