{ Parsed from CoreMedia.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreMedia.framework/Headers/CMSync.h }

{$ifndef __CMSYNC__}

{$ifdef TYPES}
type
  CMClockRef = OpaqueType { available in macos , ios , tvos , watchos  };
  CMClockRefPtr = ^CMClockRef { available in macos , ios , tvos , watchos  };
  CMTimebaseRef = OpaqueType { available in macos , ios , tvos , watchos  };
  CMTimebaseRefPtr = ^CMTimebaseRef { available in macos , ios , tvos , watchos  };
  CMClockOrTimebaseRef = CFTypeRef { available in macos , ios , tvos , watchos  };
  CMClockOrTimebaseRefPtr = ^CMClockOrTimebaseRef { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef FUNCTIONS}
function CMClockGetTypeID: CFTypeID; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMClockGetHostTimeClock: CMClockRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMClockConvertHostTimeToSystemUnits(hostTime: CMTime): cuint64; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMClockMakeHostTimeFromSystemUnits(hostTime: cuint64): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMClockGetTime(clock: CMClockRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMClockGetAnchorTime(clock: CMClockRef; clockTimeOut: CMTimePtr; referenceClockTimeOut: CMTimePtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMClockMightDrift(clock: CMClockRef; otherClock: CMClockRef): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMClockInvalidate(clock: CMClockRef): pointer; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseGetTypeID: CFTypeID; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseCreateWithMasterClock(allocator: CFAllocatorRef; masterClock: CMClockRef; timebaseOut: CMTimebaseRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseCreateWithMasterTimebase(allocator: CFAllocatorRef; masterTimebase: CMTimebaseRef; timebaseOut: CMTimebaseRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseCopyMasterTimebase(timebase: CMTimebaseRef): CMTimebaseRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseCopyMasterClock(timebase: CMTimebaseRef): CMClockRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseCopyMaster(timebase: CMTimebaseRef): CMClockOrTimebaseRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseCopyUltimateMasterClock(timebase: CMTimebaseRef): CMClockRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseGetMasterTimebase(timebase: CMTimebaseRef): CMTimebaseRef; cdecl; external; { unavailable in watchos }
function CMTimebaseGetMasterClock(timebase: CMTimebaseRef): CMClockRef; cdecl; external; { unavailable in watchos }
function CMTimebaseGetMaster(timebase: CMTimebaseRef): CMClockOrTimebaseRef; cdecl; external; { unavailable in watchos }
function CMTimebaseGetUltimateMasterClock(timebase: CMTimebaseRef): CMClockRef; cdecl; external; { unavailable in watchos }
function CMTimebaseSetMasterClock(timebase: CMTimebaseRef; newMasterClock: CMClockRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseSetMasterTimebase(timebase: CMTimebaseRef; newMasterTimebase: CMTimebaseRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseGetTime(timebase: CMTimebaseRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseGetTimeWithTimeScale(timebase: CMTimebaseRef; timescale: CMTimeScale; method: CMTimeRoundingMethod): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseSetTime(timebase: CMTimebaseRef; time: CMTime): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseSetAnchorTime(timebase: CMTimebaseRef; timebaseTime: CMTime; immediateMasterTime: CMTime): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseGetRate(timebase: CMTimebaseRef): Float64; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseGetTimeAndRate(timebase: CMTimebaseRef; timeOut: CMTimePtr; rateOut: Float64Ptr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseSetRate(timebase: CMTimebaseRef; rate: Float64): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseSetRateAndAnchorTime(timebase: CMTimebaseRef; rate: Float64; timebaseTime: CMTime; immediateMasterTime: CMTime): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseGetEffectiveRate(timebase: CMTimebaseRef): Float64; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseAddTimer(timebase: CMTimebaseRef; timer: CFRunLoopTimerRef; runloop: CFRunLoopRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseRemoveTimer(timebase: CMTimebaseRef; timer: CFRunLoopTimerRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseSetTimerNextFireTime(timebase: CMTimebaseRef; timer: CFRunLoopTimerRef; fireTime: CMTime; flags: cuint32): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseSetTimerToFireImmediately(timebase: CMTimebaseRef; timer: CFRunLoopTimerRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseAddTimerDispatchSource(timebase: CMTimebaseRef; timerSource: dispatch_source_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseRemoveTimerDispatchSource(timebase: CMTimebaseRef; timerSource: dispatch_source_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseSetTimerDispatchSourceNextFireTime(timebase: CMTimebaseRef; timerSource: dispatch_source_t; fireTime: CMTime; flags: cuint32): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseSetTimerDispatchSourceToFireImmediately(timebase: CMTimebaseRef; timerSource: dispatch_source_t): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSyncGetRelativeRate(ofClockOrTimebase: CMClockOrTimebaseRef; relativeToClockOrTimebase: CMClockOrTimebaseRef): Float64; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSyncGetRelativeRateAndAnchorTime(ofClockOrTimebase: CMClockOrTimebaseRef; relativeToClockOrTimebase: CMClockOrTimebaseRef; outRelativeRate: Float64Ptr; outOfClockOrTimebaseAnchorTime: CMTimePtr; outRelativeToClockOrTimebaseAnchorTime: CMTimePtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSyncConvertTime(time: CMTime; fromClockOrTimebase: CMClockOrTimebaseRef; toClockOrTimebase: CMClockOrTimebaseRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSyncMightDrift(clockOrTimebase1: CMClockOrTimebaseRef; clockOrTimebase2: CMClockOrTimebaseRef): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMSyncGetTime(clockOrTimebase: CMClockOrTimebaseRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimebaseNotificationBarrier(timebase: CMTimebaseRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimebaseNotification_EffectiveRateChanged: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMTimebaseNotification_TimeJumped: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMTimebaseNotificationKey_EventTime: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$endif}
