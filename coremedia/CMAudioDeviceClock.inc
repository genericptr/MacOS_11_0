{ Parsed from CoreMedia.framework CMAudioDeviceClock.h }

{$ifndef __CMAUDIODEVICECLOCK__}

{$ifdef FUNCTIONS}
function CMAudioDeviceClockCreate(allocator: CFAllocatorRef; deviceUID: CFStringRef; clockOut: CMClockRefPtr): OSStatus; cdecl; external; { unavailable in ios, tvos, watchos } { available in macosx 10.8, macCatalyst 12.0 }
function CMAudioDeviceClockCreateFromAudioDeviceID(allocator: CFAllocatorRef; deviceID: AudioDeviceID; clockOut: CMClockRefPtr): OSStatus; cdecl; external; { unavailable in ios, tvos, watchos } { available in macosx 10.8, macCatalyst 12.0 }
function CMAudioDeviceClockSetAudioDeviceUID(clock: CMClockRef; deviceUID: CFStringRef): OSStatus; cdecl; external; { unavailable in ios, tvos, watchos } { available in macosx 10.8, macCatalyst 12.0 }
function CMAudioDeviceClockSetAudioDeviceID(clock: CMClockRef; deviceID: AudioDeviceID): OSStatus; cdecl; external; { unavailable in ios, tvos, watchos } { available in macosx 10.8, macCatalyst 12.0 }
function CMAudioDeviceClockGetAudioDevice(clock: CMClockRef; deviceUIDOut: CFStringRefPtr; deviceIDOut: AudioDeviceIDPtr; trackingDefaultDeviceOut: pobjcbool): OSStatus; cdecl; external; { unavailable in ios, tvos, watchos } { available in macosx 10.8, macCatalyst 12.0 }
{$endif}

{$endif}
