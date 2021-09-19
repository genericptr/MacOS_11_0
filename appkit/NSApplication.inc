{ Parsed from AppKit.framework NSApplication.h }

{ Types from NSApplication }
{$ifdef TYPES}

type
  NSRequestUserAttentionType = NSUInteger;
type
  NSRequestUserAttentionTypePtr = ^NSRequestUserAttentionType;

const
  NSCriticalRequest = 0;
  NSInformationalRequest = 10;

type
  NSApplicationDelegateReply = NSUInteger;
type
  NSApplicationDelegateReplyPtr = ^NSApplicationDelegateReply;

const
  NSApplicationDelegateReplySuccess = 0;
  NSApplicationDelegateReplyCancel = 1;
  NSApplicationDelegateReplyFailure = 2;
{$endif}


{ Types from NSApplication_NSDeprecated }
{$ifdef TYPES}

const
  NSRunStoppedResponse = -1000 deprecated 'Use NSModalResponseStop instead';
  NSRunAbortedResponse = -1001 deprecated 'Use NSModalResponseAbort instead';
  NSRunContinuesResponse = -1002 deprecated 'Use NSModalResponseContinue instead';
{$endif}


{$ifdef CALLBACKS}
type
  NSApplicationEnumerateWindowsWithOptionsCallback = reference to procedure (window: NSWindow; stop: objcboolPtr); cblock; cdecl;
  NSApplicationApplicationCallback = reference to procedure (restorableObjects: NSArray); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSApplicationPtr = ^NSApplication;
  NSApplicationDelegateProtocolPtr = ^NSApplicationDelegateProtocol;
  NSServicesMenuRequestorProtocolPtr = ^NSServicesMenuRequestorProtocol;
{$endif}

{$ifdef TYPES}
type
  NSAppKitVersion = double;
  NSAppKitVersionPtr = ^NSAppKitVersion;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAppKitVersionNumber: NSAppKitVersion; cvar; external;
{$endif}

{$ifdef TYPES}
const
  NSAppKitVersionNumber10_0 = 577;
  NSAppKitVersionNumber10_1 = 620;
  NSAppKitVersionNumber10_2 = 663;
  NSAppKitVersionNumber10_2_3 = 663.6;
  NSAppKitVersionNumber10_3 = 743;
  NSAppKitVersionNumber10_3_2 = 743.14;
  NSAppKitVersionNumber10_3_3 = 743.2;
  NSAppKitVersionNumber10_3_5 = 743.24;
  NSAppKitVersionNumber10_3_7 = 743.33;
  NSAppKitVersionNumber10_3_9 = 743.36;
  NSAppKitVersionNumber10_4 = 824;
  NSAppKitVersionNumber10_4_1 = 824.1;
  NSAppKitVersionNumber10_4_3 = 824.23;
  NSAppKitVersionNumber10_4_4 = 824.33;
  NSAppKitVersionNumber10_4_7 = 824.41;
  NSAppKitVersionNumber10_5 = 949;
  NSAppKitVersionNumber10_5_2 = 949.27;
  NSAppKitVersionNumber10_5_3 = 949.33;
  NSAppKitVersionNumber10_6 = 1038;
  NSAppKitVersionNumber10_7 = 1138;
  NSAppKitVersionNumber10_7_2 = 1138.23;
  NSAppKitVersionNumber10_7_3 = 1138.32;
  NSAppKitVersionNumber10_7_4 = 1138.47;
  NSAppKitVersionNumber10_8 = 1187;
  NSAppKitVersionNumber10_9 = 1265;
  NSAppKitVersionNumber10_10 = 1343;
  NSAppKitVersionNumber10_10_2 = 1344;
  NSAppKitVersionNumber10_10_3 = 1347;
  NSAppKitVersionNumber10_10_4 = 1348;
  NSAppKitVersionNumber10_10_5 = 1348;
  NSAppKitVersionNumber10_10_Max = 1349;
  NSAppKitVersionNumber10_11 = 1404;
  NSAppKitVersionNumber10_11_1 = 1404.13;
  NSAppKitVersionNumber10_11_2 = 1404.34;
  NSAppKitVersionNumber10_11_3 = 1404.34;
  NSAppKitVersionNumber10_12 = 1504;
  NSAppKitVersionNumber10_12_1 = 1504.60;
  NSAppKitVersionNumber10_12_2 = 1504.76;
  NSAppKitVersionNumber10_13 = 1561;
  NSAppKitVersionNumber10_13_1 = 1561.1;
  NSAppKitVersionNumber10_13_2 = 1561.2;
  NSAppKitVersionNumber10_13_4 = 1561.4;
  NSAppKitVersionNumber10_14 = 1671;
  NSAppKitVersionNumber10_14_1 = 1671.1;
  NSAppKitVersionNumber10_14_2 = 1671.2;
  NSAppKitVersionNumber10_14_3 = 1671.3;
  NSAppKitVersionNumber10_14_4 = 1671.4;
  NSAppKitVersionNumber10_14_5 = 1671.5;
  NSAppKitVersionNumber10_15 = 1894;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSModalPanelRunLoopMode: NSRunLoopMode; cvar; external;
  NSEventTrackingRunLoopMode: NSRunLoopMode; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSModalResponse = NSInteger;
  NSModalResponsePtr = ^NSModalResponse;

