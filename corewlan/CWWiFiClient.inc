{ Parsed from CoreWLAN.framework CWWiFiClient.h }

{$ifdef TYPES}
type
  CWWiFiClientPtr = ^CWWiFiClient;
  CWEventDelegateProtocolPtr = ^CWEventDelegateProtocol;
{$endif}

{$ifndef _CORE_WLAN_WIFI_CLIENT_H_}
{$ifdef PROTOCOLS}

type
  CWEventDelegateProtocol = objcprotocol external name 'CWEventDelegate'
  optional
    procedure clientConnectionInterrupted; message 'clientConnectionInterrupted';
    procedure clientConnectionInvalidated; message 'clientConnectionInvalidated';
    procedure powerStateDidChangeForWiFiInterfaceWithName (interfaceName: NSString); message 'powerStateDidChangeForWiFiInterfaceWithName:';
    procedure ssidDidChangeForWiFiInterfaceWithName (interfaceName: NSString); message 'ssidDidChangeForWiFiInterfaceWithName:';
    procedure bssidDidChangeForWiFiInterfaceWithName (interfaceName: NSString); message 'bssidDidChangeForWiFiInterfaceWithName:';
    procedure countryCodeDidChangeForWiFiInterfaceWithName (interfaceName: NSString); message 'countryCodeDidChangeForWiFiInterfaceWithName:';
    procedure linkDidChangeForWiFiInterfaceWithName (interfaceName: NSString); message 'linkDidChangeForWiFiInterfaceWithName:';
    procedure linkQualityDidChangeForWiFiInterfaceWithName_rssi_transmitRate (interfaceName: NSString; rssi: NSInteger; transmitRate: double); message 'linkQualityDidChangeForWiFiInterfaceWithName:rssi:transmitRate:';
    procedure modeDidChangeForWiFiInterfaceWithName (interfaceName: NSString); message 'modeDidChangeForWiFiInterfaceWithName:';
    procedure scanCacheUpdatedForWiFiInterfaceWithName (interfaceName: NSString); message 'scanCacheUpdatedForWiFiInterfaceWithName:';
  end;
{$endif}

{$ifdef CLASSES}

type
  CWWiFiClient = objcclass external (NSObject)
  private
    _xpcConnection: NSXPCConnection;
    _eventList: NSMutableSet;
    _eventQueue: dispatch_queue_t;
    _interfaceMap: NSMutableDictionary;
    _mutex: dispatch_queue_t;
    _delegate: id;
  public
    procedure setDelegate(newValue: id); message 'setDelegate:'; { available in 10_10 }
    function delegate: id; message 'delegate'; { available in 10_10 }
    class function sharedWiFiClient: CWWiFiClient; message 'sharedWiFiClient'; { available in 10_10 }
    function init: id; message 'init'; { available in 10_10 }
    function interface_: CWInterface; message 'interface'; { available in 10_10 }
    class function interfaceNames: NSArray; message 'interfaceNames'; { available in 10_10 }
    function interfaceWithName (interfaceName: NSString): CWInterface; message 'interfaceWithName:'; { available in 10_10 }
    function interfaces: NSArray; message 'interfaces'; { available in 10_10 }
    function startMonitoringEventWithType_error (type_: CWEventType; error: NSErrorPtr): objcbool; message 'startMonitoringEventWithType:error:'; { available in 10_10 }
    function stopMonitoringEventWithType_error (type_: CWEventType; error: NSErrorPtr): objcbool; message 'stopMonitoringEventWithType:error:'; { available in 10_10 }
    function stopMonitoringAllEventsAndReturnError (error: NSErrorPtr): objcbool; message 'stopMonitoringAllEventsAndReturnError:'; { available in 10_10 }
  end;
{$endif}

{$endif}
