{ Parsed from SensorKit.framework SRSensors.h }
{$ifdef TYPES}
type
  SRSensor = NSString { unavailable in watchos, macos } { unavailable in tvos };
  SRSensorPtr = ^SRSensor { unavailable in watchos, macos } { unavailable in tvos };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SRSensorAmbientLightSensor: SRSensor { unavailable in watchos, macos } { unavailable in tvos }; cvar; external;
  SRSensorAccelerometer: SRSensor { unavailable in watchos, macos } { unavailable in tvos }; cvar; external;
  SRSensorRotationRate: SRSensor { unavailable in watchos, macos } { unavailable in tvos }; cvar; external;
  SRSensorVisits: SRSensor { unavailable in watchos, macos } { unavailable in tvos }; cvar; external;
  SRSensorPedometerData: SRSensor { unavailable in watchos, macos } { unavailable in tvos }; cvar; external;
  SRSensorDeviceUsageReport: SRSensor { unavailable in watchos, macos } { unavailable in tvos }; cvar; external;
  SRSensorMessagesUsageReport: SRSensor { unavailable in watchos, macos } { unavailable in tvos }; cvar; external;
  SRSensorPhoneUsageReport: SRSensor { unavailable in watchos, macos } { unavailable in tvos }; cvar; external;
  SRSensorOnWristState: SRSensor { unavailable in watchos, macos } { unavailable in tvos }; cvar; external;
  SRSensorKeyboardMetrics: SRSensor { unavailable in watchos, macos } { unavailable in tvos }; cvar; external;
{$endif}