const
  NSModalResponseStop = (-1000) { available in macos 10.9 };
  NSModalResponseAbort = (-1001) { available in macos 10.9 };
  NSModalResponseContinue = (-1002) { available in macos 10.9 };

const
  NSUpdateWindowsRunLoopOrdering = 500000;

type
  NSApplicationPresentationOptions = NSUInteger;
  NSApplicationPresentationOptionsPtr = ^NSApplicationPresentationOptions;

const
  NSApplicationPresentationDefault = 0;
  NSApplicationPresentationAutoHideDock = 1 shl 0;
  NSApplicationPresentationHideDock = 1 shl 1;
  NSApplicationPresentationAutoHideMenuBar = 1 shl 2;
  NSApplicationPresentationHideMenuBar = 1 shl 3;
  NSApplicationPresentationDisableAppleMenu = 1 shl 4;
  NSApplicationPresentationDisableProcessSwitching = 1 shl 5;
  NSApplicationPresentationDisableForceQuit = 1 shl 6;
  NSApplicationPresentationDisableSessionTermination = 1 shl 7;
  NSApplicationPresentationDisableHideApplication = 1 shl 8;
  NSApplicationPresentationDisableMenuBarTransparency = 1 shl 9;
  NSApplicationPresentationFullScreen = 1 shl 10 { available in macos 10.7 };
  NSApplicationPresentationAutoHideToolbar = 1 shl 11 { available in macos 10.7 };
  NSApplicationPresentationDisableCursorLocationAssistance = 1 shl 12 { available in macos 10.11.2 };

type
  NSApplicationOcclusionState = NSUInteger;
  NSApplicationOcclusionStatePtr = ^NSApplicationOcclusionState;

const
  NSApplicationOcclusionStateVisible = 1 shl 1;

type
  NSWindowListOptions = NSInteger;
  NSWindowListOptionsPtr = ^NSWindowListOptions;

const
  NSWindowListOrderedFrontToBack = 1 shl 0;

type
  NSModalSession = OpaqueType;
  NSModalSessionPtr = ^NSModalSession;
{$endif}

{$ifdef CLASSES}

