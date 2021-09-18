{ Parsed from CoreAudio.framework HostTime.h }

{$if  not (defined(CoreAudio_HostTime_h))}

{$ifdef FUNCTIONS}
function AudioGetCurrentHostTime: UInt64; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function AudioGetHostClockFrequency: Float64; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function AudioGetHostClockMinimumTimeDelta: UInt32; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function AudioConvertHostTimeToNanos(inHostTime: UInt64): UInt64; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function AudioConvertNanosToHostTime(inNanos: UInt64): UInt64; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
{$endif}

{$endif}
