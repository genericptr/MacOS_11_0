{ Parsed from AppKit.framework NSAccessibilityElement.h }

{$ifdef TYPES}
type
  NSAccessibilityElementPtr = ^NSAccessibilityElement;
{$endif}

{$ifdef CLASSES}

type
  NSAccessibilityElement = objcclass external (NSObject, NSAccessibilityProtocol)
  public
    class function accessibilityElementWithRole_frame_label_parent (role: NSAccessibilityRole; frame: NSRect; label_: NSString; parent: id): id; message 'accessibilityElementWithRole:frame:label:parent:';
    procedure accessibilityAddChildElement (childElement: NSAccessibilityElement); message 'accessibilityAddChildElement:';
    procedure setAccessibilityFrameInParentSpace(newValue: NSRect); message 'setAccessibilityFrameInParentSpace:';
    function accessibilityFrameInParentSpace: NSRect; message 'accessibilityFrameInParentSpace';

    { Adopted protocols }
    function accessibilityActivationPoint: NSPoint; message 'accessibilityActivationPoint'; { available in macos 10.10 }
    function accessibilityAllowedValues: NSArray; message 'accessibilityAllowedValues'; { available in macos 10.10 }
    function accessibilityApplicationFocusedUIElement: id; message 'accessibilityApplicationFocusedUIElement'; { available in macos 10.10 }
    function accessibilityAttributedStringForRange (range: NSRange): NSAttributedString; message 'accessibilityAttributedStringForRange:'; { available in macos 10.10 }
    function accessibilityCancelButton: id; message 'accessibilityCancelButton'; { available in macos 10.10 }
    function accessibilityCellForColumn_row (column: NSInteger; row: NSInteger): id; message 'accessibilityCellForColumn:row:'; { available in macos 10.10 }
    function accessibilityChildren: NSArray; message 'accessibilityChildren'; { available in macos 10.10 }
    function accessibilityChildrenInNavigationOrder: NSArray; message 'accessibilityChildrenInNavigationOrder'; { available in macos 10.13 }
    function accessibilityClearButton: id; message 'accessibilityClearButton'; { available in macos 10.10 }
    function accessibilityCloseButton: id; message 'accessibilityCloseButton'; { available in macos 10.10 }
    function accessibilityColumnCount: NSInteger; message 'accessibilityColumnCount'; { available in macos 10.10 }
    function accessibilityColumnHeaderUIElements: NSArray; message 'accessibilityColumnHeaderUIElements'; { available in macos 10.10 }
    function accessibilityColumnIndexRange: NSRange; message 'accessibilityColumnIndexRange'; { available in macos 10.10 }
    function accessibilityColumns: NSArray; message 'accessibilityColumns'; { available in macos 10.10 }
    function accessibilityColumnTitles: NSArray; message 'accessibilityColumnTitles'; { available in macos 10.10 }
    function accessibilityContents: NSArray; message 'accessibilityContents'; { available in macos 10.10 }
    function accessibilityCriticalValue: id; message 'accessibilityCriticalValue'; { available in macos 10.10 }
    function accessibilityCustomActions: NSArray; message 'accessibilityCustomActions'; { available in macos 10.13 }
    function accessibilityCustomRotors: NSArray; message 'accessibilityCustomRotors'; { available in macos 10.13 }
    function accessibilityDecrementButton: id; message 'accessibilityDecrementButton'; { available in macos 10.10 }
    function accessibilityDefaultButton: id; message 'accessibilityDefaultButton'; { available in macos 10.10 }
    function accessibilityDisclosedByRow: id; message 'accessibilityDisclosedByRow'; { available in macos 10.10 }
    function accessibilityDisclosedRows: id; message 'accessibilityDisclosedRows'; { available in macos 10.10 }
    function accessibilityDisclosureLevel: NSInteger; message 'accessibilityDisclosureLevel'; { available in macos 10.10 }
    function accessibilityDocument: NSString; message 'accessibilityDocument'; { available in macos 10.10 }
    function accessibilityExtrasMenuBar: id; message 'accessibilityExtrasMenuBar'; { available in macos 10.10 }
    function accessibilityFilename: NSString; message 'accessibilityFilename'; { available in macos 10.10 }
    function accessibilityFocusedWindow: id; message 'accessibilityFocusedWindow'; { available in macos 10.10 }
    function accessibilityFrame: NSRect; message 'accessibilityFrame'; { available in macos 10.10 }
    function accessibilityFrameForRange (range: NSRange): NSRect; message 'accessibilityFrameForRange:'; { available in macos 10.10 }
    function accessibilityFullScreenButton: id; message 'accessibilityFullScreenButton'; { available in macos 10.10 }
    function accessibilityGrowArea: id; message 'accessibilityGrowArea'; { available in macos 10.10 }
    function accessibilityHandles: NSArray; message 'accessibilityHandles'; { available in macos 10.10 }
    function accessibilityHeader: id; message 'accessibilityHeader'; { available in macos 10.10 }
    function accessibilityHelp: NSString; message 'accessibilityHelp'; { available in macos 10.10 }
    function accessibilityHorizontalScrollBar: id; message 'accessibilityHorizontalScrollBar'; { available in macos 10.10 }
    function accessibilityHorizontalUnitDescription: NSString; message 'accessibilityHorizontalUnitDescription'; { available in macos 10.10 }
    function accessibilityHorizontalUnits: NSAccessibilityUnits; message 'accessibilityHorizontalUnits'; { available in macos 10.10 }
    function accessibilityIdentifier: NSString; message 'accessibilityIdentifier'; { available in macos 10.10 }
    function accessibilityIncrementButton: id; message 'accessibilityIncrementButton'; { available in macos 10.10 }
    function accessibilityIndex: NSInteger; message 'accessibilityIndex'; { available in macos 10.10 }
    function accessibilityInsertionPointLineNumber: NSInteger; message 'accessibilityInsertionPointLineNumber'; { available in macos 10.10 }
    function accessibilityLabel: NSString; message 'accessibilityLabel'; { available in macos 10.10 }
    function accessibilityLabelUIElements: NSArray; message 'accessibilityLabelUIElements'; { available in macos 10.10 }
    function accessibilityLabelValue: single; message 'accessibilityLabelValue'; { available in macos 10.10 }
    function accessibilityLayoutPointForScreenPoint (point: NSPoint): NSPoint; message 'accessibilityLayoutPointForScreenPoint:'; { available in macos 10.10 }
    function accessibilityLayoutSizeForScreenSize (size: NSSize): NSSize; message 'accessibilityLayoutSizeForScreenSize:'; { available in macos 10.10 }
    function accessibilityLineForIndex (index: NSInteger): NSInteger; message 'accessibilityLineForIndex:'; { available in macos 10.10 }
    function accessibilityLinkedUIElements: NSArray; message 'accessibilityLinkedUIElements'; { available in macos 10.10 }
    function accessibilityMainWindow: id; message 'accessibilityMainWindow'; { available in macos 10.10 }
    function accessibilityMarkerGroupUIElement: id; message 'accessibilityMarkerGroupUIElement'; { available in macos 10.10 }
    function accessibilityMarkerTypeDescription: NSString; message 'accessibilityMarkerTypeDescription'; { available in macos 10.10 }
    function accessibilityMarkerUIElements: NSArray; message 'accessibilityMarkerUIElements'; { available in macos 10.10 }
    function accessibilityMarkerValues: id; message 'accessibilityMarkerValues'; { available in macos 10.10 }
    function accessibilityMaxValue: id; message 'accessibilityMaxValue'; { available in macos 10.10 }
    function accessibilityMenuBar: id; message 'accessibilityMenuBar'; { available in macos 10.10 }
    function accessibilityMinimizeButton: id; message 'accessibilityMinimizeButton'; { available in macos 10.10 }
    function accessibilityMinValue: id; message 'accessibilityMinValue'; { available in macos 10.10 }
    function accessibilityNextContents: NSArray; message 'accessibilityNextContents'; { available in macos 10.10 }
    function accessibilityNumberOfCharacters: NSInteger; message 'accessibilityNumberOfCharacters'; { available in macos 10.10 }
    function accessibilityOrientation: NSAccessibilityOrientation; message 'accessibilityOrientation'; { available in macos 10.10 }
    function accessibilityOverflowButton: id; message 'accessibilityOverflowButton'; { available in macos 10.10 }
    function accessibilityParent: id; message 'accessibilityParent'; { available in macos 10.10 }
    function accessibilityPerformCancel: objcbool; message 'accessibilityPerformCancel'; { available in macos 10.10 }
    function accessibilityPerformConfirm: objcbool; message 'accessibilityPerformConfirm'; { available in macos 10.10 }
    function accessibilityPerformDecrement: objcbool; message 'accessibilityPerformDecrement'; { available in macos 10.10 }
    function accessibilityPerformDelete: objcbool; message 'accessibilityPerformDelete'; { available in macos 10.10 }
    function accessibilityPerformIncrement: objcbool; message 'accessibilityPerformIncrement'; { available in macos 10.10 }
    function accessibilityPerformPick: objcbool; message 'accessibilityPerformPick'; { available in macos 10.10 }
    function accessibilityPerformPress: objcbool; message 'accessibilityPerformPress'; { available in macos 10.10 }
    function accessibilityPerformRaise: objcbool; message 'accessibilityPerformRaise'; { available in macos 10.10 }
    function accessibilityPerformShowAlternateUI: objcbool; message 'accessibilityPerformShowAlternateUI'; { available in macos 10.10 }
    function accessibilityPerformShowDefaultUI: objcbool; message 'accessibilityPerformShowDefaultUI'; { available in macos 10.10 }
    function accessibilityPerformShowMenu: objcbool; message 'accessibilityPerformShowMenu'; { available in macos 10.10 }
    function accessibilityPlaceholderValue: NSString; message 'accessibilityPlaceholderValue'; { available in macos 10.10 }
    function accessibilityPreviousContents: NSArray; message 'accessibilityPreviousContents'; { available in macos 10.10 }
    function accessibilityProxy: id; message 'accessibilityProxy'; { available in macos 10.10 }
    function accessibilityRangeForIndex (index: NSInteger): NSRange; message 'accessibilityRangeForIndex:'; { available in macos 10.10 }
    function accessibilityRangeForLine (line: NSInteger): NSRange; message 'accessibilityRangeForLine:'; { available in macos 10.10 }
    function accessibilityRangeForPosition (point: NSPoint): NSRange; message 'accessibilityRangeForPosition:'; { available in macos 10.10 }
    function accessibilityRole: NSAccessibilityRole; message 'accessibilityRole'; { available in macos 10.10 }
    function accessibilityRoleDescription: NSString; message 'accessibilityRoleDescription'; { available in macos 10.10 }
    function accessibilityRowCount: NSInteger; message 'accessibilityRowCount'; { available in macos 10.10 }
    function accessibilityRowHeaderUIElements: NSArray; message 'accessibilityRowHeaderUIElements'; { available in macos 10.10 }
    function accessibilityRowIndexRange: NSRange; message 'accessibilityRowIndexRange'; { available in macos 10.10 }
    function accessibilityRows: NSArray; message 'accessibilityRows'; { available in macos 10.10 }
    function accessibilityRTFForRange (range: NSRange): NSData; message 'accessibilityRTFForRange:'; { available in macos 10.10 }
    function accessibilityRulerMarkerType: NSAccessibilityRulerMarkerType; message 'accessibilityRulerMarkerType'; { available in macos 10.10 }
    function accessibilityScreenPointForLayoutPoint (point: NSPoint): NSPoint; message 'accessibilityScreenPointForLayoutPoint:'; { available in macos 10.10 }
    function accessibilityScreenSizeForLayoutSize (size: NSSize): NSSize; message 'accessibilityScreenSizeForLayoutSize:'; { available in macos 10.10 }
    function accessibilitySearchButton: id; message 'accessibilitySearchButton'; { available in macos 10.10 }
    function accessibilitySearchMenu: id; message 'accessibilitySearchMenu'; { available in macos 10.10 }
    function accessibilitySelectedCells: NSArray; message 'accessibilitySelectedCells'; { available in macos 10.10 }
    function accessibilitySelectedChildren: NSArray; message 'accessibilitySelectedChildren'; { available in macos 10.10 }
    function accessibilitySelectedColumns: NSArray; message 'accessibilitySelectedColumns'; { available in macos 10.10 }
    function accessibilitySelectedRows: NSArray; message 'accessibilitySelectedRows'; { available in macos 10.10 }
    function accessibilitySelectedText: NSString; message 'accessibilitySelectedText'; { available in macos 10.10 }
    function accessibilitySelectedTextRange: NSRange; message 'accessibilitySelectedTextRange'; { available in macos 10.10 }
    function accessibilitySelectedTextRanges: NSArray; message 'accessibilitySelectedTextRanges'; { available in macos 10.10 }
    function accessibilityServesAsTitleForUIElements: NSArray; message 'accessibilityServesAsTitleForUIElements'; { available in macos 10.10 }
    function accessibilitySharedCharacterRange: NSRange; message 'accessibilitySharedCharacterRange'; { available in macos 10.10 }
    function accessibilitySharedFocusElements: NSArray; message 'accessibilitySharedFocusElements'; { available in macos 10.10 }
    function accessibilitySharedTextUIElements: NSArray; message 'accessibilitySharedTextUIElements'; { available in macos 10.10 }
    function accessibilityShownMenu: id; message 'accessibilityShownMenu'; { available in macos 10.10 }
    function accessibilitySortDirection: NSAccessibilitySortDirection; message 'accessibilitySortDirection'; { available in macos 10.10 }
    function accessibilitySplitters: NSArray; message 'accessibilitySplitters'; { available in macos 10.10 }
    function accessibilityStringForRange (range: NSRange): NSString; message 'accessibilityStringForRange:'; { available in macos 10.10 }
    function accessibilityStyleRangeForIndex (index: NSInteger): NSRange; message 'accessibilityStyleRangeForIndex:'; { available in macos 10.10 }
    function accessibilitySubrole: NSAccessibilitySubrole; message 'accessibilitySubrole'; { available in macos 10.10 }
    function accessibilityTabs: NSArray; message 'accessibilityTabs'; { available in macos 10.10 }
    function accessibilityTitle: NSString; message 'accessibilityTitle'; { available in macos 10.10 }
    function accessibilityTitleUIElement: id; message 'accessibilityTitleUIElement'; { available in macos 10.10 }
    function accessibilityToolbarButton: id; message 'accessibilityToolbarButton'; { available in macos 10.10 }
    function accessibilityTopLevelUIElement: id; message 'accessibilityTopLevelUIElement'; { available in macos 10.10 }
    function accessibilityUnitDescription: NSString; message 'accessibilityUnitDescription'; { available in macos 10.10 }
    function accessibilityUnits: NSAccessibilityUnits; message 'accessibilityUnits'; { available in macos 10.10 }
    function accessibilityURL: NSURL; message 'accessibilityURL'; { available in macos 10.10 }
    function accessibilityValue: id; message 'accessibilityValue'; { available in macos 10.10 }
    function accessibilityValueDescription: NSString; message 'accessibilityValueDescription'; { available in macos 10.10 }
    function accessibilityVerticalScrollBar: id; message 'accessibilityVerticalScrollBar'; { available in macos 10.10 }
    function accessibilityVerticalUnitDescription: NSString; message 'accessibilityVerticalUnitDescription'; { available in macos 10.10 }
    function accessibilityVerticalUnits: NSAccessibilityUnits; message 'accessibilityVerticalUnits'; { available in macos 10.10 }
    function accessibilityVisibleCells: NSArray; message 'accessibilityVisibleCells'; { available in macos 10.10 }
    function accessibilityVisibleCharacterRange: NSRange; message 'accessibilityVisibleCharacterRange'; { available in macos 10.10 }
    function accessibilityVisibleChildren: NSArray; message 'accessibilityVisibleChildren'; { available in macos 10.10 }
    function accessibilityVisibleColumns: NSArray; message 'accessibilityVisibleColumns'; { available in macos 10.10 }
    function accessibilityVisibleRows: NSArray; message 'accessibilityVisibleRows'; { available in macos 10.10 }
    function accessibilityWarningValue: id; message 'accessibilityWarningValue'; { available in macos 10.10 }
    function accessibilityWindow: id; message 'accessibilityWindow'; { available in macos 10.10 }
    function accessibilityWindows: NSArray; message 'accessibilityWindows'; { available in macos 10.10 }
    function accessibilityZoomButton: id; message 'accessibilityZoomButton'; { available in macos 10.10 }
    function isAccessibilityAlternateUIVisible: objcbool; message 'isAccessibilityAlternateUIVisible'; { available in macos 10.10 }
    function isAccessibilityDisclosed: objcbool; message 'isAccessibilityDisclosed'; { available in macos 10.10 }
    function isAccessibilityEdited: objcbool; message 'isAccessibilityEdited'; { available in macos 10.10 }
    function isAccessibilityElement: objcbool; message 'isAccessibilityElement'; { available in macos 10.10 }
    function isAccessibilityEnabled: objcbool; message 'isAccessibilityEnabled'; { available in macos 10.10 }
    function isAccessibilityExpanded: objcbool; message 'isAccessibilityExpanded'; { available in macos 10.10 }
    function isAccessibilityFocused: objcbool; message 'isAccessibilityFocused'; { available in macos 10.10 }
    function isAccessibilityFrontmost: objcbool; message 'isAccessibilityFrontmost'; { available in macos 10.10 }
    function isAccessibilityHidden: objcbool; message 'isAccessibilityHidden'; { available in macos 10.10 }
    function isAccessibilityMain: objcbool; message 'isAccessibilityMain'; { available in macos 10.10 }
    function isAccessibilityMinimized: objcbool; message 'isAccessibilityMinimized'; { available in macos 10.10 }
    function isAccessibilityModal: objcbool; message 'isAccessibilityModal'; { available in macos 10.10 }
    function isAccessibilityOrderedByRow: objcbool; message 'isAccessibilityOrderedByRow'; { available in macos 10.10 }
    function isAccessibilityProtectedContent: objcbool; message 'isAccessibilityProtectedContent'; { available in macos 10.10 }
    function isAccessibilityRequired: objcbool; message 'isAccessibilityRequired'; { available in macos 10.12 }
    function isAccessibilitySelected: objcbool; message 'isAccessibilitySelected'; { available in macos 10.10 }
    function isAccessibilitySelectorAllowed (selector: SEL): objcbool; message 'isAccessibilitySelectorAllowed:'; { available in macos 10.10 }
    procedure setAccessibilityActivationPoint (newValue: NSPoint); message 'setAccessibilityActivationPoint:'; { available in macos 10.10 }
    procedure setAccessibilityAllowedValues (newValue: NSArray); message 'setAccessibilityAllowedValues:'; { available in macos 10.10 }
    procedure setAccessibilityAlternateUIVisible (newValue: objcbool); message 'setAccessibilityAlternateUIVisible:'; { available in macos 10.10 }
    procedure setAccessibilityApplicationFocusedUIElement (newValue: id); message 'setAccessibilityApplicationFocusedUIElement:'; { available in macos 10.10 }
    procedure setAccessibilityCancelButton (newValue: id); message 'setAccessibilityCancelButton:'; { available in macos 10.10 }
    procedure setAccessibilityChildren (newValue: NSArray); message 'setAccessibilityChildren:'; { available in macos 10.10 }
    procedure setAccessibilityChildrenInNavigationOrder (newValue: NSArray); message 'setAccessibilityChildrenInNavigationOrder:'; { available in macos 10.13 }
    procedure setAccessibilityClearButton (newValue: id); message 'setAccessibilityClearButton:'; { available in macos 10.10 }
    procedure setAccessibilityCloseButton (newValue: id); message 'setAccessibilityCloseButton:'; { available in macos 10.10 }
    procedure setAccessibilityColumnCount (newValue: NSInteger); message 'setAccessibilityColumnCount:'; { available in macos 10.10 }
    procedure setAccessibilityColumnHeaderUIElements (newValue: NSArray); message 'setAccessibilityColumnHeaderUIElements:'; { available in macos 10.10 }
    procedure setAccessibilityColumnIndexRange (newValue: NSRange); message 'setAccessibilityColumnIndexRange:'; { available in macos 10.10 }
    procedure setAccessibilityColumns (newValue: NSArray); message 'setAccessibilityColumns:'; { available in macos 10.10 }
    procedure setAccessibilityColumnTitles (newValue: NSArray); message 'setAccessibilityColumnTitles:'; { available in macos 10.10 }
    procedure setAccessibilityContents (newValue: NSArray); message 'setAccessibilityContents:'; { available in macos 10.10 }
    procedure setAccessibilityCriticalValue (newValue: id); message 'setAccessibilityCriticalValue:'; { available in macos 10.10 }
    procedure setAccessibilityCustomActions (newValue: NSArray); message 'setAccessibilityCustomActions:'; { available in macos 10.13 }
    procedure setAccessibilityCustomRotors (newValue: NSArray); message 'setAccessibilityCustomRotors:'; { available in macos 10.13 }
    procedure setAccessibilityDecrementButton (newValue: id); message 'setAccessibilityDecrementButton:'; { available in macos 10.10 }
    procedure setAccessibilityDefaultButton (newValue: id); message 'setAccessibilityDefaultButton:'; { available in macos 10.10 }
    procedure setAccessibilityDisclosed (newValue: objcbool); message 'setAccessibilityDisclosed:'; { available in macos 10.10 }
    procedure setAccessibilityDisclosedByRow (newValue: id); message 'setAccessibilityDisclosedByRow:'; { available in macos 10.10 }
    procedure setAccessibilityDisclosedRows (newValue: id); message 'setAccessibilityDisclosedRows:'; { available in macos 10.10 }
    procedure setAccessibilityDisclosureLevel (newValue: NSInteger); message 'setAccessibilityDisclosureLevel:'; { available in macos 10.10 }
    procedure setAccessibilityDocument (newValue: NSString); message 'setAccessibilityDocument:'; { available in macos 10.10 }
    procedure setAccessibilityEdited (newValue: objcbool); message 'setAccessibilityEdited:'; { available in macos 10.10 }
    procedure setAccessibilityElement (newValue: objcbool); message 'setAccessibilityElement:'; { available in macos 10.10 }
    procedure setAccessibilityEnabled (newValue: objcbool); message 'setAccessibilityEnabled:'; { available in macos 10.10 }
    procedure setAccessibilityExpanded (newValue: objcbool); message 'setAccessibilityExpanded:'; { available in macos 10.10 }
    procedure setAccessibilityExtrasMenuBar (newValue: id); message 'setAccessibilityExtrasMenuBar:'; { available in macos 10.10 }
    procedure setAccessibilityFilename (newValue: NSString); message 'setAccessibilityFilename:'; { available in macos 10.10 }
    procedure setAccessibilityFocused (newValue: objcbool); message 'setAccessibilityFocused:'; { available in macos 10.10 }
    procedure setAccessibilityFocusedWindow (newValue: id); message 'setAccessibilityFocusedWindow:'; { available in macos 10.10 }
    procedure setAccessibilityFrame (newValue: NSRect); message 'setAccessibilityFrame:'; { available in macos 10.10 }
    procedure setAccessibilityFrontmost (newValue: objcbool); message 'setAccessibilityFrontmost:'; { available in macos 10.10 }
    procedure setAccessibilityFullScreenButton (newValue: id); message 'setAccessibilityFullScreenButton:'; { available in macos 10.10 }
    procedure setAccessibilityGrowArea (newValue: id); message 'setAccessibilityGrowArea:'; { available in macos 10.10 }
    procedure setAccessibilityHandles (newValue: NSArray); message 'setAccessibilityHandles:'; { available in macos 10.10 }
    procedure setAccessibilityHeader (newValue: id); message 'setAccessibilityHeader:'; { available in macos 10.10 }
    procedure setAccessibilityHelp (newValue: NSString); message 'setAccessibilityHelp:'; { available in macos 10.10 }
    procedure setAccessibilityHidden (newValue: objcbool); message 'setAccessibilityHidden:'; { available in macos 10.10 }
    procedure setAccessibilityHorizontalScrollBar (newValue: id); message 'setAccessibilityHorizontalScrollBar:'; { available in macos 10.10 }
    procedure setAccessibilityHorizontalUnitDescription (newValue: NSString); message 'setAccessibilityHorizontalUnitDescription:'; { available in macos 10.10 }
    procedure setAccessibilityHorizontalUnits (newValue: NSAccessibilityUnits); message 'setAccessibilityHorizontalUnits:'; { available in macos 10.10 }
    procedure setAccessibilityIdentifier (newValue: NSString); message 'setAccessibilityIdentifier:'; { available in macos 10.10 }
    procedure setAccessibilityIncrementButton (newValue: id); message 'setAccessibilityIncrementButton:'; { available in macos 10.10 }
    procedure setAccessibilityIndex (newValue: NSInteger); message 'setAccessibilityIndex:'; { available in macos 10.10 }
    procedure setAccessibilityInsertionPointLineNumber (newValue: NSInteger); message 'setAccessibilityInsertionPointLineNumber:'; { available in macos 10.10 }
    procedure setAccessibilityLabel (newValue: NSString); message 'setAccessibilityLabel:'; { available in macos 10.10 }
    procedure setAccessibilityLabelUIElements (newValue: NSArray); message 'setAccessibilityLabelUIElements:'; { available in macos 10.10 }
    procedure setAccessibilityLabelValue (newValue: single); message 'setAccessibilityLabelValue:'; { available in macos 10.10 }
    procedure setAccessibilityLinkedUIElements (newValue: NSArray); message 'setAccessibilityLinkedUIElements:'; { available in macos 10.10 }
    procedure setAccessibilityMain (newValue: objcbool); message 'setAccessibilityMain:'; { available in macos 10.10 }
    procedure setAccessibilityMainWindow (newValue: id); message 'setAccessibilityMainWindow:'; { available in macos 10.10 }
    procedure setAccessibilityMarkerGroupUIElement (newValue: id); message 'setAccessibilityMarkerGroupUIElement:'; { available in macos 10.10 }
    procedure setAccessibilityMarkerTypeDescription (newValue: NSString); message 'setAccessibilityMarkerTypeDescription:'; { available in macos 10.10 }
    procedure setAccessibilityMarkerUIElements (newValue: NSArray); message 'setAccessibilityMarkerUIElements:'; { available in macos 10.10 }
    procedure setAccessibilityMarkerValues (newValue: id); message 'setAccessibilityMarkerValues:'; { available in macos 10.10 }
    procedure setAccessibilityMaxValue (newValue: id); message 'setAccessibilityMaxValue:'; { available in macos 10.10 }
    procedure setAccessibilityMenuBar (newValue: id); message 'setAccessibilityMenuBar:'; { available in macos 10.10 }
    procedure setAccessibilityMinimizeButton (newValue: id); message 'setAccessibilityMinimizeButton:'; { available in macos 10.10 }
    procedure setAccessibilityMinimized (newValue: objcbool); message 'setAccessibilityMinimized:'; { available in macos 10.10 }
    procedure setAccessibilityMinValue (newValue: id); message 'setAccessibilityMinValue:'; { available in macos 10.10 }
    procedure setAccessibilityModal (newValue: objcbool); message 'setAccessibilityModal:'; { available in macos 10.10 }
    procedure setAccessibilityNextContents (newValue: NSArray); message 'setAccessibilityNextContents:'; { available in macos 10.10 }
    procedure setAccessibilityNumberOfCharacters (newValue: NSInteger); message 'setAccessibilityNumberOfCharacters:'; { available in macos 10.10 }
    procedure setAccessibilityOrderedByRow (newValue: objcbool); message 'setAccessibilityOrderedByRow:'; { available in macos 10.10 }
    procedure setAccessibilityOrientation (newValue: NSAccessibilityOrientation); message 'setAccessibilityOrientation:'; { available in macos 10.10 }
    procedure setAccessibilityOverflowButton (newValue: id); message 'setAccessibilityOverflowButton:'; { available in macos 10.10 }
    procedure setAccessibilityParent (newValue: id); message 'setAccessibilityParent:'; { available in macos 10.10 }
    procedure setAccessibilityPlaceholderValue (newValue: NSString); message 'setAccessibilityPlaceholderValue:'; { available in macos 10.10 }
    procedure setAccessibilityPreviousContents (newValue: NSArray); message 'setAccessibilityPreviousContents:'; { available in macos 10.10 }
    procedure setAccessibilityProtectedContent (newValue: objcbool); message 'setAccessibilityProtectedContent:'; { available in macos 10.10 }
    procedure setAccessibilityProxy (newValue: id); message 'setAccessibilityProxy:'; { available in macos 10.10 }
    procedure setAccessibilityRequired (newValue: objcbool); message 'setAccessibilityRequired:'; { available in macos 10.12 }
    procedure setAccessibilityRole (newValue: NSAccessibilityRole); message 'setAccessibilityRole:'; { available in macos 10.10 }
    procedure setAccessibilityRoleDescription (newValue: NSString); message 'setAccessibilityRoleDescription:'; { available in macos 10.10 }
    procedure setAccessibilityRowCount (newValue: NSInteger); message 'setAccessibilityRowCount:'; { available in macos 10.10 }
    procedure setAccessibilityRowHeaderUIElements (newValue: NSArray); message 'setAccessibilityRowHeaderUIElements:'; { available in macos 10.10 }
    procedure setAccessibilityRowIndexRange (newValue: NSRange); message 'setAccessibilityRowIndexRange:'; { available in macos 10.10 }
    procedure setAccessibilityRows (newValue: NSArray); message 'setAccessibilityRows:'; { available in macos 10.10 }
    procedure setAccessibilityRulerMarkerType (newValue: NSAccessibilityRulerMarkerType); message 'setAccessibilityRulerMarkerType:'; { available in macos 10.10 }
    procedure setAccessibilitySearchButton (newValue: id); message 'setAccessibilitySearchButton:'; { available in macos 10.10 }
    procedure setAccessibilitySearchMenu (newValue: id); message 'setAccessibilitySearchMenu:'; { available in macos 10.10 }
    procedure setAccessibilitySelected (newValue: objcbool); message 'setAccessibilitySelected:'; { available in macos 10.10 }
    procedure setAccessibilitySelectedCells (newValue: NSArray); message 'setAccessibilitySelectedCells:'; { available in macos 10.10 }
    procedure setAccessibilitySelectedChildren (newValue: NSArray); message 'setAccessibilitySelectedChildren:'; { available in macos 10.10 }
    procedure setAccessibilitySelectedColumns (newValue: NSArray); message 'setAccessibilitySelectedColumns:'; { available in macos 10.10 }
    procedure setAccessibilitySelectedRows (newValue: NSArray); message 'setAccessibilitySelectedRows:'; { available in macos 10.10 }
    procedure setAccessibilitySelectedText (newValue: NSString); message 'setAccessibilitySelectedText:'; { available in macos 10.10 }
    procedure setAccessibilitySelectedTextRange (newValue: NSRange); message 'setAccessibilitySelectedTextRange:'; { available in macos 10.10 }
    procedure setAccessibilitySelectedTextRanges (newValue: NSArray); message 'setAccessibilitySelectedTextRanges:'; { available in macos 10.10 }
    procedure setAccessibilityServesAsTitleForUIElements (newValue: NSArray); message 'setAccessibilityServesAsTitleForUIElements:'; { available in macos 10.10 }
    procedure setAccessibilitySharedCharacterRange (newValue: NSRange); message 'setAccessibilitySharedCharacterRange:'; { available in macos 10.10 }
    procedure setAccessibilitySharedFocusElements (newValue: NSArray); message 'setAccessibilitySharedFocusElements:'; { available in macos 10.10 }
    procedure setAccessibilitySharedTextUIElements (newValue: NSArray); message 'setAccessibilitySharedTextUIElements:'; { available in macos 10.10 }
    procedure setAccessibilityShownMenu (newValue: id); message 'setAccessibilityShownMenu:'; { available in macos 10.10 }
    procedure setAccessibilitySortDirection (newValue: NSAccessibilitySortDirection); message 'setAccessibilitySortDirection:'; { available in macos 10.10 }
    procedure setAccessibilitySplitters (newValue: NSArray); message 'setAccessibilitySplitters:'; { available in macos 10.10 }
    procedure setAccessibilitySubrole (newValue: NSAccessibilitySubrole); message 'setAccessibilitySubrole:'; { available in macos 10.10 }
    procedure setAccessibilityTabs (newValue: NSArray); message 'setAccessibilityTabs:'; { available in macos 10.10 }
    procedure setAccessibilityTitle (newValue: NSString); message 'setAccessibilityTitle:'; { available in macos 10.10 }
    procedure setAccessibilityTitleUIElement (newValue: id); message 'setAccessibilityTitleUIElement:'; { available in macos 10.10 }
    procedure setAccessibilityToolbarButton (newValue: id); message 'setAccessibilityToolbarButton:'; { available in macos 10.10 }
    procedure setAccessibilityTopLevelUIElement (newValue: id); message 'setAccessibilityTopLevelUIElement:'; { available in macos 10.10 }
    procedure setAccessibilityUnitDescription (newValue: NSString); message 'setAccessibilityUnitDescription:'; { available in macos 10.10 }
    procedure setAccessibilityUnits (newValue: NSAccessibilityUnits); message 'setAccessibilityUnits:'; { available in macos 10.10 }
    procedure setAccessibilityURL (newValue: NSURL); message 'setAccessibilityURL:'; { available in macos 10.10 }
    procedure setAccessibilityValue (newValue: id); message 'setAccessibilityValue:'; { available in macos 10.10 }
    procedure setAccessibilityValueDescription (newValue: NSString); message 'setAccessibilityValueDescription:'; { available in macos 10.10 }
    procedure setAccessibilityVerticalScrollBar (newValue: id); message 'setAccessibilityVerticalScrollBar:'; { available in macos 10.10 }
    procedure setAccessibilityVerticalUnitDescription (newValue: NSString); message 'setAccessibilityVerticalUnitDescription:'; { available in macos 10.10 }
    procedure setAccessibilityVerticalUnits (newValue: NSAccessibilityUnits); message 'setAccessibilityVerticalUnits:'; { available in macos 10.10 }
    procedure setAccessibilityVisibleCells (newValue: NSArray); message 'setAccessibilityVisibleCells:'; { available in macos 10.10 }
    procedure setAccessibilityVisibleCharacterRange (newValue: NSRange); message 'setAccessibilityVisibleCharacterRange:'; { available in macos 10.10 }
    procedure setAccessibilityVisibleChildren (newValue: NSArray); message 'setAccessibilityVisibleChildren:'; { available in macos 10.10 }
    procedure setAccessibilityVisibleColumns (newValue: NSArray); message 'setAccessibilityVisibleColumns:'; { available in macos 10.10 }
    procedure setAccessibilityVisibleRows (newValue: NSArray); message 'setAccessibilityVisibleRows:'; { available in macos 10.10 }
    procedure setAccessibilityWarningValue (newValue: id); message 'setAccessibilityWarningValue:'; { available in macos 10.10 }
    procedure setAccessibilityWindow (newValue: id); message 'setAccessibilityWindow:'; { available in macos 10.10 }
    procedure setAccessibilityWindows (newValue: NSArray); message 'setAccessibilityWindows:'; { available in macos 10.10 }
    procedure setAccessibilityZoomButton (newValue: id); message 'setAccessibilityZoomButton:'; { available in macos 10.10 }
  end;
{$endif}

