{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSButtonTouchBarItem.h }

{ Types from NSButtonTouchBarItem }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  NSButtonTouchBarItemPtr = ^NSButtonTouchBarItem;
{$endif}

{$ifdef CLASSES}

type
  NSButtonTouchBarItem = objcclass external (NSTouchBarItem)
  public
    class function buttonTouchBarItemWithIdentifier_title_target_action (identifier_: NSTouchBarItemIdentifier; title: NSString; target: id; action: SEL): id; message 'buttonTouchBarItemWithIdentifier:title:target:action:';
    {$if  not defined(TARGET_OS_IPHONE)}
    class function buttonTouchBarItemWithIdentifier_image_target_action (identifier_: NSTouchBarItemIdentifier; image: NSImage; target: id; action: SEL): id; message 'buttonTouchBarItemWithIdentifier:image:target:action:';
    class function buttonTouchBarItemWithIdentifier_title_image_target_action (identifier_: NSTouchBarItemIdentifier; title: NSString; image: NSImage; target: id; action: SEL): id; message 'buttonTouchBarItemWithIdentifier:title:image:target:action:';
    {$else}
    class function buttonTouchBarItemWithIdentifier_image_target_action (identifier_: NSTouchBarItemIdentifier; image: UIImage; target: id; action: SEL): id; message 'buttonTouchBarItemWithIdentifier:image:target:action:';
    class function buttonTouchBarItemWithIdentifier_title_image_target_action (identifier_: NSTouchBarItemIdentifier; title: NSString; image: UIImage; target: id; action: SEL): id; message 'buttonTouchBarItemWithIdentifier:title:image:target:action:';
    {$endif}
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setImage(newValue: NSImage); message 'setImage:';
    function image: NSImage; message 'image';
    procedure setBezelColor(newValue: NSColor); message 'setBezelColor:';
    function bezelColor: NSColor; message 'bezelColor';
    {$else}
    procedure setImage_(newValue: UIImage); message 'setImage:';
    function image_: UIImage; message 'image';
    procedure setBezelColor_(newValue: UIColor); message 'setBezelColor:';
    function bezelColor_: UIColor; message 'bezelColor';
    {$endif}
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    procedure setCustomizationLabel(newValue: NSString); message 'setCustomizationLabel:';
    function customizationLabel: NSString; message 'customizationLabel';
  end;
{$endif}

