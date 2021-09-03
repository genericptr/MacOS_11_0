{ Parsed from CoreMedia.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreMedia.framework/Headers/CMAudioDeviceClock.h }

{$ifndef __CMAUDIODEVICECLOCK__}

{$ifdef FUNCTIONS}
function CMAudioDeviceClockCreate(allocator: CFAllocatorRef; deviceUID: CFStringRef; clockOut: CMClockRefPtr): OSStatus; cdecl; external; { unavailable in ios, tvos, watchos }
function CMAudioDeviceClockCreateFromAudioDeviceID(allocator: CFAllocatorRef; deviceID: AudioDeviceID; clockOut: CMClockRefPtr): OSStatus; cdecl; external; { unavailable in ios, tvos, watchos }
function CMAudioDeviceClockSetAudioDeviceUID(clock: CMClockRef; deviceUID: CFStringRef): OSStatus; cdecl; external; { unavailable in ios, tvos, watchos }
function CMAudioDeviceClockSetAudioDeviceID(clock: CMClockRef; deviceID: AudioDeviceID): OSStatus; cdecl; external; { unavailable in ios, tvos, watchos }
function CMAudioDeviceClockGetAudioDevice(clock: CMClockRef; deviceUIDOut: CFStringRefPtr; deviceIDOut: AudioDeviceIDPtr; trackingDefaultDeviceOut: pobjcbool): OSStatus; cdecl; external; { unavailable in ios, tvos, watchos }
{$endif}

{$endif}
