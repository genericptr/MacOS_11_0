{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesPushKit;
interface

type
  PKPushCredentials = objcclass external;
  PKPushPayload = objcclass external;
  PKPushRegistry = objcclass external;
  PKPushRegistryDelegateProtocol = objcprotocol external name 'PKPushRegistryDelegate';

implementation
end.
