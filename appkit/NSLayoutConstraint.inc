{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSLayoutConstraint.h }

{ Types from NSLayoutConstraint }
{$ifdef TYPES}

{$endif}


{ Types from NSView_NSConstraintBasedLayoutLayering }
{$ifdef TYPES}

{$endif}


{ Types from NSConstraintBasedLayoutAnchoring }
{$ifdef TYPES}

{$endif}


{ Types from NSView_NSConstraintBasedLayoutDebugging }
{$ifdef TYPES}

{$endif}


{ Types from NSConstraintBasedLayoutDebugging }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSLayoutConstraintPtr = ^NSLayoutConstraint;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  NSLayoutPriority = single { available in macos  };
  NSLayoutPriorityPtr = ^NSLayoutPriority { available in macos  };

const
  NSLayoutPriorityRequired = 1000 { available in macos  };
  NSLayoutPriorityDefaultHigh = 750 { available in macos  };
  NSLayoutPriorityDragThatCanResizeWindow = 510 { available in macos  };
  NSLayoutPriorityWindowSizeStayPut = 500 { available in macos  };
  NSLayoutPriorityDragThatCannotResizeWindow = 490 { available in macos  };
  NSLayoutPriorityDefaultLow = 250 { available in macos  };
  NSLayoutPriorityFittingSizeCompression = 50 { available in macos  };

type
  NSLayoutConstraintOrientation = NSInteger;
  NSLayoutConstraintOrientationPtr = ^NSLayoutConstraintOrientation;

const
  NSLayoutConstraintOrientationHorizontal = 0;
  NSLayoutConstraintOrientationVertical = 1;
{$endif}

{$ifdef TYPES}
type
  NSLayoutRelation = NSInteger;
  NSLayoutRelationPtr = ^NSLayoutRelation;

const
  NSLayoutRelationLessThanOrEqual = -1;
  NSLayoutRelationEqual = 0;
  NSLayoutRelationGreaterThanOrEqual = 1;

type
  NSLayoutAttribute = NSInteger;
  NSLayoutAttributePtr = ^NSLayoutAttribute;

const
  NSLayoutAttributeLeft = 1;
  NSLayoutAttributeRight = 2;
  NSLayoutAttributeTop = 3;
  NSLayoutAttributeBottom = 4;
  NSLayoutAttributeLeading = 5;
  NSLayoutAttributeTrailing = 6;
  NSLayoutAttributeWidth = 7;
  NSLayoutAttributeHeight = 8;
  NSLayoutAttributeCenterX = 9;
  NSLayoutAttributeCenterY = 10;
  NSLayoutAttributeLastBaseline = 11;
  {$if defined(TARGET_OS_IPHONE)}
  NSLayoutAttributeBaseline = NSLayoutAttributeLastBaseline;
  {$else}
  NSLayoutAttributeBaseline = NSLayoutAttributeLastBaseline;
  {$endif}
  NSLayoutAttributeFirstBaseline = 12 { available in macos , ios  };
  {$if defined(TARGET_OS_IPHONE)}
  NSLayoutAttributeLeftMargin = 13 { available in ios  };
  NSLayoutAttributeRightMargin = 14 { available in ios  };
  NSLayoutAttributeTopMargin = 15 { available in ios  };
  NSLayoutAttributeBottomMargin = 16 { available in ios  };
  NSLayoutAttributeLeadingMargin = 17 { available in ios  };
  NSLayoutAttributeTrailingMargin = 18 { available in ios  };
  NSLayoutAttributeCenterXWithinMargins = 19 { available in ios  };
  NSLayoutAttributeCenterYWithinMargins = 20 { available in ios  };
  {$endif}
  NSLayoutAttributeNotAnAttribute = 0;

type
  NSLayoutFormatOptions = NSUInteger;
  NSLayoutFormatOptionsPtr = ^NSLayoutFormatOptions;

