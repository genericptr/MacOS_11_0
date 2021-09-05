{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSSharingServicePickerTouchBarItem.h }

{ Types from NSSharingServicePickerTouchBarItem }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  NSSharingServicePickerTouchBarItemPtr = ^NSSharingServicePickerTouchBarItem;
  NSSharingServicePickerTouchBarItemDelegateProtocolPtr = ^NSSharingServicePickerTouchBarItemDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSSharingServicePickerTouchBarItem = objcclass external (NSTouchBarItem)
  public
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setDelegate(newValue: NSSharingServicePickerTouchBarItemDelegateProtocol); message 'setDelegate:';
    function delegate: NSSharingServicePickerTouchBarItemDelegateProtocol; message 'delegate';
    {$endif}
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    procedure setButtonTitle(newValue: NSString); message 'setButtonTitle:';
    function buttonTitle: NSString; message 'buttonTitle';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setButtonImage(newValue: NSImage); message 'setButtonImage:';
    function buttonImage: NSImage; message 'buttonImage';
    {$else}
    procedure setButtonImage_(newValue: UIImage); message 'setButtonImage:';
    function buttonImage_: UIImage; message 'buttonImage';
    {$endif}
  end;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef PROTOCOLS}

type
  NSSharingServicePickerTouchBarItemDelegateProtocol = objcprotocol external name 'NSSharingServicePickerTouchBarItemDelegate' (NSSharingServicePickerDelegateProtocol)
  required
    function itemsForSharingServicePickerTouchBarItem (pickerTouchBarItem: NSSharingServicePickerTouchBarItem): NSArray; message 'itemsForSharingServicePickerTouchBarItem:';
  end;
{$endif}

{$endif}
