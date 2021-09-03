{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSAccessibilityProtocols.h }

{$ifdef TYPES}
type
  NSAccessibilityElementProtocolPtr = ^NSAccessibilityElementProtocol;
  NSAccessibilityGroupProtocolPtr = ^NSAccessibilityGroupProtocol;
  NSAccessibilityButtonProtocolPtr = ^NSAccessibilityButtonProtocol;
  NSAccessibilitySwitchProtocolPtr = ^NSAccessibilitySwitchProtocol;
  NSAccessibilityRadioButtonProtocolPtr = ^NSAccessibilityRadioButtonProtocol;
  NSAccessibilityCheckBoxProtocolPtr = ^NSAccessibilityCheckBoxProtocol;
  NSAccessibilityStaticTextProtocolPtr = ^NSAccessibilityStaticTextProtocol;
  NSAccessibilityNavigableStaticTextProtocolPtr = ^NSAccessibilityNavigableStaticTextProtocol;
  NSAccessibilityProgressIndicatorProtocolPtr = ^NSAccessibilityProgressIndicatorProtocol;
  NSAccessibilityStepperProtocolPtr = ^NSAccessibilityStepperProtocol;
  NSAccessibilitySliderProtocolPtr = ^NSAccessibilitySliderProtocol;
  NSAccessibilityImageProtocolPtr = ^NSAccessibilityImageProtocol;
  NSAccessibilityContainsTransientUIProtocolPtr = ^NSAccessibilityContainsTransientUIProtocol;
  NSAccessibilityTableProtocolPtr = ^NSAccessibilityTableProtocol;
  NSAccessibilityOutlineProtocolPtr = ^NSAccessibilityOutlineProtocol;
  NSAccessibilityListProtocolPtr = ^NSAccessibilityListProtocol;
  NSAccessibilityRowProtocolPtr = ^NSAccessibilityRowProtocol;
  NSAccessibilityLayoutAreaProtocolPtr = ^NSAccessibilityLayoutAreaProtocol;
  NSAccessibilityLayoutItemProtocolPtr = ^NSAccessibilityLayoutItemProtocol;
  NSAccessibilityElementLoadingProtocolPtr = ^NSAccessibilityElementLoadingProtocol;
  NSAccessibilityProtocolPtr = ^NSAccessibilityProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSAccessibilityElementProtocol = objcprotocol external name 'NSAccessibilityElement' (NSObjectProtocol)
  required
    function accessibilityFrame: NSRect; message 'accessibilityFrame';
    function accessibilityParent: id; message 'accessibilityParent';
  optional
    function isAccessibilityFocused: objcbool; message 'isAccessibilityFocused';
    function accessibilityIdentifier: NSString; message 'accessibilityIdentifier';
  end;

type
  NSAccessibilityGroupProtocol = objcprotocol external name 'NSAccessibilityGroup' (NSAccessibilityElementProtocol)
  end;

type
  NSAccessibilityButtonProtocol = objcprotocol external name 'NSAccessibilityButton' (NSAccessibilityElementProtocol)
  required
    function accessibilityLabel: NSString; message 'accessibilityLabel';
    function accessibilityPerformPress: objcbool; message 'accessibilityPerformPress';
  end;

type
  NSAccessibilitySwitchProtocol = objcprotocol external name 'NSAccessibilitySwitch' (NSAccessibilityButtonProtocol)
  required
    function accessibilityValue: NSString; message 'accessibilityValue';
  optional
    function accessibilityPerformIncrement: objcbool; message 'accessibilityPerformIncrement';
    function accessibilityPerformDecrement: objcbool; message 'accessibilityPerformDecrement';
  end;

type
  NSAccessibilityRadioButtonProtocol = objcprotocol external name 'NSAccessibilityRadioButton' (NSAccessibilityButtonProtocol)
  required
    function accessibilityValue: NSNumber; message 'accessibilityValue';
  end;

type
  NSAccessibilityCheckBoxProtocol = objcprotocol external name 'NSAccessibilityCheckBox' (NSAccessibilityButtonProtocol)
  required
    function accessibilityValue: NSNumber; message 'accessibilityValue';
  end;

type
  NSAccessibilityStaticTextProtocol = objcprotocol external name 'NSAccessibilityStaticText' (NSAccessibilityElementProtocol)
  required
    function accessibilityValue: NSString; message 'accessibilityValue';
  optional
    function accessibilityAttributedStringForRange (range: NSRange): NSAttributedString; message 'accessibilityAttributedStringForRange:';
    function accessibilityVisibleCharacterRange: NSRange; message 'accessibilityVisibleCharacterRange';
  end;

type
  NSAccessibilityNavigableStaticTextProtocol = objcprotocol external name 'NSAccessibilityNavigableStaticText' (NSAccessibilityStaticTextProtocol)
  required
    function accessibilityStringForRange (range: NSRange): NSString; message 'accessibilityStringForRange:';
    function accessibilityLineForIndex (index: NSInteger): NSInteger; message 'accessibilityLineForIndex:';
    function accessibilityRangeForLine (lineNumber: NSInteger): NSRange; message 'accessibilityRangeForLine:';
    function accessibilityFrameForRange (range: NSRange): NSRect; message 'accessibilityFrameForRange:';
  end;

