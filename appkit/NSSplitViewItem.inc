{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSSplitViewItem.h }

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
  NSSplitViewItemUnspecifiedDimension: CGFloat { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSSplitViewItem = objcclass external (NSObject, NSAnimatablePropertyContainerProtocol, NSCodingProtocol)
  public
    class function splitViewItemWithViewController (viewController: NSViewController): id; message 'splitViewItemWithViewController:';
    class function sidebarWithViewController (viewController: NSViewController): id; message 'sidebarWithViewController:'; { available in macos  }
    class function contentListWithViewController (viewController: NSViewController): id; message 'contentListWithViewController:'; { available in macos  }
    function behavior: NSSplitViewItemBehavior; message 'behavior'; { available in macos  }
    procedure setViewController(newValue: NSViewController); message 'setViewController:';
    function viewController: NSViewController; message 'viewController';
    procedure setCollapsed(newValue: objcbool); message 'setCollapsed:';
    function isCollapsed: objcbool; message 'isCollapsed';
    procedure setCanCollapse(newValue: objcbool); message 'setCanCollapse:';
    function canCollapse: objcbool; message 'canCollapse';
    procedure setCollapseBehavior(newValue: NSSplitViewItemCollapseBehavior); message 'setCollapseBehavior:'; { available in macos  }
    function collapseBehavior: NSSplitViewItemCollapseBehavior; message 'collapseBehavior'; { available in macos  }
    procedure setMinimumThickness(newValue: CGFloat); message 'setMinimumThickness:'; { available in macos  }
    function minimumThickness: CGFloat; message 'minimumThickness'; { available in macos  }
    procedure setMaximumThickness(newValue: CGFloat); message 'setMaximumThickness:'; { available in macos  }
    function maximumThickness: CGFloat; message 'maximumThickness'; { available in macos  }
    procedure setPreferredThicknessFraction(newValue: CGFloat); message 'setPreferredThicknessFraction:'; { available in macos  }
    function preferredThicknessFraction: CGFloat; message 'preferredThicknessFraction'; { available in macos  }
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setHoldingPriority(newValue: NSLayoutPriority); message 'setHoldingPriority:';
    function holdingPriority: NSLayoutPriority; message 'holdingPriority';
    {$endif}
    procedure setAutomaticMaximumThickness(newValue: CGFloat); message 'setAutomaticMaximumThickness:'; { available in macos  }
    function automaticMaximumThickness: CGFloat; message 'automaticMaximumThickness'; { available in macos  }
    procedure setSpringLoaded(newValue: objcbool); message 'setSpringLoaded:'; { available in macos  }
    function isSpringLoaded: objcbool; message 'isSpringLoaded'; { available in macos  }
    procedure setAllowsFullHeightLayout(newValue: objcbool); message 'setAllowsFullHeightLayout:'; { available in macos  }
    function allowsFullHeightLayout: objcbool; message 'allowsFullHeightLayout'; { available in macos  }
    procedure setTitlebarSeparatorStyle(newValue: NSTitlebarSeparatorStyle); message 'setTitlebarSeparatorStyle:'; { available in macos  }
    function titlebarSeparatorStyle: NSTitlebarSeparatorStyle; message 'titlebarSeparatorStyle'; { available in macos  }

    { Adopted protocols }
    function animationForKey (key: NSAnimatablePropertyKey): id; message 'animationForKey:'; { available in macos  }
    function animations: NSDictionary; message 'animations'; { available in macos  }
    function animator: id; message 'animator'; { available in macos  }
    class function defaultAnimationForKey (key: NSAnimatablePropertyKey): id; message 'defaultAnimationForKey:'; { available in macos  }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    procedure setAnimations (newValue: NSDictionary); message 'setAnimations:'; { available in macos  }
  end;
{$endif}

