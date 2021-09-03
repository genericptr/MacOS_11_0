{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTableViewRowAction.h }

{$ifdef CALLBACKS}
type
  NSTableViewRowActionRowActionWithStyleCallback = reference to function (action: NSTableViewRowAction; row: NSInteger): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSTableViewRowActionPtr = ^NSTableViewRowAction;
{$endif}

{$ifdef TYPES}
type
  NSTableViewRowActionStyle = NSInteger;
  NSTableViewRowActionStylePtr = ^NSTableViewRowActionStyle;

const
  NSTableViewRowActionStyleRegular = 0;
  NSTableViewRowActionStyleDestructive = 1;
{$endif}

{$ifdef CLASSES}

type
  NSTableViewRowAction = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function rowActionWithStyle_title_handler (style: NSTableViewRowActionStyle; title: NSString; handler: NSTableViewRowActionRowActionWithStyleCallback): id; message 'rowActionWithStyle:title:handler:';
    function style: NSTableViewRowActionStyle; message 'style';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setImage(newValue: NSImage); message 'setImage:'; { available in macos  }
    function image: NSImage; message 'image'; { available in macos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

