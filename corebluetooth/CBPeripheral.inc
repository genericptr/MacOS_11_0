{ Parsed from CoreBluetooth.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreBluetooth.framework/Headers/CBPeripheral.h }

{$ifdef TYPES}
type
  CBPeripheralPtr = ^CBPeripheral;
  CBPeripheralDelegateProtocolPtr = ^CBPeripheralDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  CBPeripheralState = NSInteger;
  CBPeripheralStatePtr = ^CBPeripheralState;

const
  CBPeripheralStateDisconnected = 0;
  CBPeripheralStateConnecting = 1;
  CBPeripheralStateConnected = 2;
  CBPeripheralStateDisconnecting = 3 { available in 10_13, 9_0 };

type
  CBCharacteristicWriteType = NSInteger;
  CBCharacteristicWriteTypePtr = ^CBCharacteristicWriteType;

const
  CBCharacteristicWriteWithResponse = 0;
  CBCharacteristicWriteWithoutResponse = 1;
{$endif}

{$ifdef CLASSES}

type
  CBPeripheral = objcclass external (CBPeer)
  public
    procedure setDelegate(newValue: CBPeripheralDelegateProtocol); message 'setDelegate:';
    function delegate: CBPeripheralDelegateProtocol; message 'delegate';
    function name: NSString; message 'name';
    function RSSI: NSNumber; message 'RSSI'; deprecated 'in 10_7, 10_13, 5_0, 8_0';
    function state: CBPeripheralState; message 'state';
    function services: NSArray; message 'services';
    function canSendWriteWithoutResponse: objcbool; message 'canSendWriteWithoutResponse'; { available in 10_13, 11_0 }
    function ancsAuthorized: objcbool; message 'ancsAuthorized'; { available in 13_0 }
    procedure readRSSI; message 'readRSSI';
    procedure discoverServices (serviceUUIDs: NSArray); message 'discoverServices:';
    procedure discoverIncludedServices_forService (includedServiceUUIDs: NSArray; service: CBService); message 'discoverIncludedServices:forService:';
    procedure discoverCharacteristics_forService (characteristicUUIDs: NSArray; service: CBService); message 'discoverCharacteristics:forService:';
    procedure readValueForCharacteristic (characteristic: CBCharacteristic); message 'readValueForCharacteristic:';
    function maximumWriteValueLengthForType (type_: CBCharacteristicWriteType): NSUInteger; message 'maximumWriteValueLengthForType:'; { available in 10_12, 9_0 }
    procedure writeValue_forCharacteristic_type (data: NSData; characteristic: CBCharacteristic; type_: CBCharacteristicWriteType); message 'writeValue:forCharacteristic:type:';
    procedure setNotifyValue_forCharacteristic (enabled: objcbool; characteristic: CBCharacteristic); message 'setNotifyValue:forCharacteristic:';
    procedure discoverDescriptorsForCharacteristic (characteristic: CBCharacteristic); message 'discoverDescriptorsForCharacteristic:';
    procedure readValueForDescriptor (descriptor: CBDescriptor); message 'readValueForDescriptor:';
    procedure writeValue_forDescriptor (data: NSData; descriptor: CBDescriptor); message 'writeValue:forDescriptor:';
    procedure openL2CAPChannel (PSM: CBL2CAPPSM); message 'openL2CAPChannel:'; { available in 10_14, 11_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CBPeripheralDelegateProtocol = objcprotocol external name 'CBPeripheralDelegate' (NSObjectProtocol)
  optional
    procedure peripheralDidUpdateName (peripheral: CBPeripheral); message 'peripheralDidUpdateName:'; { available in 10_9, 6_0 }
    procedure peripheral_didModifyServices (peripheral: CBPeripheral; invalidatedServices: NSArray); message 'peripheral:didModifyServices:'; { available in 10_9, 7_0 }
    procedure peripheralDidUpdateRSSI_error (peripheral: CBPeripheral; error: NSError); message 'peripheralDidUpdateRSSI:error:'; deprecated 'in 10_7, 10_13, 5_0, 8_0';
    procedure peripheral_didReadRSSI_error (peripheral: CBPeripheral; RSSI: NSNumber; error: NSError); message 'peripheral:didReadRSSI:error:'; { available in 10_13, 8_0 }
    procedure peripheral_didDiscoverServices (peripheral: CBPeripheral; error: NSError); message 'peripheral:didDiscoverServices:';
    procedure peripheral_didDiscoverIncludedServicesForService_error (peripheral: CBPeripheral; service: CBService; error: NSError); message 'peripheral:didDiscoverIncludedServicesForService:error:';
    procedure peripheral_didDiscoverCharacteristicsForService_error (peripheral: CBPeripheral; service: CBService; error: NSError); message 'peripheral:didDiscoverCharacteristicsForService:error:';
    procedure peripheral_didUpdateValueForCharacteristic_error (peripheral: CBPeripheral; characteristic: CBCharacteristic; error: NSError); message 'peripheral:didUpdateValueForCharacteristic:error:';
    procedure peripheral_didWriteValueForCharacteristic_error (peripheral: CBPeripheral; characteristic: CBCharacteristic; error: NSError); message 'peripheral:didWriteValueForCharacteristic:error:';
    procedure peripheral_didUpdateNotificationStateForCharacteristic_error (peripheral: CBPeripheral; characteristic: CBCharacteristic; error: NSError); message 'peripheral:didUpdateNotificationStateForCharacteristic:error:';
    procedure peripheral_didDiscoverDescriptorsForCharacteristic_error (peripheral: CBPeripheral; characteristic: CBCharacteristic; error: NSError); message 'peripheral:didDiscoverDescriptorsForCharacteristic:error:';
    procedure peripheral_didUpdateValueForDescriptor_error (peripheral: CBPeripheral; descriptor: CBDescriptor; error: NSError); message 'peripheral:didUpdateValueForDescriptor:error:';
    procedure peripheral_didWriteValueForDescriptor_error (peripheral: CBPeripheral; descriptor: CBDescriptor; error: NSError); message 'peripheral:didWriteValueForDescriptor:error:';
    procedure peripheralIsReadyToSendWriteWithoutResponse (peripheral: CBPeripheral); message 'peripheralIsReadyToSendWriteWithoutResponse:';
    procedure peripheral_didOpenL2CAPChannel_error (peripheral: CBPeripheral; channel: CBL2CAPChannel; error: NSError); message 'peripheral:didOpenL2CAPChannel:error:';
  end;
{$endif}

