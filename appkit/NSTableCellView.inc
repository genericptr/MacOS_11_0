{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTableCellView.h }

{$ifdef TYPES}
type
  NSTableCellViewPtr = ^NSTableCellView;
{$endif}

{$ifdef CLASSES}

type
  NSTableCellView = objcclass external (NSView)
  public
    procedure setObjectValue(newValue: id); message 'setObjectValue:';
    function objectValue: id; message 'objectValue';
    procedure setTextField(newValue: NSTextField); message 'setTextField:';
    function textField: NSTextField; message 'textField';
    procedure setImageView(newValue: NSImageView); message 'setImageView:';
    function imageView: NSImageView; message 'imageView';
    procedure setBackgroundStyle(newValue: NSBackgroundStyle); message 'setBackgroundStyle:';
    function backgroundStyle: NSBackgroundStyle; message 'backgroundStyle';
    procedure setRowSizeStyle(newValue: NSTableViewRowSizeStyle); message 'setRowSizeStyle:';
    function rowSizeStyle: NSTableViewRowSizeStyle; message 'rowSizeStyle';
    function draggingImageComponents: NSArray; message 'draggingImageComponents';
  end;
{$endif}

