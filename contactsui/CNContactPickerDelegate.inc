{ Parsed from ContactsUI.framework CNContactPickerDelegate.h }

{$ifdef TYPES}
type
  CNContactPickerDelegateProtocolPtr = ^CNContactPickerDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  CNContactPickerDelegateProtocol = objcprotocol external name 'CNContactPickerDelegate' (NSObjectProtocol)
  optional
    procedure contactPicker_didSelectContact (picker: CNContactPicker; contact: CNContact); message 'contactPicker:didSelectContact:';
    procedure contactPicker_didSelectContactProperty (picker: CNContactPicker; contactProperty: CNContactProperty); message 'contactPicker:didSelectContactProperty:';
    procedure contactPickerWillClose (picker: CNContactPicker); message 'contactPickerWillClose:';
    procedure contactPickerDidClose (picker: CNContactPicker); message 'contactPickerDidClose:';
  end;
{$endif}

