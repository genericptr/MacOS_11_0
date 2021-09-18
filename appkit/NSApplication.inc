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
  NSModalResponseStop = (-1000) { available in macos  };
  NSModalResponseAbort = (-1001) { available in macos  };
  NSModalResponseContinue = (-1002) { available in macos  };

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
  NSApplicationPresentationFullScreen = 1 shl 10 { available in macos  };
  NSApplicationPresentationAutoHideToolbar = 1 shl 11 { available in macos  };
  NSApplicationPresentationDisableCursorLocationAssistance = 1 shl 12 { available in macos  };

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
    procedure enumerateWindowsWithOptions_usingBlock (options: NSWindowListOptions; block: NSApplicationEnumerateWindowsWithOptionsCallback); message 'enumerateWindowsWithOptions:usingBlock:'; { available in macos  }
    procedure preventWindowOrdering; message 'preventWindowOrdering';
    function windows: NSArray; message 'windows';
    procedure setWindowsNeedUpdate (needUpdate: objcbool); message 'setWindowsNeedUpdate:';
    procedure updateWindows; message 'updateWindows';
    procedure setMainMenu(newValue: NSMenu); message 'setMainMenu:';
    function mainMenu: NSMenu; message 'mainMenu';
    procedure setHelpMenu(newValue: NSMenu); message 'setHelpMenu:'; { available in macos  }
    function helpMenu: NSMenu; message 'helpMenu'; { available in macos  }
    procedure setApplicationIconImage(newValue: NSImage); message 'setApplicationIconImage:';
    function applicationIconImage: NSImage; message 'applicationIconImage';
    function activationPolicy: NSApplicationActivationPolicy; message 'activationPolicy'; { available in macos  }
    function setActivationPolicy (activationPolicy_: NSApplicationActivationPolicy): objcbool; message 'setActivationPolicy:'; { available in macos  }
    function dockTile: NSDockTile; message 'dockTile'; { available in macos  }
    procedure reportException (exception: NSException); message 'reportException:';
    class procedure detachDrawingThread_toTarget_withObject (selector: SEL; target: id; argument: id); message 'detachDrawingThread:toTarget:withObject:';
    procedure replyToApplicationShouldTerminate (shouldTerminate: objcbool); message 'replyToApplicationShouldTerminate:';
    procedure replyToOpenOrPrint (reply: NSApplicationDelegateReply); message 'replyToOpenOrPrint:';
    procedure orderFrontCharacterPalette (sender: id); message 'orderFrontCharacterPalette:';
    procedure setPresentationOptions(newValue: NSApplicationPresentationOptions); message 'setPresentationOptions:'; { available in macos  }
    function presentationOptions: NSApplicationPresentationOptions; message 'presentationOptions'; { available in macos  }
    function currentSystemPresentationOptions: NSApplicationPresentationOptions; message 'currentSystemPresentationOptions'; { available in macos  }
    function occlusionState: NSApplicationOcclusionState; message 'occlusionState'; { available in macos  }

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
    function validateMenuItem (menuItem: NSMenuItem): objcbool; message 'validateMenuItem:';
    function validateUserInterfaceItem (item: NSValidatedUserInterfaceItemProtocol): objcbool; message 'validateUserInterfaceItem:';
  end;