type
  NSApplication = objcclass external (NSResponder, NSUserInterfaceValidationsProtocol, NSMenuItemValidationProtocol, NSAccessibilityElementProtocol, NSAccessibilityProtocol)
  public
    class function sharedApplication: NSApplication; message 'sharedApplication';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure hide (sender: id); message 'hide:';
    procedure unhide (sender: id); message 'unhide:';
    procedure unhideWithoutActivation; message 'unhideWithoutActivation';
    function windowWithWindowNumber (windowNum: NSInteger): NSWindow; message 'windowWithWindowNumber:';
    function mainWindow: NSWindow; message 'mainWindow';
    function keyWindow: NSWindow; message 'keyWindow';
    function isActive: objcbool; message 'isActive';
    function isHidden: objcbool; message 'isHidden';
    function isRunning: objcbool; message 'isRunning';
    procedure deactivate; message 'deactivate';
    procedure activateIgnoringOtherApps (flag: objcbool); message 'activateIgnoringOtherApps:';
    procedure hideOtherApplications (sender: id); message 'hideOtherApplications:';
    procedure unhideAllApplications (sender: id); message 'unhideAllApplications:';
    procedure finishLaunching; message 'finishLaunching';
    procedure run; message 'run';
    function runModalForWindow (window: NSWindow): NSModalResponse; message 'runModalForWindow:';
    procedure stop (sender: id); message 'stop:';
    procedure stopModal; message 'stopModal';
    procedure stopModalWithCode (returnCode: NSModalResponse); message 'stopModalWithCode:';
    procedure abortModal; message 'abortModal';
    function modalWindow: NSWindow; message 'modalWindow';
    function beginModalSessionForWindow (window: NSWindow): NSModalSession; message 'beginModalSessionForWindow:';
    function runModalSession (session: NSModalSession): NSModalResponse; message 'runModalSession:';
    procedure endModalSession (session: NSModalSession); message 'endModalSession:';
    procedure terminate (sender: id); message 'terminate:';
    function requestUserAttention (requestType: NSRequestUserAttentionType): NSInteger; message 'requestUserAttention:';
    procedure cancelUserAttentionRequest (request: NSInteger); message 'cancelUserAttentionRequest:';
    procedure enumerateWindowsWithOptions_usingBlock (options: NSWindowListOptions; block: NSApplicationEnumerateWindowsWithOptionsCallback); message 'enumerateWindowsWithOptions:usingBlock:'; { available in macos 10.12 }
    procedure preventWindowOrdering; message 'preventWindowOrdering';
    function windows: NSArray; message 'windows';
    procedure setWindowsNeedUpdate (needUpdate: objcbool); message 'setWindowsNeedUpdate:';
    procedure updateWindows; message 'updateWindows';
    procedure setMainMenu(newValue: NSMenu); message 'setMainMenu:';
    function mainMenu: NSMenu; message 'mainMenu';
    procedure setHelpMenu(newValue: NSMenu); message 'setHelpMenu:'; { available in macos 10.6 }
    function helpMenu: NSMenu; message 'helpMenu'; { available in macos 10.6 }
    procedure setApplicationIconImage(newValue: NSImage); message 'setApplicationIconImage:';
    function applicationIconImage: NSImage; message 'applicationIconImage';
    function activationPolicy: NSApplicationActivationPolicy; message 'activationPolicy'; { available in macos 10.6 }
    function setActivationPolicy (activationPolicy_: NSApplicationActivationPolicy): objcbool; message 'setActivationPolicy:'; { available in macos 10.6 }
    function dockTile: NSDockTile; message 'dockTile'; { available in macos 10.5 }
    procedure reportException (exception: NSException); message 'reportException:';
    class procedure detachDrawingThread_toTarget_withObject (selector: SEL; target: id; argument: id); message 'detachDrawingThread:toTarget:withObject:';
    procedure replyToApplicationShouldTerminate (shouldTerminate: objcbool); message 'replyToApplicationShouldTerminate:';
    procedure replyToOpenOrPrint (reply: NSApplicationDelegateReply); message 'replyToOpenOrPrint:';
    procedure orderFrontCharacterPalette (sender: id); message 'orderFrontCharacterPalette:';
    procedure setPresentationOptions(newValue: NSApplicationPresentationOptions); message 'setPresentationOptions:'; { available in macos 10.6 }
    function presentationOptions: NSApplicationPresentationOptions; message 'presentationOptions'; { available in macos 10.6 }
    function currentSystemPresentationOptions: NSApplicationPresentationOptions; message 'currentSystemPresentationOptions'; { available in macos 10.6 }
    function occlusionState: NSApplicationOcclusionState; message 'occlusionState'; { available in macos 10.9 }

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
    function validateMenuItem (menuItem: NSMenuItem): objcbool; message 'validateMenuItem:';
    function validateUserInterfaceItem (item: NSValidatedUserInterfaceItemProtocol): objcbool; message 'validateUserInterfaceItem:';
  end;


type
  NSAppearanceCustomization = objccategory external (NSApplication)
    procedure setAppearance(newValue: NSAppearance); message 'setAppearance:'; { available in macos 10.14 }
    function appearance: NSAppearance; message 'appearance'; { available in macos 10.14 }
    function effectiveAppearance: NSAppearance; message 'effectiveAppearance'; { available in macos 10.14 }
  end;

