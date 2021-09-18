{ Parsed from CoreMedia.framework CMTime.h }

{$ifndef CMTIME_H}

{$ifdef TYPES}
type
  CMTimeValue = cint64 { available in macos , ios , tvos , watchos  };
  CMTimeValuePtr = ^CMTimeValue { available in macos , ios , tvos , watchos  };
  CMTimeScale = cint32 { available in macos , ios , tvos , watchos  };
  CMTimeScalePtr = ^CMTimeScale { available in macos , ios , tvos , watchos  };

const
  kCMTimeMaxTimescale = $7fffffff;

type
  CMTimeEpoch = cint64 { available in macos , ios , tvos , watchos  };
  CMTimeEpochPtr = ^CMTimeEpoch { available in macos , ios , tvos , watchos  };
  CMTimeFlags = cuint32;
  CMTimeFlagsPtr = ^CMTimeFlags;

const
  kCMTimeFlags_Valid = 1 shl 0;
  kCMTimeFlags_HasBeenRounded = 1 shl 1;
  kCMTimeFlags_PositiveInfinity = 1 shl 2;
  kCMTimeFlags_NegativeInfinity = 1 shl 3;
  kCMTimeFlags_Indefinite = 1 shl 4;
  kCMTimeFlags_ImpliedValueFlagsMask = kCMTimeFlags_PositiveInfinity + kCMTimeFlags_NegativeInfinity + kCMTimeFlags_Indefinite;

type
  CMTime = record
    value: CMTimeValue;
    timescale: CMTimeScale;
    flags: CMTimeFlags;
    epoch: CMTimeEpoch;
  end;
type
  CMTimePtr = ^CMTime;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimeInvalid: CMTime { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMTimeIndefinite: CMTime { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMTimePositiveInfinity: CMTime { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMTimeNegativeInfinity: CMTime { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMTimeZero: CMTime { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMTimeMake(value: cint64; timescale: cint32): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeMakeWithEpoch(value: cint64; timescale: cint32; epoch: cint64): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeMakeWithSeconds(seconds: Float64; preferredTimescale: cint32): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeGetSeconds(time: CMTime): Float64; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$ifdef TYPES}
type
  CMTimeRoundingMethod = cuint32;
  CMTimeRoundingMethodPtr = ^CMTimeRoundingMethod;

const
  kCMTimeRoundingMethod_RoundHalfAwayFromZero = 1;
  kCMTimeRoundingMethod_RoundTowardZero = 2;
  kCMTimeRoundingMethod_RoundAwayFromZero = 3;
  kCMTimeRoundingMethod_QuickTime = 4;
  kCMTimeRoundingMethod_RoundTowardPositiveInfinity = 5;
  kCMTimeRoundingMethod_RoundTowardNegativeInfinity = 6;
  kCMTimeRoundingMethod_Default = kCMTimeRoundingMethod_RoundHalfAwayFromZero;
{$endif}

{$ifdef FUNCTIONS}
function CMTimeConvertScale(time: CMTime; newTimescale: cint32; method: CMTimeRoundingMethod): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeAdd(lhs: CMTime; rhs: CMTime): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeSubtract(lhs: CMTime; rhs: CMTime): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeMultiply(time: CMTime; multiplier: cint32): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeMultiplyByFloat64(time: CMTime; multiplier: Float64): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeMultiplyByRatio(time: CMTime; multiplier: cint32; divisor: cint32): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeCompare(time1: CMTime; time2: CMTime): cint32; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeMinimum(time1: CMTime; time2: CMTime): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeMaximum(time1: CMTime; time2: CMTime): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeAbsoluteValue(time: CMTime): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeCopyAsDictionary(time: CMTime; allocator: CFAllocatorRef): CFDictionaryRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeMakeFromDictionary(dictionaryRepresentation: CFDictionaryRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimeValueKey: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMTimeScaleKey: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMTimeEpochKey: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMTimeFlagsKey: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMTimeCopyDescription(allocator: CFAllocatorRef; time: CMTime): CFStringRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeShow(time: CMTime): pointer; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$endif}
