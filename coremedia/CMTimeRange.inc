{ Parsed from CoreMedia.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreMedia.framework/Headers/CMTimeRange.h }

{$ifndef CMTIMERANGE_H}

{$ifdef TYPES}
type
  CMTimeRange = record
    start: CMTime;
    duration: CMTime;
  end;
type
  CMTimeRangePtr = ^CMTimeRange;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimeRangeZero: CMTimeRange; cvar; external;
  kCMTimeRangeInvalid: CMTimeRange { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMTimeRangeMake(start: CMTime; duration: CMTime): CMTimeRange; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeRangeGetUnion(range: CMTimeRange; otherRange: CMTimeRange): CMTimeRange; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeRangeGetIntersection(range: CMTimeRange; otherRange: CMTimeRange): CMTimeRange; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeRangeEqual(range1: CMTimeRange; range2: CMTimeRange): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeRangeContainsTime(range: CMTimeRange; time: CMTime): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeRangeContainsTimeRange(range: CMTimeRange; otherRange: CMTimeRange): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeRangeGetEnd(range: CMTimeRange): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeMapTimeFromRangeToRange(t: CMTime; fromRange: CMTimeRange; toRange: CMTimeRange): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeClampToRange(time: CMTime; range: CMTimeRange): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeMapDurationFromRangeToRange(dur: CMTime; fromRange: CMTimeRange; toRange: CMTimeRange): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeFoldIntoRange(time: CMTime; foldRange: CMTimeRange): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeRangeFromTimeToTime(start: CMTime; end_: CMTime): CMTimeRange; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeRangeCopyAsDictionary(range: CMTimeRange; allocator: CFAllocatorRef): CFDictionaryRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeRangeMakeFromDictionary(dictionaryRepresentation: CFDictionaryRef): CMTimeRange; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimeRangeStartKey: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMTimeRangeDurationKey: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMTimeRangeCopyDescription(allocator: CFAllocatorRef; range: CMTimeRange): CFStringRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeRangeShow(range: CMTimeRange): pointer; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$ifdef TYPES}
type
  CMTimeMapping = record
    source: CMTimeRange;
    target: CMTimeRange;
  end;
type
  CMTimeMappingPtr = ^CMTimeMapping;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimeMappingInvalid: CMTimeMapping { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMTimeMappingMake(source: CMTimeRange; target: CMTimeRange): CMTimeMapping; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeMappingMakeEmpty(target: CMTimeRange): CMTimeMapping; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeMappingCopyAsDictionary(mapping: CMTimeMapping; allocator: CFAllocatorRef): CFDictionaryRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeMappingMakeFromDictionary(dictionaryRepresentation: CFDictionaryRef): CMTimeMapping; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimeMappingSourceKey: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
  kCMTimeMappingTargetKey: CFStringRef { available in macos , ios , tvos , watchos  }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMTimeMappingCopyDescription(allocator: CFAllocatorRef; mapping: CMTimeMapping): CFStringRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMTimeMappingShow(mapping: CMTimeMapping): pointer; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$endif}