type
  NSApplication_NSEvent = objccategory external name 'NSEvent' (NSApplication)
    procedure sendEvent (event: NSEvent); message 'sendEvent:';
    procedure postEvent_atStart (event: NSEvent; flag: objcbool); message 'postEvent:atStart:';
    function currentEvent: NSEvent; message 'currentEvent';
    function nextEventMatchingMask_untilDate_inMode_dequeue (mask: NSEventMask; expiration: NSDate; mode: NSRunLoopMode; deqFlag: objcbool): NSEvent; message 'nextEventMatchingMask:untilDate:inMode:dequeue:';
    procedure discardEventsMatchingMask_beforeEvent (mask: NSEventMask; lastEvent: NSEvent); message 'discardEventsMatchingMask:beforeEvent:';
  end;

type
  NSApplication_NSResponder = objccategory external name 'NSResponder' (NSApplication)
    function sendAction_to_from (action: SEL; target: id; sender: id): objcbool; message 'sendAction:to:from:';
    function targetForAction (action: SEL): id; message 'targetForAction:';
    function targetForAction_to_from (action: SEL; target: id; sender: id): id; message 'targetForAction:to:from:';
    function tryToPerform_with (action: SEL; object_: id): objcbool; message 'tryToPerform:with:';
    function validRequestorForSendType_returnType (sendType: NSPasteboardType; returnType: NSPasteboardType): id; message 'validRequestorForSendType:returnType:';
  end;

type
  NSWindowsMenu = objccategory external (NSApplication)
    procedure setWindowsMenu(newValue: NSMenu); message 'setWindowsMenu:';
    function windowsMenu: NSMenu; message 'windowsMenu';
    procedure arrangeInFront (sender: id); message 'arrangeInFront:';
    procedure removeWindowsItem (win: NSWindow); message 'removeWindowsItem:';
    procedure addWindowsItem_title_filename (win: NSWindow; string_: NSString; isFilename: objcbool); message 'addWindowsItem:title:filename:';
    procedure changeWindowsItem_title_filename (win: NSWindow; string_: NSString; isFilename: objcbool); message 'changeWindowsItem:title:filename:';
    procedure updateWindowsItem (win: NSWindow); message 'updateWindowsItem:';
    procedure miniaturizeAll (sender: id); message 'miniaturizeAll:';
  end;

type
  NSFullKeyboardAccess = objccategory external (NSApplication)
    function isFullKeyboardAccessEnabled: objcbool; message 'isFullKeyboardAccessEnabled'; { available in macos 10.6 }
  end;
{$endif}

{$ifdef TYPES}
type
  NSApplicationTerminateReply = NSUInteger;
  NSApplicationTerminateReplyPtr = ^NSApplicationTerminateReply;

const
  NSTerminateCancel = 0;
  NSTerminateNow = 1;
  NSTerminateLater = 2;

type
  NSApplicationPrintReply = NSUInteger;
  NSApplicationPrintReplyPtr = ^NSApplicationPrintReply;

