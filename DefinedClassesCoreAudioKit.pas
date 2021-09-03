{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesCoreAudioKit;
interface

type
  AUAudioUnitViewConfiguration = objcclass external;
  AUGenericView = objcclass external;
  AUPannerView = objcclass external;
  AUViewController = objcclass external;
  CABTLEMIDIWindowController = objcclass external;
  CAInterDeviceAudioViewController = objcclass external;
  CANetworkBrowserWindowController = objcclass external;
  AUCustomViewPersistentDataProtocol = objcprotocol external name 'AUCustomViewPersistentData';

type
  CABTLEMIDIImpl = objcclass external;
  CANetworkBrowserImpl = objcclass external;
  NSDictionary = objcclass external;

implementation
end.
