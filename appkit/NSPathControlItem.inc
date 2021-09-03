{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSPathControlItem.h }

{$ifdef TYPES}
type
  NSPathControlItemPtr = ^NSPathControlItem;
{$endif}

{$ifdef CLASSES}

type
  NSPathControlItem = objcclass external (NSObject)
  public
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setAttributedTitle(newValue: NSAttributedString); message 'setAttributedTitle:';
    function attributedTitle: NSAttributedString; message 'attributedTitle';
    procedure setImage(newValue: NSImage); message 'setImage:';
    function image: NSImage; message 'image';
    function URL: NSURL; message 'URL';
  end;
{$endif}

