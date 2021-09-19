{ Parsed from AppKit.framework NSAccessibilityConstants.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityErrorCodeExceptionInfo: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilityAttributeName = NSString;
  NSAccessibilityAttributeNamePtr = ^NSAccessibilityAttributeName;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityRoleAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityRoleDescriptionAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySubroleAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityHelpAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityValueAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityMinValueAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityMaxValueAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityEnabledAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityFocusedAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityParentAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityChildrenAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityWindowAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityTopLevelUIElementAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySelectedChildrenAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityVisibleChildrenAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityPositionAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySizeAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityContentsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityTitleAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityDescriptionAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityShownMenuAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityValueDescriptionAttribute: NSAccessibilityAttributeName { available in macos 10.5 }; cvar; external;
  NSAccessibilitySharedFocusElementsAttribute: NSAccessibilityAttributeName { available in macos 10.10 }; cvar; external;
  NSAccessibilityPreviousContentsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityNextContentsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityHeaderAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityEditedAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityTabsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityHorizontalScrollBarAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityVerticalScrollBarAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityOverflowButtonAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityIncrementButtonAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityDecrementButtonAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityFilenameAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityExpandedAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySelectedAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySplittersAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityDocumentAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityActivationPointAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityURLAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityIndexAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityRowCountAttribute: NSAccessibilityAttributeName { available in macos 10.5 }; cvar; external;
  NSAccessibilityColumnCountAttribute: NSAccessibilityAttributeName { available in macos 10.5 }; cvar; external;
  NSAccessibilityOrderedByRowAttribute: NSAccessibilityAttributeName { available in macos 10.5 }; cvar; external;
  NSAccessibilityWarningValueAttribute: NSAccessibilityAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityCriticalValueAttribute: NSAccessibilityAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityPlaceholderValueAttribute: NSAccessibilityAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityContainsProtectedContentAttribute: NSAccessibilityAttributeName { available in macos 10.9 }; cvar; external;
  NSAccessibilityAlternateUIVisibleAttribute: NSAccessibilityAttributeName { available in macos 10.10 }; cvar; external;
  NSAccessibilityRequiredAttribute: NSAccessibilityAttributeName { available in macos 10.12 }; cvar; external;
  NSAccessibilityTitleUIElementAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityServesAsTitleForUIElementsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityLinkedUIElementsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySelectedTextAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySelectedTextRangeAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityNumberOfCharactersAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityVisibleCharacterRangeAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySharedTextUIElementsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySharedCharacterRangeAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityInsertionPointLineNumberAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySelectedTextRangesAttribute: NSAccessibilityAttributeName { available in macos 10.5 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilityParameterizedAttributeName = NSString;
  NSAccessibilityParameterizedAttributeNamePtr = ^NSAccessibilityParameterizedAttributeName;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityLineForIndexParameterizedAttribute: NSAccessibilityParameterizedAttributeName; cvar; external;
  NSAccessibilityRangeForLineParameterizedAttribute: NSAccessibilityParameterizedAttributeName; cvar; external;
  NSAccessibilityStringForRangeParameterizedAttribute: NSAccessibilityParameterizedAttributeName; cvar; external;
  NSAccessibilityRangeForPositionParameterizedAttribute: NSAccessibilityParameterizedAttributeName; cvar; external;
  NSAccessibilityRangeForIndexParameterizedAttribute: NSAccessibilityParameterizedAttributeName; cvar; external;
  NSAccessibilityBoundsForRangeParameterizedAttribute: NSAccessibilityParameterizedAttributeName; cvar; external;
  NSAccessibilityRTFForRangeParameterizedAttribute: NSAccessibilityParameterizedAttributeName; cvar; external;
  NSAccessibilityStyleRangeForIndexParameterizedAttribute: NSAccessibilityParameterizedAttributeName; cvar; external;
  NSAccessibilityAttributedStringForRangeParameterizedAttribute: NSAccessibilityParameterizedAttributeName; cvar; external;
  NSAccessibilityFontTextAttribute: NSAttributedStringKey; cvar; external;
  NSAccessibilityForegroundColorTextAttribute: NSAttributedStringKey; cvar; external;
  NSAccessibilityBackgroundColorTextAttribute: NSAttributedStringKey; cvar; external;
  NSAccessibilityUnderlineColorTextAttribute: NSAttributedStringKey; cvar; external;
  NSAccessibilityStrikethroughColorTextAttribute: NSAttributedStringKey; cvar; external;
  NSAccessibilityUnderlineTextAttribute: NSAttributedStringKey; cvar; external;
  NSAccessibilitySuperscriptTextAttribute: NSAttributedStringKey; cvar; external;
  NSAccessibilityStrikethroughTextAttribute: NSAttributedStringKey; cvar; external;
  NSAccessibilityShadowTextAttribute: NSAttributedStringKey; cvar; external;
  NSAccessibilityAttachmentTextAttribute: NSAttributedStringKey; cvar; external;
  NSAccessibilityLinkTextAttribute: NSAttributedStringKey; cvar; external;
  NSAccessibilityAutocorrectedTextAttribute: NSAttributedStringKey { available in macos 10.7 }; cvar; external;
  NSAccessibilityTextAlignmentAttribute: NSAttributedStringKey { available in macos 10.12 }; cvar; external;
  NSAccessibilityListItemPrefixTextAttribute: NSAttributedStringKey { available in macos 10.11 }; cvar; external;
  NSAccessibilityListItemIndexTextAttribute: NSAttributedStringKey { available in macos 10.11 }; cvar; external;
  NSAccessibilityListItemLevelTextAttribute: NSAttributedStringKey { available in macos 10.11 }; cvar; external;
  NSAccessibilityMisspelledTextAttribute: NSAttributedStringKey; cvar; external;
  NSAccessibilityMarkedMisspelledTextAttribute: NSAttributedStringKey { available in macos 10.4 }; cvar; external;
  NSAccessibilityLanguageTextAttribute: NSAttributedStringKey { available in macos 10.13 }; cvar; external;
  NSAccessibilityCustomTextAttribute: NSAttributedStringKey { available in macos 10.13 }; cvar; external;
  NSAccessibilityAnnotationTextAttribute: NSAttributedStringKey { available in macos 10.13 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilityAnnotationAttributeKey = NSString;
  NSAccessibilityAnnotationAttributeKeyPtr = ^NSAccessibilityAnnotationAttributeKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityAnnotationLabel: NSAccessibilityAnnotationAttributeKey { available in macos 10.13 }; cvar; external;
  NSAccessibilityAnnotationElement: NSAccessibilityAnnotationAttributeKey { available in macos 10.13 }; cvar; external;
  NSAccessibilityAnnotationLocation: NSAccessibilityAnnotationAttributeKey { available in macos 10.13 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilityAnnotationPosition = NSInteger;
  NSAccessibilityAnnotationPositionPtr = ^NSAccessibilityAnnotationPosition;

const
  NSAccessibilityAnnotationPositionFullRange = 0;
  NSAccessibilityAnnotationPositionStart = 1;
  NSAccessibilityAnnotationPositionEnd = 2;

type
  NSAccessibilityFontAttributeKey = NSString;
  NSAccessibilityFontAttributeKeyPtr = ^NSAccessibilityFontAttributeKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityFontNameKey: NSAccessibilityFontAttributeKey; cvar; external;
  NSAccessibilityFontFamilyKey: NSAccessibilityFontAttributeKey; cvar; external;
  NSAccessibilityVisibleNameKey: NSAccessibilityFontAttributeKey; cvar; external;
  NSAccessibilityFontSizeKey: NSAccessibilityFontAttributeKey; cvar; external;
  NSAccessibilityMainAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityMinimizedAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityCloseButtonAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityZoomButtonAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityMinimizeButtonAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityToolbarButtonAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityProxyAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityGrowAreaAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityModalAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityDefaultButtonAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityCancelButtonAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityFullScreenButtonAttribute: NSAccessibilityAttributeName { available in macos 10.7 }; cvar; external;
  NSAccessibilityMenuBarAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityWindowsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityFrontmostAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityHiddenAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityMainWindowAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityFocusedWindowAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityFocusedUIElementAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityExtrasMenuBarAttribute: NSAccessibilityAttributeName { available in macos 10.8 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilityOrientation = NSInteger;
  NSAccessibilityOrientationPtr = ^NSAccessibilityOrientation;

const
  NSAccessibilityOrientationUnknown = 0;
  NSAccessibilityOrientationVertical = 1;
  NSAccessibilityOrientationHorizontal = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityOrientationAttribute: NSAccessibilityAttributeName; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilityOrientationValue = NSString;
  NSAccessibilityOrientationValuePtr = ^NSAccessibilityOrientationValue;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityVerticalOrientationValue: NSAccessibilityOrientationValue; cvar; external;
  NSAccessibilityHorizontalOrientationValue: NSAccessibilityOrientationValue; cvar; external;
  NSAccessibilityUnknownOrientationValue: NSAccessibilityOrientationValue; cvar; external;
  NSAccessibilityColumnTitlesAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySearchButtonAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySearchMenuAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityClearButtonAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityRowsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityVisibleRowsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySelectedRowsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityColumnsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityVisibleColumnsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySelectedColumnsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySortDirectionAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilitySelectedCellsAttribute: NSAccessibilityAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityVisibleCellsAttribute: NSAccessibilityAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityRowHeaderUIElementsAttribute: NSAccessibilityAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityColumnHeaderUIElementsAttribute: NSAccessibilityAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityCellForColumnAndRowParameterizedAttribute: NSAccessibilityParameterizedAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityRowIndexRangeAttribute: NSAccessibilityAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityColumnIndexRangeAttribute: NSAccessibilityAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityHorizontalUnitsAttribute: NSAccessibilityAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityVerticalUnitsAttribute: NSAccessibilityAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityHorizontalUnitDescriptionAttribute: NSAccessibilityAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityVerticalUnitDescriptionAttribute: NSAccessibilityAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityLayoutPointForScreenPointParameterizedAttribute: NSAccessibilityParameterizedAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityLayoutSizeForScreenSizeParameterizedAttribute: NSAccessibilityParameterizedAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityScreenPointForLayoutPointParameterizedAttribute: NSAccessibilityParameterizedAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityScreenSizeForLayoutSizeParameterizedAttribute: NSAccessibilityParameterizedAttributeName { available in macos 10.6 }; cvar; external;
  NSAccessibilityHandlesAttribute: NSAccessibilityAttributeName { available in macos 10.6 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilitySortDirectionValue = NSString;
  NSAccessibilitySortDirectionValuePtr = ^NSAccessibilitySortDirectionValue;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityAscendingSortDirectionValue: NSAccessibilitySortDirectionValue; cvar; external;
  NSAccessibilityDescendingSortDirectionValue: NSAccessibilitySortDirectionValue; cvar; external;
  NSAccessibilityUnknownSortDirectionValue: NSAccessibilitySortDirectionValue; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilitySortDirection = NSInteger;
  NSAccessibilitySortDirectionPtr = ^NSAccessibilitySortDirection;

const
  NSAccessibilitySortDirectionUnknown = 0;
  NSAccessibilitySortDirectionAscending = 1;
  NSAccessibilitySortDirectionDescending = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityDisclosingAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityDisclosedRowsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityDisclosedByRowAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityDisclosureLevelAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityAllowedValuesAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityLabelUIElementsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityLabelValueAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityMatteHoleAttribute: NSAccessibilityAttributeName deprecated; cvar; external;
  NSAccessibilityMatteContentUIElementAttribute: NSAccessibilityAttributeName deprecated; cvar; external;
  NSAccessibilityMarkerUIElementsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityMarkerValuesAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityMarkerGroupUIElementAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityUnitsAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityUnitDescriptionAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityMarkerTypeAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityMarkerTypeDescriptionAttribute: NSAccessibilityAttributeName; cvar; external;
  NSAccessibilityIdentifierAttribute: NSAccessibilityAttributeName { available in macos 10.7 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilityRulerMarkerTypeValue = NSString;
  NSAccessibilityRulerMarkerTypeValuePtr = ^NSAccessibilityRulerMarkerTypeValue;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityLeftTabStopMarkerTypeValue: NSAccessibilityRulerMarkerTypeValue; cvar; external;
  NSAccessibilityRightTabStopMarkerTypeValue: NSAccessibilityRulerMarkerTypeValue; cvar; external;
  NSAccessibilityCenterTabStopMarkerTypeValue: NSAccessibilityRulerMarkerTypeValue; cvar; external;
  NSAccessibilityDecimalTabStopMarkerTypeValue: NSAccessibilityRulerMarkerTypeValue; cvar; external;
  NSAccessibilityHeadIndentMarkerTypeValue: NSAccessibilityRulerMarkerTypeValue; cvar; external;
  NSAccessibilityTailIndentMarkerTypeValue: NSAccessibilityRulerMarkerTypeValue; cvar; external;
  NSAccessibilityFirstLineIndentMarkerTypeValue: NSAccessibilityRulerMarkerTypeValue; cvar; external;
  NSAccessibilityUnknownMarkerTypeValue: NSAccessibilityRulerMarkerTypeValue; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilityRulerMarkerType = NSInteger;
  NSAccessibilityRulerMarkerTypePtr = ^NSAccessibilityRulerMarkerType;

const
  NSAccessibilityRulerMarkerTypeUnknown = 0;
  NSAccessibilityRulerMarkerTypeTabStopLeft = 1;
  NSAccessibilityRulerMarkerTypeTabStopRight = 2;
  NSAccessibilityRulerMarkerTypeTabStopCenter = 3;
  NSAccessibilityRulerMarkerTypeTabStopDecimal = 4;
  NSAccessibilityRulerMarkerTypeIndentHead = 5;
  NSAccessibilityRulerMarkerTypeIndentTail = 6;
  NSAccessibilityRulerMarkerTypeIndentFirstLine = 7;

type
  NSAccessibilityRulerUnitValue = NSString;
  NSAccessibilityRulerUnitValuePtr = ^NSAccessibilityRulerUnitValue;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityInchesUnitValue: NSAccessibilityRulerUnitValue; cvar; external;
  NSAccessibilityCentimetersUnitValue: NSAccessibilityRulerUnitValue; cvar; external;
  NSAccessibilityPointsUnitValue: NSAccessibilityRulerUnitValue; cvar; external;
  NSAccessibilityPicasUnitValue: NSAccessibilityRulerUnitValue; cvar; external;
  NSAccessibilityUnknownUnitValue: NSAccessibilityRulerUnitValue; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilityUnits = NSInteger;
  NSAccessibilityUnitsPtr = ^NSAccessibilityUnits;

const
  NSAccessibilityUnitsUnknown = 0;
  NSAccessibilityUnitsInches = 1;
  NSAccessibilityUnitsCentimeters = 2;
  NSAccessibilityUnitsPoints = 3;
  NSAccessibilityUnitsPicas = 4;

type
  NSAccessibilityActionName = NSString;
  NSAccessibilityActionNamePtr = ^NSAccessibilityActionName;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityPressAction: NSAccessibilityActionName; cvar; external;
  NSAccessibilityIncrementAction: NSAccessibilityActionName; cvar; external;
  NSAccessibilityDecrementAction: NSAccessibilityActionName; cvar; external;
  NSAccessibilityConfirmAction: NSAccessibilityActionName; cvar; external;
  NSAccessibilityPickAction: NSAccessibilityActionName; cvar; external;
  NSAccessibilityCancelAction: NSAccessibilityActionName; cvar; external;
  NSAccessibilityRaiseAction: NSAccessibilityActionName; cvar; external;
  NSAccessibilityShowMenuAction: NSAccessibilityActionName; cvar; external;
  NSAccessibilityDeleteAction: NSAccessibilityActionName; cvar; external;
  NSAccessibilityShowAlternateUIAction: NSAccessibilityActionName { available in macos 10.9 }; cvar; external;
  NSAccessibilityShowDefaultUIAction: NSAccessibilityActionName { available in macos 10.9 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilityNotificationName = NSString;
  NSAccessibilityNotificationNamePtr = ^NSAccessibilityNotificationName;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityMainWindowChangedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityFocusedWindowChangedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityFocusedUIElementChangedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityApplicationActivatedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityApplicationDeactivatedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityApplicationHiddenNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityApplicationShownNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityWindowCreatedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityWindowMovedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityWindowResizedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityWindowMiniaturizedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityWindowDeminiaturizedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityDrawerCreatedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilitySheetCreatedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityUIElementDestroyedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityValueChangedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityTitleChangedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityResizedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityMovedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityCreatedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityLayoutChangedNotification: NSAccessibilityNotificationName { available in macos 10.9 }; cvar; external;
  NSAccessibilityHelpTagCreatedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilitySelectedTextChangedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityRowCountChangedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilitySelectedChildrenChangedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilitySelectedRowsChangedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilitySelectedColumnsChangedNotification: NSAccessibilityNotificationName; cvar; external;
  NSAccessibilityRowExpandedNotification: NSAccessibilityNotificationName { available in macos 10.6 }; cvar; external;
  NSAccessibilityRowCollapsedNotification: NSAccessibilityNotificationName { available in macos 10.6 }; cvar; external;
  NSAccessibilitySelectedCellsChangedNotification: NSAccessibilityNotificationName { available in macos 10.6 }; cvar; external;
  NSAccessibilityUnitsChangedNotification: NSAccessibilityNotificationName { available in macos 10.6 }; cvar; external;
  NSAccessibilitySelectedChildrenMovedNotification: NSAccessibilityNotificationName { available in macos 10.6 }; cvar; external;
  NSAccessibilityAnnouncementRequestedNotification: NSAccessibilityNotificationName { available in macos 10.7 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilityRole = NSString;
  NSAccessibilityRolePtr = ^NSAccessibilityRole;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityUnknownRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityButtonRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityRadioButtonRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityCheckBoxRole: NSAccessibilityRole; cvar; external;
  NSAccessibilitySliderRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityTabGroupRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityTextFieldRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityStaticTextRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityTextAreaRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityScrollAreaRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityPopUpButtonRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityMenuButtonRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityTableRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityApplicationRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityGroupRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityRadioGroupRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityListRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityScrollBarRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityValueIndicatorRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityImageRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityMenuBarRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityMenuBarItemRole: NSAccessibilityRole { available in macos 10.12 }; cvar; external;
  NSAccessibilityMenuRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityMenuItemRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityColumnRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityRowRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityToolbarRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityBusyIndicatorRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityProgressIndicatorRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityWindowRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityDrawerRole: NSAccessibilityRole; cvar; external;
  NSAccessibilitySystemWideRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityOutlineRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityIncrementorRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityBrowserRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityComboBoxRole: NSAccessibilityRole; cvar; external;
  NSAccessibilitySplitGroupRole: NSAccessibilityRole; cvar; external;
  NSAccessibilitySplitterRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityColorWellRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityGrowAreaRole: NSAccessibilityRole; cvar; external;
  NSAccessibilitySheetRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityHelpTagRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityMatteRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityRulerRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityRulerMarkerRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityLinkRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityDisclosureTriangleRole: NSAccessibilityRole { available in macos 10.5 }; cvar; external;
  NSAccessibilityGridRole: NSAccessibilityRole { available in macos 10.5 }; cvar; external;
  NSAccessibilityRelevanceIndicatorRole: NSAccessibilityRole; cvar; external;
  NSAccessibilityLevelIndicatorRole: NSAccessibilityRole { available in macos 10.6 }; cvar; external;
  NSAccessibilityCellRole: NSAccessibilityRole { available in macos 10.6 }; cvar; external;
  NSAccessibilityPopoverRole: NSAccessibilityRole { available in macos 10.7 }; cvar; external;
  NSAccessibilityPageRole: NSAccessibilityRole { available in macos 10.13 }; cvar; external;
  NSAccessibilityLayoutAreaRole: NSAccessibilityRole { available in macos 10.6 }; cvar; external;
  NSAccessibilityLayoutItemRole: NSAccessibilityRole { available in macos 10.6 }; cvar; external;
  NSAccessibilityHandleRole: NSAccessibilityRole { available in macos 10.6 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilitySubrole = NSString;
  NSAccessibilitySubrolePtr = ^NSAccessibilitySubrole;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityUnknownSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityCloseButtonSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityZoomButtonSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityMinimizeButtonSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityToolbarButtonSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityTableRowSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityOutlineRowSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilitySecureTextFieldSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityStandardWindowSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityDialogSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilitySystemDialogSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityFloatingWindowSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilitySystemFloatingWindowSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityIncrementArrowSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityDecrementArrowSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityIncrementPageSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityDecrementPageSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilitySearchFieldSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityTextAttachmentSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityTextLinkSubrole: NSAccessibilitySubrole; cvar; external;
  NSAccessibilityTimelineSubrole: NSAccessibilitySubrole { available in macos 10.5 }; cvar; external;
  NSAccessibilitySortButtonSubrole: NSAccessibilitySubrole { available in macos 10.6 }; cvar; external;
  NSAccessibilityRatingIndicatorSubrole: NSAccessibilitySubrole { available in macos 10.6 }; cvar; external;
  NSAccessibilityContentListSubrole: NSAccessibilitySubrole { available in macos 10.6 }; cvar; external;
  NSAccessibilityDefinitionListSubrole: NSAccessibilitySubrole { available in macos 10.6 }; cvar; external;
  NSAccessibilityFullScreenButtonSubrole: NSAccessibilitySubrole { available in macos 10.7 }; cvar; external;
  NSAccessibilityToggleSubrole: NSAccessibilitySubrole { available in macos 10.9 }; cvar; external;
  NSAccessibilitySwitchSubrole: NSAccessibilitySubrole { available in macos 10.9 }; cvar; external;
  NSAccessibilityDescriptionListSubrole: NSAccessibilitySubrole { available in macos 10.9 }; cvar; external;
  NSAccessibilityTabButtonSubrole: NSAccessibilitySubrole { available in macos 10.13 }; cvar; external;
  NSAccessibilityCollectionListSubrole: NSAccessibilitySubrole { available in macos 10.13 }; cvar; external;
  NSAccessibilitySectionListSubrole: NSAccessibilitySubrole { available in macos 10.13 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilityNotificationUserInfoKey = NSString;
  NSAccessibilityNotificationUserInfoKeyPtr = ^NSAccessibilityNotificationUserInfoKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilityUIElementsKey: NSAccessibilityNotificationUserInfoKey { available in macos 10.9 }; cvar; external;
  NSAccessibilityPriorityKey: NSAccessibilityNotificationUserInfoKey { available in macos 10.9 }; cvar; external;
  NSAccessibilityAnnouncementKey: NSAccessibilityNotificationUserInfoKey { available in macos 10.7 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function NSAccessibilityPostNotificationWithUserInfo(element: id; notification: NSAccessibilityNotificationName; userInfo: NSDictionary): pointer; cdecl; external; { available in macos 10.7 }
{$endif}

{$ifdef TYPES}
type
  NSAccessibilityPriorityLevel = NSInteger;
  NSAccessibilityPriorityLevelPtr = ^NSAccessibilityPriorityLevel;

const
  NSAccessibilityPriorityLow = 10;
  NSAccessibilityPriorityMedium = 50;
  NSAccessibilityPriorityHigh = 90;

type
  NSAccessibilityLoadingToken = id;
  NSAccessibilityLoadingTokenPtr = ^NSAccessibilityLoadingToken;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAccessibilitySortButtonRole: NSAccessibilityRole deprecated; cvar; external;
{$endif}

