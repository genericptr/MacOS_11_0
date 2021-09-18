{ Parsed from ContactsUI.framework CNContactPicker.h }

{$ifdef TYPES}
type
  CNContactPickerPtr = ^CNContactPicker;
{$endif}

{$ifdef CLASSES}

type
  CNContactPicker = objcclass external (NSObject)
  public
    procedure setDisplayedKeys(newValue: NSArray); message 'setDisplayedKeys:';
    function displayedKeys: NSArray; message 'displayedKeys';
    procedure setDelegate(newValue: CNContactPickerDelegateProtocol); message 'setDelegate:';
    function delegate: CNContactPickerDelegateProtocol; message 'delegate';
    procedure showRelativeToRect_ofView_preferredEdge (positioningRect: NSRect; positioningView: NSView; preferredEdge: NSRectEdge); message 'showRelativeToRect:ofView:preferredEdge:';
    procedure close; message 'close';
  end;
{$endif}

