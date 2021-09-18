{ Parsed from CoreHaptics.framework CHHapticParameter.h }

{$ifdef TYPES}
type
  CHHapticEventParameterPtr = ^CHHapticEventParameter;
  CHHapticDynamicParameterPtr = ^CHHapticDynamicParameter;
  CHHapticParameterCurveControlPointPtr = ^CHHapticParameterCurveControlPoint;
  CHHapticParameterCurvePtr = ^CHHapticParameterCurve;
{$endif}

{$ifdef TYPES}
type
  CHHapticEventParameterID = NSString;
  CHHapticEventParameterIDPtr = ^CHHapticEventParameterID;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CHHapticEventParameterIDHapticIntensity: CHHapticEventParameterID { unavailable in watchos }; cvar; external;
  CHHapticEventParameterIDHapticSharpness: CHHapticEventParameterID { unavailable in watchos }; cvar; external;
  CHHapticEventParameterIDAttackTime: CHHapticEventParameterID { unavailable in watchos }; cvar; external;
  CHHapticEventParameterIDDecayTime: CHHapticEventParameterID { unavailable in watchos }; cvar; external;
  CHHapticEventParameterIDReleaseTime: CHHapticEventParameterID { unavailable in watchos }; cvar; external;
  CHHapticEventParameterIDSustained: CHHapticEventParameterID { unavailable in watchos }; cvar; external;
  CHHapticEventParameterIDAudioVolume: CHHapticEventParameterID { unavailable in watchos }; cvar; external;
  CHHapticEventParameterIDAudioPitch: CHHapticEventParameterID { unavailable in watchos }; cvar; external;
  CHHapticEventParameterIDAudioPan: CHHapticEventParameterID { unavailable in watchos }; cvar; external;
  CHHapticEventParameterIDAudioBrightness: CHHapticEventParameterID { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CHHapticDynamicParameterID = NSString;
  CHHapticDynamicParameterIDPtr = ^CHHapticDynamicParameterID;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CHHapticDynamicParameterIDHapticIntensityControl: CHHapticDynamicParameterID { unavailable in watchos }; cvar; external;
  CHHapticDynamicParameterIDHapticSharpnessControl: CHHapticDynamicParameterID { unavailable in watchos }; cvar; external;
  CHHapticDynamicParameterIDHapticAttackTimeControl: CHHapticDynamicParameterID { unavailable in watchos }; cvar; external;
  CHHapticDynamicParameterIDHapticDecayTimeControl: CHHapticDynamicParameterID { unavailable in watchos }; cvar; external;
  CHHapticDynamicParameterIDHapticReleaseTimeControl: CHHapticDynamicParameterID { unavailable in watchos }; cvar; external;
  CHHapticDynamicParameterIDAudioVolumeControl: CHHapticDynamicParameterID { unavailable in watchos }; cvar; external;
  CHHapticDynamicParameterIDAudioPanControl: CHHapticDynamicParameterID { unavailable in watchos }; cvar; external;
  CHHapticDynamicParameterIDAudioBrightnessControl: CHHapticDynamicParameterID { unavailable in watchos }; cvar; external;
  CHHapticDynamicParameterIDAudioPitchControl: CHHapticDynamicParameterID { unavailable in watchos }; cvar; external;
  CHHapticDynamicParameterIDAudioAttackTimeControl: CHHapticDynamicParameterID { unavailable in watchos }; cvar; external;
  CHHapticDynamicParameterIDAudioDecayTimeControl: CHHapticDynamicParameterID { unavailable in watchos }; cvar; external;
  CHHapticDynamicParameterIDAudioReleaseTimeControl: CHHapticDynamicParameterID { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CHHapticEventParameter = objcclass external (NSObject)
  public
    function parameterID: CHHapticEventParameterID; message 'parameterID';
    procedure setValue(newValue: single); message 'setValue:';
    function value: single; message 'value';
    function init: id; message 'init';
    function initWithParameterID_value (parameterID_: CHHapticEventParameterID; value_: single): id; message 'initWithParameterID:value:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  CHHapticDynamicParameter = objcclass external (NSObject)
  public
    function parameterID: CHHapticDynamicParameterID; message 'parameterID';
    procedure setValue(newValue: single); message 'setValue:';
    function value: single; message 'value';
    procedure setRelativeTime(newValue: NSTimeInterval); message 'setRelativeTime:';
    function relativeTime: NSTimeInterval; message 'relativeTime';
    function init: id; message 'init';
    function initWithParameterID_value_relativeTime (parameterID_: CHHapticDynamicParameterID; value_: single; time: NSTimeInterval): id; message 'initWithParameterID:value:relativeTime:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  CHHapticParameterCurveControlPoint = objcclass external (NSObject)
  public
    procedure setRelativeTime(newValue: NSTimeInterval); message 'setRelativeTime:';
    function relativeTime: NSTimeInterval; message 'relativeTime';
    procedure setValue(newValue: single); message 'setValue:';
    function value: single; message 'value';
    function init: id; message 'init';
    function initWithRelativeTime_value (time: NSTimeInterval; value_: single): id; message 'initWithRelativeTime:value:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  CHHapticParameterCurve = objcclass external (NSObject)
  public
    function parameterID: CHHapticDynamicParameterID; message 'parameterID';
    procedure setRelativeTime(newValue: NSTimeInterval); message 'setRelativeTime:';
    function relativeTime: NSTimeInterval; message 'relativeTime';
    function controlPoints: NSArray; message 'controlPoints';
    function init: id; message 'init';
    function initWithParameterID_controlPoints_relativeTime (parameterID_: CHHapticDynamicParameterID; controlPoints_: NSArray; relativeTime_: NSTimeInterval): id; message 'initWithParameterID:controlPoints:relativeTime:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

