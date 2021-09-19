{ Parsed from AppKit.framework NSCell.h }

{ Types from NSCell }
{$ifdef TYPES}



{$endif}


{$ifdef TYPES}
type
  NSCellPtr = ^NSCell;
{$endif}

{$ifdef TYPES}
type
  NSCellType = NSUInteger;
  NSCellTypePtr = ^NSCellType;

const
  NSNullCellType = 0;
  NSTextCellType = 1;
  NSImageCellType = 2;

type
  NSCellAttribute = NSUInteger;
  NSCellAttributePtr = ^NSCellAttribute;

const
  NSCellDisabled = 0;
  NSCellState = 1;
  NSPushInCell = 2;
  NSCellEditable = 3;
  NSChangeGrayCell = 4;
  NSCellHighlighted = 5;
  NSCellLightsByContents = 6;
  NSCellLightsByGray = 7;
  NSChangeBackgroundCell = 8;
  NSCellLightsByBackground = 9;
  NSCellIsBordered = 10;
  NSCellHasOverlappingImage = 11;
  NSCellHasImageHorizontal = 12;
  NSCellHasImageOnLeftOrBottom = 13;
  NSCellChangesContents = 14;
  NSCellIsInsetButton = 15;
  NSCellAllowsMixedState = 16;

type
  NSCellImagePosition = NSUInteger;
  NSCellImagePositionPtr = ^NSCellImagePosition;

const
  NSNoImage = 0;
  NSImageOnly = 1;
  NSImageLeft = 2;
  NSImageRight = 3;
  NSImageBelow = 4;
  NSImageAbove = 5;
  NSImageOverlaps = 6;
  NSImageLeading = 7 { available in macos 10.12 };
  NSImageTrailing = 8 { available in macos 10.12 };

type
  NSImageScaling = NSUInteger;
  NSImageScalingPtr = ^NSImageScaling;

const
  NSImageScaleProportionallyDown = 0;
  NSImageScaleAxesIndependently = 1;
  NSImageScaleNone = 2;
  NSImageScaleProportionallyUpOrDown = 3;
  NSScaleProportionally = 0 deprecated 'Use NSImageScaleProportionallyDown instead';
  NSScaleToFit = 1 deprecated 'Use NSImageScaleAxesIndependently instead';
  NSScaleNone = 2 deprecated 'Use NSImageScaleNone instead';

type
  NSControlStateValue = NSInteger;
  NSControlStateValuePtr = ^NSControlStateValue;

const
  NSControlStateValueMixed = -1;
  NSControlStateValueOff = 0;
  NSControlStateValueOn = 1;

type
  NSCellStyleMask = NSUInteger;
  NSCellStyleMaskPtr = ^NSCellStyleMask;

const
  NSNoCellMask = 0;
  NSContentsCellMask = 1;
  NSPushInCellMask = 2;
  NSChangeGrayCellMask = 4;
  NSChangeBackgroundCellMask = 8;

type
  NSControlTint = NSUInteger;
  NSControlTintPtr = ^NSControlTint;

const
  NSDefaultControlTint = 0;
  NSBlueControlTint = 1;
  NSGraphiteControlTint = 6;
  NSClearControlTint = 7;

type
  NSControlSize = NSUInteger;
  NSControlSizePtr = ^NSControlSize;

const
  NSControlSizeRegular = 0;
  NSControlSizeSmall = 1;
  NSControlSizeMini = 2;
  NSControlSizeLarge = 3 { available in macos 11.0 };
{$endif}

{$ifdef CLASSES}

