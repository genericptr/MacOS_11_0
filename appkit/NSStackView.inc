{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSStackView.h }

{ Types from NSStackView }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  NSStackViewPtr = ^NSStackView;
  NSStackViewDelegateProtocolPtr = ^NSStackViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSStackViewGravity = NSInteger;
  NSStackViewGravityPtr = ^NSStackViewGravity;

const
  NSStackViewGravityTop = 1;
  NSStackViewGravityLeading = 1;
  NSStackViewGravityCenter = 2;
  NSStackViewGravityBottom = 3;
  NSStackViewGravityTrailing = 3;

type
  NSStackViewDistribution = NSInteger;
  NSStackViewDistributionPtr = ^NSStackViewDistribution;

const
  NSStackViewDistributionGravityAreas = -1;
  NSStackViewDistributionFill = 0;
  NSStackViewDistributionFillEqually = 1;
  NSStackViewDistributionFillProportionally = 2;
  NSStackViewDistributionEqualSpacing = 3;
  NSStackViewDistributionEqualCentering = 4;

type
  NSStackViewVisibilityPriority = single { available in macos  };
  NSStackViewVisibilityPriorityPtr = ^NSStackViewVisibilityPriority { available in macos  };

const
  NSStackViewVisibilityPriorityMustHold = 1000 { available in macos  };
  NSStackViewVisibilityPriorityDetachOnlyIfNecessary = 900 { available in macos  };
  NSStackViewVisibilityPriorityNotVisible = 0 { available in macos  };
  NSStackViewSpacingUseDefault = FLT_MAX { available in macos  };
{$endif}

{$ifdef CLASSES}

type
  NSStackView = objcclass external (NSView)
  public
    class function stackViewWithViews (views: NSArray): id; message 'stackViewWithViews:';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setOrientation(newValue: NSUserInterfaceLayoutOrientation); message 'setOrientation:';
    function orientation: NSUserInterfaceLayoutOrientation; message 'orientation';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setAlignment(newValue: NSLayoutAttribute); message 'setAlignment:';
    function alignment: NSLayoutAttribute; message 'alignment';
    {$endif}
    procedure setEdgeInsets(newValue: NSEdgeInsets); message 'setEdgeInsets:';
    function edgeInsets: NSEdgeInsets; message 'edgeInsets';
    procedure setDistribution(newValue: NSStackViewDistribution); message 'setDistribution:'; { available in macos  }
    function distribution: NSStackViewDistribution; message 'distribution'; { available in macos  }
    procedure setSpacing(newValue: CGFloat); message 'setSpacing:';
    function spacing: CGFloat; message 'spacing';
    procedure setCustomSpacing_afterView (spacing_: CGFloat; view: NSView); message 'setCustomSpacing:afterView:';
    function customSpacingAfterView (view: NSView): CGFloat; message 'customSpacingAfterView:';
    procedure setDetachesHiddenViews(newValue: objcbool); message 'setDetachesHiddenViews:'; { available in macos  }
    function detachesHiddenViews: objcbool; message 'detachesHiddenViews'; { available in macos  }
    function arrangedSubviews: NSArray; message 'arrangedSubviews'; { available in macos  }
    procedure addArrangedSubview (view: NSView); message 'addArrangedSubview:'; { available in macos  }
    procedure insertArrangedSubview_atIndex (view: NSView; index: NSInteger); message 'insertArrangedSubview:atIndex:'; { available in macos  }
    procedure removeArrangedSubview (view: NSView); message 'removeArrangedSubview:'; { available in macos  }
    function detachedViews: NSArray; message 'detachedViews';
    procedure setVisibilityPriority_forView (priority: NSStackViewVisibilityPriority; view: NSView); message 'setVisibilityPriority:forView:';
    function visibilityPriorityForView (view: NSView): NSStackViewVisibilityPriority; message 'visibilityPriorityForView:';
    {$if  not defined(TARGET_OS_IPHONE)}
    function clippingResistancePriorityForOrientation (orientation_: NSLayoutConstraintOrientation): NSLayoutPriority; message 'clippingResistancePriorityForOrientation:';
    procedure setClippingResistancePriority_forOrientation (clippingResistancePriority: NSLayoutPriority; orientation_: NSLayoutConstraintOrientation); message 'setClippingResistancePriority:forOrientation:';
    function huggingPriorityForOrientation (orientation_: NSLayoutConstraintOrientation): NSLayoutPriority; message 'huggingPriorityForOrientation:';
    procedure setHuggingPriority_forOrientation (huggingPriority: NSLayoutPriority; orientation_: NSLayoutConstraintOrientation); message 'setHuggingPriority:forOrientation:';
    {$endif}
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSStackViewDelegateProtocol = objcprotocol external name 'NSStackViewDelegate' (NSObjectProtocol)
  optional
    procedure stackView_willDetachViews (stackView: NSStackView; views: NSArray); message 'stackView:willDetachViews:';
    procedure stackView_didReattachViews (stackView: NSStackView; views: NSArray); message 'stackView:didReattachViews:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSStackViewGravityAreas = objccategory external (NSStackView)
    procedure addView_inGravity (view: NSView; gravity: NSStackViewGravity); message 'addView:inGravity:';
    procedure insertView_atIndex_inGravity (view: NSView; index: NSUInteger; gravity: NSStackViewGravity); message 'insertView:atIndex:inGravity:';
    procedure removeView (view: NSView); message 'removeView:';
    function viewsInGravity (gravity: NSStackViewGravity): NSArray; message 'viewsInGravity:';
    procedure setViews_inGravity (views: NSArray; gravity: NSStackViewGravity); message 'setViews:inGravity:';
    function views: NSArray; message 'views';
  end;

type
  NSStackViewDeprecated = objccategory external (NSStackView)
    procedure setHasEqualSpacing(newValue: objcbool); message 'setHasEqualSpacing:'; deprecated 'Set -distribution to NSStackViewDistributionEqualSpacing instead.';
    function hasEqualSpacing: objcbool; message 'hasEqualSpacing'; deprecated 'Set -distribution to NSStackViewDistributionEqualSpacing instead.';
  end;
{$endif}