const
  NSPrintingCancelled = 0;
  NSPrintingSuccess = 1;
  NSPrintingFailure = 3;
  NSPrintingReplyLater = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  NSApplicationDelegateProtocol = objcprotocol external name 'NSApplicationDelegate' (NSObjectProtocol)
  optional
    function applicationShouldTerminate (sender: NSApplication): NSApplicationTerminateReply; message 'applicationShouldTerminate:';
    procedure application_openURLs (application: NSApplication; urls: NSArray); message 'application:openURLs:'; { available in macos 10.13 }
    function application_openFile (sender: NSApplication; filename: NSString): objcbool; message 'application:openFile:';
    procedure application_openFiles (sender: NSApplication; filenames: NSArray); message 'application:openFiles:';
    function application_openTempFile (sender: NSApplication; filename: NSString): objcbool; message 'application:openTempFile:';
    function applicationShouldOpenUntitledFile (sender: NSApplication): objcbool; message 'applicationShouldOpenUntitledFile:';
    function applicationOpenUntitledFile (sender: NSApplication): objcbool; message 'applicationOpenUntitledFile:';
    function application_openFileWithoutUI (sender: id; filename: NSString): objcbool; message 'application:openFileWithoutUI:';
    function application_printFile (sender: NSApplication; filename: NSString): objcbool; message 'application:printFile:';
    function application_printFiles_withSettings_showPrintPanels (application: NSApplication; fileNames: NSArray; printSettings: NSDictionary; showPrintPanels: objcbool): NSApplicationPrintReply; message 'application:printFiles:withSettings:showPrintPanels:';
    function applicationShouldTerminateAfterLastWindowClosed (sender: NSApplication): objcbool; message 'applicationShouldTerminateAfterLastWindowClosed:';
    function applicationShouldHandleReopen_hasVisibleWindows (sender: NSApplication; flag: objcbool): objcbool; message 'applicationShouldHandleReopen:hasVisibleWindows:';
    function applicationDockMenu (sender: NSApplication): NSMenu; message 'applicationDockMenu:';
    function application_willPresentError (application: NSApplication; error: NSError): NSError; message 'application:willPresentError:';
    procedure application_didRegisterForRemoteNotificationsWithDeviceToken (application: NSApplication; deviceToken: NSData); message 'application:didRegisterForRemoteNotificationsWithDeviceToken:'; { available in macos 10.7 }
    procedure application_didFailToRegisterForRemoteNotificationsWithError (application: NSApplication; error: NSError); message 'application:didFailToRegisterForRemoteNotificationsWithError:'; { available in macos 10.7 }
    procedure application_didReceiveRemoteNotification (application: NSApplication; userInfo: NSDictionary); message 'application:didReceiveRemoteNotification:'; { available in macos 10.7 }
    procedure application_willEncodeRestorableState (app: NSApplication; coder: NSCoder); message 'application:willEncodeRestorableState:'; { available in macos 10.7 }
    procedure application_didDecodeRestorableState (app: NSApplication; coder: NSCoder); message 'application:didDecodeRestorableState:'; { available in macos 10.7 }
    function application_willContinueUserActivityWithType (application: NSApplication; userActivityType: NSString): objcbool; message 'application:willContinueUserActivityWithType:'; { available in macos 10.10 }
    function application_continueUserActivity_restorationHandler (application: NSApplication; userActivity: NSUserActivity; restorationHandler: NSApplicationApplicationCallback): objcbool; message 'application:continueUserActivity:restorationHandler:'; { available in macos 10.10 }
    procedure application_didFailToContinueUserActivityWithType_error (application: NSApplication; userActivityType: NSString; error: NSError); message 'application:didFailToContinueUserActivityWithType:error:'; { available in macos 10.10 }
    procedure application_didUpdateUserActivity (application: NSApplication; userActivity: NSUserActivity); message 'application:didUpdateUserActivity:'; { available in macos 10.10 }
    procedure application_userDidAcceptCloudKitShareWithMetadata (application: NSApplication; metadata: CKShareMetadata); message 'application:userDidAcceptCloudKitShareWithMetadata:'; { available in macos 10.12 }
    function application_delegateHandlesKey (sender: NSApplication; key: NSString): objcbool; message 'application:delegateHandlesKey:';
    procedure applicationWillFinishLaunching (notification: NSNotification); message 'applicationWillFinishLaunching:';
    procedure applicationDidFinishLaunching (notification: NSNotification); message 'applicationDidFinishLaunching:';
    procedure applicationWillHide (notification: NSNotification); message 'applicationWillHide:';
    procedure applicationDidHide (notification: NSNotification); message 'applicationDidHide:';
    procedure applicationWillUnhide (notification: NSNotification); message 'applicationWillUnhide:';
    procedure applicationDidUnhide (notification: NSNotification); message 'applicationDidUnhide:';
    procedure applicationWillBecomeActive (notification: NSNotification); message 'applicationWillBecomeActive:';
    procedure applicationDidBecomeActive (notification: NSNotification); message 'applicationDidBecomeActive:';
    procedure applicationWillResignActive (notification: NSNotification); message 'applicationWillResignActive:';
    procedure applicationDidResignActive (notification: NSNotification); message 'applicationDidResignActive:';
    procedure applicationWillUpdate (notification: NSNotification); message 'applicationWillUpdate:';
    procedure applicationDidUpdate (notification: NSNotification); message 'applicationDidUpdate:';
    procedure applicationWillTerminate (notification: NSNotification); message 'applicationWillTerminate:';
    procedure applicationDidChangeScreenParameters (notification: NSNotification); message 'applicationDidChangeScreenParameters:';
    procedure applicationDidChangeOcclusionState (notification: NSNotification); message 'applicationDidChangeOcclusionState:'; { available in macos 10.9 }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSServicesMenu = objccategory external (NSApplication)
    procedure setServicesMenu(newValue: NSMenu); message 'setServicesMenu:';
    function servicesMenu: NSMenu; message 'servicesMenu';
    procedure registerServicesMenuSendTypes_returnTypes (sendTypes: NSArray; returnTypes: NSArray); message 'registerServicesMenuSendTypes:returnTypes:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSServicesMenuRequestorProtocol = objcprotocol external name 'NSServicesMenuRequestor' (NSObjectProtocol)
  optional
    function writeSelectionToPasteboard_types (pboard: NSPasteboard; types: NSArray): objcbool; message 'writeSelectionToPasteboard:types:';
    function readSelectionFromPasteboard (pboard: NSPasteboard): objcbool; message 'readSelectionFromPasteboard:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSServicesHandling = objccategory external (NSApplication)
    procedure setServicesProvider(newValue: id); message 'setServicesProvider:';
    function servicesProvider: id; message 'servicesProvider';
  end;
{$endif}

