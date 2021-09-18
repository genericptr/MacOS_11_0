{ Parsed from CoreBluetooth.framework CBCentralManagerConstants.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  CBCentralManagerOptionShowPowerAlertKey: NSString { available in 10_9, 7_0 }; cvar; external;
  CBCentralManagerOptionRestoreIdentifierKey: NSString { available in 10_13, 7_0 }; cvar; external;
  CBCentralManagerScanOptionAllowDuplicatesKey: NSString; cvar; external;
  CBCentralManagerScanOptionSolicitedServiceUUIDsKey: NSString { available in 10_9, 7_0 }; cvar; external;
  CBConnectPeripheralOptionNotifyOnConnectionKey: NSString { available in 10_13, 6_0 }; cvar; external;
  CBConnectPeripheralOptionNotifyOnDisconnectionKey: NSString; cvar; external;
  CBConnectPeripheralOptionNotifyOnNotificationKey: NSString { available in 10_13, 6_0 }; cvar; external;
  CBConnectPeripheralOptionStartDelayKey: NSString { available in 10_13, 6_0 }; cvar; external;
  CBConnectPeripheralOptionEnableTransportBridgingKey: NSString { available in 13_0 }; cvar; external;
  CBConnectPeripheralOptionRequiresANCS: NSString { available in 13_0 }; cvar; external;
  CBCentralManagerRestoredStatePeripheralsKey: NSString { available in 10_13, 7_0 }; cvar; external;
  CBCentralManagerRestoredStateScanServicesKey: NSString { available in 10_13, 7_0 }; cvar; external;
  CBCentralManagerRestoredStateScanOptionsKey: NSString { available in 10_13, 7_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CBConnectionEventMatchingOption = NSString;
  CBConnectionEventMatchingOptionPtr = ^CBConnectionEventMatchingOption;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CBConnectionEventMatchingOptionServiceUUIDs: CBConnectionEventMatchingOption { available in 13_0 }; cvar; external;
  CBConnectionEventMatchingOptionPeripheralUUIDs: CBConnectionEventMatchingOption { available in 13_0 }; cvar; external;
{$endif}