type
  NSAccessibilityProgressIndicatorProtocol = objcprotocol external name 'NSAccessibilityProgressIndicator' (NSAccessibilityGroupProtocol)
  required
    function accessibilityValue: NSNumber; message 'accessibilityValue';
  end;

type
  NSAccessibilityStepperProtocol = objcprotocol external name 'NSAccessibilityStepper' (NSAccessibilityElementProtocol)
  required
    function accessibilityLabel: NSString; message 'accessibilityLabel';
    function accessibilityPerformIncrement: objcbool; message 'accessibilityPerformIncrement';
    function accessibilityPerformDecrement: objcbool; message 'accessibilityPerformDecrement';
  optional
    function accessibilityValue: id; message 'accessibilityValue';
  end;

type
  NSAccessibilitySliderProtocol = objcprotocol external name 'NSAccessibilitySlider' (NSAccessibilityElementProtocol)
  required
    function accessibilityLabel: NSString; message 'accessibilityLabel';
    function accessibilityValue: id; message 'accessibilityValue';
    function accessibilityPerformIncrement: objcbool; message 'accessibilityPerformIncrement';
    function accessibilityPerformDecrement: objcbool; message 'accessibilityPerformDecrement';
  end;

type
  NSAccessibilityImageProtocol = objcprotocol external name 'NSAccessibilityImage' (NSAccessibilityElementProtocol)
  required
    function accessibilityLabel: NSString; message 'accessibilityLabel';
  end;

type
  NSAccessibilityContainsTransientUIProtocol = objcprotocol external name 'NSAccessibilityContainsTransientUI' (NSAccessibilityElementProtocol)
  required
    function accessibilityPerformShowAlternateUI: objcbool; message 'accessibilityPerformShowAlternateUI';
    function accessibilityPerformShowDefaultUI: objcbool; message 'accessibilityPerformShowDefaultUI';
    function isAccessibilityAlternateUIVisible: objcbool; message 'isAccessibilityAlternateUIVisible';
  end;

type
  NSAccessibilityTableProtocol = objcprotocol external name 'NSAccessibilityTable' (NSAccessibilityGroupProtocol)
  required
    function accessibilityLabel: NSString; message 'accessibilityLabel';
    function accessibilityRows: NSArray; message 'accessibilityRows';
  optional
    function accessibilitySelectedRows: NSArray; message 'accessibilitySelectedRows';
    procedure setAccessibilitySelectedRows (selectedRows: NSArray); message 'setAccessibilitySelectedRows:';
    function accessibilityVisibleRows: NSArray; message 'accessibilityVisibleRows';
    function accessibilityColumns: NSArray; message 'accessibilityColumns';
    function accessibilityVisibleColumns: NSArray; message 'accessibilityVisibleColumns';
    function accessibilitySelectedColumns: NSArray; message 'accessibilitySelectedColumns';
    function accessibilityHeaderGroup: NSString; message 'accessibilityHeaderGroup'; deprecated 'replace with accessibilityHeader';
    function accessibilitySelectedCells: NSArray; message 'accessibilitySelectedCells';
    function accessibilityVisibleCells: NSArray; message 'accessibilityVisibleCells';
    function accessibilityRowHeaderUIElements: NSArray; message 'accessibilityRowHeaderUIElements';
    function accessibilityColumnHeaderUIElements: NSArray; message 'accessibilityColumnHeaderUIElements';
  end;

type
  NSAccessibilityOutlineProtocol = objcprotocol external name 'NSAccessibilityOutline' (NSAccessibilityTableProtocol)
  end;

type
  NSAccessibilityListProtocol = objcprotocol external name 'NSAccessibilityList' (NSAccessibilityTableProtocol)
  end;

type
  NSAccessibilityRowProtocol = objcprotocol external name 'NSAccessibilityRow' (NSAccessibilityGroupProtocol)
  required
    function accessibilityIndex: NSInteger; message 'accessibilityIndex';
  optional
    function accessibilityDisclosureLevel: NSInteger; message 'accessibilityDisclosureLevel';
  end;

type
  NSAccessibilityLayoutAreaProtocol = objcprotocol external name 'NSAccessibilityLayoutArea' (NSAccessibilityGroupProtocol)
  required
    function accessibilityLabel: NSString; message 'accessibilityLabel';
    function accessibilityChildren: NSArray; message 'accessibilityChildren';
    function accessibilitySelectedChildren: NSArray; message 'accessibilitySelectedChildren';
    function accessibilityFocusedUIElement: id; message 'accessibilityFocusedUIElement';
  end;

type
  NSAccessibilityLayoutItemProtocol = objcprotocol external name 'NSAccessibilityLayoutItem' (NSAccessibilityGroupProtocol)
  optional
    procedure setAccessibilityFrame (frame: NSRect); message 'setAccessibilityFrame:';
  end;

type
  NSAccessibilityElementLoadingProtocol = objcprotocol external name 'NSAccessibilityElementLoading' (NSObjectProtocol)
  required
    function accessibilityElementWithToken (token: NSAccessibilityLoadingToken): id; message 'accessibilityElementWithToken:';
  optional
    function accessibilityRangeInTargetElementWithToken (token: NSAccessibilityLoadingToken): NSRange; message 'accessibilityRangeInTargetElementWithToken:';
  end;

