{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesCoreWLAN;
interface

type
  CWChannel = objcclass external;
  CWConfiguration = objcclass external;
  CWInterface = objcclass external;
  CWMutableConfiguration = objcclass external;
  CWMutableNetworkProfile = objcclass external;
  CWNetwork = objcclass external;
  CWNetworkProfile = objcclass external;
  CWWiFiClient = objcclass external;
  CWEventDelegateProtocol = objcprotocol external name 'CWEventDelegate';

type
  SFAuthorization = objcclass external;

implementation
end.
