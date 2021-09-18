{ Parsed from AppKit.framework NSWindowTab.h }

{$ifdef TYPES}
type
  NSWindowTabPtr = ^NSWindowTab;
{$endif}

{$ifdef CLASSES}

type
  NSWindowTab = objcclass external (NSObject)
  public
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setAttributedTitle(newValue: NSAttributedString); message 'setAttributedTitle:';
    function attributedTitle: NSAttributedString; message 'attributedTitle';
    procedure setToolTip(newValue: NSString); message 'setToolTip:';
    function toolTip: NSString; message 'toolTip';
    procedure setAccessoryView(newValue: NSView); message 'setAccessoryView:';
    function accessoryView: NSView; message 'accessoryView';
  end;
{$endif}

