{ Parsed from GameplayKit.framework GKNoiseMap.h }

{$ifdef TYPES}
type
  GKNoiseMapPtr = ^GKNoiseMap;
{$endif}

{$ifdef CLASSES}

type
  GKNoiseMap = objcclass external (NSObject)
  public
    function size: vector_double2; message 'size';
    function origin: vector_double2; message 'origin';
    function sampleCount: vector_int2; message 'sampleCount';
    function isSeamless: objcbool; message 'isSeamless';
    function init: id; message 'init';
    class function noiseMapWithNoise (noise: GKNoise): id; message 'noiseMapWithNoise:';
    class function noiseMapWithNoise_size_origin_sampleCount_seamless (noise: GKNoise; size_: vector_double2; origin_: vector_double2; sampleCount_: vector_int2; seamless: objcbool): id; message 'noiseMapWithNoise:size:origin:sampleCount:seamless:';
    function initWithNoise (noise: GKNoise): id; message 'initWithNoise:';
    function initWithNoise_size_origin_sampleCount_seamless (noise: GKNoise; size_: vector_double2; origin_: vector_double2; sampleCount_: vector_int2; seamless: objcbool): id; message 'initWithNoise:size:origin:sampleCount:seamless:'; { NS_DESIGNATED_INITIALIZER }
    function valueAtPosition (position: vector_int2): single; message 'valueAtPosition:';
    function interpolatedValueAtPosition (position: vector_float2): single; message 'interpolatedValueAtPosition:';
    procedure setValue_atPosition (value: single; position: vector_int2); message 'setValue:atPosition:';
  end;
{$endif}