type
  NSCell = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol, NSUserInterfaceItemIdentificationProtocol, NSAccessibilityElementProtocol, NSAccessibilityProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initTextCell (string_: NSString): id; message 'initTextCell:'; { NS_DESIGNATED_INITIALIZER }
    function initImageCell (image: NSImage): id; message 'initImageCell:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function prefersTrackingUntilMouseUp: objcbool; message 'prefersTrackingUntilMouseUp';
    procedure setControlView(newValue: NSView); message 'setControlView:';
    function controlView: NSView; message 'controlView';
    procedure setType(newValue: NSCellType); message 'setType:';
    function type_: NSCellType; message 'type';
    procedure setState(newValue: NSControlStateValue); message 'setState:';
    function state: NSControlStateValue; message 'state';
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
    procedure setTag(newValue: NSInteger); message 'setTag:';
    function tag: NSInteger; message 'tag';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    function isOpaque: objcbool; message 'isOpaque';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    function sendActionOn (mask: NSEventMask): NSInteger; message 'sendActionOn:';
    procedure setContinuous(newValue: objcbool); message 'setContinuous:';
    function isContinuous: objcbool; message 'isContinuous';
    procedure setEditable(newValue: objcbool); message 'setEditable:';
    function isEditable: objcbool; message 'isEditable';
    procedure setSelectable(newValue: objcbool); message 'setSelectable:';
    function isSelectable: objcbool; message 'isSelectable';
    procedure setBordered(newValue: objcbool); message 'setBordered:';
    function isBordered: objcbool; message 'isBordered';
    procedure setBezeled(newValue: objcbool); message 'setBezeled:';
    function isBezeled: objcbool; message 'isBezeled';
    procedure setScrollable(newValue: objcbool); message 'setScrollable:';
    function isScrollable: objcbool; message 'isScrollable';
    procedure setHighlighted(newValue: objcbool); message 'setHighlighted:';
    function isHighlighted: objcbool; message 'isHighlighted';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setAlignment(newValue: NSTextAlignment); message 'setAlignment:';
    function alignment: NSTextAlignment; message 'alignment';
    {$endif}
    procedure setWraps(newValue: objcbool); message 'setWraps:';
    function wraps: objcbool; message 'wraps';
    procedure setFont(newValue: NSFont); message 'setFont:';
    function font: NSFont; message 'font';
    function keyEquivalent: NSString; message 'keyEquivalent';
    procedure setFormatter(newValue: NSFormatter); message 'setFormatter:';
    function formatter: NSFormatter; message 'formatter';
    procedure setObjectValue(newValue: id); message 'setObjectValue:';
    function objectValue: id; message 'objectValue';
    function hasValidObjectValue: objcbool; message 'hasValidObjectValue';
    procedure setStringValue(newValue: NSString); message 'setStringValue:';
    function stringValue: NSString; message 'stringValue';
    function compare (otherCell: id): NSComparisonResult; message 'compare:';
    procedure setIntValue(newValue: cint); message 'setIntValue:';
    function intValue: cint; message 'intValue';
    procedure setFloatValue(newValue: single); message 'setFloatValue:';
    function floatValue: single; message 'floatValue';
    procedure setDoubleValue(newValue: double); message 'setDoubleValue:';
    function doubleValue: double; message 'doubleValue';
    procedure setIntegerValue(newValue: NSInteger); message 'setIntegerValue:'; { available in macos 10.5 }
    function integerValue: NSInteger; message 'integerValue'; { available in macos 10.5 }
    procedure takeIntValueFrom (sender: id); message 'takeIntValueFrom:';
    procedure takeFloatValueFrom (sender: id); message 'takeFloatValueFrom:';
    procedure takeDoubleValueFrom (sender: id); message 'takeDoubleValueFrom:';
    procedure takeStringValueFrom (sender: id); message 'takeStringValueFrom:';
    procedure takeObjectValueFrom (sender: id); message 'takeObjectValueFrom:';
    procedure takeIntegerValueFrom (sender: id); message 'takeIntegerValueFrom:'; { available in macos 10.5 }
    procedure setImage(newValue: NSImage); message 'setImage:';
    function image: NSImage; message 'image';
    procedure setControlSize(newValue: NSControlSize); message 'setControlSize:';
    function controlSize: NSControlSize; message 'controlSize';
    procedure setRepresentedObject(newValue: id); message 'setRepresentedObject:';
    function representedObject: id; message 'representedObject';
    function cellAttribute (parameter: NSCellAttribute): NSInteger; message 'cellAttribute:';
    procedure setCellAttribute_to (parameter: NSCellAttribute; value: NSInteger); message 'setCellAttribute:to:';
    function imageRectForBounds (rect: NSRect): NSRect; message 'imageRectForBounds:';
    function titleRectForBounds (rect: NSRect): NSRect; message 'titleRectForBounds:';
    function drawingRectForBounds (rect: NSRect): NSRect; message 'drawingRectForBounds:';
    function cellSize: NSSize; message 'cellSize';
    function cellSizeForBounds (rect: NSRect): NSSize; message 'cellSizeForBounds:';
    function highlightColorWithFrame_inView (cellFrame: NSRect; controlView_: NSView): NSColor; message 'highlightColorWithFrame:inView:';
    procedure calcDrawInfo (rect: NSRect); message 'calcDrawInfo:';
    function setUpFieldEditorAttributes (textObj: NSText): NSText; message 'setUpFieldEditorAttributes:';
    procedure drawInteriorWithFrame_inView (cellFrame: NSRect; controlView_: NSView); message 'drawInteriorWithFrame:inView:';
    procedure drawWithFrame_inView (cellFrame: NSRect; controlView_: NSView); message 'drawWithFrame:inView:';
    procedure highlight_withFrame_inView (flag: objcbool; cellFrame: NSRect; controlView_: NSView); message 'highlight:withFrame:inView:';
    function mouseDownFlags: NSInteger; message 'mouseDownFlags';
    procedure getPeriodicDelay_interval (delay: psingle; interval: psingle); message 'getPeriodicDelay:interval:';
    function startTrackingAt_inView (startPoint: NSPoint; controlView_: NSView): objcbool; message 'startTrackingAt:inView:';
    function continueTracking_at_inView (lastPoint: NSPoint; currentPoint: NSPoint; controlView_: NSView): objcbool; message 'continueTracking:at:inView:';
    procedure stopTracking_at_inView_mouseIsUp (lastPoint: NSPoint; stopPoint: NSPoint; controlView_: NSView; flag: objcbool); message 'stopTracking:at:inView:mouseIsUp:';
    function trackMouse_inRect_ofView_untilMouseUp (event: NSEvent; cellFrame: NSRect; controlView_: NSView; flag: objcbool): objcbool; message 'trackMouse:inRect:ofView:untilMouseUp:';
    procedure editWithFrame_inView_editor_delegate_event (rect: NSRect; controlView_: NSView; textObj: NSText; delegate: id; event: NSEvent); message 'editWithFrame:inView:editor:delegate:event:';
    procedure selectWithFrame_inView_editor_delegate_start_length (rect: NSRect; controlView_: NSView; textObj: NSText; delegate: id; selStart: NSInteger; selLength: NSInteger); message 'selectWithFrame:inView:editor:delegate:start:length:';
    procedure endEditing (textObj: NSText); message 'endEditing:';
    procedure resetCursorRect_inView (cellFrame: NSRect; controlView_: NSView); message 'resetCursorRect:inView:';
    procedure setMenu(newValue: NSMenu); message 'setMenu:';
    function menu: NSMenu; message 'menu';
    function menuForEvent_inRect_ofView (event: NSEvent; cellFrame: NSRect; view: NSView): NSMenu; message 'menuForEvent:inRect:ofView:';
    class function defaultMenu: NSMenu; message 'defaultMenu';
    procedure setSendsActionOnEndEditing(newValue: objcbool); message 'setSendsActionOnEndEditing:';
    function sendsActionOnEndEditing: objcbool; message 'sendsActionOnEndEditing';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setBaseWritingDirection(newValue: NSWritingDirection); message 'setBaseWritingDirection:';
    function baseWritingDirection: NSWritingDirection; message 'baseWritingDirection';
    {$endif}
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setLineBreakMode(newValue: NSLineBreakMode); message 'setLineBreakMode:';
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode';
    {$endif}
    procedure setAllowsUndo(newValue: objcbool); message 'setAllowsUndo:';
    function allowsUndo: objcbool; message 'allowsUndo';
    procedure setTruncatesLastVisibleLine(newValue: objcbool); message 'setTruncatesLastVisibleLine:'; { available in macos 10.5 }
    function truncatesLastVisibleLine: objcbool; message 'truncatesLastVisibleLine'; { available in macos 10.5 }
    procedure setUserInterfaceLayoutDirection(newValue: NSUserInterfaceLayoutDirection); message 'setUserInterfaceLayoutDirection:'; { available in macos 10.6 }
    function userInterfaceLayoutDirection: NSUserInterfaceLayoutDirection; message 'userInterfaceLayoutDirection'; { available in macos 10.6 }
    function fieldEditorForView (controlView_: NSView): NSTextView; message 'fieldEditorForView:'; { available in macos 10.6 }
    procedure setUsesSingleLineMode(newValue: objcbool); message 'setUsesSingleLineMode:'; { available in macos 10.6 }
    function usesSingleLineMode: objcbool; message 'usesSingleLineMode'; { available in macos 10.6 }
    function draggingImageComponentsWithFrame_inView (frame: NSRect; view: NSView): NSArray; message 'draggingImageComponentsWithFrame:inView:'; { available in macos 10.7 }

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
    function accessibilityFrame: NSRect; message 'accessibilityFrame';
    function accessibilityFrameForRange (range: NSRange): NSRect; message 'accessibilityFrameForRange:'; { available in macos 10.10 }
    function accessibilityFullScreenButton: id; message 'accessibilityFullScreenButton'; { available in macos 10.10 }
    function accessibilityGrowArea: id; message 'accessibilityGrowArea'; { available in macos 10.10 }
    function accessibilityHandles: NSArray; message 'accessibilityHandles'; { available in macos 10.10 }
    function accessibilityHeader: id; message 'accessibilityHeader'; { available in macos 10.10 }
    function accessibilityHelp: NSString; message 'accessibilityHelp'; { available in macos 10.10 }
    function accessibilityHorizontalScrollBar: id; message 'accessibilityHorizontalScrollBar'; { available in macos 10.10 }
    function accessibilityHorizontalUnitDescription: NSString; message 'accessibilityHorizontalUnitDescription'; { available in macos 10.10 }
    function accessibilityHorizontalUnits: NSAccessibilityUnits; message 'accessibilityHorizontalUnits'; { available in macos 10.10 }
    function accessibilityIdentifier: NSString; message 'accessibilityIdentifier';
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
    function accessibilityParent: id; message 'accessibilityParent';
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
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function identifier: NSUserInterfaceItemIdentifier; message 'identifier';
    function isAccessibilityAlternateUIVisible: objcbool; message 'isAccessibilityAlternateUIVisible'; { available in macos 10.10 }
    function isAccessibilityDisclosed: objcbool; message 'isAccessibilityDisclosed'; { available in macos 10.10 }
    function isAccessibilityEdited: objcbool; message 'isAccessibilityEdited'; { available in macos 10.10 }
    function isAccessibilityElement: objcbool; message 'isAccessibilityElement'; { available in macos 10.10 }
    function isAccessibilityEnabled: objcbool; message 'isAccessibilityEnabled'; { available in macos 10.10 }
    function isAccessibilityExpanded: objcbool; message 'isAccessibilityExpanded'; { available in macos 10.10 }
    function isAccessibilityFocused: objcbool; message 'isAccessibilityFocused';
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
    procedure setIdentifier (newValue: NSUserInterfaceItemIdentifier); message 'setIdentifier:';
  end;