const
  NSLayoutFormatAlignAllLeft = 1 shl NSLayoutAttributeLeft;
  NSLayoutFormatAlignAllRight = 1 shl NSLayoutAttributeRight;
  NSLayoutFormatAlignAllTop = 1 shl NSLayoutAttributeTop;
  NSLayoutFormatAlignAllBottom = 1 shl NSLayoutAttributeBottom;
  NSLayoutFormatAlignAllLeading = 1 shl NSLayoutAttributeLeading;
  NSLayoutFormatAlignAllTrailing = 1 shl NSLayoutAttributeTrailing;
  NSLayoutFormatAlignAllCenterX = 1 shl NSLayoutAttributeCenterX;
  NSLayoutFormatAlignAllCenterY = 1 shl NSLayoutAttributeCenterY;
  NSLayoutFormatAlignAllLastBaseline = 1 shl NSLayoutAttributeLastBaseline;
  NSLayoutFormatAlignAllFirstBaseline = 1 shl NSLayoutAttributeFirstBaseline { available in macos , ios  };
  {$if defined(TARGET_OS_IPHONE)}
  NSLayoutFormatAlignAllBaseline = NSLayoutFormatAlignAllLastBaseline;
  {$else}
  NSLayoutFormatAlignAllBaseline = NSLayoutFormatAlignAllLastBaseline;
  {$endif}
  NSLayoutFormatAlignmentMask = $FFFF;
  NSLayoutFormatDirectionLeadingToTrailing = 0 shl 16;
  NSLayoutFormatDirectionLeftToRight = 1 shl 16;
  NSLayoutFormatDirectionRightToLeft = 2 shl 16;
  NSLayoutFormatDirectionMask = $3 shl 16;
  {$if defined(TARGET_OS_IPHONE)}
  NSLayoutFormatSpacingEdgeToEdge = 0 shl 19 { available in ios ,tvos  };
  NSLayoutFormatSpacingBaselineToBaseline = 1 shl 19 { available in ios ,tvos  };
  NSLayoutFormatSpacingMask = $1 shl 19 { available in ios ,tvos  };
  {$endif}
{$endif}

{$ifdef CLASSES}

type
  NSLayoutConstraint = objcclass external (NSObject)
  public
    class function constraintsWithVisualFormat_options_metrics_views (format: NSString; opts: NSLayoutFormatOptions; metrics: NSDictionary; views: NSDictionary): NSArray; message 'constraintsWithVisualFormat:options:metrics:views:'; { available in macos , ios , tvos  }
    class function constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant (view1: id; attr1: NSLayoutAttribute; relation: NSLayoutRelation; view2: id; attr2: NSLayoutAttribute; multiplier: CGFloat; c: CGFloat): id; message 'constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:'; { available in macos , ios , tvos  }
    {$if defined(TARGET_OS_IPHONE)}
    procedure setPriority(newValue: UILayoutPriority); message 'setPriority:';
    function priority: UILayoutPriority; message 'priority';
    {$else}
    procedure setPriority_(newValue: NSLayoutPriority); message 'setPriority:';
    function priority_: NSLayoutPriority; message 'priority';
    {$endif}
    procedure setShouldBeArchived(newValue: objcbool); message 'setShouldBeArchived:';
    function shouldBeArchived: objcbool; message 'shouldBeArchived';
    function firstItem: id; message 'firstItem';
    function secondItem: id; message 'secondItem';
    function firstAttribute: NSLayoutAttribute; message 'firstAttribute';
    function secondAttribute: NSLayoutAttribute; message 'secondAttribute';
    function firstAnchor: NSLayoutAnchor; message 'firstAnchor'; { available in macos , ios  }
    function secondAnchor: NSLayoutAnchor; message 'secondAnchor'; { available in macos , ios  }
    function relation: NSLayoutRelation; message 'relation';
    function multiplier: CGFloat; message 'multiplier';
    procedure setConstant(newValue: CGFloat); message 'setConstant:';
    function constant: CGFloat; message 'constant';
    procedure setActive(newValue: objcbool); message 'setActive:'; { available in macos , ios  }
    function isActive: objcbool; message 'isActive'; { available in macos , ios  }
    class procedure activateConstraints (constraints: NSArray); message 'activateConstraints:'; { available in macos , ios  }
    class procedure deactivateConstraints (constraints: NSArray); message 'deactivateConstraints:'; { available in macos , ios  }
  end;


