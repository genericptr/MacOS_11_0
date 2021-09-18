{ Parsed from CoreWLAN.framework CWNetworkProfile.h }

{$ifdef TYPES}
type
  CWNetworkProfilePtr = ^CWNetworkProfile;
  CWMutableNetworkProfilePtr = ^CWMutableNetworkProfile;
{$endif}

{$ifndef _CORE_WLAN_NETWORK_PROFILE_H_}
{$ifdef CLASSES}

type
  CWNetworkProfile = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  private
    _ssidData: NSData;
    _ssid: NSString;
    _securityType: NSUInteger;
    _disabled: objcbool;
    _systemMode: objcbool;
    _hiddenNetwork: objcbool;
    _lastAutoJoinAt: NSDate;
    _lastManualJoinAt: NSDate;
    _captiveNetworkStatus: NSInteger;
    _wasCaptiveNetwork: objcbool;
    _temporarilyDisabled: objcbool;
    _captiveBypass: objcbool;
    _captiveSheetTimestamp: NSDate;
    _isPasspoint: objcbool;
    _domainName: NSString;
    _displayName: NSString;
    _roamingConsortiumList: NSArray;
    _naiRealmList: NSArray;
    _isServiceProviderRoamingEnabled: objcbool;
    _possiblyHiddenNetwork: objcbool;
    _collocatedGroup: NSSet;
    _channelHistory: NSSet;
    _roamingProfileType: NSInteger;
    _isPersonalHotspot: objcbool;
    _bssidList: NSArray;
    _shareMode: NSInteger;
    _userRole: NSInteger;
    _payloadUUID: NSString;
    _addedBy: NSUInteger;
    _addedAt: NSDate;
    _wasHiddenBefore: NSDate;
    _userPreferredOrderTimestamp: NSDate;
    _updatedAt: NSDate;
  public
    function ssid: NSString; message 'ssid'; { available in 10_7 }
    function ssidData: NSData; message 'ssidData'; { available in 10_7 }
    function security: CWSecurity; message 'security'; { available in 10_7 }
    class function networkProfile: id; message 'networkProfile'; { available in 10_7 }
    function init: id; message 'init'; { available in 10_7 }
    function initWithNetworkProfile (networkProfile_: CWNetworkProfile): id; message 'initWithNetworkProfile:'; { available in 10_7 }
    class function networkProfileWithNetworkProfile (networkProfile_: CWNetworkProfile): id; message 'networkProfileWithNetworkProfile:'; { available in 10_7 }
    function isEqualToNetworkProfile (networkProfile_: CWNetworkProfile): objcbool; message 'isEqualToNetworkProfile:'; { available in 10_7 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  CWMutableNetworkProfile = objcclass external (CWNetworkProfile)
  public
    procedure setSsidData(newValue: NSData); message 'setSsidData:'; { available in 10_7 }
    function ssidData: NSData; message 'ssidData'; { available in 10_7 }
    procedure setSecurity(newValue: CWSecurity); message 'setSecurity:'; { available in 10_7 }
    function security: CWSecurity; message 'security'; { available in 10_7 }
  end;
{$endif}

{$endif}
