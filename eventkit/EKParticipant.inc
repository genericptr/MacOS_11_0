{ Parsed from EventKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/EventKit.framework/Headers/EKParticipant.h }

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
    function isCurrentUser: objcbool; message 'isCurrentUser'; { available in 10_9, 6_0 }
    function contactPredicate: NSPredicate; message 'contactPredicate'; { available in 10_11, 9_0 }
    {$if defined(TARGET_OS_IPHONE)}
    {$if  not defined(TARGET_OS_WATCH)}
    function ABRecordWithAddressBook (addressBook: ABAddressBookRef): ABRecordRef; message 'ABRecordWithAddressBook:'; { available in ios , macCatalyst ) API_DEPRECATED("Use contactPredicate instead",  }
    {$endif}
    {$else}
    function ABPersonInAddressBook (addressBook: ABAddressBook): ABPerson; message 'ABPersonInAddressBook:'; deprecated 'in 10_8, 10_11, "Use contactPredicate instead"';
    {$endif}

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

