{ Parsed from AppKit.framework NSLayoutConstraint.h }

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
  NSLayoutPriority = single { available in macos 10.7 };
  NSLayoutPriorityPtr = ^NSLayoutPriority { available in macos 10.7 };

const
  NSLayoutPriorityRequired = 1000 { available in macos 10.7 };
  NSLayoutPriorityDefaultHigh = 750 { available in macos 10.7 };
  NSLayoutPriorityDragThatCanResizeWindow = 510 { available in macos 10.7 };
  NSLayoutPriorityWindowSizeStayPut = 500 { available in macos 10.7 };
  NSLayoutPriorityDragThatCannotResizeWindow = 490 { available in macos 10.7 };
  NSLayoutPriorityDefaultLow = 250 { available in macos 10.7 };
  NSLayoutPriorityFittingSizeCompression = 50 { available in macos 10.7 };

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
  NSLayoutAttributeFirstBaseline = 12 { available in macos 10.11, ios 8.0 };
  {$if defined(TARGET_OS_IPHONE)}
  NSLayoutAttributeLeftMargin = 13 { available in ios 8.0 };
  NSLayoutAttributeRightMargin = 14 { available in ios 8.0 };
  NSLayoutAttributeTopMargin = 15 { available in ios 8.0 };
  NSLayoutAttributeBottomMargin = 16 { available in ios 8.0 };
  NSLayoutAttributeLeadingMargin = 17 { available in ios 8.0 };
  NSLayoutAttributeTrailingMargin = 18 { available in ios 8.0 };
  NSLayoutAttributeCenterXWithinMargins = 19 { available in ios 8.0 };
  NSLayoutAttributeCenterYWithinMargins = 20 { available in ios 8.0 };
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
  NSLayoutFormatAlignAllFirstBaseline = 1 shl NSLayoutAttributeFirstBaseline { available in macos 10.11, ios 8.0 };
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
  NSLayoutFormatSpacingEdgeToEdge = 0 shl 19 { available in ios 11.0,tvos 11.0 };
  NSLayoutFormatSpacingBaselineToBaseline = 1 shl 19 { available in ios 11.0,tvos 11.0 };
  NSLayoutFormatSpacingMask = $1 shl 19 { available in ios 11.0,tvos 11.0 };
  {$endif}
{$endif}

{$ifdef CLASSES}

type
  NSLayoutConstraint = objcclass external (NSObject)
  public
    class function constraintsWithVisualFormat_options_metrics_views (format: NSString; opts: NSLayoutFormatOptions; metrics: NSDictionary; views: NSDictionary): NSArray; message 'constraintsWithVisualFormat:options:metrics:views:'; { available in macos 10.7, ios 6.0, tvos 9.0 }
    class function constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant (view1: id; attr1: NSLayoutAttribute; relation: NSLayoutRelation; view2: id; attr2: NSLayoutAttribute; multiplier: CGFloat; c: CGFloat): id; message 'constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:'; { available in macos 10.7, ios 6.0, tvos 9.0 }
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
    function firstAnchor: NSLayoutAnchor; message 'firstAnchor'; { available in macos 10.12, ios 10.0 }
    function secondAnchor: NSLayoutAnchor; message 'secondAnchor'; { available in macos 10.12, ios 10.0 }
    function relation: NSLayoutRelation; message 'relation';
    function multiplier: CGFloat; message 'multiplier';
    procedure setConstant(newValue: CGFloat); message 'setConstant:';
    function constant: CGFloat; message 'constant';
    procedure setActive(newValue: objcbool); message 'setActive:'; { available in macos 10.10, ios 8.0 }
    function isActive: objcbool; message 'isActive'; { available in macos 10.10, ios 8.0 }
    class procedure activateConstraints (constraints: NSArray); message 'activateConstraints:'; { available in macos 10.10, ios 8.0 }
    class procedure deactivateConstraints (constraints: NSArray); message 'deactivateConstraints:'; { available in macos 10.10, ios 8.0 }
  end;


