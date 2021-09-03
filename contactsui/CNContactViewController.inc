{ Parsed from ContactsUI.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ContactsUI.framework/Headers/CNContactViewController.h }

{$ifdef TYPES}
type
  CNContactViewControllerPtr = ^CNContactViewController;
{$endif}

{$ifdef CLASSES}

type
  CNContactViewController = objcclass external (NSViewController)
  public
    class function descriptorForRequiredKeys: id; message 'descriptorForRequiredKeys';
    procedure setContact(newValue: CNContact); message 'setContact:';
    function contact: CNContact; message 'contact';
  end;
{$endif}

