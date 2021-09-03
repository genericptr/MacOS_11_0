{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesContactsUI;
interface

type
  CNContactPicker = objcclass external;
  CNContactViewController = objcclass external;
  CNContactPickerDelegateProtocol = objcprotocol external name 'CNContactPickerDelegate';

type
  CNContact = objcclass external;
  CNContactProperty = objcclass external;
  CNKeyDescriptorProtocol = objcprotocol external name 'CNKeyDescriptor';

implementation
end.
