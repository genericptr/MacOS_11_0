{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSPathComponentCell.h }

{$ifdef TYPES}
type
  NSPathComponentCellPtr = ^NSPathComponentCell;
{$endif}

{$ifdef CLASSES}

type
  NSPathComponentCell = objcclass external (NSTextFieldCell)
  public
    procedure setImage(newValue: NSImage); message 'setImage:';
    function image: NSImage; message 'image';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
  end;
{$endif}

