{ Parsed from CoreMedia.framework CMTimeRange.h }

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
  kCMTimeRangeInvalid: CMTimeRange { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMTimeRangeMake(start: CMTime; duration: CMTime): CMTimeRange; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeRangeGetUnion(range: CMTimeRange; otherRange: CMTimeRange): CMTimeRange; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeRangeGetIntersection(range: CMTimeRange; otherRange: CMTimeRange): CMTimeRange; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeRangeEqual(range1: CMTimeRange; range2: CMTimeRange): Boolean; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeRangeContainsTime(range: CMTimeRange; time: CMTime): Boolean; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeRangeContainsTimeRange(range: CMTimeRange; otherRange: CMTimeRange): Boolean; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeRangeGetEnd(range: CMTimeRange): CMTime; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeMapTimeFromRangeToRange(t: CMTime; fromRange: CMTimeRange; toRange: CMTimeRange): CMTime; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeClampToRange(time: CMTime; range: CMTimeRange): CMTime; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeMapDurationFromRangeToRange(dur: CMTime; fromRange: CMTimeRange; toRange: CMTimeRange): CMTime; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeFoldIntoRange(time: CMTime; foldRange: CMTimeRange): CMTime; cdecl; external; { available in macos 10.14, ios 12.0, tvos 12.0, watchos 6.0 }
function CMTimeRangeFromTimeToTime(start: CMTime; end_: CMTime): CMTimeRange; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeRangeCopyAsDictionary(range: CMTimeRange; allocator: CFAllocatorRef): CFDictionaryRef; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeRangeMakeFromDictionary(dictionaryRepresentation: CFDictionaryRef): CMTimeRange; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimeRangeStartKey: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTimeRangeDurationKey: CFStringRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMTimeRangeCopyDescription(allocator: CFAllocatorRef; range: CMTimeRange): CFStringRef; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMTimeRangeShow(range: CMTimeRange): pointer; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
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
  kCMTimeMappingInvalid: CMTimeMapping { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMTimeMappingMake(source: CMTimeRange; target: CMTimeRange): CMTimeMapping; cdecl; external; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }
function CMTimeMappingMakeEmpty(target: CMTimeRange): CMTimeMapping; cdecl; external; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }
function CMTimeMappingCopyAsDictionary(mapping: CMTimeMapping; allocator: CFAllocatorRef): CFDictionaryRef; cdecl; external; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }
function CMTimeMappingMakeFromDictionary(dictionaryRepresentation: CFDictionaryRef): CMTimeMapping; cdecl; external; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMTimeMappingSourceKey: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
  kCMTimeMappingTargetKey: CFStringRef { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMTimeMappingCopyDescription(allocator: CFAllocatorRef; mapping: CMTimeMapping): CFStringRef; cdecl; external; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }
function CMTimeMappingShow(mapping: CMTimeMapping): pointer; cdecl; external; { available in macos 10.11, ios 9.0, tvos 9.0, watchos 6.0 }
{$endif}

{$endif}
