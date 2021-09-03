{ Parsed from ContactsUI.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ContactsUI.framework/Headers/CNContactPicker.h }

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
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure showRelativeToRect_ofView_preferredEdge (positioningRect: NSRect; positioningView: NSView; preferredEdge: NSRectEdge); message 'showRelativeToRect:ofView:preferredEdge:';
    procedure close; message 'close';
  end;
{$endif}

