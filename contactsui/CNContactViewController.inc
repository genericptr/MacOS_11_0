{ Parsed from ContactsUI.framework CNContactViewController.h }

{$ifdef TYPES}
type
  CNContactViewControllerPtr = ^CNContactViewController;
{$endif}

{$ifdef CLASSES}

type
  CNContactViewController = objcclass external (NSViewController)
  public
    class function descriptorForRequiredKeys: CNKeyDescriptorProtocol; message 'descriptorForRequiredKeys';
    procedure setContact(newValue: CNContact); message 'setContact:';
    function contact: CNContact; message 'contact';
  end;
{$endif}

