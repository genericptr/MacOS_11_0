{ Parsed from CoreMedia.framework CMSync.h }

{$ifndef __CMSYNC__}

{$ifdef TYPES}
type
  CMClockRef = OpaqueType { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 };
  CMClockRefPtr = ^CMClockRef { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 };
  CMTimebaseRef = OpaqueType { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 };
  CMTimebaseRefPtr = ^CMTimebaseRef { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 };
  CMClockOrTimebaseRef = CFTypeRef { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 };
  CMClockOrTimebaseRefPtr = ^CMClockOrTimebaseRef { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef FUNCTIONS}
function CMClockGetTypeID: CFTypeID; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMClockGetHostTimeClock: CMClockRef; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMClockConvertHostTimeToSystemUnits(hostTime: CMTime): cuint64; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMClockMakeHostTimeFromSystemUnits(hostTime: cuint64): CMTime; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMClockGetTime(clock: CMClockRef): CMTime; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMClockGetAnchorTime(clock: CMClockRef; clockTimeOut: CMTimePtr; referenceClockTimeOut: CMTimePtr): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMClockMightDrift(clock: CMClockRef; otherClock: CMClockRef): Boolean; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMClockInvalidate(clock: CMClockRef): pointer; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseGetTypeID: CFTypeID; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseCreateWithMasterClock(allocator: CFAllocatorRef; masterClock: CMClockRef; timebaseOut: CMTimebaseRefPtr): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseCreateWithMasterTimebase(allocator: CFAllocatorRef; masterTimebase: CMTimebaseRef; timebaseOut: CMTimebaseRefPtr): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseCopyMasterTimebase(timebase: CMTimebaseRef): CMTimebaseRef; cdecl; external; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }
function CMTimebaseCopyMasterClock(timebase: CMTimebaseRef): CMClockRef; cdecl; external; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }
function CMTimebaseCopyMaster(timebase: CMTimebaseRef): CMClockOrTimebaseRef; cdecl; external; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }
function CMTimebaseCopyUltimateMasterClock(timebase: CMTimebaseRef): CMClockRef; cdecl; external; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }
function CMTimebaseGetMasterTimebase(timebase: CMTimebaseRef): CMTimebaseRef; cdecl; external; { unavailable in watchos }
function CMTimebaseGetMasterClock(timebase: CMTimebaseRef): CMClockRef; cdecl; external; { unavailable in watchos }
function CMTimebaseGetMaster(timebase: CMTimebaseRef): CMClockOrTimebaseRef; cdecl; external; { unavailable in watchos }
function CMTimebaseGetUltimateMasterClock(timebase: CMTimebaseRef): CMClockRef; cdecl; external; { unavailable in watchos }
function CMTimebaseSetMasterClock(timebase: CMTimebaseRef; newMasterClock: CMClockRef): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseSetMasterTimebase(timebase: CMTimebaseRef; newMasterTimebase: CMTimebaseRef): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseGetTime(timebase: CMTimebaseRef): CMTime; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseGetTimeWithTimeScale(timebase: CMTimebaseRef; timescale: CMTimeScale; method: CMTimeRoundingMethod): CMTime; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseSetTime(timebase: CMTimebaseRef; time: CMTime): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseSetAnchorTime(timebase: CMTimebaseRef; timebaseTime: CMTime; immediateMasterTime: CMTime): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseGetRate(timebase: CMTimebaseRef): Float64; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseGetTimeAndRate(timebase: CMTimebaseRef; timeOut: CMTimePtr; rateOut: Float64Ptr): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseSetRate(timebase: CMTimebaseRef; rate: Float64): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseSetRateAndAnchorTime(timebase: CMTimebaseRef; rate: Float64; timebaseTime: CMTime; immediateMasterTime: CMTime): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseGetEffectiveRate(timebase: CMTimebaseRef): Float64; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseAddTimer(timebase: CMTimebaseRef; timer: CFRunLoopTimerRef; runloop: CFRunLoopRef): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseRemoveTimer(timebase: CMTimebaseRef; timer: CFRunLoopTimerRef): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseSetTimerNextFireTime(timebase: CMTimebaseRef; timer: CFRunLoopTimerRef; fireTime: CMTime; flags: cuint32): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseSetTimerToFireImmediately(timebase: CMTimebaseRef; timer: CFRunLoopTimerRef): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseAddTimerDispatchSource(timebase: CMTimebaseRef; timerSource: dispatch_source_t): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseRemoveTimerDispatchSource(timebase: CMTimebaseRef; timerSource: dispatch_source_t): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseSetTimerDispatchSourceNextFireTime(timebase: CMTimebaseRef; timerSource: dispatch_source_t; fireTime: CMTime; flags: cuint32): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseSetTimerDispatchSourceToFireImmediately(timebase: CMTimebaseRef; timerSource: dispatch_source_t): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMSyncGetRelativeRate(ofClockOrTimebase: CMClockOrTimebaseRef; relativeToClockOrTimebase: CMClockOrTimebaseRef): Float64; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMSyncGetRelativeRateAndAnchorTime(ofClockOrTimebase: CMClockOrTimebaseRef; relativeToClockOrTimebase: CMClockOrTimebaseRef; outRelativeRate: Float64Ptr; outOfClockOrTimebaseAnchorTime: CMTimePtr; outRelativeToClockOrTimebaseAnchorTime: CMTimePtr): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMSyncConvertTime(time: CMTime; fromClockOrTimebase: CMClockOrTimebaseRef; toClockOrTimebase: CMClockOrTimebaseRef): CMTime; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMSyncMightDrift(clockOrTimebase1: CMClockOrTimebaseRef; clockOrTimebase2: CMClockOrTimebaseRef): Boolean; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMSyncGetTime(clockOrTimebase: CMClockOrTimebaseRef): CMTime; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
function CMTimebaseNotificationBarrier(timebase: CMTimebaseRef): OSStatus; cdecl; external; { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimebaseNotification_EffectiveRateChanged: CFStringRef { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTimebaseNotification_TimeJumped: CFStringRef { available in macos 10.8, ios 6.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTimebaseNotificationKey_EventTime: CFStringRef { available in macos 10.9, ios 7.0, tvos 9.0, watchos 6.0 }; cvar; external;
{$endif}

{$endif}
