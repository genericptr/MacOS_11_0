{ Parsed from Contacts.framework CNChangeHistoryEvent.h }

{$ifdef TYPES}
type
  CNChangeHistoryEventPtr = ^CNChangeHistoryEvent;
  CNChangeHistoryDropEverythingEventPtr = ^CNChangeHistoryDropEverythingEvent;
  CNChangeHistoryAddContactEventPtr = ^CNChangeHistoryAddContactEvent;
  CNChangeHistoryUpdateContactEventPtr = ^CNChangeHistoryUpdateContactEvent;
  CNChangeHistoryDeleteContactEventPtr = ^CNChangeHistoryDeleteContactEvent;
  CNChangeHistoryAddGroupEventPtr = ^CNChangeHistoryAddGroupEvent;
  CNChangeHistoryUpdateGroupEventPtr = ^CNChangeHistoryUpdateGroupEvent;
  CNChangeHistoryDeleteGroupEventPtr = ^CNChangeHistoryDeleteGroupEvent;
  CNChangeHistoryAddMemberToGroupEventPtr = ^CNChangeHistoryAddMemberToGroupEvent;
  CNChangeHistoryRemoveMemberFromGroupEventPtr = ^CNChangeHistoryRemoveMemberFromGroupEvent;
  CNChangeHistoryAddSubgroupToGroupEventPtr = ^CNChangeHistoryAddSubgroupToGroupEvent;
  CNChangeHistoryRemoveSubgroupFromGroupEventPtr = ^CNChangeHistoryRemoveSubgroupFromGroupEvent;
  CNChangeHistoryEventVisitorProtocolPtr = ^CNChangeHistoryEventVisitorProtocol;
{$endif}

{$ifdef CLASSES}

type
  CNChangeHistoryEvent = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure acceptEventVisitor (visitor: CNChangeHistoryEventVisitorProtocol); message 'acceptEventVisitor:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  CNChangeHistoryDropEverythingEvent = objcclass external (CNChangeHistoryEvent)
  end;

type
  CNChangeHistoryAddContactEvent = objcclass external (CNChangeHistoryEvent)
  public
    function contact: CNContact; message 'contact';
    function containerIdentifier: NSString; message 'containerIdentifier';
  end;

type
  CNChangeHistoryUpdateContactEvent = objcclass external (CNChangeHistoryEvent)
  public
    function contact: CNContact; message 'contact';
  end;

type
  CNChangeHistoryDeleteContactEvent = objcclass external (CNChangeHistoryEvent)
  public
    function contactIdentifier: NSString; message 'contactIdentifier';
  end;

type
  CNChangeHistoryAddGroupEvent = objcclass external (CNChangeHistoryEvent)
  public
    function group: CNGroup; message 'group';
    function containerIdentifier: NSString; message 'containerIdentifier';
  end;

type
  CNChangeHistoryUpdateGroupEvent = objcclass external (CNChangeHistoryEvent)
  public
    function group: CNGroup; message 'group';
  end;

type
  CNChangeHistoryDeleteGroupEvent = objcclass external (CNChangeHistoryEvent)
  public
    function groupIdentifier: NSString; message 'groupIdentifier';
  end;

type
  CNChangeHistoryAddMemberToGroupEvent = objcclass external (CNChangeHistoryEvent)
  public
    function member: CNContact; message 'member';
    function group: CNGroup; message 'group';
  end;

type
  CNChangeHistoryRemoveMemberFromGroupEvent = objcclass external (CNChangeHistoryEvent)
  public
    function member: CNContact; message 'member';
    function group: CNGroup; message 'group';
  end;

type
  CNChangeHistoryAddSubgroupToGroupEvent = objcclass external (CNChangeHistoryEvent)
  public
    function subgroup: CNGroup; message 'subgroup';
    function group: CNGroup; message 'group';
  end;

type
  CNChangeHistoryRemoveSubgroupFromGroupEvent = objcclass external (CNChangeHistoryEvent)
  public
    function subgroup: CNGroup; message 'subgroup';
    function group: CNGroup; message 'group';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CNChangeHistoryEventVisitorProtocol = objcprotocol external name 'CNChangeHistoryEventVisitor' (NSObjectProtocol)
    procedure visitDropEverythingEvent (event: CNChangeHistoryDropEverythingEvent); message 'visitDropEverythingEvent:';
    procedure visitAddContactEvent (event: CNChangeHistoryAddContactEvent); message 'visitAddContactEvent:';
    procedure visitUpdateContactEvent (event: CNChangeHistoryUpdateContactEvent); message 'visitUpdateContactEvent:';
    procedure visitDeleteContactEvent (event: CNChangeHistoryDeleteContactEvent); message 'visitDeleteContactEvent:';
  optional
    procedure visitAddGroupEvent (event: CNChangeHistoryAddGroupEvent); message 'visitAddGroupEvent:';
    procedure visitUpdateGroupEvent (event: CNChangeHistoryUpdateGroupEvent); message 'visitUpdateGroupEvent:';
    procedure visitDeleteGroupEvent (event: CNChangeHistoryDeleteGroupEvent); message 'visitDeleteGroupEvent:';
    procedure visitAddMemberToGroupEvent (event: CNChangeHistoryAddMemberToGroupEvent); message 'visitAddMemberToGroupEvent:';
    procedure visitRemoveMemberFromGroupEvent (event: CNChangeHistoryRemoveMemberFromGroupEvent); message 'visitRemoveMemberFromGroupEvent:';
    procedure visitAddSubgroupToGroupEvent (event: CNChangeHistoryAddSubgroupToGroupEvent); message 'visitAddSubgroupToGroupEvent:';
    procedure visitRemoveSubgroupFromGroupEvent (event: CNChangeHistoryRemoveSubgroupFromGroupEvent); message 'visitRemoveSubgroupFromGroupEvent:';
  end;
{$endif}