type
  NSAppearanceCustomization = objccategory external (NSApplication)
    procedure setAppearance(newValue: NSAppearance); message 'setAppearance:'; { available in macos  }
    function appearance: NSAppearance; message 'appearance'; { available in macos  }
    function effectiveAppearance: NSAppearance; message 'effectiveAppearance'; { available in macos  }
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
    function isFullKeyboardAccessEnabled: objcbool; message 'isFullKeyboardAccessEnabled'; { available in macos  }
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
    procedure application_openURLs (application: NSApplication; urls: NSArray); message 'application:openURLs:'; { available in macos  }
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
    procedure application_didRegisterForRemoteNotificationsWithDeviceToken (application: NSApplication; deviceToken: NSData); message 'application:didRegisterForRemoteNotificationsWithDeviceToken:'; { available in macos  }
    procedure application_didFailToRegisterForRemoteNotificationsWithError (application: NSApplication; error: NSError); message 'application:didFailToRegisterForRemoteNotificationsWithError:'; { available in macos  }
    procedure application_didReceiveRemoteNotification (application: NSApplication; userInfo: NSDictionary); message 'application:didReceiveRemoteNotification:'; { available in macos  }
    procedure application_willEncodeRestorableState (app: NSApplication; coder: NSCoder); message 'application:willEncodeRestorableState:'; { available in macos  }
    procedure application_didDecodeRestorableState (app: NSApplication; coder: NSCoder); message 'application:didDecodeRestorableState:'; { available in macos  }
    function application_willContinueUserActivityWithType (application: NSApplication; userActivityType: NSString): objcbool; message 'application:willContinueUserActivityWithType:'; { available in macos  }
    function application_continueUserActivity_restorationHandler (application: NSApplication; userActivity: NSUserActivity; restorationHandler: NSApplicationApplicationCallback): objcbool; message 'application:continueUserActivity:restorationHandler:'; { available in macos  }
    procedure application_didFailToContinueUserActivityWithType_error (application: NSApplication; userActivityType: NSString; error: NSError); message 'application:didFailToContinueUserActivityWithType:error:'; { available in macos  }
    procedure application_didUpdateUserActivity (application: NSApplication; userActivity: NSUserActivity); message 'application:didUpdateUserActivity:'; { available in macos  }
    procedure application_userDidAcceptCloudKitShareWithMetadata (application: NSApplication; metadata: CKShareMetadata); message 'application:userDidAcceptCloudKitShareWithMetadata:'; { available in macos  }
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
    procedure applicationDidChangeOcclusionState (notification: NSNotification); message 'applicationDidChangeOcclusionState:'; { available in macos  }
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
  NSAboutPanelOptionCredits: NSAboutPanelOptionKey { available in macos  }; cvar; external;
  NSAboutPanelOptionApplicationName: NSAboutPanelOptionKey { available in macos  }; cvar; external;
  NSAboutPanelOptionApplicationIcon: NSAboutPanelOptionKey { available in macos  }; cvar; external;
  NSAboutPanelOptionVersion: NSAboutPanelOptionKey { available in macos  }; cvar; external;
  NSAboutPanelOptionApplicationVersion: NSAboutPanelOptionKey { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSStandardAboutPanel = objccategory external (NSApplication)
    procedure orderFrontStandardAboutPanel (sender: id); message 'orderFrontStandardAboutPanel:';
    procedure orderFrontStandardAboutPanelWithOptions (optionsDictionary: NSDictionary); message 'orderFrontStandardAboutPanelWithOptions:';
  end;

type
  NSApplicationLayoutDirection = objccategory external (NSApplication)
    function userInterfaceLayoutDirection: NSUserInterfaceLayoutDirection; message 'userInterfaceLayoutDirection'; { available in macos  }
  end;

type
  NSRestorableUserInterface = objccategory external (NSApplication)
    procedure disableRelaunchOnLogin; message 'disableRelaunchOnLogin'; { available in macos  }
    procedure enableRelaunchOnLogin; message 'enableRelaunchOnLogin'; { available in macos  }
  end;
{$endif}

{$ifdef TYPES}
type
  NSRemoteNotificationType = NSUInteger;
  NSRemoteNotificationTypePtr = ^NSRemoteNotificationType;

const
  NSRemoteNotificationTypeNone = 0 { available in macos  };
  NSRemoteNotificationTypeBadge = 1 shl 0 { available in macos  };
  NSRemoteNotificationTypeSound = 1 shl 1 { available in macos  };
  NSRemoteNotificationTypeAlert = 1 shl 2 { available in macos  };
{$endif}

{$ifdef CLASSES}

type
  NSRemoteNotifications = objccategory external (NSApplication)
    procedure registerForRemoteNotifications; message 'registerForRemoteNotifications'; { available in macos  }
    procedure unregisterForRemoteNotifications; message 'unregisterForRemoteNotifications'; { available in macos  }
    function isRegisteredForRemoteNotifications: objcbool; message 'isRegisteredForRemoteNotifications'; { available in macos  }
    procedure registerForRemoteNotificationTypes (types: NSRemoteNotificationType); message 'registerForRemoteNotificationTypes:'; { available in macos  }
    function enabledRemoteNotificationTypes: NSRemoteNotificationType; message 'enabledRemoteNotificationTypes'; { available in macos  }
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
  NSApplicationLaunchIsDefaultLaunchKey: NSString { available in macos  }; cvar; external;
  NSApplicationLaunchUserNotificationKey: NSString { available in macos  }; cvar; external;
  NSApplicationLaunchRemoteNotificationKey: NSString deprecated; cvar; external;
  NSApplicationDidChangeOcclusionStateNotification: NSNotificationName { available in macos  }; cvar; external;
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

