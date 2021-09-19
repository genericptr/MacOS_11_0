{ Parsed from SensorKit.framework SRAbsoluteTime.h }

{$ifndef SRAbsoluteTime_h}
{$ifdef TYPES}
type
  SRAbsoluteTime = CFTimeInterval { unavailable in watchos, macos } { unavailable in tvos };
  SRAbsoluteTimePtr = ^SRAbsoluteTime { unavailable in watchos, macos } { unavailable in tvos };
{$endif}

{$ifdef FUNCTIONS}
function SRAbsoluteTimeGetCurrent: SRAbsoluteTime; cdecl; external; { unavailable in watchos, macos } { unavailable in tvos }
function SRAbsoluteTimeFromContinuousTime(cont: cuint64): SRAbsoluteTime; cdecl; external; { unavailable in watchos, macos } { unavailable in tvos }
function SRAbsoluteTimeToCFAbsoluteTime(sr: SRAbsoluteTime): CFAbsoluteTime; cdecl; external; { unavailable in watchos, macos } { unavailable in tvos }
function SRAbsoluteTimeFromCFAbsoluteTime(cf: CFAbsoluteTime): SRAbsoluteTime; cdecl; external; { unavailable in watchos, macos } { unavailable in tvos }
{$endif}

{$endif}
