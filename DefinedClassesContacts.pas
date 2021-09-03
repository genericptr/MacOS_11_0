{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesContacts;
interface

type
  CNChangeHistoryAddContactEvent = objcclass external;
  CNChangeHistoryAddGroupEvent = objcclass external;
  CNChangeHistoryAddMemberToGroupEvent = objcclass external;
  CNChangeHistoryAddSubgroupToGroupEvent = objcclass external;
  CNChangeHistoryDeleteContactEvent = objcclass external;
  CNChangeHistoryDeleteGroupEvent = objcclass external;
  CNChangeHistoryDropEverythingEvent = objcclass external;
  CNChangeHistoryEvent = objcclass external;
  CNChangeHistoryFetchRequest = objcclass external;
  CNChangeHistoryRemoveMemberFromGroupEvent = objcclass external;
  CNChangeHistoryRemoveSubgroupFromGroupEvent = objcclass external;
  CNChangeHistoryUpdateContactEvent = objcclass external;
  CNChangeHistoryUpdateGroupEvent = objcclass external;
  CNContact = objcclass external;
  CNContactFetchRequest = objcclass external;
  CNContactFormatter = objcclass external;
  CNContactProperty = objcclass external;
  CNContactRelation = objcclass external;
  CNContactStore = objcclass external;
  CNContactVCardSerialization = objcclass external;
  CNContactsUserDefaults = objcclass external;
  CNContainer = objcclass external;
  CNFetchRequest = objcclass external;
  CNFetchResult = objcclass external;
  CNGroup = objcclass external;
  CNInstantMessageAddress = objcclass external;
  CNLabeledValue = objcclass external;
  CNMutableContact = objcclass external;
  CNMutableGroup = objcclass external;
  CNMutablePostalAddress = objcclass external;
  CNPhoneNumber = objcclass external;
  CNPostalAddress = objcclass external;
  CNPostalAddressFormatter = objcclass external;
  CNSaveRequest = objcclass external;
  CNSocialProfile = objcclass external;
  CNChangeHistoryEventVisitorProtocol = objcprotocol external name 'CNChangeHistoryEventVisitor';
  CNKeyDescriptorProtocol = objcprotocol external name 'CNKeyDescriptor';

type
  CNChangeHistoryAnchor = objcclass external;

implementation
end.