type
  NSIdentifier = objccategory external (NSLayoutConstraint)
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:'; { available in macos 10.7, ios 7.0 }
    function identifier: NSString; message 'identifier'; { available in macos 10.7, ios 7.0 }
  end;

type
  NSLayoutConstraintCategory = objccategory external (NSLayoutConstraint)
  end;

type
  NSConstraintBasedLayoutInstallingConstraints = objccategory external (NSView)
    function leadingAnchor: NSLayoutXAxisAnchor; message 'leadingAnchor'; { available in macos 10.11 }
    function trailingAnchor: NSLayoutXAxisAnchor; message 'trailingAnchor'; { available in macos 10.11 }
    function leftAnchor: NSLayoutXAxisAnchor; message 'leftAnchor'; { available in macos 10.11 }
    function rightAnchor: NSLayoutXAxisAnchor; message 'rightAnchor'; { available in macos 10.11 }
    function topAnchor: NSLayoutYAxisAnchor; message 'topAnchor'; { available in macos 10.11 }
    function bottomAnchor: NSLayoutYAxisAnchor; message 'bottomAnchor'; { available in macos 10.11 }
    function widthAnchor: NSLayoutDimension; message 'widthAnchor'; { available in macos 10.11 }
    function heightAnchor: NSLayoutDimension; message 'heightAnchor'; { available in macos 10.11 }
    function centerXAnchor: NSLayoutXAxisAnchor; message 'centerXAnchor'; { available in macos 10.11 }
    function centerYAnchor: NSLayoutYAxisAnchor; message 'centerYAnchor'; { available in macos 10.11 }
    function firstBaselineAnchor: NSLayoutYAxisAnchor; message 'firstBaselineAnchor'; { available in macos 10.11 }
    function lastBaselineAnchor: NSLayoutYAxisAnchor; message 'lastBaselineAnchor'; { available in macos 10.11 }
    function constraints: NSArray; message 'constraints'; { available in macos 10.7 }
    procedure addConstraint (constraint: NSLayoutConstraint); message 'addConstraint:'; { available in macos 10.7 }
    procedure addConstraints (constraints_: NSArray); message 'addConstraints:'; { available in macos 10.7 }
    procedure removeConstraint (constraint: NSLayoutConstraint); message 'removeConstraint:'; { available in macos 10.7 }
    procedure removeConstraints (constraints_: NSArray); message 'removeConstraints:'; { available in macos 10.7 }
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSWindow_NSConstraintBasedLayoutCoreMethods = objccategory external name 'NSConstraintBasedLayoutCoreMethods' (NSWindow)
    procedure updateConstraintsIfNeeded; message 'updateConstraintsIfNeeded'; { available in macos 10.7 }
    procedure layoutIfNeeded; message 'layoutIfNeeded'; { available in macos 10.7 }
  end;

type
  NSConstraintBasedLayoutCoreMethods = objccategory external (NSView)
    procedure updateConstraintsForSubtreeIfNeeded; message 'updateConstraintsForSubtreeIfNeeded'; { available in macos 10.7 }
    procedure updateConstraints; message 'updateConstraints'; { available in macos 10.7 }
    procedure setNeedsUpdateConstraints(newValue: objcbool); message 'setNeedsUpdateConstraints:'; { available in macos 10.7 }
    function needsUpdateConstraints: objcbool; message 'needsUpdateConstraints'; { available in macos 10.7 }
  end;

type
  NSConstraintBasedCompatibility = objccategory external (NSView)
    procedure setTranslatesAutoresizingMaskIntoConstraints(newValue: objcbool); message 'setTranslatesAutoresizingMaskIntoConstraints:'; { available in macos 10.7 }
    function translatesAutoresizingMaskIntoConstraints: objcbool; message 'translatesAutoresizingMaskIntoConstraints'; { available in macos 10.7 }
    class function requiresConstraintBasedLayout: objcbool; message 'requiresConstraintBasedLayout'; { available in macos 10.7 }
  end;

