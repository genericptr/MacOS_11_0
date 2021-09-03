{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSPopover.h }

{ Types from NSPopover }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  NSPopoverPtr = ^NSPopover;
  NSPopoverDelegateProtocolPtr = ^NSPopoverDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSPopoverAppearance = NSInteger;
  NSPopoverAppearancePtr = ^NSPopoverAppearance;

const
  NSPopoverAppearanceMinimal = 0 deprecated;
  NSPopoverAppearanceHUD = 1 deprecated;

type
  NSPopoverBehavior = NSInteger;
  NSPopoverBehaviorPtr = ^NSPopoverBehavior;

const
  NSPopoverBehaviorApplicationDefined = 0;
  NSPopoverBehaviorTransient = 1;
  NSPopoverBehaviorSemitransient = 2;
{$endif}

{$ifdef CLASSES}

type
  NSPopover = objcclass external (NSResponder, NSAppearanceCustomizationProtocol, NSAccessibilityElementProtocol, NSAccessibilityProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setAppearance(newValue: NSAppearance); message 'setAppearance:'; { available in macos  }
    function appearance: NSAppearance; message 'appearance'; { available in macos  }
    function effectiveAppearance: NSAppearance; message 'effectiveAppearance'; { available in macos  }
    procedure setBehavior(newValue: NSPopoverBehavior); message 'setBehavior:';
    function behavior: NSPopoverBehavior; message 'behavior';
    procedure setAnimates(newValue: objcbool); message 'setAnimates:';
    function animates: objcbool; message 'animates';
    procedure setContentViewController(newValue: NSViewController); message 'setContentViewController:';
    function contentViewController: NSViewController; message 'contentViewController';
    procedure setContentSize(newValue: NSSize); message 'setContentSize:';
    function contentSize: NSSize; message 'contentSize';
    function isShown: objcbool; message 'isShown';
    function isDetached: objcbool; message 'isDetached'; { available in macos  }
    procedure setPositioningRect(newValue: NSRect); message 'setPositioningRect:';
    function positioningRect: NSRect; message 'positioningRect';
    procedure showRelativeToRect_ofView_preferredEdge (positioningRect_: NSRect; positioningView: NSView; preferredEdge: NSRectEdge); message 'showRelativeToRect:ofView:preferredEdge:';
    procedure performClose (sender: id); message 'performClose:';
    procedure close; message 'close';

    { Adopted protocols }
    function accessibilityActivationPoint: NSPoint; message 'accessibilityActivationPoint'; { available in macos  }
    function accessibilityAllowedValues: NSArray; message 'accessibilityAllowedValues'; { available in macos  }
    function accessibilityApplicationFocusedUIElement: id; message 'accessibilityApplicationFocusedUIElement'; { available in macos  }
    function accessibilityAttributedStringForRange (range: NSRange): NSAttributedString; message 'accessibilityAttributedStringForRange:'; { available in macos  }
    function accessibilityCancelButton: id; message 'accessibilityCancelButton'; { available in macos  }
    function accessibilityCellForColumn_row (column: NSInteger; row: NSInteger): id; message 'accessibilityCellForColumn:row:'; { available in macos  }
    function accessibilityChildren: NSArray; message 'accessibilityChildren'; { available in macos  }
    function accessibilityChildrenInNavigationOrder: NSArray; message 'accessibilityChildrenInNavigationOrder'; { available in macos  }
    function accessibilityClearButton: id; message 'accessibilityClearButton'; { available in macos  }
    function accessibilityCloseButton: id; message 'accessibilityCloseButton'; { available in macos  }
    function accessibilityColumnCount: NSInteger; message 'accessibilityColumnCount'; { available in macos  }
    function accessibilityColumnHeaderUIElements: NSArray; message 'accessibilityColumnHeaderUIElements'; { available in macos  }
    function accessibilityColumnIndexRange: NSRange; message 'accessibilityColumnIndexRange'; { available in macos  }
    function accessibilityColumns: NSArray; message 'accessibilityColumns'; { available in macos  }
    function accessibilityColumnTitles: NSArray; message 'accessibilityColumnTitles'; { available in macos  }
    function accessibilityContents: NSArray; message 'accessibilityContents'; { available in macos  }
    function accessibilityCriticalValue: id; message 'accessibilityCriticalValue'; { available in macos  }
    function accessibilityCustomActions: NSArray; message 'accessibilityCustomActions'; { available in macos  }
    function accessibilityCustomRotors: NSArray; message 'accessibilityCustomRotors'; { available in macos  }
    function accessibilityDecrementButton: id; message 'accessibilityDecrementButton'; { available in macos  }
    function accessibilityDefaultButton: id; message 'accessibilityDefaultButton'; { available in macos  }
    function accessibilityDisclosedByRow: id; message 'accessibilityDisclosedByRow'; { available in macos  }
    function accessibilityDisclosedRows: id; message 'accessibilityDisclosedRows'; { available in macos  }
    function accessibilityDisclosureLevel: NSInteger; message 'accessibilityDisclosureLevel'; { available in macos  }
    function accessibilityDocument: NSString; message 'accessibilityDocument'; { available in macos  }
    function accessibilityExtrasMenuBar: id; message 'accessibilityExtrasMenuBar'; { available in macos  }
    function accessibilityFilename: NSString; message 'accessibilityFilename'; { available in macos  }
    function accessibilityFocusedWindow: id; message 'accessibilityFocusedWindow'; { available in macos  }
    function accessibilityFrame: NSRect; message 'accessibilityFrame';
    function accessibilityFrameForRange (range: NSRange): NSRect; message 'accessibilityFrameForRange:'; { available in macos  }
    function accessibilityFullScreenButton: id; message 'accessibilityFullScreenButton'; { available in macos  }
    function accessibilityGrowArea: id; message 'accessibilityGrowArea'; { available in macos  }
    function accessibilityHandles: NSArray; message 'accessibilityHandles'; { available in macos  }
    function accessibilityHeader: id; message 'accessibilityHeader'; { available in macos  }
    function accessibilityHelp: NSString; message 'accessibilityHelp'; { available in macos  }
    function accessibilityHorizontalScrollBar: id; message 'accessibilityHorizontalScrollBar'; { available in macos  }
    function accessibilityHorizontalUnitDescription: NSString; message 'accessibilityHorizontalUnitDescription'; { available in macos  }
    function accessibilityHorizontalUnits: NSAccessibilityUnits; message 'accessibilityHorizontalUnits'; { available in macos  }
    function accessibilityIdentifier: NSString; message 'accessibilityIdentifier';
    function accessibilityIncrementButton: id; message 'accessibilityIncrementButton'; { available in macos  }
    function accessibilityIndex: NSInteger; message 'accessibilityIndex'; { available in macos  }
    function accessibilityInsertionPointLineNumber: NSInteger; message 'accessibilityInsertionPointLineNumber'; { available in macos  }
    function accessibilityLabel: NSString; message 'accessibilityLabel'; { available in macos  }
    function accessibilityLabelUIElements: NSArray; message 'accessibilityLabelUIElements'; { available in macos  }
    function accessibilityLabelValue: single; message 'accessibilityLabelValue'; { available in macos  }
    function accessibilityLayoutPointForScreenPoint (point: NSPoint): NSPoint; message 'accessibilityLayoutPointForScreenPoint:'; { available in macos  }
    function accessibilityLayoutSizeForScreenSize (size: NSSize): NSSize; message 'accessibilityLayoutSizeForScreenSize:'; { available in macos  }
    function accessibilityLineForIndex (index: NSInteger): NSInteger; message 'accessibilityLineForIndex:'; { available in macos  }
    function accessibilityLinkedUIElements: NSArray; message 'accessibilityLinkedUIElements'; { available in macos  }
    function accessibilityMainWindow: id; message 'accessibilityMainWindow'; { available in macos  }
    function accessibilityMarkerGroupUIElement: id; message 'accessibilityMarkerGroupUIElement'; { available in macos  }
    function accessibilityMarkerTypeDescription: NSString; message 'accessibilityMarkerTypeDescription'; { available in macos  }
    function accessibilityMarkerUIElements: NSArray; message 'accessibilityMarkerUIElements'; { available in macos  }
    function accessibilityMarkerValues: id; message 'accessibilityMarkerValues'; { available in macos  }
    function accessibilityMaxValue: id; message 'accessibilityMaxValue'; { available in macos  }
    function accessibilityMenuBar: id; message 'accessibilityMenuBar'; { available in macos  }
    function accessibilityMinimizeButton: id; message 'accessibilityMinimizeButton'; { available in macos  }
    function accessibilityMinValue: id; message 'accessibilityMinValue'; { available in macos  }
    function accessibilityNextContents: NSArray; message 'accessibilityNextContents'; { available in macos  }
    function accessibilityNumberOfCharacters: NSInteger; message 'accessibilityNumberOfCharacters'; { available in macos  }
    function accessibilityOrientation: NSAccessibilityOrientation; message 'accessibilityOrientation'; { available in macos  }
    function accessibilityOverflowButton: id; message 'accessibilityOverflowButton'; { available in macos  }
    function accessibilityParent: id; message 'accessibilityParent';
    function accessibilityPerformCancel: objcbool; message 'accessibilityPerformCancel'; { available in macos  }
    function accessibilityPerformConfirm: objcbool; message 'accessibilityPerformConfirm'; { available in macos  }
    function accessibilityPerformDecrement: objcbool; message 'accessibilityPerformDecrement'; { available in macos  }
    function accessibilityPerformDelete: objcbool; message 'accessibilityPerformDelete'; { available in macos  }
    function accessibilityPerformIncrement: objcbool; message 'accessibilityPerformIncrement'; { available in macos  }
    function accessibilityPerformPick: objcbool; message 'accessibilityPerformPick'; { available in macos  }
    function accessibilityPerformPress: objcbool; message 'accessibilityPerformPress'; { available in macos  }
    function accessibilityPerformRaise: objcbool; message 'accessibilityPerformRaise'; { available in macos  }
    function accessibilityPerformShowAlternateUI: objcbool; message 'accessibilityPerformShowAlternateUI'; { available in macos  }
    function accessibilityPerformShowDefaultUI: objcbool; message 'accessibilityPerformShowDefaultUI'; { available in macos  }
    function accessibilityPerformShowMenu: objcbool; message 'accessibilityPerformShowMenu'; { available in macos  }
    function accessibilityPlaceholderValue: NSString; message 'accessibilityPlaceholderValue'; { available in macos  }
    function accessibilityPreviousContents: NSArray; message 'accessibilityPreviousContents'; { available in macos  }
    function accessibilityProxy: id; message 'accessibilityProxy'; { available in macos  }
    function accessibilityRangeForIndex (index: NSInteger): NSRange; message 'accessibilityRangeForIndex:'; { available in macos  }
    function accessibilityRangeForLine (line: NSInteger): NSRange; message 'accessibilityRangeForLine:'; { available in macos  }
    function accessibilityRangeForPosition (point: NSPoint): NSRange; message 'accessibilityRangeForPosition:'; { available in macos  }
    function accessibilityRole: NSAccessibilityRole; message 'accessibilityRole'; { available in macos  }
    function accessibilityRoleDescription: NSString; message 'accessibilityRoleDescription'; { available in macos  }
    function accessibilityRowCount: NSInteger; message 'accessibilityRowCount'; { available in macos  }
    function accessibilityRowHeaderUIElements: NSArray; message 'accessibilityRowHeaderUIElements'; { available in macos  }
    function accessibilityRowIndexRange: NSRange; message 'accessibilityRowIndexRange'; { available in macos  }
    function accessibilityRows: NSArray; message 'accessibilityRows'; { available in macos  }
    function accessibilityRTFForRange (range: NSRange): NSData; message 'accessibilityRTFForRange:'; { available in macos  }
    function accessibilityRulerMarkerType: NSAccessibilityRulerMarkerType; message 'accessibilityRulerMarkerType'; { available in macos  }
    function accessibilityScreenPointForLayoutPoint (point: NSPoint): NSPoint; message 'accessibilityScreenPointForLayoutPoint:'; { available in macos  }
    function accessibilityScreenSizeForLayoutSize (size: NSSize): NSSize; message 'accessibilityScreenSizeForLayoutSize:'; { available in macos  }
    function accessibilitySearchButton: id; message 'accessibilitySearchButton'; { available in macos  }
    function accessibilitySearchMenu: id; message 'accessibilitySearchMenu'; { available in macos  }
    function accessibilitySelectedCells: NSArray; message 'accessibilitySelectedCells'; { available in macos  }
    function accessibilitySelectedChildren: NSArray; message 'accessibilitySelectedChildren'; { available in macos  }
    function accessibilitySelectedColumns: NSArray; message 'accessibilitySelectedColumns'; { available in macos  }
    function accessibilitySelectedRows: NSArray; message 'accessibilitySelectedRows'; { available in macos  }
    function accessibilitySelectedText: NSString; message 'accessibilitySelectedText'; { available in macos  }
    function accessibilitySelectedTextRange: NSRange; message 'accessibilitySelectedTextRange'; { available in macos  }
    function accessibilitySelectedTextRanges: NSArray; message 'accessibilitySelectedTextRanges'; { available in macos  }
    function accessibilityServesAsTitleForUIElements: NSArray; message 'accessibilityServesAsTitleForUIElements'; { available in macos  }
    function accessibilitySharedCharacterRange: NSRange; message 'accessibilitySharedCharacterRange'; { available in macos  }
    function accessibilitySharedFocusElements: NSArray; message 'accessibilitySharedFocusElements'; { available in macos  }
    function accessibilitySharedTextUIElements: NSArray; message 'accessibilitySharedTextUIElements'; { available in macos  }
    function accessibilityShownMenu: id; message 'accessibilityShownMenu'; { available in macos  }
    function accessibilitySortDirection: NSAccessibilitySortDirection; message 'accessibilitySortDirection'; { available in macos  }
    function accessibilitySplitters: NSArray; message 'accessibilitySplitters'; { available in macos  }
    function accessibilityStringForRange (range: NSRange): NSString; message 'accessibilityStringForRange:'; { available in macos  }
    function accessibilityStyleRangeForIndex (index: NSInteger): NSRange; message 'accessibilityStyleRangeForIndex:'; { available in macos  }
    function accessibilitySubrole: NSAccessibilitySubrole; message 'accessibilitySubrole'; { available in macos  }
    function accessibilityTabs: NSArray; message 'accessibilityTabs'; { available in macos  }
    function accessibilityTitle: NSString; message 'accessibilityTitle'; { available in macos  }
    function accessibilityTitleUIElement: id; message 'accessibilityTitleUIElement'; { available in macos  }
    function accessibilityToolbarButton: id; message 'accessibilityToolbarButton'; { available in macos  }
    function accessibilityTopLevelUIElement: id; message 'accessibilityTopLevelUIElement'; { available in macos  }
    function accessibilityUnitDescription: NSString; message 'accessibilityUnitDescription'; { available in macos  }
    function accessibilityUnits: NSAccessibilityUnits; message 'accessibilityUnits'; { available in macos  }
    function accessibilityURL: NSURL; message 'accessibilityURL'; { available in macos  }
    function accessibilityValue: id; message 'accessibilityValue'; { available in macos  }
    function accessibilityValueDescription: NSString; message 'accessibilityValueDescription'; { available in macos  }
    function accessibilityVerticalScrollBar: id; message 'accessibilityVerticalScrollBar'; { available in macos  }
    function accessibilityVerticalUnitDescription: NSString; message 'accessibilityVerticalUnitDescription'; { available in macos  }
    function accessibilityVerticalUnits: NSAccessibilityUnits; message 'accessibilityVerticalUnits'; { available in macos  }
    function accessibilityVisibleCells: NSArray; message 'accessibilityVisibleCells'; { available in macos  }
    function accessibilityVisibleCharacterRange: NSRange; message 'accessibilityVisibleCharacterRange'; { available in macos  }
    function accessibilityVisibleChildren: NSArray; message 'accessibilityVisibleChildren'; { available in macos  }
    function accessibilityVisibleColumns: NSArray; message 'accessibilityVisibleColumns'; { available in macos  }
    function accessibilityVisibleRows: NSArray; message 'accessibilityVisibleRows'; { available in macos  }
    function accessibilityWarningValue: id; message 'accessibilityWarningValue'; { available in macos  }
    function accessibilityWindow: id; message 'accessibilityWindow'; { available in macos  }
    function accessibilityWindows: NSArray; message 'accessibilityWindows'; { available in macos  }
    function accessibilityZoomButton: id; message 'accessibilityZoomButton'; { available in macos  }
    function appearance__: NSAppearance; message 'appearance'; { available in macos  }
    function effectiveAppearance_: NSAppearance; message 'effectiveAppearance'; { available in macos  }
    function isAccessibilityAlternateUIVisible: objcbool; message 'isAccessibilityAlternateUIVisible'; { available in macos  }
    function isAccessibilityDisclosed: objcbool; message 'isAccessibilityDisclosed'; { available in macos  }
    function isAccessibilityEdited: objcbool; message 'isAccessibilityEdited'; { available in macos  }
    function isAccessibilityElement: objcbool; message 'isAccessibilityElement'; { available in macos  }
    function isAccessibilityEnabled: objcbool; message 'isAccessibilityEnabled'; { available in macos  }
    function isAccessibilityExpanded: objcbool; message 'isAccessibilityExpanded'; { available in macos  }
    function isAccessibilityFocused: objcbool; message 'isAccessibilityFocused';
    function isAccessibilityFrontmost: objcbool; message 'isAccessibilityFrontmost'; { available in macos  }
    function isAccessibilityHidden: objcbool; message 'isAccessibilityHidden'; { available in macos  }
    function isAccessibilityMain: objcbool; message 'isAccessibilityMain'; { available in macos  }
    function isAccessibilityMinimized: objcbool; message 'isAccessibilityMinimized'; { available in macos  }
    function isAccessibilityModal: objcbool; message 'isAccessibilityModal'; { available in macos  }
    function isAccessibilityOrderedByRow: objcbool; message 'isAccessibilityOrderedByRow'; { available in macos  }
    function isAccessibilityProtectedContent: objcbool; message 'isAccessibilityProtectedContent'; { available in macos  }
    function isAccessibilityRequired: objcbool; message 'isAccessibilityRequired'; { available in macos  }
    function isAccessibilitySelected: objcbool; message 'isAccessibilitySelected'; { available in macos  }
    function isAccessibilitySelectorAllowed (selector: SEL): objcbool; message 'isAccessibilitySelectorAllowed:'; { available in macos  }
    procedure setAccessibilityActivationPoint (newValue: NSPoint); message 'setAccessibilityActivationPoint:'; { available in macos  }
    procedure setAccessibilityAllowedValues (newValue: NSArray); message 'setAccessibilityAllowedValues:'; { available in macos  }
    procedure setAccessibilityAlternateUIVisible (newValue: objcbool); message 'setAccessibilityAlternateUIVisible:'; { available in macos  }
    procedure setAccessibilityApplicationFocusedUIElement (newValue: id); message 'setAccessibilityApplicationFocusedUIElement:'; { available in macos  }
    procedure setAccessibilityCancelButton (newValue: id); message 'setAccessibilityCancelButton:'; { available in macos  }
    procedure setAccessibilityChildren (newValue: NSArray); message 'setAccessibilityChildren:'; { available in macos  }
    procedure setAccessibilityChildrenInNavigationOrder (newValue: NSArray); message 'setAccessibilityChildrenInNavigationOrder:'; { available in macos  }
    procedure setAccessibilityClearButton (newValue: id); message 'setAccessibilityClearButton:'; { available in macos  }
    procedure setAccessibilityCloseButton (newValue: id); message 'setAccessibilityCloseButton:'; { available in macos  }
    procedure setAccessibilityColumnCount (newValue: NSInteger); message 'setAccessibilityColumnCount:'; { available in macos  }
    procedure setAccessibilityColumnHeaderUIElements (newValue: NSArray); message 'setAccessibilityColumnHeaderUIElements:'; { available in macos  }
    procedure setAccessibilityColumnIndexRange (newValue: NSRange); message 'setAccessibilityColumnIndexRange:'; { available in macos  }
    procedure setAccessibilityColumns (newValue: NSArray); message 'setAccessibilityColumns:'; { available in macos  }
    procedure setAccessibilityColumnTitles (newValue: NSArray); message 'setAccessibilityColumnTitles:'; { available in macos  }
    procedure setAccessibilityContents (newValue: NSArray); message 'setAccessibilityContents:'; { available in macos  }
    procedure setAccessibilityCriticalValue (newValue: id); message 'setAccessibilityCriticalValue:'; { available in macos  }
    procedure setAccessibilityCustomActions (newValue: NSArray); message 'setAccessibilityCustomActions:'; { available in macos  }
    procedure setAccessibilityCustomRotors (newValue: NSArray); message 'setAccessibilityCustomRotors:'; { available in macos  }
    procedure setAccessibilityDecrementButton (newValue: id); message 'setAccessibilityDecrementButton:'; { available in macos  }
    procedure setAccessibilityDefaultButton (newValue: id); message 'setAccessibilityDefaultButton:'; { available in macos  }
    procedure setAccessibilityDisclosed (newValue: objcbool); message 'setAccessibilityDisclosed:'; { available in macos  }
    procedure setAccessibilityDisclosedByRow (newValue: id); message 'setAccessibilityDisclosedByRow:'; { available in macos  }
    procedure setAccessibilityDisclosedRows (newValue: id); message 'setAccessibilityDisclosedRows:'; { available in macos  }
    procedure setAccessibilityDisclosureLevel (newValue: NSInteger); message 'setAccessibilityDisclosureLevel:'; { available in macos  }
    procedure setAccessibilityDocument (newValue: NSString); message 'setAccessibilityDocument:'; { available in macos  }
    procedure setAccessibilityEdited (newValue: objcbool); message 'setAccessibilityEdited:'; { available in macos  }
    procedure setAccessibilityElement (newValue: objcbool); message 'setAccessibilityElement:'; { available in macos  }
    procedure setAccessibilityEnabled (newValue: objcbool); message 'setAccessibilityEnabled:'; { available in macos  }
    procedure setAccessibilityExpanded (newValue: objcbool); message 'setAccessibilityExpanded:'; { available in macos  }
    procedure setAccessibilityExtrasMenuBar (newValue: id); message 'setAccessibilityExtrasMenuBar:'; { available in macos  }
    procedure setAccessibilityFilename (newValue: NSString); message 'setAccessibilityFilename:'; { available in macos  }
    procedure setAccessibilityFocused (newValue: objcbool); message 'setAccessibilityFocused:'; { available in macos  }
    procedure setAccessibilityFocusedWindow (newValue: id); message 'setAccessibilityFocusedWindow:'; { available in macos  }
    procedure setAccessibilityFrame (newValue: NSRect); message 'setAccessibilityFrame:'; { available in macos  }
    procedure setAccessibilityFrontmost (newValue: objcbool); message 'setAccessibilityFrontmost:'; { available in macos  }
    procedure setAccessibilityFullScreenButton (newValue: id); message 'setAccessibilityFullScreenButton:'; { available in macos  }
    procedure setAccessibilityGrowArea (newValue: id); message 'setAccessibilityGrowArea:'; { available in macos  }
    procedure setAccessibilityHandles (newValue: NSArray); message 'setAccessibilityHandles:'; { available in macos  }
    procedure setAccessibilityHeader (newValue: id); message 'setAccessibilityHeader:'; { available in macos  }
    procedure setAccessibilityHelp (newValue: NSString); message 'setAccessibilityHelp:'; { available in macos  }
    procedure setAccessibilityHidden (newValue: objcbool); message 'setAccessibilityHidden:'; { available in macos  }
    procedure setAccessibilityHorizontalScrollBar (newValue: id); message 'setAccessibilityHorizontalScrollBar:'; { available in macos  }
    procedure setAccessibilityHorizontalUnitDescription (newValue: NSString); message 'setAccessibilityHorizontalUnitDescription:'; { available in macos  }
    procedure setAccessibilityHorizontalUnits (newValue: NSAccessibilityUnits); message 'setAccessibilityHorizontalUnits:'; { available in macos  }
    procedure setAccessibilityIdentifier (newValue: NSString); message 'setAccessibilityIdentifier:'; { available in macos  }
    procedure setAccessibilityIncrementButton (newValue: id); message 'setAccessibilityIncrementButton:'; { available in macos  }
    procedure setAccessibilityIndex (newValue: NSInteger); message 'setAccessibilityIndex:'; { available in macos  }
    procedure setAccessibilityInsertionPointLineNumber (newValue: NSInteger); message 'setAccessibilityInsertionPointLineNumber:'; { available in macos  }
    procedure setAccessibilityLabel (newValue: NSString); message 'setAccessibilityLabel:'; { available in macos  }
    procedure setAccessibilityLabelUIElements (newValue: NSArray); message 'setAccessibilityLabelUIElements:'; { available in macos  }
    procedure setAccessibilityLabelValue (newValue: single); message 'setAccessibilityLabelValue:'; { available in macos  }
    procedure setAccessibilityLinkedUIElements (newValue: NSArray); message 'setAccessibilityLinkedUIElements:'; { available in macos  }
    procedure setAccessibilityMain (newValue: objcbool); message 'setAccessibilityMain:'; { available in macos  }
    procedure setAccessibilityMainWindow (newValue: id); message 'setAccessibilityMainWindow:'; { available in macos  }
    procedure setAccessibilityMarkerGroupUIElement (newValue: id); message 'setAccessibilityMarkerGroupUIElement:'; { available in macos  }
    procedure setAccessibilityMarkerTypeDescription (newValue: NSString); message 'setAccessibilityMarkerTypeDescription:'; { available in macos  }
    procedure setAccessibilityMarkerUIElements (newValue: NSArray); message 'setAccessibilityMarkerUIElements:'; { available in macos  }
    procedure setAccessibilityMarkerValues (newValue: id); message 'setAccessibilityMarkerValues:'; { available in macos  }
    procedure setAccessibilityMaxValue (newValue: id); message 'setAccessibilityMaxValue:'; { available in macos  }
    procedure setAccessibilityMenuBar (newValue: id); message 'setAccessibilityMenuBar:'; { available in macos  }
    procedure setAccessibilityMinimizeButton (newValue: id); message 'setAccessibilityMinimizeButton:'; { available in macos  }
    procedure setAccessibilityMinimized (newValue: objcbool); message 'setAccessibilityMinimized:'; { available in macos  }
    procedure setAccessibilityMinValue (newValue: id); message 'setAccessibilityMinValue:'; { available in macos  }
    procedure setAccessibilityModal (newValue: objcbool); message 'setAccessibilityModal:'; { available in macos  }
    procedure setAccessibilityNextContents (newValue: NSArray); message 'setAccessibilityNextContents:'; { available in macos  }
    procedure setAccessibilityNumberOfCharacters (newValue: NSInteger); message 'setAccessibilityNumberOfCharacters:'; { available in macos  }
    procedure setAccessibilityOrderedByRow (newValue: objcbool); message 'setAccessibilityOrderedByRow:'; { available in macos  }
    procedure setAccessibilityOrientation (newValue: NSAccessibilityOrientation); message 'setAccessibilityOrientation:'; { available in macos  }
    procedure setAccessibilityOverflowButton (newValue: id); message 'setAccessibilityOverflowButton:'; { available in macos  }
    procedure setAccessibilityParent (newValue: id); message 'setAccessibilityParent:'; { available in macos  }
    procedure setAccessibilityPlaceholderValue (newValue: NSString); message 'setAccessibilityPlaceholderValue:'; { available in macos  }
    procedure setAccessibilityPreviousContents (newValue: NSArray); message 'setAccessibilityPreviousContents:'; { available in macos  }
    procedure setAccessibilityProtectedContent (newValue: objcbool); message 'setAccessibilityProtectedContent:'; { available in macos  }
    procedure setAccessibilityProxy (newValue: id); message 'setAccessibilityProxy:'; { available in macos  }
    procedure setAccessibilityRequired (newValue: objcbool); message 'setAccessibilityRequired:'; { available in macos  }
    procedure setAccessibilityRole (newValue: NSAccessibilityRole); message 'setAccessibilityRole:'; { available in macos  }
    procedure setAccessibilityRoleDescription (newValue: NSString); message 'setAccessibilityRoleDescription:'; { available in macos  }
    procedure setAccessibilityRowCount (newValue: NSInteger); message 'setAccessibilityRowCount:'; { available in macos  }
    procedure setAccessibilityRowHeaderUIElements (newValue: NSArray); message 'setAccessibilityRowHeaderUIElements:'; { available in macos  }
    procedure setAccessibilityRowIndexRange (newValue: NSRange); message 'setAccessibilityRowIndexRange:'; { available in macos  }
    procedure setAccessibilityRows (newValue: NSArray); message 'setAccessibilityRows:'; { available in macos  }
    procedure setAccessibilityRulerMarkerType (newValue: NSAccessibilityRulerMarkerType); message 'setAccessibilityRulerMarkerType:'; { available in macos  }
    procedure setAccessibilitySearchButton (newValue: id); message 'setAccessibilitySearchButton:'; { available in macos  }
    procedure setAccessibilitySearchMenu (newValue: id); message 'setAccessibilitySearchMenu:'; { available in macos  }
    procedure setAccessibilitySelected (newValue: objcbool); message 'setAccessibilitySelected:'; { available in macos  }
    procedure setAccessibilitySelectedCells (newValue: NSArray); message 'setAccessibilitySelectedCells:'; { available in macos  }
    procedure setAccessibilitySelectedChildren (newValue: NSArray); message 'setAccessibilitySelectedChildren:'; { available in macos  }
    procedure setAccessibilitySelectedColumns (newValue: NSArray); message 'setAccessibilitySelectedColumns:'; { available in macos  }
    procedure setAccessibilitySelectedRows (newValue: NSArray); message 'setAccessibilitySelectedRows:'; { available in macos  }
    procedure setAccessibilitySelectedText (newValue: NSString); message 'setAccessibilitySelectedText:'; { available in macos  }
    procedure setAccessibilitySelectedTextRange (newValue: NSRange); message 'setAccessibilitySelectedTextRange:'; { available in macos  }
    procedure setAccessibilitySelectedTextRanges (newValue: NSArray); message 'setAccessibilitySelectedTextRanges:'; { available in macos  }
    procedure setAccessibilityServesAsTitleForUIElements (newValue: NSArray); message 'setAccessibilityServesAsTitleForUIElements:'; { available in macos  }
    procedure setAccessibilitySharedCharacterRange (newValue: NSRange); message 'setAccessibilitySharedCharacterRange:'; { available in macos  }
    procedure setAccessibilitySharedFocusElements (newValue: NSArray); message 'setAccessibilitySharedFocusElements:'; { available in macos  }
    procedure setAccessibilitySharedTextUIElements (newValue: NSArray); message 'setAccessibilitySharedTextUIElements:'; { available in macos  }
    procedure setAccessibilityShownMenu (newValue: id); message 'setAccessibilityShownMenu:'; { available in macos  }
    procedure setAccessibilitySortDirection (newValue: NSAccessibilitySortDirection); message 'setAccessibilitySortDirection:'; { available in macos  }
    procedure setAccessibilitySplitters (newValue: NSArray); message 'setAccessibilitySplitters:'; { available in macos  }
    procedure setAccessibilitySubrole (newValue: NSAccessibilitySubrole); message 'setAccessibilitySubrole:'; { available in macos  }
    procedure setAccessibilityTabs (newValue: NSArray); message 'setAccessibilityTabs:'; { available in macos  }
    procedure setAccessibilityTitle (newValue: NSString); message 'setAccessibilityTitle:'; { available in macos  }
    procedure setAccessibilityTitleUIElement (newValue: id); message 'setAccessibilityTitleUIElement:'; { available in macos  }
    procedure setAccessibilityToolbarButton (newValue: id); message 'setAccessibilityToolbarButton:'; { available in macos  }
    procedure setAccessibilityTopLevelUIElement (newValue: id); message 'setAccessibilityTopLevelUIElement:'; { available in macos  }
    procedure setAccessibilityUnitDescription (newValue: NSString); message 'setAccessibilityUnitDescription:'; { available in macos  }
    procedure setAccessibilityUnits (newValue: NSAccessibilityUnits); message 'setAccessibilityUnits:'; { available in macos  }
    procedure setAccessibilityURL (newValue: NSURL); message 'setAccessibilityURL:'; { available in macos  }
    procedure setAccessibilityValue (newValue: id); message 'setAccessibilityValue:'; { available in macos  }
    procedure setAccessibilityValueDescription (newValue: NSString); message 'setAccessibilityValueDescription:'; { available in macos  }
    procedure setAccessibilityVerticalScrollBar (newValue: id); message 'setAccessibilityVerticalScrollBar:'; { available in macos  }
    procedure setAccessibilityVerticalUnitDescription (newValue: NSString); message 'setAccessibilityVerticalUnitDescription:'; { available in macos  }
    procedure setAccessibilityVerticalUnits (newValue: NSAccessibilityUnits); message 'setAccessibilityVerticalUnits:'; { available in macos  }
    procedure setAccessibilityVisibleCells (newValue: NSArray); message 'setAccessibilityVisibleCells:'; { available in macos  }
    procedure setAccessibilityVisibleCharacterRange (newValue: NSRange); message 'setAccessibilityVisibleCharacterRange:'; { available in macos  }
    procedure setAccessibilityVisibleChildren (newValue: NSArray); message 'setAccessibilityVisibleChildren:'; { available in macos  }
    procedure setAccessibilityVisibleColumns (newValue: NSArray); message 'setAccessibilityVisibleColumns:'; { available in macos  }
    procedure setAccessibilityVisibleRows (newValue: NSArray); message 'setAccessibilityVisibleRows:'; { available in macos  }
    procedure setAccessibilityWarningValue (newValue: id); message 'setAccessibilityWarningValue:'; { available in macos  }
    procedure setAccessibilityWindow (newValue: id); message 'setAccessibilityWindow:'; { available in macos  }
    procedure setAccessibilityWindows (newValue: NSArray); message 'setAccessibilityWindows:'; { available in macos  }
    procedure setAccessibilityZoomButton (newValue: id); message 'setAccessibilityZoomButton:'; { available in macos  }
    procedure setAppearance__ (newValue: NSAppearance); message 'setAppearance:'; { available in macos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPopoverCloseReasonKey: NSString { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSPopoverCloseReasonValue = NSString;
  NSPopoverCloseReasonValuePtr = ^NSPopoverCloseReasonValue;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPopoverCloseReasonStandard: NSPopoverCloseReasonValue { available in macos  }; cvar; external;
  NSPopoverCloseReasonDetachToWindow: NSPopoverCloseReasonValue { available in macos  }; cvar; external;
  NSPopoverWillShowNotification: NSNotificationName { available in macos  }; cvar; external;
  NSPopoverDidShowNotification: NSNotificationName { available in macos  }; cvar; external;
  NSPopoverWillCloseNotification: NSNotificationName { available in macos  }; cvar; external;
  NSPopoverDidCloseNotification: NSNotificationName { available in macos  }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  NSPopoverDelegateProtocol = objcprotocol external name 'NSPopoverDelegate' (NSObjectProtocol)
  optional
    function popoverShouldClose (popover: NSPopover): objcbool; message 'popoverShouldClose:';
    function popoverShouldDetach (popover: NSPopover): objcbool; message 'popoverShouldDetach:'; { available in macos  }
    procedure popoverDidDetach (popover: NSPopover); message 'popoverDidDetach:'; { available in macos  }
    function detachableWindowForPopover (popover: NSPopover): NSWindow; message 'detachableWindowForPopover:';
    procedure popoverWillShow (notification: NSNotification); message 'popoverWillShow:';
    procedure popoverDidShow (notification: NSNotification); message 'popoverDidShow:';
    procedure popoverWillClose (notification: NSNotification); message 'popoverWillClose:';
    procedure popoverDidClose (notification: NSNotification); message 'popoverDidClose:';
  end;
{$endif}

