{ Parsed from CoreHaptics.framework CHHapticPattern.h }

{$ifdef TYPES}
type
  CHHapticPatternPtr = ^CHHapticPattern;
{$endif}

{$ifdef TYPES}
type
  CHHapticPatternKey = NSString;
  CHHapticPatternKeyPtr = ^CHHapticPatternKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CHHapticPatternKeyVersion: CHHapticPatternKey { unavailable in watchos }; cvar; external;
  CHHapticPatternKeyPattern: CHHapticPatternKey { unavailable in watchos }; cvar; external;
  CHHapticPatternKeyEvent: CHHapticPatternKey { unavailable in watchos }; cvar; external;
  CHHapticPatternKeyEventType: CHHapticPatternKey { unavailable in watchos }; cvar; external;
  CHHapticPatternKeyTime: CHHapticPatternKey { unavailable in watchos }; cvar; external;
  CHHapticPatternKeyEventDuration: CHHapticPatternKey { unavailable in watchos }; cvar; external;
  CHHapticPatternKeyEventWaveformPath: CHHapticPatternKey { unavailable in watchos }; cvar; external;
  CHHapticPatternKeyEventParameters: CHHapticPatternKey { unavailable in watchos }; cvar; external;
  CHHapticPatternKeyParameter: CHHapticPatternKey { unavailable in watchos }; cvar; external;
  CHHapticPatternKeyParameterID: CHHapticPatternKey { unavailable in watchos }; cvar; external;
  CHHapticPatternKeyParameterValue: CHHapticPatternKey { unavailable in watchos }; cvar; external;
  CHHapticPatternKeyParameterCurve: CHHapticPatternKey { unavailable in watchos }; cvar; external;
  CHHapticPatternKeyParameterCurveControlPoints: CHHapticPatternKey { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CHHapticPattern = objcclass external (NSObject)
  public
    function duration: NSTimeInterval; message 'duration';
    function init: id; message 'init';
    function initWithEvents_parameters_error (events: NSArray; parameters: NSArray; outError: NSErrorPtr): id; message 'initWithEvents:parameters:error:';
    function initWithEvents_parameterCurves_error (events: NSArray; parameterCurves: NSArray; outError: NSErrorPtr): id; message 'initWithEvents:parameterCurves:error:';
    function initWithDictionary_error (patternDict: NSDictionary; outError: NSErrorPtr): id; message 'initWithDictionary:error:';
    function exportDictionaryAndReturnError (outError: NSErrorPtr): NSDictionary; message 'exportDictionaryAndReturnError:';
  end;
{$endif}

