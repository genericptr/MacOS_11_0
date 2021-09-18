{ Parsed from AppKit.framework NSWindowTabGroup.h }

{$ifdef TYPES}
type
  NSWindowTabGroupPtr = ^NSWindowTabGroup;
{$endif}

{$ifdef CLASSES}

type
  NSWindowTabGroup = objcclass external (NSObject)
  public
    function identifier: NSWindowTabbingIdentifier; message 'identifier';
    function windows: NSArray; message 'windows';
    procedure setOverviewVisible(newValue: objcbool); message 'setOverviewVisible:';
    function isOverviewVisible: objcbool; message 'isOverviewVisible';
    function isTabBarVisible: objcbool; message 'isTabBarVisible';
    procedure setSelectedWindow(newValue: NSWindow); message 'setSelectedWindow:';
    function selectedWindow: NSWindow; message 'selectedWindow';
    procedure addWindow (window: NSWindow); message 'addWindow:';
    procedure insertWindow_atIndex (window: NSWindow; index: NSInteger); message 'insertWindow:atIndex:';
    procedure removeWindow (window: NSWindow); message 'removeWindow:';
  end;
{$endif}

