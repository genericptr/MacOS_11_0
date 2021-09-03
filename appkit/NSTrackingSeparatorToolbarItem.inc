{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTrackingSeparatorToolbarItem.h }

{$ifdef TYPES}
type
  NSTrackingSeparatorToolbarItemPtr = ^NSTrackingSeparatorToolbarItem;
{$endif}

{$ifdef CLASSES}

type
  NSTrackingSeparatorToolbarItem = objcclass external (NSToolbarItem)
  public
    class function trackingSeparatorToolbarItemWithIdentifier_splitView_dividerIndex (identifier: NSToolbarItemIdentifier; splitView: NSSplitView; dividerIndex: NSInteger): id; message 'trackingSeparatorToolbarItemWithIdentifier:splitView:dividerIndex:'; { unavailable in ios }
    procedure setSplitView(newValue: NSSplitView); message 'setSplitView:'; { unavailable in ios }
    function splitView: NSSplitView; message 'splitView'; { unavailable in ios }
    procedure setDividerIndex(newValue: NSInteger); message 'setDividerIndex:'; { unavailable in ios }
    function dividerIndex: NSInteger; message 'dividerIndex'; { unavailable in ios }
  end;
{$endif}

