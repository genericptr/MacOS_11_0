{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNSaveRequest.h }

{$ifdef TYPES}
type
  CNSaveRequestPtr = ^CNSaveRequest;
{$endif}

{$ifdef CLASSES}

type
  CNSaveRequest = objcclass external (NSObject)
  public
    procedure addContact_toContainerWithIdentifier (contact: CNMutableContact; identifier: NSString); message 'addContact:toContainerWithIdentifier:';
    procedure updateContact (contact: CNMutableContact); message 'updateContact:';
    procedure deleteContact (contact: CNMutableContact); message 'deleteContact:';
    procedure addGroup_toContainerWithIdentifier (group: CNMutableGroup; identifier: NSString); message 'addGroup:toContainerWithIdentifier:';
    procedure updateGroup (group: CNMutableGroup); message 'updateGroup:';
    procedure deleteGroup (group: CNMutableGroup); message 'deleteGroup:';
    procedure addSubgroup_toGroup (subgroup: CNGroup; group: CNGroup); message 'addSubgroup:toGroup:'; { available in 10_11, NA }
    procedure removeSubgroup_fromGroup (subgroup: CNGroup; group: CNGroup); message 'removeSubgroup:fromGroup:'; { available in 10_11, NA }
    procedure addMember_toGroup (contact: CNContact; group: CNGroup); message 'addMember:toGroup:';
    procedure removeMember_fromGroup (contact: CNContact; group: CNGroup); message 'removeMember:fromGroup:';
  end;
{$endif}

