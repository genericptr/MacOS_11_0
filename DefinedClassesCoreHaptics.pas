{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesCoreHaptics;
interface

type
  CHHapticDynamicParameter = objcclass external;
  CHHapticEngine = objcclass external;
  CHHapticEvent = objcclass external;
  CHHapticEventParameter = objcclass external;
  CHHapticParameterCurve = objcclass external;
  CHHapticParameterCurveControlPoint = objcclass external;
  CHHapticPattern = objcclass external;
  CHHapticAdvancedPatternPlayerProtocol = objcprotocol external name 'CHHapticAdvancedPatternPlayer';
  CHHapticDeviceCapabilityProtocol = objcprotocol external name 'CHHapticDeviceCapability';
  CHHapticParameterAttributesProtocol = objcprotocol external name 'CHHapticParameterAttributes';
  CHHapticPatternPlayerProtocol = objcprotocol external name 'CHHapticPatternPlayer';

type
  AVAudioSession = objcclass external;

implementation
end.
