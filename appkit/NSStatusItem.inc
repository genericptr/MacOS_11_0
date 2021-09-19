{ Parsed from AppKit.framework NSStatusItem.h }

{$ifdef TYPES}
type
  NSStatusItemPtr = ^NSStatusItem;
{$endif}

{$ifdef TYPES}
type
  NSStatusItemAutosaveName = NSString;
  NSStatusItemAutosaveNamePtr = ^NSStatusItemAutosaveName;
  NSStatusItemBehavior = NSUInteger;
  NSStatusItemBehaviorPtr = ^NSStatusItemBehavior;

const
  NSStatusItemBehaviorRemovalAllowed = 1 shl 1;
  NSStatusItemBehaviorTerminationOnRemoval = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  NSStatusItem = objcclass external (NSObject)
  public
    function statusBar: NSStatusBar; message 'statusBar';
    procedure setLength(newValue: CGFloat); message 'setLength:';
    function length: CGFloat; message 'length';
    procedure setMenu(newValue: NSMenu); message 'setMenu:';
    function menu: NSMenu; message 'menu';
    function button: NSStatusBarButton; message 'button'; { available in macos 10.10 }
    procedure setBehavior(newValue: NSStatusItemBehavior); message 'setBehavior:'; { available in macos 10.12 }
    function behavior: NSStatusItemBehavior; message 'behavior'; { available in macos 10.12 }
    procedure setVisible(newValue: objcbool); message 'setVisible:'; { available in macos 10.12 }
    function isVisible: objcbool; message 'isVisible'; { available in macos 10.12 }
    procedure setAutosaveName(newValue: NSStatusItemAutosaveName); message 'setAutosaveName:'; { available in macos 10.12 }
    function autosaveName: NSStatusItemAutosaveName; message 'autosaveName'; { available in macos 10.12 }
  end;


type
  NSStatusItemDeprecated = objccategory external (NSStatusItem)
    procedure setAction(newValue: SEL); message 'setAction:'; deprecated 'Use the receiver''s button.action instead';
    function action: SEL; message 'action'; deprecated 'Use the receiver''s button.action instead';
    procedure setDoubleAction(newValue: SEL); message 'setDoubleAction:'; deprecated 'Use the receiver''s button.doubleAction instead';
    function doubleAction: SEL; message 'doubleAction'; deprecated 'Use the receiver''s button.doubleAction instead';
    procedure setTarget(newValue: id); message 'setTarget:'; deprecated 'Use the receiver''s button.target instead';
    function target: id; message 'target'; deprecated 'Use the receiver''s button.target instead';
    procedure setTitle(newValue: NSString); message 'setTitle:'; deprecated 'Use the receiver''s button.title instead';
    function title: NSString; message 'title'; deprecated 'Use the receiver''s button.title instead';
    procedure setAttributedTitle(newValue: NSAttributedString); message 'setAttributedTitle:'; deprecated 'Use the receiver''s button.attributedTitle instead';
    function attributedTitle: NSAttributedString; message 'attributedTitle'; deprecated 'Use the receiver''s button.attributedTitle instead';
    procedure setImage(newValue: NSImage); message 'setImage:'; deprecated 'Use the receiver''s button.image instead';
    function image: NSImage; message 'image'; deprecated 'Use the receiver''s button.image instead';
    procedure setAlternateImage(newValue: NSImage); message 'setAlternateImage:'; deprecated 'Use the receiver''s button.alternateImage instead';
    function alternateImage: NSImage; message 'alternateImage'; deprecated 'Use the receiver''s button.alternateImage instead';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:'; deprecated 'Use the receiver''s button.enabled instead';
    function isEnabled: objcbool; message 'isEnabled'; deprecated 'Use the receiver''s button.enabled instead';
    procedure setHighlightMode(newValue: objcbool); message 'setHighlightMode:'; deprecated 'Use the receiver''s button.cell.highlightsBy instead';
    function highlightMode: objcbool; message 'highlightMode'; deprecated 'Use the receiver''s button.cell.highlightsBy instead';
    procedure setToolTip(newValue: NSString); message 'setToolTip:'; deprecated 'Use the receiver''s button.toolTip instead';
    function toolTip: NSString; message 'toolTip'; deprecated 'Use the receiver''s button.toolTip instead';
    function sendActionOn (mask: NSEventMask): NSInteger; message 'sendActionOn:'; deprecated 'Use the receiver''s button''s -sendActionOn: instead';
    procedure setView(newValue: NSView); message 'setView:'; deprecated 'Use the standard button property instead';
    function view: NSView; message 'view'; deprecated 'Use the standard button property instead';
    procedure drawStatusBarBackgroundInRect_withHighlight (rect: NSRect; highlight: objcbool); message 'drawStatusBarBackgroundInRect:withHighlight:'; deprecated 'Use the standard button instead which handles highlight drawing, making this method obsolete';
    procedure popUpStatusItemMenu (menu_: NSMenu); message 'popUpStatusItemMenu:'; deprecated 'Use the menu property instead';
  end;
{$endif}