type
  NSCell_NSKeyboardUI = objccategory external name 'NSKeyboardUI' (NSCell)
    procedure setRefusesFirstResponder(newValue: objcbool); message 'setRefusesFirstResponder:';
    function refusesFirstResponder: objcbool; message 'refusesFirstResponder';
    function acceptsFirstResponder: objcbool; message 'acceptsFirstResponder';
    procedure setShowsFirstResponder(newValue: objcbool); message 'setShowsFirstResponder:';
    function showsFirstResponder: objcbool; message 'showsFirstResponder';
    procedure performClick (sender: id); message 'performClick:';
    procedure setFocusRingType(newValue: NSFocusRingType); message 'setFocusRingType:';
    function focusRingType: NSFocusRingType; message 'focusRingType';
    class function defaultFocusRingType: NSFocusRingType; message 'defaultFocusRingType';
    procedure drawFocusRingMaskWithFrame_inView (cellFrame: NSRect; controlView_: NSView); message 'drawFocusRingMaskWithFrame:inView:'; { available in macos 10.7 }
    function focusRingMaskBoundsForFrame_inView (cellFrame: NSRect; controlView_: NSView): NSRect; message 'focusRingMaskBoundsForFrame:inView:'; { available in macos 10.7 }
    function wantsNotificationForMarkedText: objcbool; message 'wantsNotificationForMarkedText';
  end;

