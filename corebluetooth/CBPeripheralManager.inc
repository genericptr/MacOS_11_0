{ Parsed from CoreBluetooth.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreBluetooth.framework/Headers/CBPeripheralManager.h }

{$ifdef TYPES}
type
  CBPeripheralManagerPtr = ^CBPeripheralManager;
  CBPeripheralManagerDelegateProtocolPtr = ^CBPeripheralManagerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  CBPeripheralManagerAuthorizationStatus = NSInteger;
  CBPeripheralManagerAuthorizationStatusPtr = ^CBPeripheralManagerAuthorizationStatus;

const
  CBPeripheralManagerAuthorizationStatusNotDetermined = 0;
  CBPeripheralManagerAuthorizationStatusRestricted = 1;
  CBPeripheralManagerAuthorizationStatusDenied = 2;
  CBPeripheralManagerAuthorizationStatusAuthorized = 3;

type
  CBPeripheralManagerState = NSInteger;
  CBPeripheralManagerStatePtr = ^CBPeripheralManagerState;

const
  CBPeripheralManagerStateUnknown = CBManagerStateUnknown;
  CBPeripheralManagerStateResetting = CBManagerStateResetting;
  CBPeripheralManagerStateUnsupported = CBManagerStateUnsupported;
  CBPeripheralManagerStateUnauthorized = CBManagerStateUnauthorized;
  CBPeripheralManagerStatePoweredOff = CBManagerStatePoweredOff;
  CBPeripheralManagerStatePoweredOn = CBManagerStatePoweredOn;

type
  CBPeripheralManagerConnectionLatency = NSInteger;
  CBPeripheralManagerConnectionLatencyPtr = ^CBPeripheralManagerConnectionLatency;

const
  CBPeripheralManagerConnectionLatencyLow = 0;
  CBPeripheralManagerConnectionLatencyMedium = 1;
  CBPeripheralManagerConnectionLatencyHigh = 2;
{$endif}

{$ifdef CLASSES}

type
  CBPeripheralManager = objcclass external (CBManager)
  public
    procedure setDelegate(newValue: CBPeripheralManagerDelegateProtocol); message 'setDelegate:';
    function delegate: CBPeripheralManagerDelegateProtocol; message 'delegate';
    function isAdvertising: objcbool; message 'isAdvertising';
    class function authorizationStatus: CBPeripheralManagerAuthorizationStatus; message 'authorizationStatus'; deprecated 'in 10_9, 10_15, 7_0, 13_0, "Use CBManagerAuthorization instead"';
    function init: id; message 'init';
    function initWithDelegate_queue (delegate_: CBPeripheralManagerDelegateProtocol; queue: dispatch_queue_t): id; message 'initWithDelegate:queue:';
    function initWithDelegate_queue_options (delegate_: CBPeripheralManagerDelegateProtocol; queue: dispatch_queue_t; options: NSDictionary): id; message 'initWithDelegate:queue:options:'; { available in 10_9, 7_0 }
    procedure startAdvertising (advertisementData: NSDictionary); message 'startAdvertising:';
    procedure stopAdvertising; message 'stopAdvertising';
    procedure setDesiredConnectionLatency_forCentral (latency: CBPeripheralManagerConnectionLatency; central: CBCentral); message 'setDesiredConnectionLatency:forCentral:';
    procedure addService (service: CBMutableService); message 'addService:';
    procedure removeService (service: CBMutableService); message 'removeService:';
    procedure removeAllServices; message 'removeAllServices';
    procedure respondToRequest_withResult (request: CBATTRequest; result_: CBATTError); message 'respondToRequest:withResult:';
    function updateValue_forCharacteristic_onSubscribedCentrals (value: NSData; characteristic: CBMutableCharacteristic; centrals: NSArray): objcbool; message 'updateValue:forCharacteristic:onSubscribedCentrals:';
    procedure publishL2CAPChannelWithEncryption (encryptionRequired: objcbool); message 'publishL2CAPChannelWithEncryption:'; { available in 10_14, 11_0 }
    procedure unpublishL2CAPChannel (PSM: CBL2CAPPSM); message 'unpublishL2CAPChannel:'; { available in 10_14, 11_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CBPeripheralManagerDelegateProtocol = objcprotocol external name 'CBPeripheralManagerDelegate' (NSObjectProtocol)
  required
    procedure peripheralManagerDidUpdateState (peripheral: CBPeripheralManager); message 'peripheralManagerDidUpdateState:';
  optional
    procedure peripheralManager_willRestoreState (peripheral: CBPeripheralManager; dict: NSDictionary); message 'peripheralManager:willRestoreState:';
    procedure peripheralManagerDidStartAdvertising_error (peripheral: CBPeripheralManager; error: NSError); message 'peripheralManagerDidStartAdvertising:error:';
    procedure peripheralManager_didAddService_error (peripheral: CBPeripheralManager; service: CBService; error: NSError); message 'peripheralManager:didAddService:error:';
    procedure peripheralManager_central_didSubscribeToCharacteristic (peripheral: CBPeripheralManager; central: CBCentral; characteristic: CBCharacteristic); message 'peripheralManager:central:didSubscribeToCharacteristic:';
    procedure peripheralManager_central_didUnsubscribeFromCharacteristic (peripheral: CBPeripheralManager; central: CBCentral; characteristic: CBCharacteristic); message 'peripheralManager:central:didUnsubscribeFromCharacteristic:';
    procedure peripheralManager_didReceiveReadRequest (peripheral: CBPeripheralManager; request: CBATTRequest); message 'peripheralManager:didReceiveReadRequest:';
    procedure peripheralManager_didReceiveWriteRequests (peripheral: CBPeripheralManager; requests: NSArray); message 'peripheralManager:didReceiveWriteRequests:';
    procedure peripheralManagerIsReadyToUpdateSubscribers (peripheral: CBPeripheralManager); message 'peripheralManagerIsReadyToUpdateSubscribers:';
    procedure peripheralManager_didPublishL2CAPChannel_error (peripheral: CBPeripheralManager; PSM: CBL2CAPPSM; error: NSError); message 'peripheralManager:didPublishL2CAPChannel:error:';
    procedure peripheralManager_didUnpublishL2CAPChannel_error (peripheral: CBPeripheralManager; PSM: CBL2CAPPSM; error: NSError); message 'peripheralManager:didUnpublishL2CAPChannel:error:';
    procedure peripheralManager_didOpenL2CAPChannel_error (peripheral: CBPeripheralManager; channel: CBL2CAPChannel; error: NSError); message 'peripheralManager:didOpenL2CAPChannel:error:';
  end;
{$endif}

