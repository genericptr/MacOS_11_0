{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesSensorKit;
interface

type
  SRAmbientLightSample = objcclass external;
  SRApplicationUsage = objcclass external;
  SRDeletionRecord = objcclass external;
  SRDevice = objcclass external;
  SRDeviceUsageReport = objcclass external;
  SRFetchRequest = objcclass external;
  SRFetchResult = objcclass external;
  SRKeyboardMetrics = objcclass external;
  SRKeyboardProbabilityMetric = objcclass external;
  SRMessagesUsageReport = objcclass external;
  SRNotificationUsage = objcclass external;
  SRPhoneUsageReport = objcclass external;
  SRSensorReader = objcclass external;
  SRVisit = objcclass external;
  SRWebUsage = objcclass external;
  SRWristDetection = objcclass external;
  SRSensorReaderDelegateProtocol = objcprotocol external name 'SRSensorReaderDelegate';

implementation
end.