type
  NSCellAttributedStringMethods = objccategory external (NSCell)
    procedure setAttributedStringValue(newValue: NSAttributedString); message 'setAttributedStringValue:';
    function attributedStringValue: NSAttributedString; message 'attributedStringValue';
    procedure setAllowsEditingTextAttributes(newValue: objcbool); message 'setAllowsEditingTextAttributes:';
    function allowsEditingTextAttributes: objcbool; message 'allowsEditingTextAttributes';
    procedure setImportsGraphics(newValue: objcbool); message 'setImportsGraphics:';
    function importsGraphics: objcbool; message 'importsGraphics';
  end;

type
  NSCellMixedState = objccategory external (NSCell)
    procedure setAllowsMixedState(newValue: objcbool); message 'setAllowsMixedState:';
    function allowsMixedState: objcbool; message 'allowsMixedState';
    function nextState: NSInteger; message 'nextState';
    procedure setNextState; message 'setNextState';
  end;
{$endif}

{$ifdef TYPES}
type
  NSCellHitResult = NSUInteger;
  NSCellHitResultPtr = ^NSCellHitResult;

const
  NSCellHitNone = 0;
  NSCellHitContentArea = 1 shl 0;
  NSCellHitEditableTextArea = 1 shl 1;
  NSCellHitTrackableArea = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  NSCellHitTest = objccategory external (NSCell)
    function hitTestForEvent_inRect_ofView (event: NSEvent; cellFrame: NSRect; controlView_: NSView): NSCellHitResult; message 'hitTestForEvent:inRect:ofView:'; { available in macos 10.5 }
  end;

