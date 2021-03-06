{ Parsed from AppKit.framework NSSharingServicePickerToolbarItem.h }

{ Types from NSSharingServicePickerToolbarItem }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSSharingServicePickerToolbarItemPtr = ^NSSharingServicePickerToolbarItem;
  NSSharingServicePickerToolbarItemDelegateProtocolPtr = ^NSSharingServicePickerToolbarItemDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSSharingServicePickerToolbarItem = objcclass external (NSToolbarItem)
  public
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setDelegate(newValue: NSSharingServicePickerToolbarItemDelegateProtocol); message 'setDelegate:';
    function delegate: NSSharingServicePickerToolbarItemDelegateProtocol; message 'delegate';
    {$endif}
  end;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef PROTOCOLS}

type
  NSSharingServicePickerToolbarItemDelegateProtocol = objcprotocol external name 'NSSharingServicePickerToolbarItemDelegate' (NSSharingServicePickerDelegateProtocol)
  required
    function itemsForSharingServicePickerToolbarItem (pickerToolbarItem: NSSharingServicePickerToolbarItem): NSArray; message 'itemsForSharingServicePickerToolbarItem:';
  end;
{$endif}

{$endif}
