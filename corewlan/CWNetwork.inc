{ Parsed from CoreWLAN.framework CWNetwork.h }

{$ifdef TYPES}
type
  CWNetworkPtr = ^CWNetwork;
{$endif}

{$ifndef _CORE_WLAN_NETWORK_H_}
{$ifdef CLASSES}

type
  CWNetwork = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _scanRecord: NSDictionary;
  public
    function ssid: NSString; message 'ssid'; { available in 10_6 }
    function ssidData: NSData; message 'ssidData'; { available in 10_7 }
    function bssid: NSString; message 'bssid'; { available in 10_6 }
    function wlanChannel: CWChannel; message 'wlanChannel'; { available in 10_7 }
    function rssiValue: NSInteger; message 'rssiValue'; { available in 10_7 }
    function noiseMeasurement: NSInteger; message 'noiseMeasurement'; { available in 10_7 }
    function informationElementData: NSData; message 'informationElementData'; { available in 10_7 }
    function countryCode: NSString; message 'countryCode'; { available in 10_7 }
    function beaconInterval: NSInteger; message 'beaconInterval'; { available in 10_7 }
    function ibss: objcbool; message 'ibss'; { available in 10_7 }
    function isEqualToNetwork (network: CWNetwork): objcbool; message 'isEqualToNetwork:'; { available in 10_6 }
    function supportsSecurity (security: CWSecurity): objcbool; message 'supportsSecurity:'; { available in 10_7 }
    function supportsPHYMode (phyMode: CWPHYMode): objcbool; message 'supportsPHYMode:'; { available in 10_8 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$endif}