type
  NSCellExpansion = objccategory external (NSCell)
    function expansionFrameWithFrame_inView (cellFrame: NSRect; view: NSView): NSRect; message 'expansionFrameWithFrame:inView:'; { available in macos 10.5 }
    procedure drawWithExpansionFrame_inView (cellFrame: NSRect; view: NSView); message 'drawWithExpansionFrame:inView:'; { available in macos 10.5 }
  end;
{$endif}

{$ifdef TYPES}
type
  NSBackgroundStyle = NSInteger;
  NSBackgroundStylePtr = ^NSBackgroundStyle;

const
  NSBackgroundStyleNormal = 0;
  NSBackgroundStyleEmphasized = 1;
  NSBackgroundStyleRaised = 2;
  NSBackgroundStyleLowered = 3;
{$endif}

{$ifdef CLASSES}

type
  NSCellBackgroundStyle = objccategory external (NSCell)
    procedure setBackgroundStyle(newValue: NSBackgroundStyle); message 'setBackgroundStyle:'; { available in macos 10.5 }
    function backgroundStyle: NSBackgroundStyle; message 'backgroundStyle'; { available in macos 10.5 }
    function interiorBackgroundStyle: NSBackgroundStyle; message 'interiorBackgroundStyle'; { available in macos 10.5 }
  end;
{$endif}