{$ifdef TYPES}
type
  NSAboutPanelOptionKey = NSString;
  NSAboutPanelOptionKeyPtr = ^NSAboutPanelOptionKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAboutPanelOptionCredits: NSAboutPanelOptionKey { available in macos 10.13 }; cvar; external;
  NSAboutPanelOptionApplicationName: NSAboutPanelOptionKey { available in macos 10.13 }; cvar; external;
  NSAboutPanelOptionApplicationIcon: NSAboutPanelOptionKey { available in macos 10.13 }; cvar; external;
  NSAboutPanelOptionVersion: NSAboutPanelOptionKey { available in macos 10.13 }; cvar; external;
  NSAboutPanelOptionApplicationVersion: NSAboutPanelOptionKey { available in macos 10.13 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSStandardAboutPanel = objccategory external (NSApplication)
    procedure orderFrontStandardAboutPanel (sender: id); message 'orderFrontStandardAboutPanel:';
    procedure orderFrontStandardAboutPanelWithOptions (optionsDictionary: NSDictionary); message 'orderFrontStandardAboutPanelWithOptions:';
  end;

type
  NSApplicationLayoutDirection = objccategory external (NSApplication)
    function userInterfaceLayoutDirection: NSUserInterfaceLayoutDirection; message 'userInterfaceLayoutDirection'; { available in macos 10.6 }
  end;

type
  NSRestorableUserInterface = objccategory external (NSApplication)
    procedure disableRelaunchOnLogin; message 'disableRelaunchOnLogin'; { available in macos 10.7 }
    procedure enableRelaunchOnLogin; message 'enableRelaunchOnLogin'; { available in macos 10.7 }
  end;
{$endif}

{$ifdef TYPES}
type
  NSRemoteNotificationType = NSUInteger;
  NSRemoteNotificationTypePtr = ^NSRemoteNotificationType;

const
  NSRemoteNotificationTypeNone = 0 { available in macos 10.7 };
  NSRemoteNotificationTypeBadge = 1 shl 0 { available in macos 10.7 };
  NSRemoteNotificationTypeSound = 1 shl 1 { available in macos 10.8 };
  NSRemoteNotificationTypeAlert = 1 shl 2 { available in macos 10.8 };
{$endif}

{$ifdef CLASSES}

type
  NSRemoteNotifications = objccategory external (NSApplication)
    procedure registerForRemoteNotifications; message 'registerForRemoteNotifications'; { available in macos 10.14 }
    procedure unregisterForRemoteNotifications; message 'unregisterForRemoteNotifications'; { available in macos 10.7 }
    function isRegisteredForRemoteNotifications: objcbool; message 'isRegisteredForRemoteNotifications'; { available in macos 10.14 }
    procedure registerForRemoteNotificationTypes (types: NSRemoteNotificationType); message 'registerForRemoteNotificationTypes:'; { available in macos 10.7 }
    function enabledRemoteNotificationTypes: NSRemoteNotificationType; message 'enabledRemoteNotificationTypes'; { available in macos 10.7 }
  end;
{$endif}

{$ifdef FUNCTIONS}
function NSApplicationMain(argc: cint; argv: PPChar { variable size array of PChar }): cint; cdecl; external;
function NSApplicationLoad: objcbool; cdecl; external;
function NSShowsServicesMenuItem(itemName: NSString): objcbool; cdecl; external;
function NSSetShowsServicesMenuItem(itemName: NSString; enabled: objcbool): NSInteger; cdecl; external;
function NSUpdateDynamicServices: pointer; cdecl; external;
function NSPerformService(itemName: NSString; pboard: NSPasteboard): objcbool; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  NSServiceProviderName = NSString;
  NSServiceProviderNamePtr = ^NSServiceProviderName;
{$endif}

{$ifdef FUNCTIONS}
function NSRegisterServicesProvider(provider: id; name: NSServiceProviderName): pointer; cdecl; external;
function NSUnregisterServicesProvider(name: NSServiceProviderName): pointer; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSApplicationDidBecomeActiveNotification: NSNotificationName; cvar; external;
  NSApplicationDidHideNotification: NSNotificationName; cvar; external;
  NSApplicationDidFinishLaunchingNotification: NSNotificationName; cvar; external;
  NSApplicationDidResignActiveNotification: NSNotificationName; cvar; external;
  NSApplicationDidUnhideNotification: NSNotificationName; cvar; external;
  NSApplicationDidUpdateNotification: NSNotificationName; cvar; external;
  NSApplicationWillBecomeActiveNotification: NSNotificationName; cvar; external;
  NSApplicationWillHideNotification: NSNotificationName; cvar; external;
  NSApplicationWillFinishLaunchingNotification: NSNotificationName; cvar; external;
  NSApplicationWillResignActiveNotification: NSNotificationName; cvar; external;
  NSApplicationWillUnhideNotification: NSNotificationName; cvar; external;
  NSApplicationWillUpdateNotification: NSNotificationName; cvar; external;
  NSApplicationWillTerminateNotification: NSNotificationName; cvar; external;
  NSApplicationDidChangeScreenParametersNotification: NSNotificationName; cvar; external;
  NSApplicationLaunchIsDefaultLaunchKey: NSString { available in macos 10.7 }; cvar; external;
  NSApplicationLaunchUserNotificationKey: NSString { available in macos 10.8 }; cvar; external;
  NSApplicationLaunchRemoteNotificationKey: NSString deprecated; cvar; external;
  NSApplicationDidChangeOcclusionStateNotification: NSNotificationName { available in macos 10.9 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSApplication_NSDeprecated = objccategory external name 'NSDeprecated' (NSApplication)
    function runModalForWindow_relativeToWindow (window: NSWindow; docWindow: NSWindow): NSInteger; message 'runModalForWindow:relativeToWindow:'; deprecated 'Use -[NSWindow beginSheet:completionHandler:] instead';
    function beginModalSessionForWindow_relativeToWindow (window: NSWindow; docWindow: NSWindow): NSModalSession; message 'beginModalSessionForWindow:relativeToWindow:'; deprecated 'Use -[NSWindow beginSheet:completionHandler:] instead';
    procedure application_printFiles (sender: NSApplication; filenames: NSArray); message 'application:printFiles:'; deprecated;
    procedure beginSheet_modalForWindow_modalDelegate_didEndSelector_contextInfo (sheet: NSWindow; docWindow: NSWindow; modalDelegate: id; didEndSelector: SEL; contextInfo: pointer); message 'beginSheet:modalForWindow:modalDelegate:didEndSelector:contextInfo:'; deprecated 'Use -[NSWindow beginSheet:completionHandler:] instead';
    procedure endSheet (sheet: NSWindow); message 'endSheet:'; deprecated 'Use -[NSWindow endSheet:] instead';
    procedure endSheet_returnCode (sheet: NSWindow; returnCode: NSInteger); message 'endSheet:returnCode:'; deprecated 'Use -[NSWindow endSheet:returnCode:] instead';
    function makeWindowsPerform_inOrder (selector: SEL; flag: objcbool): NSWindow; message 'makeWindowsPerform:inOrder:'; deprecated 'Use -enumerateWindowsWithOptions:usingBlock: instead';
    function context: NSGraphicsContext; message 'context'; deprecated 'This method always returns nil. If you need access to the current drawing context, use [NSGraphicsContext currentContext] inside of a draw operation.';
  end;
{$endif}

