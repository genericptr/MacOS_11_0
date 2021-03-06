{ Parsed from EventKit.framework EKParticipant.h }

{ Types from EKParticipant }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  EKParticipantPtr = ^EKParticipant;
{$endif}

{$if defined(TARGET_OS_IPHONE)}

{$ifdef TYPES}
type
  ABRecordRef = CFTypeRef;
  ABRecordRefPtr = ^ABRecordRef;
  ABAddressBookRef = CFTypeRef;
  ABAddressBookRefPtr = ^ABAddressBookRef;
{$endif}

{$else}
{$endif}

{$ifdef CLASSES}

type
  EKParticipant = objcclass external (EKObject, NSCopyingProtocol)
  private
  public
    function URL: NSURL; message 'URL';
    function name: NSString; message 'name';
    function participantStatus: EKParticipantStatus; message 'participantStatus';
    function participantRole: EKParticipantRole; message 'participantRole';
    function participantType: EKParticipantType; message 'participantType';
    function isCurrentUser: objcbool; message 'isCurrentUser'; { available in macos 10.9, ios 6.0 }
    function contactPredicate: NSPredicate; message 'contactPredicate'; { available in macos 10.11, ios 9.0 }
    {$if defined(TARGET_OS_IPHONE)}
    {$if  not defined(TARGET_OS_WATCH)}
    function ABRecordWithAddressBook (addressBook: ABAddressBookRef): ABRecordRef; message 'ABRecordWithAddressBook:'; { available in ios 4.0, macCatalyst 14.0 }
    {$endif}
    {$else}
    function ABPersonInAddressBook (addressBook: ABAddressBook): ABPerson; message 'ABPersonInAddressBook:'; deprecated 'in 10_8, 10_11, "Use contactPredicate instead"';
    {$endif}

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

