{ Parsed from CoreMedia.framework CMAudioClock.h }

{$ifndef __CMAUDIOCLOCK__}

{$ifdef FUNCTIONS}
function CMAudioClockCreate(allocator: CFAllocatorRef; clockOut: CMClockRefPtr): OSStatus; cdecl; external; { unavailable in macos } { available in ios 6.0, tvos 9.0, watchos 6.0, macCatalyst 13.0 }
{$endif}

{$endif}