type
  NSAccessibilityProtocol = objcprotocol external name 'NSAccessibility' (NSObjectProtocol)
  required
    procedure setAccessibilityElement(newValue: objcbool); message 'setAccessibilityElement:'; { available in macos  }
    function isAccessibilityElement: objcbool; message 'isAccessibilityElement'; { available in macos  }
    procedure setAccessibilityFrame(newValue: NSRect); message 'setAccessibilityFrame:'; { available in macos  }
    function accessibilityFrame: NSRect; message 'accessibilityFrame'; { available in macos  }
    procedure setAccessibilityFocused(newValue: objcbool); message 'setAccessibilityFocused:'; { available in macos  }
    function isAccessibilityFocused: objcbool; message 'isAccessibilityFocused'; { available in macos  }
    procedure setAccessibilityActivationPoint(newValue: NSPoint); message 'setAccessibilityActivationPoint:'; { available in macos  }
    function accessibilityActivationPoint: NSPoint; message 'accessibilityActivationPoint'; { available in macos  }
    procedure setAccessibilityTopLevelUIElement(newValue: id); message 'setAccessibilityTopLevelUIElement:'; { available in macos  }
    function accessibilityTopLevelUIElement: id; message 'accessibilityTopLevelUIElement'; { available in macos  }
    procedure setAccessibilityURL(newValue: NSURL); message 'setAccessibilityURL:'; { available in macos  }
    function accessibilityURL: NSURL; message 'accessibilityURL'; { available in macos  }
    procedure setAccessibilityValue(newValue: id); message 'setAccessibilityValue:'; { available in macos  }
    function accessibilityValue: id; message 'accessibilityValue'; { available in macos  }
    procedure setAccessibilityValueDescription(newValue: NSString); message 'setAccessibilityValueDescription:'; { available in macos  }
    function accessibilityValueDescription: NSString; message 'accessibilityValueDescription'; { available in macos  }
    procedure setAccessibilityVisibleChildren(newValue: NSArray); message 'setAccessibilityVisibleChildren:'; { available in macos  }
    function accessibilityVisibleChildren: NSArray; message 'accessibilityVisibleChildren'; { available in macos  }
    procedure setAccessibilitySubrole(newValue: NSAccessibilitySubrole); message 'setAccessibilitySubrole:'; { available in macos  }
    function accessibilitySubrole: NSAccessibilitySubrole; message 'accessibilitySubrole'; { available in macos  }
    procedure setAccessibilityTitle(newValue: NSString); message 'setAccessibilityTitle:'; { available in macos  }
    function accessibilityTitle: NSString; message 'accessibilityTitle'; { available in macos  }
    procedure setAccessibilityTitleUIElement(newValue: id); message 'setAccessibilityTitleUIElement:'; { available in macos  }
    function accessibilityTitleUIElement: id; message 'accessibilityTitleUIElement'; { available in macos  }
    procedure setAccessibilityNextContents(newValue: NSArray); message 'setAccessibilityNextContents:'; { available in macos  }
    function accessibilityNextContents: NSArray; message 'accessibilityNextContents'; { available in macos  }
    procedure setAccessibilityOrientation(newValue: NSAccessibilityOrientation); message 'setAccessibilityOrientation:'; { available in macos  }
    function accessibilityOrientation: NSAccessibilityOrientation; message 'accessibilityOrientation'; { available in macos  }
    procedure setAccessibilityOverflowButton(newValue: id); message 'setAccessibilityOverflowButton:'; { available in macos  }
    function accessibilityOverflowButton: id; message 'accessibilityOverflowButton'; { available in macos  }
    procedure setAccessibilityParent(newValue: id); message 'setAccessibilityParent:'; { available in macos  }
    function accessibilityParent: id; message 'accessibilityParent'; { available in macos  }
    procedure setAccessibilityPlaceholderValue(newValue: NSString); message 'setAccessibilityPlaceholderValue:'; { available in macos  }
    function accessibilityPlaceholderValue: NSString; message 'accessibilityPlaceholderValue'; { available in macos  }
    procedure setAccessibilityPreviousContents(newValue: NSArray); message 'setAccessibilityPreviousContents:'; { available in macos  }
    function accessibilityPreviousContents: NSArray; message 'accessibilityPreviousContents'; { available in macos  }
    procedure setAccessibilityRole(newValue: NSAccessibilityRole); message 'setAccessibilityRole:'; { available in macos  }
    function accessibilityRole: NSAccessibilityRole; message 'accessibilityRole'; { available in macos  }
    procedure setAccessibilityRoleDescription(newValue: NSString); message 'setAccessibilityRoleDescription:'; { available in macos  }
    function accessibilityRoleDescription: NSString; message 'accessibilityRoleDescription'; { available in macos  }
    procedure setAccessibilitySearchButton(newValue: id); message 'setAccessibilitySearchButton:'; { available in macos  }
    function accessibilitySearchButton: id; message 'accessibilitySearchButton'; { available in macos  }
    procedure setAccessibilitySearchMenu(newValue: id); message 'setAccessibilitySearchMenu:'; { available in macos  }
    function accessibilitySearchMenu: id; message 'accessibilitySearchMenu'; { available in macos  }
    procedure setAccessibilitySelected(newValue: objcbool); message 'setAccessibilitySelected:'; { available in macos  }
    function isAccessibilitySelected: objcbool; message 'isAccessibilitySelected'; { available in macos  }
    procedure setAccessibilitySelectedChildren(newValue: NSArray); message 'setAccessibilitySelectedChildren:'; { available in macos  }
    function accessibilitySelectedChildren: NSArray; message 'accessibilitySelectedChildren'; { available in macos  }
    procedure setAccessibilityServesAsTitleForUIElements(newValue: NSArray); message 'setAccessibilityServesAsTitleForUIElements:'; { available in macos  }
    function accessibilityServesAsTitleForUIElements: NSArray; message 'accessibilityServesAsTitleForUIElements'; { available in macos  }
    procedure setAccessibilityShownMenu(newValue: id); message 'setAccessibilityShownMenu:'; { available in macos  }
    function accessibilityShownMenu: id; message 'accessibilityShownMenu'; { available in macos  }
    procedure setAccessibilityMinValue(newValue: id); message 'setAccessibilityMinValue:'; { available in macos  }
    function accessibilityMinValue: id; message 'accessibilityMinValue'; { available in macos  }
    procedure setAccessibilityMaxValue(newValue: id); message 'setAccessibilityMaxValue:'; { available in macos  }
    function accessibilityMaxValue: id; message 'accessibilityMaxValue'; { available in macos  }
    procedure setAccessibilityLinkedUIElements(newValue: NSArray); message 'setAccessibilityLinkedUIElements:'; { available in macos  }
    function accessibilityLinkedUIElements: NSArray; message 'accessibilityLinkedUIElements'; { available in macos  }
    procedure setAccessibilityWindow(newValue: id); message 'setAccessibilityWindow:'; { available in macos  }
    function accessibilityWindow: id; message 'accessibilityWindow'; { available in macos  }
    procedure setAccessibilityIdentifier(newValue: NSString); message 'setAccessibilityIdentifier:'; { available in macos  }
    function accessibilityIdentifier: NSString; message 'accessibilityIdentifier'; { available in macos  }
    procedure setAccessibilityHelp(newValue: NSString); message 'setAccessibilityHelp:'; { available in macos  }
    function accessibilityHelp: NSString; message 'accessibilityHelp'; { available in macos  }
    procedure setAccessibilityFilename(newValue: NSString); message 'setAccessibilityFilename:'; { available in macos  }
    function accessibilityFilename: NSString; message 'accessibilityFilename'; { available in macos  }
    procedure setAccessibilityExpanded(newValue: objcbool); message 'setAccessibilityExpanded:'; { available in macos  }
    function isAccessibilityExpanded: objcbool; message 'isAccessibilityExpanded'; { available in macos  }
    procedure setAccessibilityEdited(newValue: objcbool); message 'setAccessibilityEdited:'; { available in macos  }
    function isAccessibilityEdited: objcbool; message 'isAccessibilityEdited'; { available in macos  }
    procedure setAccessibilityEnabled(newValue: objcbool); message 'setAccessibilityEnabled:'; { available in macos  }
    function isAccessibilityEnabled: objcbool; message 'isAccessibilityEnabled'; { available in macos  }
    procedure setAccessibilityChildren(newValue: NSArray); message 'setAccessibilityChildren:'; { available in macos  }
    function accessibilityChildren: NSArray; message 'accessibilityChildren'; { available in macos  }
    procedure setAccessibilityChildrenInNavigationOrder(newValue: NSArray); message 'setAccessibilityChildrenInNavigationOrder:'; { available in macos  }
    function accessibilityChildrenInNavigationOrder: NSArray; message 'accessibilityChildrenInNavigationOrder'; { available in macos  }
    procedure setAccessibilityClearButton(newValue: id); message 'setAccessibilityClearButton:'; { available in macos  }
    function accessibilityClearButton: id; message 'accessibilityClearButton'; { available in macos  }
    procedure setAccessibilityCancelButton(newValue: id); message 'setAccessibilityCancelButton:'; { available in macos  }
    function accessibilityCancelButton: id; message 'accessibilityCancelButton'; { available in macos  }
    procedure setAccessibilityProtectedContent(newValue: objcbool); message 'setAccessibilityProtectedContent:'; { available in macos  }
    function isAccessibilityProtectedContent: objcbool; message 'isAccessibilityProtectedContent'; { available in macos  }
    procedure setAccessibilityContents(newValue: NSArray); message 'setAccessibilityContents:'; { available in macos  }
    function accessibilityContents: NSArray; message 'accessibilityContents'; { available in macos  }
    procedure setAccessibilityLabel(newValue: NSString); message 'setAccessibilityLabel:'; { available in macos  }
    function accessibilityLabel: NSString; message 'accessibilityLabel'; { available in macos  }
    procedure setAccessibilityAlternateUIVisible(newValue: objcbool); message 'setAccessibilityAlternateUIVisible:'; { available in macos  }
    function isAccessibilityAlternateUIVisible: objcbool; message 'isAccessibilityAlternateUIVisible'; { available in macos  }
    procedure setAccessibilitySharedFocusElements(newValue: NSArray); message 'setAccessibilitySharedFocusElements:'; { available in macos  }
    function accessibilitySharedFocusElements: NSArray; message 'accessibilitySharedFocusElements'; { available in macos  }
    procedure setAccessibilityRequired(newValue: objcbool); message 'setAccessibilityRequired:'; { available in macos  }
    function isAccessibilityRequired: objcbool; message 'isAccessibilityRequired'; { available in macos  }
    procedure setAccessibilityCustomRotors(newValue: NSArray); message 'setAccessibilityCustomRotors:'; { available in macos  }
    function accessibilityCustomRotors: NSArray; message 'accessibilityCustomRotors'; { available in macos  }
    procedure setAccessibilityApplicationFocusedUIElement(newValue: id); message 'setAccessibilityApplicationFocusedUIElement:'; { available in macos  }
    function accessibilityApplicationFocusedUIElement: id; message 'accessibilityApplicationFocusedUIElement'; { available in macos  }
    procedure setAccessibilityMainWindow(newValue: id); message 'setAccessibilityMainWindow:'; { available in macos  }
    function accessibilityMainWindow: id; message 'accessibilityMainWindow'; { available in macos  }
    procedure setAccessibilityHidden(newValue: objcbool); message 'setAccessibilityHidden:'; { available in macos  }
    function isAccessibilityHidden: objcbool; message 'isAccessibilityHidden'; { available in macos  }
    procedure setAccessibilityFrontmost(newValue: objcbool); message 'setAccessibilityFrontmost:'; { available in macos  }
    function isAccessibilityFrontmost: objcbool; message 'isAccessibilityFrontmost'; { available in macos  }
    procedure setAccessibilityFocusedWindow(newValue: id); message 'setAccessibilityFocusedWindow:'; { available in macos  }
    function accessibilityFocusedWindow: id; message 'accessibilityFocusedWindow'; { available in macos  }
    procedure setAccessibilityWindows(newValue: NSArray); message 'setAccessibilityWindows:'; { available in macos  }
    function accessibilityWindows: NSArray; message 'accessibilityWindows'; { available in macos  }
    procedure setAccessibilityExtrasMenuBar(newValue: id); message 'setAccessibilityExtrasMenuBar:'; { available in macos  }
    function accessibilityExtrasMenuBar: id; message 'accessibilityExtrasMenuBar'; { available in macos  }
    procedure setAccessibilityMenuBar(newValue: id); message 'setAccessibilityMenuBar:'; { available in macos  }
    function accessibilityMenuBar: id; message 'accessibilityMenuBar'; { available in macos  }
    procedure setAccessibilityColumnTitles(newValue: NSArray); message 'setAccessibilityColumnTitles:'; { available in macos  }
    function accessibilityColumnTitles: NSArray; message 'accessibilityColumnTitles'; { available in macos  }
    procedure setAccessibilityOrderedByRow(newValue: objcbool); message 'setAccessibilityOrderedByRow:'; { available in macos  }
    function isAccessibilityOrderedByRow: objcbool; message 'isAccessibilityOrderedByRow'; { available in macos  }
    procedure setAccessibilityHorizontalUnits(newValue: NSAccessibilityUnits); message 'setAccessibilityHorizontalUnits:'; { available in macos  }
    function accessibilityHorizontalUnits: NSAccessibilityUnits; message 'accessibilityHorizontalUnits'; { available in macos  }
    procedure setAccessibilityVerticalUnits(newValue: NSAccessibilityUnits); message 'setAccessibilityVerticalUnits:'; { available in macos  }
    function accessibilityVerticalUnits: NSAccessibilityUnits; message 'accessibilityVerticalUnits'; { available in macos  }
    procedure setAccessibilityHorizontalUnitDescription(newValue: NSString); message 'setAccessibilityHorizontalUnitDescription:'; { available in macos  }
    function accessibilityHorizontalUnitDescription: NSString; message 'accessibilityHorizontalUnitDescription'; { available in macos  }
    procedure setAccessibilityVerticalUnitDescription(newValue: NSString); message 'setAccessibilityVerticalUnitDescription:'; { available in macos  }
    function accessibilityVerticalUnitDescription: NSString; message 'accessibilityVerticalUnitDescription'; { available in macos  }
    function accessibilityLayoutPointForScreenPoint (point: NSPoint): NSPoint; message 'accessibilityLayoutPointForScreenPoint:'; { available in macos  }
    function accessibilityLayoutSizeForScreenSize (size: NSSize): NSSize; message 'accessibilityLayoutSizeForScreenSize:'; { available in macos  }
    function accessibilityScreenPointForLayoutPoint (point: NSPoint): NSPoint; message 'accessibilityScreenPointForLayoutPoint:'; { available in macos  }
    function accessibilityScreenSizeForLayoutSize (size: NSSize): NSSize; message 'accessibilityScreenSizeForLayoutSize:'; { available in macos  }
    procedure setAccessibilityHandles(newValue: NSArray); message 'setAccessibilityHandles:'; { available in macos  }
    function accessibilityHandles: NSArray; message 'accessibilityHandles'; { available in macos  }
    procedure setAccessibilityWarningValue(newValue: id); message 'setAccessibilityWarningValue:'; { available in macos  }
    function accessibilityWarningValue: id; message 'accessibilityWarningValue'; { available in macos  }
    procedure setAccessibilityCriticalValue(newValue: id); message 'setAccessibilityCriticalValue:'; { available in macos  }
    function accessibilityCriticalValue: id; message 'accessibilityCriticalValue'; { available in macos  }
    procedure setAccessibilityDisclosed(newValue: objcbool); message 'setAccessibilityDisclosed:'; { available in macos  }
    function isAccessibilityDisclosed: objcbool; message 'isAccessibilityDisclosed'; { available in macos  }
    procedure setAccessibilityDisclosedByRow(newValue: id); message 'setAccessibilityDisclosedByRow:'; { available in macos  }
    function accessibilityDisclosedByRow: id; message 'accessibilityDisclosedByRow'; { available in macos  }
    procedure setAccessibilityDisclosedRows(newValue: id); message 'setAccessibilityDisclosedRows:'; { available in macos  }
    function accessibilityDisclosedRows: id; message 'accessibilityDisclosedRows'; { available in macos  }
    procedure setAccessibilityDisclosureLevel(newValue: NSInteger); message 'setAccessibilityDisclosureLevel:'; { available in macos  }
    function accessibilityDisclosureLevel: NSInteger; message 'accessibilityDisclosureLevel'; { available in macos  }
    procedure setAccessibilityMarkerUIElements(newValue: NSArray); message 'setAccessibilityMarkerUIElements:'; { available in macos  }
    function accessibilityMarkerUIElements: NSArray; message 'accessibilityMarkerUIElements'; { available in macos  }
    procedure setAccessibilityMarkerValues(newValue: id); message 'setAccessibilityMarkerValues:'; { available in macos  }
    function accessibilityMarkerValues: id; message 'accessibilityMarkerValues'; { available in macos  }
    procedure setAccessibilityMarkerGroupUIElement(newValue: id); message 'setAccessibilityMarkerGroupUIElement:'; { available in macos  }
    function accessibilityMarkerGroupUIElement: id; message 'accessibilityMarkerGroupUIElement'; { available in macos  }
    procedure setAccessibilityUnits(newValue: NSAccessibilityUnits); message 'setAccessibilityUnits:'; { available in macos  }
    function accessibilityUnits: NSAccessibilityUnits; message 'accessibilityUnits'; { available in macos  }
    procedure setAccessibilityUnitDescription(newValue: NSString); message 'setAccessibilityUnitDescription:'; { available in macos  }
    function accessibilityUnitDescription: NSString; message 'accessibilityUnitDescription'; { available in macos  }
    procedure setAccessibilityRulerMarkerType(newValue: NSAccessibilityRulerMarkerType); message 'setAccessibilityRulerMarkerType:'; { available in macos  }
    function accessibilityRulerMarkerType: NSAccessibilityRulerMarkerType; message 'accessibilityRulerMarkerType'; { available in macos  }
    procedure setAccessibilityMarkerTypeDescription(newValue: NSString); message 'setAccessibilityMarkerTypeDescription:'; { available in macos  }
    function accessibilityMarkerTypeDescription: NSString; message 'accessibilityMarkerTypeDescription'; { available in macos  }
    procedure setAccessibilityHorizontalScrollBar(newValue: id); message 'setAccessibilityHorizontalScrollBar:'; { available in macos  }
    function accessibilityHorizontalScrollBar: id; message 'accessibilityHorizontalScrollBar'; { available in macos  }
    procedure setAccessibilityVerticalScrollBar(newValue: id); message 'setAccessibilityVerticalScrollBar:'; { available in macos  }
    function accessibilityVerticalScrollBar: id; message 'accessibilityVerticalScrollBar'; { available in macos  }
    procedure setAccessibilityAllowedValues(newValue: NSArray); message 'setAccessibilityAllowedValues:'; { available in macos  }
    function accessibilityAllowedValues: NSArray; message 'accessibilityAllowedValues'; { available in macos  }
    procedure setAccessibilityLabelUIElements(newValue: NSArray); message 'setAccessibilityLabelUIElements:'; { available in macos  }
    function accessibilityLabelUIElements: NSArray; message 'accessibilityLabelUIElements'; { available in macos  }
    procedure setAccessibilityLabelValue(newValue: single); message 'setAccessibilityLabelValue:'; { available in macos  }
    function accessibilityLabelValue: single; message 'accessibilityLabelValue'; { available in macos  }
    procedure setAccessibilitySplitters(newValue: NSArray); message 'setAccessibilitySplitters:'; { available in macos  }
    function accessibilitySplitters: NSArray; message 'accessibilitySplitters'; { available in macos  }
    procedure setAccessibilityDecrementButton(newValue: id); message 'setAccessibilityDecrementButton:'; { available in macos  }
    function accessibilityDecrementButton: id; message 'accessibilityDecrementButton'; { available in macos  }
    procedure setAccessibilityIncrementButton(newValue: id); message 'setAccessibilityIncrementButton:'; { available in macos  }
    function accessibilityIncrementButton: id; message 'accessibilityIncrementButton'; { available in macos  }
    procedure setAccessibilityTabs(newValue: NSArray); message 'setAccessibilityTabs:'; { available in macos  }
    function accessibilityTabs: NSArray; message 'accessibilityTabs'; { available in macos  }
    procedure setAccessibilityHeader(newValue: id); message 'setAccessibilityHeader:'; { available in macos  }
    function accessibilityHeader: id; message 'accessibilityHeader'; { available in macos  }
    procedure setAccessibilityColumnCount(newValue: NSInteger); message 'setAccessibilityColumnCount:'; { available in macos  }
    function accessibilityColumnCount: NSInteger; message 'accessibilityColumnCount'; { available in macos  }
    procedure setAccessibilityRowCount(newValue: NSInteger); message 'setAccessibilityRowCount:'; { available in macos  }
    function accessibilityRowCount: NSInteger; message 'accessibilityRowCount'; { available in macos  }
    procedure setAccessibilityIndex(newValue: NSInteger); message 'setAccessibilityIndex:'; { available in macos  }
    function accessibilityIndex: NSInteger; message 'accessibilityIndex'; { available in macos  }
    procedure setAccessibilityColumns(newValue: NSArray); message 'setAccessibilityColumns:'; { available in macos  }
    function accessibilityColumns: NSArray; message 'accessibilityColumns'; { available in macos  }
    procedure setAccessibilityRows(newValue: NSArray); message 'setAccessibilityRows:'; { available in macos  }
    function accessibilityRows: NSArray; message 'accessibilityRows'; { available in macos  }
    procedure setAccessibilityVisibleRows(newValue: NSArray); message 'setAccessibilityVisibleRows:'; { available in macos  }
    function accessibilityVisibleRows: NSArray; message 'accessibilityVisibleRows'; { available in macos  }
    procedure setAccessibilitySelectedRows(newValue: NSArray); message 'setAccessibilitySelectedRows:'; { available in macos  }
    function accessibilitySelectedRows: NSArray; message 'accessibilitySelectedRows'; { available in macos  }
    procedure setAccessibilityVisibleColumns(newValue: NSArray); message 'setAccessibilityVisibleColumns:'; { available in macos  }
    function accessibilityVisibleColumns: NSArray; message 'accessibilityVisibleColumns'; { available in macos  }
    procedure setAccessibilitySelectedColumns(newValue: NSArray); message 'setAccessibilitySelectedColumns:'; { available in macos  }
    function accessibilitySelectedColumns: NSArray; message 'accessibilitySelectedColumns'; { available in macos  }
    procedure setAccessibilitySortDirection(newValue: NSAccessibilitySortDirection); message 'setAccessibilitySortDirection:'; { available in macos  }
    function accessibilitySortDirection: NSAccessibilitySortDirection; message 'accessibilitySortDirection'; { available in macos  }
    procedure setAccessibilityRowHeaderUIElements(newValue: NSArray); message 'setAccessibilityRowHeaderUIElements:'; { available in macos  }
    function accessibilityRowHeaderUIElements: NSArray; message 'accessibilityRowHeaderUIElements'; { available in macos  }
    procedure setAccessibilitySelectedCells(newValue: NSArray); message 'setAccessibilitySelectedCells:'; { available in macos  }
    function accessibilitySelectedCells: NSArray; message 'accessibilitySelectedCells'; { available in macos  }
    procedure setAccessibilityVisibleCells(newValue: NSArray); message 'setAccessibilityVisibleCells:'; { available in macos  }
    function accessibilityVisibleCells: NSArray; message 'accessibilityVisibleCells'; { available in macos  }
    procedure setAccessibilityColumnHeaderUIElements(newValue: NSArray); message 'setAccessibilityColumnHeaderUIElements:'; { available in macos  }
    function accessibilityColumnHeaderUIElements: NSArray; message 'accessibilityColumnHeaderUIElements'; { available in macos  }
    function accessibilityCellForColumn_row (column: NSInteger; row: NSInteger): id; message 'accessibilityCellForColumn:row:'; { available in macos  }
    procedure setAccessibilityRowIndexRange(newValue: NSRange); message 'setAccessibilityRowIndexRange:'; { available in macos  }
    function accessibilityRowIndexRange: NSRange; message 'accessibilityRowIndexRange'; { available in macos  }
    procedure setAccessibilityColumnIndexRange(newValue: NSRange); message 'setAccessibilityColumnIndexRange:'; { available in macos  }
    function accessibilityColumnIndexRange: NSRange; message 'accessibilityColumnIndexRange'; { available in macos  }
    procedure setAccessibilityInsertionPointLineNumber(newValue: NSInteger); message 'setAccessibilityInsertionPointLineNumber:'; { available in macos  }
    function accessibilityInsertionPointLineNumber: NSInteger; message 'accessibilityInsertionPointLineNumber'; { available in macos  }
    procedure setAccessibilitySharedCharacterRange(newValue: NSRange); message 'setAccessibilitySharedCharacterRange:'; { available in macos  }
    function accessibilitySharedCharacterRange: NSRange; message 'accessibilitySharedCharacterRange'; { available in macos  }
    procedure setAccessibilitySharedTextUIElements(newValue: NSArray); message 'setAccessibilitySharedTextUIElements:'; { available in macos  }
    function accessibilitySharedTextUIElements: NSArray; message 'accessibilitySharedTextUIElements'; { available in macos  }
    procedure setAccessibilityVisibleCharacterRange(newValue: NSRange); message 'setAccessibilityVisibleCharacterRange:'; { available in macos  }
    function accessibilityVisibleCharacterRange: NSRange; message 'accessibilityVisibleCharacterRange'; { available in macos  }
    procedure setAccessibilityNumberOfCharacters(newValue: NSInteger); message 'setAccessibilityNumberOfCharacters:'; { available in macos  }
    function accessibilityNumberOfCharacters: NSInteger; message 'accessibilityNumberOfCharacters'; { available in macos  }
    procedure setAccessibilitySelectedText(newValue: NSString); message 'setAccessibilitySelectedText:'; { available in macos  }
    function accessibilitySelectedText: NSString; message 'accessibilitySelectedText'; { available in macos  }
    procedure setAccessibilitySelectedTextRange(newValue: NSRange); message 'setAccessibilitySelectedTextRange:'; { available in macos  }
    function accessibilitySelectedTextRange: NSRange; message 'accessibilitySelectedTextRange'; { available in macos  }
    procedure setAccessibilitySelectedTextRanges(newValue: NSArray); message 'setAccessibilitySelectedTextRanges:'; { available in macos  }
    function accessibilitySelectedTextRanges: NSArray; message 'accessibilitySelectedTextRanges'; { available in macos  }
    function accessibilityAttributedStringForRange (range: NSRange): NSAttributedString; message 'accessibilityAttributedStringForRange:'; { available in macos  }
    function accessibilityRangeForLine (line: NSInteger): NSRange; message 'accessibilityRangeForLine:'; { available in macos  }
    function accessibilityStringForRange (range: NSRange): NSString; message 'accessibilityStringForRange:'; { available in macos  }
    function accessibilityRangeForPosition (point: NSPoint): NSRange; message 'accessibilityRangeForPosition:'; { available in macos  }
    function accessibilityRangeForIndex (index: NSInteger): NSRange; message 'accessibilityRangeForIndex:'; { available in macos  }
    function accessibilityFrameForRange (range: NSRange): NSRect; message 'accessibilityFrameForRange:'; { available in macos  }
    function accessibilityRTFForRange (range: NSRange): NSData; message 'accessibilityRTFForRange:'; { available in macos  }
    function accessibilityStyleRangeForIndex (index: NSInteger): NSRange; message 'accessibilityStyleRangeForIndex:'; { available in macos  }
    function accessibilityLineForIndex (index: NSInteger): NSInteger; message 'accessibilityLineForIndex:'; { available in macos  }
    procedure setAccessibilityToolbarButton(newValue: id); message 'setAccessibilityToolbarButton:'; { available in macos  }
    function accessibilityToolbarButton: id; message 'accessibilityToolbarButton'; { available in macos  }
    procedure setAccessibilityModal(newValue: objcbool); message 'setAccessibilityModal:'; { available in macos  }
    function isAccessibilityModal: objcbool; message 'isAccessibilityModal'; { available in macos  }
    procedure setAccessibilityProxy(newValue: id); message 'setAccessibilityProxy:'; { available in macos  }
    function accessibilityProxy: id; message 'accessibilityProxy'; { available in macos  }
    procedure setAccessibilityMain(newValue: objcbool); message 'setAccessibilityMain:'; { available in macos  }
    function isAccessibilityMain: objcbool; message 'isAccessibilityMain'; { available in macos  }
    procedure setAccessibilityFullScreenButton(newValue: id); message 'setAccessibilityFullScreenButton:'; { available in macos  }
    function accessibilityFullScreenButton: id; message 'accessibilityFullScreenButton'; { available in macos  }
    procedure setAccessibilityGrowArea(newValue: id); message 'setAccessibilityGrowArea:'; { available in macos  }
    function accessibilityGrowArea: id; message 'accessibilityGrowArea'; { available in macos  }
    procedure setAccessibilityDocument(newValue: NSString); message 'setAccessibilityDocument:'; { available in macos  }
    function accessibilityDocument: NSString; message 'accessibilityDocument'; { available in macos  }
    procedure setAccessibilityDefaultButton(newValue: id); message 'setAccessibilityDefaultButton:'; { available in macos  }
    function accessibilityDefaultButton: id; message 'accessibilityDefaultButton'; { available in macos  }
    procedure setAccessibilityCloseButton(newValue: id); message 'setAccessibilityCloseButton:'; { available in macos  }
    function accessibilityCloseButton: id; message 'accessibilityCloseButton'; { available in macos  }
    procedure setAccessibilityZoomButton(newValue: id); message 'setAccessibilityZoomButton:'; { available in macos  }
    function accessibilityZoomButton: id; message 'accessibilityZoomButton'; { available in macos  }
    procedure setAccessibilityMinimizeButton(newValue: id); message 'setAccessibilityMinimizeButton:'; { available in macos  }
    function accessibilityMinimizeButton: id; message 'accessibilityMinimizeButton'; { available in macos  }
    procedure setAccessibilityMinimized(newValue: objcbool); message 'setAccessibilityMinimized:'; { available in macos  }
    function isAccessibilityMinimized: objcbool; message 'isAccessibilityMinimized'; { available in macos  }
    procedure setAccessibilityCustomActions(newValue: NSArray); message 'setAccessibilityCustomActions:'; { available in macos  }
    function accessibilityCustomActions: NSArray; message 'accessibilityCustomActions'; { available in macos  }
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
    function isAccessibilitySelectorAllowed (selector: SEL): objcbool; message 'isAccessibilitySelectorAllowed:'; { available in macos  }
  end;
{$endif}

