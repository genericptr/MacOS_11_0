{ Parsed from CoreWLAN.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreWLAN.framework/Headers/CWConfiguration.h }

{$ifdef TYPES}
type
  CWConfigurationPtr = ^CWConfiguration;
  CWMutableConfigurationPtr = ^CWMutableConfiguration;
{$endif}

{$ifndef _CORE_WLAN_CONFIGURATION_H_}
{$ifdef CLASSES}

type
  CWConfiguration = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  private
    _info: NSDictionary;
    _networkProfiles: id;
    _rememberJoinedNetworks: objcbool;
    _requireAdministratorForAssociation: objcbool;
    _requireAdministratorForPower: objcbool;
    _requireAdministratorForIBSSMode: objcbool;
  public
    function networkProfiles: NSOrderedSet; message 'networkProfiles'; { available in 10_7 }
    function requireAdministratorForAssociation: objcbool; message 'requireAdministratorForAssociation'; { available in 10_7 }
    function requireAdministratorForPower: objcbool; message 'requireAdministratorForPower'; { available in 10_7 }
    function requireAdministratorForIBSSMode: objcbool; message 'requireAdministratorForIBSSMode'; { available in 10_7 }
    function rememberJoinedNetworks: objcbool; message 'rememberJoinedNetworks'; { available in 10_7 }
    class function configuration: id; message 'configuration'; { available in 10_6 }
    function init: id; message 'init'; { available in 10_6 }
    function initWithConfiguration (configuration_: CWConfiguration): id; message 'initWithConfiguration:'; { available in 10_7 }
    class function configurationWithConfiguration (configuration_: CWConfiguration): id; message 'configurationWithConfiguration:'; { available in 10_7 }
    function isEqualToConfiguration (configuration_: CWConfiguration): objcbool; message 'isEqualToConfiguration:'; { available in 10_6 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  CWMutableConfiguration = objcclass external (CWConfiguration)
  public
    procedure setNetworkProfiles(newValue: NSOrderedSet); message 'setNetworkProfiles:'; { available in 10_7 }
    function networkProfiles: NSOrderedSet; message 'networkProfiles'; { available in 10_7 }
    procedure setRequireAdministratorForAssociation(newValue: objcbool); message 'setRequireAdministratorForAssociation:'; { available in 10_7 }
    function requireAdministratorForAssociation: objcbool; message 'requireAdministratorForAssociation'; { available in 10_7 }
    procedure setRequireAdministratorForPower(newValue: objcbool); message 'setRequireAdministratorForPower:'; { available in 10_7 }
    function requireAdministratorForPower: objcbool; message 'requireAdministratorForPower'; { available in 10_7 }
    procedure setRequireAdministratorForIBSSMode(newValue: objcbool); message 'setRequireAdministratorForIBSSMode:'; deprecated 'in 10_7, 11_0';
    function requireAdministratorForIBSSMode: objcbool; message 'requireAdministratorForIBSSMode'; deprecated 'in 10_7, 11_0';
    procedure setRememberJoinedNetworks(newValue: objcbool); message 'setRememberJoinedNetworks:'; { available in 10_7 }
    function rememberJoinedNetworks: objcbool; message 'rememberJoinedNetworks'; { available in 10_7 }
  end;
{$endif}

{$endif}