{$ifdef FUNCTIONS}
function NSDrawThreePartImage(frame: NSRect; startCap: NSImage; centerFill: NSImage; endCap: NSImage; vertical: objcbool; op: NSCompositingOperation; alphaFraction: CGFloat; flipped: objcbool): pointer; cdecl; external; { available in macos 10.5 }
function NSDrawNinePartImage(frame: NSRect; topLeftCorner: NSImage; topEdgeFill: NSImage; topRightCorner: NSImage; leftEdgeFill: NSImage; centerFill: NSImage; rightEdgeFill: NSImage; bottomLeftCorner: NSImage; bottomEdgeFill: NSImage; bottomRightCorner: NSImage; op: NSCompositingOperation; alphaFraction: CGFloat; flipped: objcbool): pointer; cdecl; external; { available in macos 10.5 }
{$endif}

{$ifdef CLASSES}

type
  NSCell_NSDeprecated = objccategory external name 'NSDeprecated' (NSCell)
    procedure setControlTint(newValue: NSControlTint); message 'setControlTint:'; deprecated 'The controlTint property is not respected on 10.14 and later. For custom cells, use +[NSColor controlAccentColor] to respect the user''s preferred accent color when drawing.';
    function controlTint: NSControlTint; message 'controlTint'; deprecated 'The controlTint property is not respected on 10.14 and later. For custom cells, use +[NSColor controlAccentColor] to respect the user''s preferred accent color when drawing.';
    function entryType: NSInteger; message 'entryType'; deprecated;
    procedure setEntryType (type_: NSInteger); message 'setEntryType:'; deprecated;
    function isEntryAcceptable (string_: NSString): objcbool; message 'isEntryAcceptable:'; deprecated;
    procedure setFloatingPointFormat_left_right (autoRange: objcbool; leftDigits: NSUInteger; rightDigits: NSUInteger); message 'setFloatingPointFormat:left:right:'; deprecated;
    procedure setMnemonicLocation (location: NSUInteger); message 'setMnemonicLocation:'; deprecated;
    function mnemonicLocation: NSUInteger; message 'mnemonicLocation'; deprecated;
    function mnemonic: NSString; message 'mnemonic'; deprecated;
    procedure setTitleWithMnemonic (stringWithAmpersand: NSString); message 'setTitleWithMnemonic:'; deprecated;
  end;
{$endif}

{$ifdef TYPES}
const
  NSBackgroundStyleLight = NSBackgroundStyleNormal deprecated 'replace with NSBackgroundStyleNormal';
  NSBackgroundStyleDark = NSBackgroundStyleEmphasized deprecated 'replace with NSBackgroundStyleEmphasized';

type
  NSCellStateValue = NSControlStateValue deprecated 'replace with NSControlStateValue';
  NSCellStateValuePtr = ^NSCellStateValue deprecated 'replace with NSControlStateValue';

const
  NSMixedState = NSControlStateValueMixed deprecated 'replace with NSControlStateValueMixed';
  NSOffState = NSControlStateValueOff deprecated 'replace with NSControlStateValueOff';
  NSOnState = NSControlStateValueOn deprecated 'replace with NSControlStateValueOn';
  NSRegularControlSize = NSControlSizeRegular deprecated 'replace with NSControlSizeRegular';
  NSSmallControlSize = NSControlSizeSmall deprecated 'replace with NSControlSizeSmall';
  NSMiniControlSize = NSControlSizeMini deprecated 'replace with NSControlSizeMini';
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSControlTintDidChangeNotification: NSNotificationName deprecated 'Changes to the accent color can be manually observed by implementing -viewDidChangeEffectiveAppearance in a NSView subclass, or by Key-Value Observing the -effectiveAppearance property on NSApplication. Views are automatically redisplayed when the accent color changes.'; cvar; external;
{$endif}

{$ifdef TYPES}
const
  NSAnyType = 0 deprecated 'Use formatters instead';
  NSIntType = 1 deprecated 'Use formatters instead';
  NSPositiveIntType = 2 deprecated 'Use formatters instead';
  NSFloatType = 3 deprecated 'Use formatters instead';
  NSPositiveFloatType = 4 deprecated 'Use formatters instead';
  NSDoubleType = 6 deprecated 'Use formatters instead';
  NSPositiveDoubleType = 7 deprecated 'Use formatters instead';
{$endif}

