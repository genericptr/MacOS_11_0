{ Parsed from CoreWLAN.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreWLAN.framework/Headers/CWInterface.h }

{$ifdef TYPES}
type
  CWInterfacePtr = ^CWInterface;
{$endif}

{$ifndef _CORE_WLAN_INTERFACE_H_}
{$ifdef CLASSES}

type
  CWInterface = objcclass external (NSObject)
  private
    _device: pointer;
    _interfaceName: NSString;
    _capabilities: id;
    _interfaceRemovedNotificationPort: pointer;
    _interfaceRemovedNotification: mach_port_t;
    _deviceAttached: objcbool;
    _eapolClient: id;
    _ipMonitor: id;
    _internalQueue: dispatch_queue_t;
    _serviceStore: pointer;
    _interfaceStore: pointer;
    _lastPowerState: objcbool;
    _eventQueue: dispatch_queue_t;
    _xpcConnection: NSXPCConnection;
    _ownsXPCConnection: objcbool;
  public
    function interfaceName: NSString; message 'interfaceName'; { available in 10_7 }
    function powerOn: objcbool; message 'powerOn'; { available in 10_7 }
    function supportedWLANChannels: NSSet; message 'supportedWLANChannels'; { available in 10_7 }
    function wlanChannel: CWChannel; message 'wlanChannel'; { available in 10_7 }
    function activePHYMode: CWPHYMode; message 'activePHYMode'; { available in 10_7 }
    function ssid: NSString; message 'ssid'; { available in 10_6 }
    function ssidData: NSData; message 'ssidData'; { available in 10_7 }
    function bssid: NSString; message 'bssid'; { available in 10_6 }
    function rssiValue: NSInteger; message 'rssiValue'; { available in 10_7 }
    function noiseMeasurement: NSInteger; message 'noiseMeasurement'; { available in 10_7 }
    function security: CWSecurity; message 'security'; { available in 10_7 }
    function transmitRate: double; message 'transmitRate'; { available in 10_7 }
    function countryCode: NSString; message 'countryCode'; { available in 10_6 }
    function interfaceMode: CWInterfaceMode; message 'interfaceMode'; { available in 10_7 }
    function transmitPower: NSInteger; message 'transmitPower'; { available in 10_7 }
    function hardwareAddress: NSString; message 'hardwareAddress'; { available in 10_7 }
    function serviceActive: objcbool; message 'serviceActive'; { available in 10_7 }
    function cachedScanResults: NSSet; message 'cachedScanResults'; { available in 10_7 }
    function configuration: CWConfiguration; message 'configuration'; { available in 10_6 }
    class function interfaceNames: NSSet; message 'interfaceNames'; deprecated 'in 10_6, 10_10, "Use +[CWWiFiClient interfaceNames] instead"';
    class function interface_: id; message 'interface'; deprecated 'in 10_6, 10_10, "Use -[CWWiFiClient interface] instead"';
    class function interfaceWithName (name: NSString): id; message 'interfaceWithName:'; deprecated 'in 10_6, 10_10, "Use -[CWWiFiClient interfaceWithName:] instead"';
    function initWithInterfaceName (name: NSString): id; message 'initWithInterfaceName:'; deprecated 'in 10_6, 10_10, "Use -[CWWiFiClient interfaceWithName:] instead"';
    function setPower_error (power: objcbool; error: NSErrorPtr): objcbool; message 'setPower:error:'; { available in 10_6 }
    function setWLANChannel_error (channel: CWChannel; error: NSErrorPtr): objcbool; message 'setWLANChannel:error:'; { available in 10_7 }
    function setPairwiseMasterKey_error (key: NSData; error: NSErrorPtr): objcbool; message 'setPairwiseMasterKey:error:'; { available in 10_6 }
    function setWEPKey_flags_index_error (key: NSData; flags: CWCipherKeyFlags; index: NSInteger; error: NSErrorPtr): objcbool; message 'setWEPKey:flags:index:error:'; { available in 10_6 }
    function scanForNetworksWithSSID_error (ssid_: NSData; error: NSErrorPtr): NSSet; message 'scanForNetworksWithSSID:error:'; { available in 10_7 }
    function scanForNetworksWithSSID_includeHidden_error (ssid_: NSData; includeHidden: objcbool; error: NSErrorPtr): NSSet; message 'scanForNetworksWithSSID:includeHidden:error:'; { available in 10_13 }
    function scanForNetworksWithName_error (networkName: NSString; error: NSErrorPtr): NSSet; message 'scanForNetworksWithName:error:'; { available in 10_7 }
    function scanForNetworksWithName_includeHidden_error (networkName: NSString; includeHidden: objcbool; error: NSErrorPtr): NSSet; message 'scanForNetworksWithName:includeHidden:error:'; { available in 10_13 }
    function associateToNetwork_password_error (network: CWNetwork; password: NSString; error: NSErrorPtr): objcbool; message 'associateToNetwork:password:error:'; { available in 10_7 }
    procedure disassociate; message 'disassociate'; { available in 10_6 }
    function associateToEnterpriseNetwork_identity_username_password_error (network: CWNetwork; identity: SecIdentityRef; username: NSString; password: NSString; error: NSErrorPtr): objcbool; message 'associateToEnterpriseNetwork:identity:username:password:error:'; { available in 10_7 }
    function startIBSSModeWithSSID_security_channel_password_error (ssidData_: NSData; security_: CWIBSSModeSecurity; channel: NSUInteger; password: NSString; error: NSErrorPtr): objcbool; message 'startIBSSModeWithSSID:security:channel:password:error:'; deprecated 'in 10_7, 11_0';
    function commitConfiguration_authorization_error (configuration_: CWConfiguration; authorization: SFAuthorization; error: NSErrorPtr): objcbool; message 'commitConfiguration:authorization:error:'; { available in 10_7 }
  end;
{$endif}

{$endif}