type
  NSIdentifier = objccategory external (NSLayoutConstraint)
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:'; { available in macos , ios  }
    function identifier: NSString; message 'identifier'; { available in macos , ios  }
  end;

type
  NSLayoutConstraintCategory = objccategory external (NSLayoutConstraint)
  end;

type
  NSConstraintBasedLayoutInstallingConstraints = objccategory external (NSView)
    function leadingAnchor: NSLayoutXAxisAnchor; message 'leadingAnchor'; { available in macos  }
    function trailingAnchor: NSLayoutXAxisAnchor; message 'trailingAnchor'; { available in macos  }
    function leftAnchor: NSLayoutXAxisAnchor; message 'leftAnchor'; { available in macos  }
    function rightAnchor: NSLayoutXAxisAnchor; message 'rightAnchor'; { available in macos  }
    function topAnchor: NSLayoutYAxisAnchor; message 'topAnchor'; { available in macos  }
    function bottomAnchor: NSLayoutYAxisAnchor; message 'bottomAnchor'; { available in macos  }
    function widthAnchor: NSLayoutDimension; message 'widthAnchor'; { available in macos  }
    function heightAnchor: NSLayoutDimension; message 'heightAnchor'; { available in macos  }
    function centerXAnchor: NSLayoutXAxisAnchor; message 'centerXAnchor'; { available in macos  }
    function centerYAnchor: NSLayoutYAxisAnchor; message 'centerYAnchor'; { available in macos  }
    function firstBaselineAnchor: NSLayoutYAxisAnchor; message 'firstBaselineAnchor'; { available in macos  }
    function lastBaselineAnchor: NSLayoutYAxisAnchor; message 'lastBaselineAnchor'; { available in macos  }
    function constraints: NSArray; message 'constraints'; { available in macos  }
    procedure addConstraint (constraint: NSLayoutConstraint); message 'addConstraint:'; { available in macos  }
    procedure addConstraints (constraints_: NSArray); message 'addConstraints:'; { available in macos  }
    procedure removeConstraint (constraint: NSLayoutConstraint); message 'removeConstraint:'; { available in macos  }
    procedure removeConstraints (constraints_: NSArray); message 'removeConstraints:'; { available in macos  }
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSWindow_NSConstraintBasedLayoutCoreMethods = objccategory external name 'NSConstraintBasedLayoutCoreMethods' (NSWindow)
    procedure updateConstraintsIfNeeded; message 'updateConstraintsIfNeeded'; { available in macos  }
    procedure layoutIfNeeded; message 'layoutIfNeeded'; { available in macos  }
  end;

type
  NSConstraintBasedLayoutCoreMethods = objccategory external (NSView)
    procedure updateConstraintsForSubtreeIfNeeded; message 'updateConstraintsForSubtreeIfNeeded'; { available in macos  }
    procedure updateConstraints; message 'updateConstraints'; { available in macos  }
    procedure setNeedsUpdateConstraints(newValue: objcbool); message 'setNeedsUpdateConstraints:'; { available in macos  }
    function needsUpdateConstraints: objcbool; message 'needsUpdateConstraints'; { available in macos  }
  end;

type
  NSConstraintBasedCompatibility = objccategory external (NSView)
    procedure setTranslatesAutoresizingMaskIntoConstraints(newValue: objcbool); message 'setTranslatesAutoresizingMaskIntoConstraints:'; { available in macos  }
    function translatesAutoresizingMaskIntoConstraints: objcbool; message 'translatesAutoresizingMaskIntoConstraints'; { available in macos  }
    class function requiresConstraintBasedLayout: objcbool; message 'requiresConstraintBasedLayout'; { available in macos  }
  end;

