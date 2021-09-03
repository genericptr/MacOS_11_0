{ Parsed from SensorKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SensorKit.framework/Headers/SRSensors.h }
{$ifdef TYPES}
type
  SRSensor = NSString { unavailable in watchos, macos) API_UNAVAILABLE(tvos };
  SRSensorPtr = ^SRSensor { unavailable in watchos, macos) API_UNAVAILABLE(tvos };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SRSensorAmbientLightSensor: SRSensor { unavailable in watchos, macos) API_UNAVAILABLE(tvos }; cvar; external;
  SRSensorAccelerometer: SRSensor { unavailable in watchos, macos) API_UNAVAILABLE(tvos }; cvar; external;
  SRSensorRotationRate: SRSensor { unavailable in watchos, macos) API_UNAVAILABLE(tvos }; cvar; external;
  SRSensorVisits: SRSensor { unavailable in watchos, macos) API_UNAVAILABLE(tvos }; cvar; external;
  SRSensorPedometerData: SRSensor { unavailable in watchos, macos) API_UNAVAILABLE(tvos }; cvar; external;
  SRSensorDeviceUsageReport: SRSensor { unavailable in watchos, macos) API_UNAVAILABLE(tvos }; cvar; external;
  SRSensorMessagesUsageReport: SRSensor { unavailable in watchos, macos) API_UNAVAILABLE(tvos }; cvar; external;
  SRSensorPhoneUsageReport: SRSensor { unavailable in watchos, macos) API_UNAVAILABLE(tvos }; cvar; external;
  SRSensorOnWristState: SRSensor { unavailable in watchos, macos) API_UNAVAILABLE(tvos }; cvar; external;
  SRSensorKeyboardMetrics: SRSensor { unavailable in watchos, macos) API_UNAVAILABLE(tvos }; cvar; external;
{$endif}

