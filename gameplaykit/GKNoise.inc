{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKNoise.h }

{$ifdef TYPES}
type
  GKNoisePtr = ^GKNoise;
{$endif}

{$ifdef CLASSES}

type
  GKNoise = objcclass external (NSObject)
  public
    procedure setGradientColors(newValue: NSDictionary); message 'setGradientColors:';
    function gradientColors: NSDictionary; message 'gradientColors';
    function init: id; message 'init';
    class function noiseWithNoiseSource (noiseSource: GKNoiseSource): id; message 'noiseWithNoiseSource:';
    class function noiseWithNoiseSource_gradientColors (noiseSource: GKNoiseSource; gradientColors_: NSDictionary): id; message 'noiseWithNoiseSource:gradientColors:';
    function initWithNoiseSource (noiseSource: GKNoiseSource): id; message 'initWithNoiseSource:';
    function initWithNoiseSource_gradientColors (noiseSource: GKNoiseSource; gradientColors_: NSDictionary): id; message 'initWithNoiseSource:gradientColors:'; { NS_DESIGNATED_INITIALIZER }
    class function noiseWithComponentNoises_selectionNoise (noises: NSArray; selectionNoise: GKNoise): id; message 'noiseWithComponentNoises:selectionNoise:';
    class function noiseWithComponentNoises_selectionNoise_componentBoundaries_boundaryBlendDistances (noises: NSArray; selectionNoise: GKNoise; componentBoundaries: NSArray; blendDistances: NSArray): id; message 'noiseWithComponentNoises:selectionNoise:componentBoundaries:boundaryBlendDistances:';
    function valueAtPosition (position: vector_float2): single; message 'valueAtPosition:';
    procedure applyAbsoluteValue; message 'applyAbsoluteValue';
    procedure clampWithLowerBound_upperBound (lowerBound: double; upperBound: double); message 'clampWithLowerBound:upperBound:';
    procedure raiseToPower (power: double); message 'raiseToPower:';
    procedure invert; message 'invert';
    procedure applyTurbulenceWithFrequency_power_roughness_seed (frequency: double; power: double; roughness: cint; seed: cint32); message 'applyTurbulenceWithFrequency:power:roughness:seed:';
    procedure remapValuesToCurveWithControlPoints (controlPoints: NSDictionary); message 'remapValuesToCurveWithControlPoints:';
    procedure remapValuesToTerracesWithPeaks_terracesInverted (peakInputValues: NSArray; inverted: objcbool); message 'remapValuesToTerracesWithPeaks:terracesInverted:';
    procedure moveBy (delta: vector_double3); message 'moveBy:';
    procedure scaleBy (factor: vector_double3); message 'scaleBy:';
    procedure rotateBy (radians: vector_double3); message 'rotateBy:';
    procedure addWithNoise (noise: GKNoise); message 'addWithNoise:';
    procedure multiplyWithNoise (noise: GKNoise); message 'multiplyWithNoise:';
    procedure minimumWithNoise (noise: GKNoise); message 'minimumWithNoise:';
    procedure maximumWithNoise (noise: GKNoise); message 'maximumWithNoise:';
    procedure raiseToPowerWithNoise (noise: GKNoise); message 'raiseToPowerWithNoise:';
    procedure displaceXWithNoise_yWithNoise_zWithNoise (xDisplacementNoise: GKNoise; yDisplacementNoise: GKNoise; zDisplacementNoise: GKNoise); message 'displaceXWithNoise:yWithNoise:zWithNoise:';
  end;
{$endif}

