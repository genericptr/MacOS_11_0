{ Parsed from AppKit.framework NSCustomTouchBarItem.h }

{$ifdef TYPES}
type
  NSCustomTouchBarItemPtr = ^NSCustomTouchBarItem;
{$endif}

{$ifdef CLASSES}

type
  NSCustomTouchBarItem = objcclass external (NSTouchBarItem)
  public
    procedure setView(newValue: NSView); message 'setView:';
    function view: NSView; message 'view';
    procedure setViewController(newValue: NSViewController); message 'setViewController:';
    function viewController: NSViewController; message 'viewController';
    procedure setCustomizationLabel(newValue: NSString); message 'setCustomizationLabel:';
    function customizationLabel: NSString; message 'customizationLabel';
  end;
{$endif}