type
  NSView_NSConstraintBasedLayoutLayering = objccategory external name 'NSConstraintBasedLayoutLayering' (NSView)
    function alignmentRectForFrame (frame_: NSRect): NSRect; message 'alignmentRectForFrame:'; { available in macos 10.7 }
    function frameForAlignmentRect (alignmentRect: NSRect): NSRect; message 'frameForAlignmentRect:'; { available in macos 10.7 }
    function alignmentRectInsets: NSEdgeInsets; message 'alignmentRectInsets'; { available in macos 10.7 }
    function firstBaselineOffsetFromTop: CGFloat; message 'firstBaselineOffsetFromTop'; { available in macos 10.11 }
    function lastBaselineOffsetFromBottom: CGFloat; message 'lastBaselineOffsetFromBottom'; { available in macos 10.11 }
    function baselineOffsetFromBottom: CGFloat; message 'baselineOffsetFromBottom'; { available in macos 10.7 }
    function intrinsicContentSize: NSSize; message 'intrinsicContentSize'; { available in macos 10.7 }
    procedure invalidateIntrinsicContentSize; message 'invalidateIntrinsicContentSize'; { available in macos 10.7 }
    {$if  not defined(TARGET_OS_IPHONE)}
    function contentHuggingPriorityForOrientation (orientation: NSLayoutConstraintOrientation): NSLayoutPriority; message 'contentHuggingPriorityForOrientation:'; { available in macos 10.7 }
    procedure setContentHuggingPriority_forOrientation (priority: NSLayoutPriority; orientation: NSLayoutConstraintOrientation); message 'setContentHuggingPriority:forOrientation:'; { available in macos 10.7 }
    function contentCompressionResistancePriorityForOrientation (orientation: NSLayoutConstraintOrientation): NSLayoutPriority; message 'contentCompressionResistancePriorityForOrientation:'; { available in macos 10.7 }
    procedure setContentCompressionResistancePriority_forOrientation (priority: NSLayoutPriority; orientation: NSLayoutConstraintOrientation); message 'setContentCompressionResistancePriority:forOrientation:'; { available in macos 10.7 }
    {$endif}
    procedure setHorizontalContentSizeConstraintActive(newValue: objcbool); message 'setHorizontalContentSizeConstraintActive:'; { available in macos 10.15 }
    function isHorizontalContentSizeConstraintActive: objcbool; message 'isHorizontalContentSizeConstraintActive'; { available in macos 10.15 }
    procedure setVerticalContentSizeConstraintActive(newValue: objcbool); message 'setVerticalContentSizeConstraintActive:'; { available in macos 10.15 }
    function isVerticalContentSizeConstraintActive: objcbool; message 'isVerticalContentSizeConstraintActive'; { available in macos 10.15 }
  end;

type
  NSConstraintBasedLayoutLayering = objccategory external (NSControl)
    procedure invalidateIntrinsicContentSizeForCell (cell: NSCell); message 'invalidateIntrinsicContentSizeForCell:'; { available in macos 10.7 }
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
    function fittingSize: NSSize; message 'fittingSize'; { available in macos 10.7 }
  end;

type
  NSView_NSConstraintBasedLayoutDebugging = objccategory external name 'NSConstraintBasedLayoutDebugging' (NSView)
    {$if  not defined(TARGET_OS_IPHONE)}
    function constraintsAffectingLayoutForOrientation (orientation: NSLayoutConstraintOrientation): NSArray; message 'constraintsAffectingLayoutForOrientation:'; { available in macos 10.7 }
    {$endif}
    function hasAmbiguousLayout: objcbool; message 'hasAmbiguousLayout'; { available in macos 10.7 }
    procedure exerciseAmbiguityInLayout; message 'exerciseAmbiguityInLayout'; { available in macos 10.7 }
  end;

type
  NSConstraintBasedLayoutDebugging = objccategory external (NSWindow)
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure visualizeConstraints (constraints: NSArray); message 'visualizeConstraints:'; { available in macos 10.7 }
    {$endif}
  end;
{$endif}

