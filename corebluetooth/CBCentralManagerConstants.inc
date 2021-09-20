{ Parsed from CoreBluetooth.framework CBCentralManagerConstants.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  CBCentralManagerOptionShowPowerAlertKey: NSString { available in macos 10.9, ios 7.0 }; cvar; external;
  CBCentralManagerOptionRestoreIdentifierKey: NSString { available in macos 10.13, ios 7.0 }; cvar; external;
  CBCentralManagerScanOptionAllowDuplicatesKey: NSString; cvar; external;
  CBCentralManagerScanOptionSolicitedServiceUUIDsKey: NSString { available in macos 10.9, ios 7.0 }; cvar; external;
  CBConnectPeripheralOptionNotifyOnConnectionKey: NSString { available in macos 10.13, ios 6.0 }; cvar; external;
  CBConnectPeripheralOptionNotifyOnDisconnectionKey: NSString; cvar; external;
  CBConnectPeripheralOptionNotifyOnNotificationKey: NSString { available in macos 10.13, ios 6.0 }; cvar; external;
  CBConnectPeripheralOptionStartDelayKey: NSString { available in macos 10.13, ios 6.0 }; cvar; external;
  CBConnectPeripheralOptionEnableTransportBridgingKey: NSString { available in 13_0 }; cvar; external;
  CBConnectPeripheralOptionRequiresANCS: NSString { available in 13_0 }; cvar; external;
  CBCentralManagerRestoredStatePeripheralsKey: NSString { available in macos 10.13, ios 7.0 }; cvar; external;
  CBCentralManagerRestoredStateScanServicesKey: NSString { available in macos 10.13, ios 7.0 }; cvar; external;
  CBCentralManagerRestoredStateScanOptionsKey: NSString { available in macos 10.13, ios 7.0 }; cvar; external;
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