type
  NSView_NSConstraintBasedLayoutLayering = objccategory external name 'NSConstraintBasedLayoutLayering' (NSView)
    function alignmentRectForFrame (frame_: NSRect): NSRect; message 'alignmentRectForFrame:'; { available in macos  }
    function frameForAlignmentRect (alignmentRect: NSRect): NSRect; message 'frameForAlignmentRect:'; { available in macos  }
    function alignmentRectInsets: NSEdgeInsets; message 'alignmentRectInsets'; { available in macos  }
    function firstBaselineOffsetFromTop: CGFloat; message 'firstBaselineOffsetFromTop'; { available in macos  }
    function lastBaselineOffsetFromBottom: CGFloat; message 'lastBaselineOffsetFromBottom'; { available in macos  }
    function baselineOffsetFromBottom: CGFloat; message 'baselineOffsetFromBottom'; { available in macos  }
    function intrinsicContentSize: NSSize; message 'intrinsicContentSize'; { available in macos  }
    procedure invalidateIntrinsicContentSize; message 'invalidateIntrinsicContentSize'; { available in macos  }
    {$if  not defined(TARGET_OS_IPHONE)}
    function contentHuggingPriorityForOrientation (orientation: NSLayoutConstraintOrientation): NSLayoutPriority; message 'contentHuggingPriorityForOrientation:'; { available in macos  }
    procedure setContentHuggingPriority_forOrientation (priority: NSLayoutPriority; orientation: NSLayoutConstraintOrientation); message 'setContentHuggingPriority:forOrientation:'; { available in macos  }
    function contentCompressionResistancePriorityForOrientation (orientation: NSLayoutConstraintOrientation): NSLayoutPriority; message 'contentCompressionResistancePriorityForOrientation:'; { available in macos  }
    procedure setContentCompressionResistancePriority_forOrientation (priority: NSLayoutPriority; orientation: NSLayoutConstraintOrientation); message 'setContentCompressionResistancePriority:forOrientation:'; { available in macos  }
    {$endif}
    procedure setHorizontalContentSizeConstraintActive(newValue: objcbool); message 'setHorizontalContentSizeConstraintActive:'; { available in macos  }
    function isHorizontalContentSizeConstraintActive: objcbool; message 'isHorizontalContentSizeConstraintActive'; { available in macos  }
    procedure setVerticalContentSizeConstraintActive(newValue: objcbool); message 'setVerticalContentSizeConstraintActive:'; { available in macos  }
    function isVerticalContentSizeConstraintActive: objcbool; message 'isVerticalContentSizeConstraintActive'; { available in macos  }
  end;

type
  NSConstraintBasedLayoutLayering = objccategory external (NSControl)
    procedure invalidateIntrinsicContentSizeForCell (cell: NSCell); message 'invalidateIntrinsicContentSizeForCell:'; { available in macos  }
  end;

type
  NSConstraintBasedLayoutAnchoring = objccategory external (NSWindow)
    {$if  not defined(TARGET_OS_IPHONE)}
    function anchorAttributeForOrientation (orientation: NSLayoutConstraintOrientation): NSLayoutAttribute; message 'anchorAttributeForOrientation:';
    procedure setAnchorAttribute_forOrientation (attr: NSLayoutAttribute; orientation: NSLayoutConstraintOrientation); message 'setAnchorAttribute:forOrientation:';
    {$endif}
  end;

type
  NSConstraintBasedLayoutFittingSize = objccategory external (NSView)
    function fittingSize: NSSize; message 'fittingSize'; { available in macos  }
  end;

type
  NSView_NSConstraintBasedLayoutDebugging = objccategory external name 'NSConstraintBasedLayoutDebugging' (NSView)
    {$if  not defined(TARGET_OS_IPHONE)}
    function constraintsAffectingLayoutForOrientation (orientation: NSLayoutConstraintOrientation): NSArray; message 'constraintsAffectingLayoutForOrientation:'; { available in macos  }
    {$endif}
    function hasAmbiguousLayout: objcbool; message 'hasAmbiguousLayout'; { available in macos  }
    procedure exerciseAmbiguityInLayout; message 'exerciseAmbiguityInLayout'; { available in macos  }
  end;

type
  NSConstraintBasedLayoutDebugging = objccategory external (NSWindow)
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure visualizeConstraints (constraints: NSArray); message 'visualizeConstraints:'; { available in macos  }
    {$endif}
  end;
{$endif}

