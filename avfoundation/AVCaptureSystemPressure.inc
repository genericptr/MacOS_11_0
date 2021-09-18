{ Parsed from AVFoundation.framework AVCaptureSystemPressure.h }

{$ifdef TYPES}
type
  AVCaptureSystemPressureStatePtr = ^AVCaptureSystemPressureState;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVCaptureSystemPressureLevel = NSString { unavailable in macos, tvos };
  AVCaptureSystemPressureLevelPtr = ^AVCaptureSystemPressureLevel { unavailable in macos, tvos };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVCaptureSystemPressureLevelNominal: AVCaptureSystemPressureLevel { unavailable in macos, tvos }; cvar; external;
  AVCaptureSystemPressureLevelFair: AVCaptureSystemPressureLevel { unavailable in macos, tvos }; cvar; external;
  AVCaptureSystemPressureLevelSerious: AVCaptureSystemPressureLevel { unavailable in macos, tvos }; cvar; external;
  AVCaptureSystemPressureLevelCritical: AVCaptureSystemPressureLevel { unavailable in macos, tvos }; cvar; external;
  AVCaptureSystemPressureLevelShutdown: AVCaptureSystemPressureLevel { unavailable in macos, tvos }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVCaptureSystemPressureFactors = NSUInteger;
  AVCaptureSystemPressureFactorsPtr = ^AVCaptureSystemPressureFactors;

const
  AVCaptureSystemPressureFactorNone = 0;
  AVCaptureSystemPressureFactorSystemTemperature = 1 shl 0;
  AVCaptureSystemPressureFactorPeakPower = 1 shl 1;
  AVCaptureSystemPressureFactorDepthModuleTemperature = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureSystemPressureState = objcclass external (NSObject)
  private
    _internal: AVCaptureSystemPressureStateInternal;
  public
    function level: AVCaptureSystemPressureLevel; message 'level';
    function factors: AVCaptureSystemPressureFactors; message 'factors';
  end;
{$endif}

{$else}
{$endif}
