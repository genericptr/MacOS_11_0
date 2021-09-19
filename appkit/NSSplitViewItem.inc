{ Parsed from AppKit.framework NSSplitViewItem.h }

{ Types from NSSplitViewItem }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSSplitViewItemPtr = ^NSSplitViewItem;
{$endif}

{$ifdef TYPES}
type
  NSSplitViewItemBehavior = NSInteger;
  NSSplitViewItemBehaviorPtr = ^NSSplitViewItemBehavior;

const
  NSSplitViewItemBehaviorDefault = 0;
  NSSplitViewItemBehaviorSidebar = 1;
  NSSplitViewItemBehaviorContentList = 2;

type
  NSSplitViewItemCollapseBehavior = NSInteger;
  NSSplitViewItemCollapseBehaviorPtr = ^NSSplitViewItemCollapseBehavior;

const
  NSSplitViewItemCollapseBehaviorDefault = 0;
  NSSplitViewItemCollapseBehaviorPreferResizingSplitViewWithFixedSiblings = 1;
  NSSplitViewItemCollapseBehaviorPreferResizingSiblingsWithFixedSplitView = 2;
  NSSplitViewItemCollapseBehaviorUseConstraints = 3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSplitViewItemUnspecifiedDimension: CGFloat { available in macos 10.11 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSSplitViewItem = objcclass external (NSObject, NSAnimatablePropertyContainerProtocol, NSCodingProtocol)
  public
    class function splitViewItemWithViewController (viewController: NSViewController): id; message 'splitViewItemWithViewController:';
    class function sidebarWithViewController (viewController: NSViewController): id; message 'sidebarWithViewController:'; { available in macos 10.11 }
    class function contentListWithViewController (viewController: NSViewController): id; message 'contentListWithViewController:'; { available in macos 10.11 }
    function behavior: NSSplitViewItemBehavior; message 'behavior'; { available in macos 10.11 }
    procedure setViewController(newValue: NSViewController); message 'setViewController:';
    function viewController: NSViewController; message 'viewController';
    procedure setCollapsed(newValue: objcbool); message 'setCollapsed:';
    function isCollapsed: objcbool; message 'isCollapsed';
    procedure setCanCollapse(newValue: objcbool); message 'setCanCollapse:';
    function canCollapse: objcbool; message 'canCollapse';
    procedure setCollapseBehavior(newValue: NSSplitViewItemCollapseBehavior); message 'setCollapseBehavior:'; { available in macos 10.11 }
    function collapseBehavior: NSSplitViewItemCollapseBehavior; message 'collapseBehavior'; { available in macos 10.11 }
    procedure setMinimumThickness(newValue: CGFloat); message 'setMinimumThickness:'; { available in macos 10.11 }
    function minimumThickness: CGFloat; message 'minimumThickness'; { available in macos 10.11 }
    procedure setMaximumThickness(newValue: CGFloat); message 'setMaximumThickness:'; { available in macos 10.11 }
    function maximumThickness: CGFloat; message 'maximumThickness'; { available in macos 10.11 }
    procedure setPreferredThicknessFraction(newValue: CGFloat); message 'setPreferredThicknessFraction:'; { available in macos 10.11 }
    function preferredThicknessFraction: CGFloat; message 'preferredThicknessFraction'; { available in macos 10.11 }
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setHoldingPriority(newValue: NSLayoutPriority); message 'setHoldingPriority:';
    function holdingPriority: NSLayoutPriority; message 'holdingPriority';
    {$endif}
    procedure setAutomaticMaximumThickness(newValue: CGFloat); message 'setAutomaticMaximumThickness:'; { available in macos 10.11 }
    function automaticMaximumThickness: CGFloat; message 'automaticMaximumThickness'; { available in macos 10.11 }
    procedure setSpringLoaded(newValue: objcbool); message 'setSpringLoaded:'; { available in macos 10.11 }
    function isSpringLoaded: objcbool; message 'isSpringLoaded'; { available in macos 10.11 }
    procedure setAllowsFullHeightLayout(newValue: objcbool); message 'setAllowsFullHeightLayout:'; { available in macos 11.0 }
    function allowsFullHeightLayout: objcbool; message 'allowsFullHeightLayout'; { available in macos 11.0 }
    procedure setTitlebarSeparatorStyle(newValue: NSTitlebarSeparatorStyle); message 'setTitlebarSeparatorStyle:'; { available in macos 11.0 }
    function titlebarSeparatorStyle: NSTitlebarSeparatorStyle; message 'titlebarSeparatorStyle'; { available in macos 11.0 }

    { Adopted protocols }
    function animationForKey (key: NSAnimatablePropertyKey): id; message 'animationForKey:'; { available in macos 10.5 }
    function animations: NSDictionary; message 'animations'; { available in macos 10.5 }
    function animator: id; message 'animator'; { available in macos 10.5 }
    class function defaultAnimationForKey (key: NSAnimatablePropertyKey): id; message 'defaultAnimationForKey:'; { available in macos 10.5 }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    procedure setAnimations (newValue: NSDictionary); message 'setAnimations:'; { available in macos 10.5 }
  end;
{$endif}

