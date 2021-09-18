{ Parsed from AppKit.framework NSWindow.h }

{ Types from NSWindow_NSDeprecated }
{$ifdef TYPES}

type
  NSWindowBackingLocation = NSUInteger;
type
  NSWindowBackingLocationPtr = ^NSWindowBackingLocation;

const
  NSWindowBackingLocationDefault = 0;
  NSWindowBackingLocationVideoMemory = 1;
  NSWindowBackingLocationMainMemory = 2;
{$endif}


{$ifdef CALLBACKS}
type
  NSWindowBeginSheetCallback = reference to procedure (returnCode: NSModalResponse); cblock; cdecl;
  NSWindowBeginCriticalSheetCallback = reference to procedure (returnCode: NSModalResponse); cblock; cdecl;
  NSWindowTrackEventsMatchingMaskCallback = reference to procedure (event: NSEvent; stop: objcboolPtr); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSWindowPtr = ^NSWindow;
  NSWindowDelegateProtocolPtr = ^NSWindowDelegateProtocol;
{$endif}

{$ifdef TYPES}
const
  NSAppKitVersionNumberWithCustomSheetPosition = 686.0;
  NSAppKitVersionNumberWithDeferredWindowDisplaySupport = 1019.0;

type
  NSWindowStyleMask = NSUInteger;
  NSWindowStyleMaskPtr = ^NSWindowStyleMask;

const
  NSWindowStyleMaskBorderless = 0;
  NSWindowStyleMaskTitled = 1 shl 0;
  NSWindowStyleMaskClosable = 1 shl 1;
  NSWindowStyleMaskMiniaturizable = 1 shl 2;
  NSWindowStyleMaskResizable = 1 shl 3;
  NSWindowStyleMaskTexturedBackground = 1 shl 8 deprecated 'Textured window style should no longer be used';
  NSWindowStyleMaskUnifiedTitleAndToolbar = 1 shl 12;
  NSWindowStyleMaskFullScreen = 1 shl 14 { available in macos  };
  NSWindowStyleMaskFullSizeContentView = 1 shl 15 { available in macos  };
  NSWindowStyleMaskUtilityWindow = 1 shl 4;
  NSWindowStyleMaskDocModalWindow = 1 shl 6;
  NSWindowStyleMaskNonactivatingPanel = 1 shl 7;
  NSWindowStyleMaskHUDWindow = 1 shl 13 { available in macos  };

const
  NSModalResponseOK = 1;
  NSModalResponseCancel = 0;

const
  NSDisplayWindowRunLoopOrdering = 600000;
  NSResetCursorRectsRunLoopOrdering = 700000;

type
  NSWindowSharingType = NSUInteger;
  NSWindowSharingTypePtr = ^NSWindowSharingType;

const
  NSWindowSharingNone = 0;
  NSWindowSharingReadOnly = 1;
  NSWindowSharingReadWrite = 2;

type
  NSWindowCollectionBehavior = NSUInteger;
  NSWindowCollectionBehaviorPtr = ^NSWindowCollectionBehavior;

const
  NSWindowCollectionBehaviorDefault = 0;
  NSWindowCollectionBehaviorCanJoinAllSpaces = 1 shl 0;
  NSWindowCollectionBehaviorMoveToActiveSpace = 1 shl 1;
  NSWindowCollectionBehaviorManaged = 1 shl 2 { available in macos  };
  NSWindowCollectionBehaviorTransient = 1 shl 3 { available in macos  };
  NSWindowCollectionBehaviorStationary = 1 shl 4 { available in macos  };
  NSWindowCollectionBehaviorParticipatesInCycle = 1 shl 5 { available in macos  };
  NSWindowCollectionBehaviorIgnoresCycle = 1 shl 6 { available in macos  };
  NSWindowCollectionBehaviorFullScreenPrimary = 1 shl 7 { available in macos  };
  NSWindowCollectionBehaviorFullScreenAuxiliary = 1 shl 8 { available in macos  };
  NSWindowCollectionBehaviorFullScreenNone = 1 shl 9 { available in macos  };
  NSWindowCollectionBehaviorFullScreenAllowsTiling = 1 shl 11 { available in macos  };
  NSWindowCollectionBehaviorFullScreenDisallowsTiling = 1 shl 12 { available in macos  };

type
  NSWindowAnimationBehavior = NSInteger;
  NSWindowAnimationBehaviorPtr = ^NSWindowAnimationBehavior;

const
  NSWindowAnimationBehaviorDefault = 0;
  NSWindowAnimationBehaviorNone = 2;
  NSWindowAnimationBehaviorDocumentWindow = 3;
  NSWindowAnimationBehaviorUtilityWindow = 4;
  NSWindowAnimationBehaviorAlertPanel = 5;

type
  NSWindowNumberListOptions = NSUInteger;
  NSWindowNumberListOptionsPtr = ^NSWindowNumberListOptions;

const
  NSWindowNumberListAllApplications = 1 shl 0;
  NSWindowNumberListAllSpaces = 1 shl 4;

type
  NSWindowOcclusionState = NSUInteger;
  NSWindowOcclusionStatePtr = ^NSWindowOcclusionState;

const
  NSWindowOcclusionStateVisible = 1 shl 1;

type
  NSWindowLevel = NSInteger;
  NSWindowLevelPtr = ^NSWindowLevel;

const
  NSNormalWindowLevel = kCGNormalWindowLevel;
  NSFloatingWindowLevel = kCGFloatingWindowLevel;
  NSSubmenuWindowLevel = kCGTornOffMenuWindowLevel;
  NSTornOffMenuWindowLevel = kCGTornOffMenuWindowLevel;
  NSMainMenuWindowLevel = kCGMainMenuWindowLevel;
  NSStatusWindowLevel = kCGStatusWindowLevel;
  NSModalPanelWindowLevel = kCGModalPanelWindowLevel;
  NSPopUpMenuWindowLevel = kCGPopUpMenuWindowLevel;
  NSScreenSaverWindowLevel = kCGScreenSaverWindowLevel;

type
  NSSelectionDirection = NSUInteger;
  NSSelectionDirectionPtr = ^NSSelectionDirection;

const
  NSDirectSelection = 0;
  NSSelectingNext = 1;
  NSSelectingPrevious = 2;

type
  NSWindowButton = NSUInteger;
  NSWindowButtonPtr = ^NSWindowButton;

const
  NSWindowCloseButton = 0;
  NSWindowMiniaturizeButton = 1;
  NSWindowZoomButton = 2;
  NSWindowToolbarButton = 3;
  NSWindowDocumentIconButton = 4;
  NSWindowDocumentVersionsButton = 6 { available in macos  };

type
  NSWindowTitleVisibility = NSInteger;
  NSWindowTitleVisibilityPtr = ^NSWindowTitleVisibility;

const
  NSWindowTitleVisible = 0;
  NSWindowTitleHidden = 1;

type
  NSWindowToolbarStyle = NSInteger;
  NSWindowToolbarStylePtr = ^NSWindowToolbarStyle;

const
  NSWindowToolbarStyleAutomatic = 0;
  NSWindowToolbarStyleExpanded = 1;
  NSWindowToolbarStylePreference = 2;
  NSWindowToolbarStyleUnified = 3;
  NSWindowToolbarStyleUnifiedCompact = 4;

const
  NSEventDurationForever = DBL_MAX;

type
  NSWindowUserTabbingPreference = NSInteger;
  NSWindowUserTabbingPreferencePtr = ^NSWindowUserTabbingPreference;

const
  NSWindowUserTabbingPreferenceManual = 0;
  NSWindowUserTabbingPreferenceAlways = 1;
  NSWindowUserTabbingPreferenceInFullScreen = 2;

type
  NSWindowTabbingMode = NSInteger;
  NSWindowTabbingModePtr = ^NSWindowTabbingMode;

const
  NSWindowTabbingModeAutomatic = 0;
  NSWindowTabbingModePreferred = 1;
  NSWindowTabbingModeDisallowed = 2;

type
  NSTitlebarSeparatorStyle = NSInteger;
  NSTitlebarSeparatorStylePtr = ^NSTitlebarSeparatorStyle;

const
  NSTitlebarSeparatorStyleAutomatic = 0;
  NSTitlebarSeparatorStyleNone = 1;
  NSTitlebarSeparatorStyleLine = 2;
  NSTitlebarSeparatorStyleShadow = 3;

type
  NSWindowFrameAutosaveName = NSString;
  NSWindowFrameAutosaveNamePtr = ^NSWindowFrameAutosaveName;
  NSWindowPersistableFrameDescriptor = NSString;
  NSWindowPersistableFrameDescriptorPtr = ^NSWindowPersistableFrameDescriptor;
  NSWindowTabbingIdentifier = NSString;
  NSWindowTabbingIdentifierPtr = ^NSWindowTabbingIdentifier;
{$endif}

{$ifdef CLASSES}

type
  NSWindow = objcclass external (NSResponder, NSAnimatablePropertyContainerProtocol, NSMenuItemValidationProtocol, NSUserInterfaceValidationsProtocol, NSUserInterfaceItemIdentificationProtocol, NSAppearanceCustomizationProtocol, NSAccessibilityElementProtocol, NSAccessibilityProtocol)
  public
    class function frameRectForContentRect_styleMask (cRect: NSRect; style: NSWindowStyleMask): NSRect; message 'frameRectForContentRect:styleMask:';
    class function contentRectForFrameRect_styleMask (fRect: NSRect; style: NSWindowStyleMask): NSRect; message 'contentRectForFrameRect:styleMask:';
    class function minFrameWidthWithTitle_styleMask (title: NSString; style: NSWindowStyleMask): CGFloat; message 'minFrameWidthWithTitle:styleMask:';
    class function defaultDepthLimit: NSWindowDepth; message 'defaultDepthLimit';
    function frameRectForContentRect (contentRect: NSRect): NSRect; message 'frameRectForContentRect:';
    function contentRectForFrameRect (frameRect: NSRect): NSRect; message 'contentRectForFrameRect:';
    function initWithContentRect_styleMask_backing_defer (contentRect: NSRect; style: NSWindowStyleMask; backingStoreType: NSBackingStoreType; flag: objcbool): id; message 'initWithContentRect:styleMask:backing:defer:'; { NS_DESIGNATED_INITIALIZER }
    function initWithContentRect_styleMask_backing_defer_screen (contentRect: NSRect; style: NSWindowStyleMask; backingStoreType: NSBackingStoreType; flag: objcbool; screen: NSScreen): id; message 'initWithContentRect:styleMask:backing:defer:screen:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setSubtitle(newValue: NSString); message 'setSubtitle:'; { available in macos  }
    function subtitle: NSString; message 'subtitle'; { available in macos  }
    procedure setTitleVisibility(newValue: NSWindowTitleVisibility); message 'setTitleVisibility:'; { available in macos  }
    function titleVisibility: NSWindowTitleVisibility; message 'titleVisibility'; { available in macos  }
    procedure setTitlebarAppearsTransparent(newValue: objcbool); message 'setTitlebarAppearsTransparent:'; { available in macos  }
    function titlebarAppearsTransparent: objcbool; message 'titlebarAppearsTransparent'; { available in macos  }
    procedure setToolbarStyle(newValue: NSWindowToolbarStyle); message 'setToolbarStyle:'; { available in macos  }
    function toolbarStyle: NSWindowToolbarStyle; message 'toolbarStyle'; { available in macos  }
    function contentLayoutRect: NSRect; message 'contentLayoutRect'; { available in macos  }
    function contentLayoutGuide: id; message 'contentLayoutGuide'; { available in macos  }
    procedure setTitlebarAccessoryViewControllers(newValue: NSArray); message 'setTitlebarAccessoryViewControllers:'; { available in macos  }
    function titlebarAccessoryViewControllers: NSArray; message 'titlebarAccessoryViewControllers'; { available in macos  }
    procedure addTitlebarAccessoryViewController (childViewController: NSTitlebarAccessoryViewController); message 'addTitlebarAccessoryViewController:'; { available in macos  }
    procedure insertTitlebarAccessoryViewController_atIndex (childViewController: NSTitlebarAccessoryViewController; index: NSInteger); message 'insertTitlebarAccessoryViewController:atIndex:'; { available in macos  }
    procedure removeTitlebarAccessoryViewControllerAtIndex (index: NSInteger); message 'removeTitlebarAccessoryViewControllerAtIndex:'; { available in macos  }
    procedure setRepresentedURL(newValue: NSURL); message 'setRepresentedURL:'; { available in macos  }
    function representedURL: NSURL; message 'representedURL'; { available in macos  }
    procedure setRepresentedFilename(newValue: NSString); message 'setRepresentedFilename:';
    function representedFilename: NSString; message 'representedFilename';
    procedure setTitleWithRepresentedFilename (filename: NSString); message 'setTitleWithRepresentedFilename:';
    procedure setExcludedFromWindowsMenu(newValue: objcbool); message 'setExcludedFromWindowsMenu:';
    function isExcludedFromWindowsMenu: objcbool; message 'isExcludedFromWindowsMenu';
    procedure setContentView(newValue: NSView); message 'setContentView:';
    function contentView: NSView; message 'contentView';
    procedure setDelegate(newValue: NSWindowDelegateProtocol); message 'setDelegate:';
    function delegate: NSWindowDelegateProtocol; message 'delegate';
    function windowNumber: NSInteger; message 'windowNumber';
    procedure setStyleMask(newValue: NSWindowStyleMask); message 'setStyleMask:';
    function styleMask: NSWindowStyleMask; message 'styleMask';
    function fieldEditor_forObject (createFlag: objcbool; object_: id): NSText; message 'fieldEditor:forObject:';
    procedure endEditingFor (object_: id); message 'endEditingFor:';
    function constrainFrameRect_toScreen (frameRect: NSRect; screen: NSScreen): NSRect; message 'constrainFrameRect:toScreen:';
    procedure setFrame_display (frameRect: NSRect; flag: objcbool); message 'setFrame:display:';
    procedure setContentSize (size: NSSize); message 'setContentSize:';
    procedure setFrameOrigin (point: NSPoint); message 'setFrameOrigin:';
    procedure setFrameTopLeftPoint (point: NSPoint); message 'setFrameTopLeftPoint:';
    function cascadeTopLeftFromPoint (topLeftPoint: NSPoint): NSPoint; message 'cascadeTopLeftFromPoint:';
    function frame: NSRect; message 'frame';
    function animationResizeTime (newFrame: NSRect): NSTimeInterval; message 'animationResizeTime:';
    procedure setFrame_display_animate (frameRect: NSRect; displayFlag: objcbool; animateFlag: objcbool); message 'setFrame:display:animate:';
    function inLiveResize: objcbool; message 'inLiveResize'; { available in macos  }
    procedure setResizeIncrements(newValue: NSSize); message 'setResizeIncrements:';
    function resizeIncrements: NSSize; message 'resizeIncrements';
    procedure setAspectRatio(newValue: NSSize); message 'setAspectRatio:';
    function aspectRatio: NSSize; message 'aspectRatio';
    procedure setContentResizeIncrements(newValue: NSSize); message 'setContentResizeIncrements:';
    function contentResizeIncrements: NSSize; message 'contentResizeIncrements';
    procedure setContentAspectRatio(newValue: NSSize); message 'setContentAspectRatio:';
    function contentAspectRatio: NSSize; message 'contentAspectRatio';
    procedure setViewsNeedDisplay(newValue: objcbool); message 'setViewsNeedDisplay:';
    function viewsNeedDisplay: objcbool; message 'viewsNeedDisplay';
    procedure displayIfNeeded; message 'displayIfNeeded';
    procedure display; message 'display';
    procedure setPreservesContentDuringLiveResize(newValue: objcbool); message 'setPreservesContentDuringLiveResize:';
    function preservesContentDuringLiveResize: objcbool; message 'preservesContentDuringLiveResize';
    procedure update; message 'update';
    function makeFirstResponder (responder: NSResponder): objcbool; message 'makeFirstResponder:';
    function firstResponder: NSResponder; message 'firstResponder';
    function resizeFlags: NSEventModifierFlags; message 'resizeFlags';
    procedure keyDown (event: NSEvent); message 'keyDown:';
    procedure close; message 'close';
    procedure setReleasedWhenClosed(newValue: objcbool); message 'setReleasedWhenClosed:';
    function isReleasedWhenClosed: objcbool; message 'isReleasedWhenClosed';
    procedure miniaturize (sender: id); message 'miniaturize:';
    procedure deminiaturize (sender: id); message 'deminiaturize:';
    function isZoomed: objcbool; message 'isZoomed';
    procedure zoom (sender: id); message 'zoom:';
    function isMiniaturized: objcbool; message 'isMiniaturized';
    function tryToPerform_with (action: SEL; object_: id): objcbool; message 'tryToPerform:with:';
    function validRequestorForSendType_returnType (sendType: NSPasteboardType; returnType: NSPasteboardType): id; message 'validRequestorForSendType:returnType:';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setContentBorderThickness_forEdge (thickness: CGFloat; edge: NSRectEdge); message 'setContentBorderThickness:forEdge:'; { available in macos  }
    function contentBorderThicknessForEdge (edge: NSRectEdge): CGFloat; message 'contentBorderThicknessForEdge:'; { available in macos  }
    procedure setAutorecalculatesContentBorderThickness_forEdge (flag: objcbool; edge: NSRectEdge); message 'setAutorecalculatesContentBorderThickness:forEdge:'; { available in macos  }
    function autorecalculatesContentBorderThicknessForEdge (edge: NSRectEdge): objcbool; message 'autorecalculatesContentBorderThicknessForEdge:'; { available in macos  }
    procedure setMovable(newValue: objcbool); message 'setMovable:'; { available in macos  }
    function isMovable: objcbool; message 'isMovable'; { available in macos  }
    procedure setMovableByWindowBackground(newValue: objcbool); message 'setMovableByWindowBackground:';
    function isMovableByWindowBackground: objcbool; message 'isMovableByWindowBackground';
    procedure setHidesOnDeactivate(newValue: objcbool); message 'setHidesOnDeactivate:';
    function hidesOnDeactivate: objcbool; message 'hidesOnDeactivate';
    procedure setCanHide(newValue: objcbool); message 'setCanHide:';
    function canHide: objcbool; message 'canHide';
    procedure center; message 'center';
    procedure makeKeyAndOrderFront (sender: id); message 'makeKeyAndOrderFront:';
    procedure orderFront (sender: id); message 'orderFront:';
    procedure orderBack (sender: id); message 'orderBack:';
    procedure orderOut (sender: id); message 'orderOut:';
    procedure orderWindow_relativeTo (place: NSWindowOrderingMode; otherWin: NSInteger); message 'orderWindow:relativeTo:';
    procedure orderFrontRegardless; message 'orderFrontRegardless';
    procedure setMiniwindowImage(newValue: NSImage); message 'setMiniwindowImage:';
    function miniwindowImage: NSImage; message 'miniwindowImage';
    procedure setMiniwindowTitle(newValue: NSString); message 'setMiniwindowTitle:';
    function miniwindowTitle: NSString; message 'miniwindowTitle';
    function dockTile: NSDockTile; message 'dockTile'; { available in macos  }
    procedure setDocumentEdited(newValue: objcbool); message 'setDocumentEdited:';
    function isDocumentEdited: objcbool; message 'isDocumentEdited';
    function isVisible: objcbool; message 'isVisible';
    function isKeyWindow: objcbool; message 'isKeyWindow';
    function isMainWindow: objcbool; message 'isMainWindow';
    function canBecomeKeyWindow: objcbool; message 'canBecomeKeyWindow';
    function canBecomeMainWindow: objcbool; message 'canBecomeMainWindow';
    procedure makeKeyWindow; message 'makeKeyWindow';
    procedure makeMainWindow; message 'makeMainWindow';
    procedure becomeKeyWindow; message 'becomeKeyWindow';
    procedure resignKeyWindow; message 'resignKeyWindow';
    procedure becomeMainWindow; message 'becomeMainWindow';
    procedure resignMainWindow; message 'resignMainWindow';
    function worksWhenModal: objcbool; message 'worksWhenModal';
    procedure setPreventsApplicationTerminationWhenModal(newValue: objcbool); message 'setPreventsApplicationTerminationWhenModal:'; { available in macos  }
    function preventsApplicationTerminationWhenModal: objcbool; message 'preventsApplicationTerminationWhenModal'; { available in macos  }
    function convertRectToScreen (rect: NSRect): NSRect; message 'convertRectToScreen:'; { available in macos  }
    function convertRectFromScreen (rect: NSRect): NSRect; message 'convertRectFromScreen:'; { available in macos  }
    function convertPointToScreen (point: NSPoint): NSPoint; message 'convertPointToScreen:'; { available in macos  }
    function convertPointFromScreen (point: NSPoint): NSPoint; message 'convertPointFromScreen:'; { available in macos  }
    function convertRectToBacking (rect: NSRect): NSRect; message 'convertRectToBacking:'; { available in macos  }
    function convertRectFromBacking (rect: NSRect): NSRect; message 'convertRectFromBacking:'; { available in macos  }
    function convertPointToBacking (point: NSPoint): NSPoint; message 'convertPointToBacking:'; { available in macos  }
    function convertPointFromBacking (point: NSPoint): NSPoint; message 'convertPointFromBacking:'; { available in macos  }
    function backingAlignedRect_options (rect: NSRect; options: NSAlignmentOptions): NSRect; message 'backingAlignedRect:options:'; { available in macos  }
    function backingScaleFactor: CGFloat; message 'backingScaleFactor'; { available in macos  }
    procedure performClose (sender: id); message 'performClose:';
    procedure performMiniaturize (sender: id); message 'performMiniaturize:';
    procedure performZoom (sender: id); message 'performZoom:';
    function dataWithEPSInsideRect (rect: NSRect): NSData; message 'dataWithEPSInsideRect:';
    function dataWithPDFInsideRect (rect: NSRect): NSData; message 'dataWithPDFInsideRect:';
    procedure print (sender: id); message 'print:';
    procedure setAllowsToolTipsWhenApplicationIsInactive(newValue: objcbool); message 'setAllowsToolTipsWhenApplicationIsInactive:';
    function allowsToolTipsWhenApplicationIsInactive: objcbool; message 'allowsToolTipsWhenApplicationIsInactive';
    procedure setBackingType(newValue: NSBackingStoreType); message 'setBackingType:';
    function backingType: NSBackingStoreType; message 'backingType';
    procedure setLevel(newValue: NSWindowLevel); message 'setLevel:';
    function level: NSWindowLevel; message 'level';
    procedure setDepthLimit(newValue: NSWindowDepth); message 'setDepthLimit:';
    function depthLimit: NSWindowDepth; message 'depthLimit';
    procedure setDynamicDepthLimit (flag: objcbool); message 'setDynamicDepthLimit:';
    function hasDynamicDepthLimit: objcbool; message 'hasDynamicDepthLimit';
    function screen: NSScreen; message 'screen';
    function deepestScreen: NSScreen; message 'deepestScreen';
    procedure setHasShadow(newValue: objcbool); message 'setHasShadow:';
    function hasShadow: objcbool; message 'hasShadow';
    procedure invalidateShadow; message 'invalidateShadow';
    procedure setAlphaValue(newValue: CGFloat); message 'setAlphaValue:';
    function alphaValue: CGFloat; message 'alphaValue';
    procedure setOpaque(newValue: objcbool); message 'setOpaque:';
    function isOpaque: objcbool; message 'isOpaque';
    procedure setSharingType(newValue: NSWindowSharingType); message 'setSharingType:'; { available in macos  }
    function sharingType: NSWindowSharingType; message 'sharingType'; { available in macos  }
    procedure setAllowsConcurrentViewDrawing(newValue: objcbool); message 'setAllowsConcurrentViewDrawing:'; { available in macos  }
    function allowsConcurrentViewDrawing: objcbool; message 'allowsConcurrentViewDrawing'; { available in macos  }
    procedure setDisplaysWhenScreenProfileChanges(newValue: objcbool); message 'setDisplaysWhenScreenProfileChanges:';
    function displaysWhenScreenProfileChanges: objcbool; message 'displaysWhenScreenProfileChanges';
    procedure disableScreenUpdatesUntilFlush; message 'disableScreenUpdatesUntilFlush';
    procedure setCanBecomeVisibleWithoutLogin(newValue: objcbool); message 'setCanBecomeVisibleWithoutLogin:'; { available in macos  }
    function canBecomeVisibleWithoutLogin: objcbool; message 'canBecomeVisibleWithoutLogin'; { available in macos  }
    procedure setCollectionBehavior(newValue: NSWindowCollectionBehavior); message 'setCollectionBehavior:'; { available in macos  }
    function collectionBehavior: NSWindowCollectionBehavior; message 'collectionBehavior'; { available in macos  }
    procedure setAnimationBehavior(newValue: NSWindowAnimationBehavior); message 'setAnimationBehavior:'; { available in macos  }
    function animationBehavior: NSWindowAnimationBehavior; message 'animationBehavior'; { available in macos  }
    function isOnActiveSpace: objcbool; message 'isOnActiveSpace'; { available in macos  }
    procedure toggleFullScreen (sender: id); message 'toggleFullScreen:'; { available in macos  }
    function stringWithSavedFrame: NSWindowPersistableFrameDescriptor; message 'stringWithSavedFrame';
    procedure setFrameFromString (string_: NSWindowPersistableFrameDescriptor); message 'setFrameFromString:';
    procedure saveFrameUsingName (name: NSWindowFrameAutosaveName); message 'saveFrameUsingName:';
    function setFrameUsingName_force (name: NSWindowFrameAutosaveName; force: objcbool): objcbool; message 'setFrameUsingName:force:';
    function setFrameUsingName (name: NSWindowFrameAutosaveName): objcbool; message 'setFrameUsingName:';
    function setFrameAutosaveName (name: NSWindowFrameAutosaveName): objcbool; message 'setFrameAutosaveName:';
    function frameAutosaveName: NSWindowFrameAutosaveName; message 'frameAutosaveName';
    class procedure removeFrameUsingName (name: NSWindowFrameAutosaveName); message 'removeFrameUsingName:';
    procedure setMinSize(newValue: NSSize); message 'setMinSize:';
    function minSize: NSSize; message 'minSize';
    procedure setMaxSize(newValue: NSSize); message 'setMaxSize:';
    function maxSize: NSSize; message 'maxSize';
    procedure setContentMinSize(newValue: NSSize); message 'setContentMinSize:';
    function contentMinSize: NSSize; message 'contentMinSize';
    procedure setContentMaxSize(newValue: NSSize); message 'setContentMaxSize:';
    function contentMaxSize: NSSize; message 'contentMaxSize';
    procedure setMinFullScreenContentSize(newValue: NSSize); message 'setMinFullScreenContentSize:'; { available in macos  }
    function minFullScreenContentSize: NSSize; message 'minFullScreenContentSize'; { available in macos  }
    procedure setMaxFullScreenContentSize(newValue: NSSize); message 'setMaxFullScreenContentSize:'; { available in macos  }
    function maxFullScreenContentSize: NSSize; message 'maxFullScreenContentSize'; { available in macos  }
    function deviceDescription: NSDictionary; message 'deviceDescription';
    procedure setWindowController(newValue: NSWindowController); message 'setWindowController:';
    function windowController: NSWindowController; message 'windowController';
    procedure beginSheet_completionHandler (sheetWindow: NSWindow; handler: NSWindowBeginSheetCallback); message 'beginSheet:completionHandler:'; { available in macos  }
    procedure beginCriticalSheet_completionHandler (sheetWindow: NSWindow; handler: NSWindowBeginCriticalSheetCallback); message 'beginCriticalSheet:completionHandler:'; { available in macos  }
    procedure endSheet (sheetWindow: NSWindow); message 'endSheet:'; { available in macos  }
    procedure endSheet_returnCode (sheetWindow: NSWindow; returnCode: NSModalResponse); message 'endSheet:returnCode:'; { available in macos  }
    function sheets: NSArray; message 'sheets'; { available in macos  }
    function attachedSheet: NSWindow; message 'attachedSheet';
    function isSheet: objcbool; message 'isSheet';
    function sheetParent: NSWindow; message 'sheetParent'; { available in macos  }
    class function standardWindowButton_forStyleMask (b: NSWindowButton; styleMask_: NSWindowStyleMask): NSButton; message 'standardWindowButton:forStyleMask:';
    function standardWindowButton (b: NSWindowButton): NSButton; message 'standardWindowButton:';
    procedure addChildWindow_ordered (childWin: NSWindow; place: NSWindowOrderingMode); message 'addChildWindow:ordered:';
    procedure removeChildWindow (childWin: NSWindow); message 'removeChildWindow:';
    function childWindows: NSArray; message 'childWindows';
    procedure setParentWindow(newValue: NSWindow); message 'setParentWindow:';
    function parentWindow: NSWindow; message 'parentWindow';
    procedure setAppearanceSource(newValue: NSObjectPtr); message 'setAppearanceSource:'; { available in macos  }
    function appearanceSource: NSObjectPtr; message 'appearanceSource'; { available in macos  }
    procedure setColorSpace(newValue: NSColorSpace); message 'setColorSpace:'; { available in macos  }
    function colorSpace: NSColorSpace; message 'colorSpace'; { available in macos  }
    function canRepresentDisplayGamut (displayGamut: NSDisplayGamut): objcbool; message 'canRepresentDisplayGamut:'; { available in macos  }
    class function windowNumbersWithOptions (options: NSWindowNumberListOptions): NSArray; message 'windowNumbersWithOptions:'; { available in macos  }
    class function windowNumberAtPoint_belowWindowWithWindowNumber (point: NSPoint; windowNumber_: NSInteger): NSInteger; message 'windowNumberAtPoint:belowWindowWithWindowNumber:'; { available in macos  }
    function occlusionState: NSWindowOcclusionState; message 'occlusionState'; { available in macos  }
    procedure setTitlebarSeparatorStyle(newValue: NSTitlebarSeparatorStyle); message 'setTitlebarSeparatorStyle:'; { available in macos  }
    function titlebarSeparatorStyle: NSTitlebarSeparatorStyle; message 'titlebarSeparatorStyle'; { available in macos  }
    procedure setContentViewController(newValue: NSViewController); message 'setContentViewController:'; { available in macos  }
    function contentViewController: NSViewController; message 'contentViewController'; { available in macos  }
    class function windowWithContentViewController (contentViewController_: NSViewController): id; message 'windowWithContentViewController:'; { available in macos  }
    procedure performWindowDragWithEvent (event: NSEvent); message 'performWindowDragWithEvent:'; { available in macos  }
    procedure setInitialFirstResponder(newValue: NSView); message 'setInitialFirstResponder:';
    function initialFirstResponder: NSView; message 'initialFirstResponder';
    procedure selectNextKeyView (sender: id); message 'selectNextKeyView:';
    procedure selectPreviousKeyView (sender: id); message 'selectPreviousKeyView:';
    procedure selectKeyViewFollowingView (view: NSView); message 'selectKeyViewFollowingView:';
    procedure selectKeyViewPrecedingView (view: NSView); message 'selectKeyViewPrecedingView:';
    function keyViewSelectionDirection: NSSelectionDirection; message 'keyViewSelectionDirection';
    procedure setDefaultButtonCell(newValue: NSButtonCell); message 'setDefaultButtonCell:';
    function defaultButtonCell: NSButtonCell; message 'defaultButtonCell';
    procedure disableKeyEquivalentForDefaultButtonCell; message 'disableKeyEquivalentForDefaultButtonCell';
    procedure enableKeyEquivalentForDefaultButtonCell; message 'enableKeyEquivalentForDefaultButtonCell';
    procedure setAutorecalculatesKeyViewLoop(newValue: objcbool); message 'setAutorecalculatesKeyViewLoop:';
    function autorecalculatesKeyViewLoop: objcbool; message 'autorecalculatesKeyViewLoop';
    procedure recalculateKeyViewLoop; message 'recalculateKeyViewLoop';
    procedure setToolbar(newValue: NSToolbar); message 'setToolbar:';
    function toolbar: NSToolbar; message 'toolbar';
    procedure toggleToolbarShown (sender: id); message 'toggleToolbarShown:';
    procedure runToolbarCustomizationPalette (sender: id); message 'runToolbarCustomizationPalette:';
    procedure setShowsToolbarButton(newValue: objcbool); message 'setShowsToolbarButton:';
    function showsToolbarButton: objcbool; message 'showsToolbarButton';
    class procedure setAllowsAutomaticWindowTabbing(newValue: objcbool); message 'setAllowsAutomaticWindowTabbing:'; { available in macos  }
    class function allowsAutomaticWindowTabbing: objcbool; message 'allowsAutomaticWindowTabbing'; { available in macos  }
    class function userTabbingPreference: NSWindowUserTabbingPreference; message 'userTabbingPreference'; { available in macos  }
    procedure setTabbingMode(newValue: NSWindowTabbingMode); message 'setTabbingMode:'; { available in macos  }
    function tabbingMode: NSWindowTabbingMode; message 'tabbingMode'; { available in macos  }
    procedure setTabbingIdentifier(newValue: NSWindowTabbingIdentifier); message 'setTabbingIdentifier:'; { available in macos  }
    function tabbingIdentifier: NSWindowTabbingIdentifier; message 'tabbingIdentifier'; { available in macos  }
    procedure selectNextTab (sender: id); message 'selectNextTab:'; { available in macos  }
    procedure selectPreviousTab (sender: id); message 'selectPreviousTab:'; { available in macos  }
    procedure moveTabToNewWindow (sender: id); message 'moveTabToNewWindow:'; { available in macos  }
    procedure mergeAllWindows (sender: id); message 'mergeAllWindows:'; { available in macos  }
    procedure toggleTabBar (sender: id); message 'toggleTabBar:'; { available in macos  }
    procedure toggleTabOverview (sender: id); message 'toggleTabOverview:'; { available in macos  }
    function tabbedWindows: NSArray; message 'tabbedWindows'; { available in macos  }
    procedure addTabbedWindow_ordered (window: NSWindow; ordered: NSWindowOrderingMode); message 'addTabbedWindow:ordered:'; { available in macos  }
    function tab: NSWindowTab; message 'tab'; { available in macos  }
    function tabGroup: NSWindowTabGroup; message 'tabGroup'; { available in macos  }
    function windowTitlebarLayoutDirection: NSUserInterfaceLayoutDirection; message 'windowTitlebarLayoutDirection'; { available in macos  }

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
    function animationForKey (key: NSAnimatablePropertyKey): id; message 'animationForKey:'; { available in macos  }
    function animations: NSDictionary; message 'animations'; { available in macos  }
    function animator: id; message 'animator'; { available in macos  }
    function appearance: NSAppearance; message 'appearance'; { available in macos  }
    class function defaultAnimationForKey (key: NSAnimatablePropertyKey): id; message 'defaultAnimationForKey:'; { available in macos  }
    function effectiveAppearance: NSAppearance; message 'effectiveAppearance'; { available in macos  }
    function identifier: NSUserInterfaceItemIdentifier; message 'identifier';
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
    procedure setAnimations (newValue: NSDictionary); message 'setAnimations:'; { available in macos  }
    procedure setAppearance (newValue: NSAppearance); message 'setAppearance:'; { available in macos  }
    procedure setIdentifier (newValue: NSUserInterfaceItemIdentifier); message 'setIdentifier:';
    function validateMenuItem (menuItem: NSMenuItem): objcbool; message 'validateMenuItem:';
    function validateUserInterfaceItem (item: NSValidatedUserInterfaceItemProtocol): objcbool; message 'validateUserInterfaceItem:';
  end;


type
  NSWindow_NSEvent = objccategory external name 'NSEvent' (NSWindow)
    procedure trackEventsMatchingMask_timeout_mode_handler (mask: NSEventMask; timeout: NSTimeInterval; mode: NSRunLoopMode; trackingHandler: NSWindowTrackEventsMatchingMaskCallback); message 'trackEventsMatchingMask:timeout:mode:handler:'; { available in macos  }
    function nextEventMatchingMask (mask: NSEventMask): NSEvent; message 'nextEventMatchingMask:';
    function nextEventMatchingMask_untilDate_inMode_dequeue (mask: NSEventMask; expiration: NSDate; mode: NSRunLoopMode; deqFlag: objcbool): NSEvent; message 'nextEventMatchingMask:untilDate:inMode:dequeue:';
    procedure discardEventsMatchingMask_beforeEvent (mask: NSEventMask; lastEvent: NSEvent); message 'discardEventsMatchingMask:beforeEvent:';
    procedure postEvent_atStart (event: NSEvent; flag: objcbool); message 'postEvent:atStart:';
    procedure sendEvent (event: NSEvent); message 'sendEvent:';
    function currentEvent: NSEvent; message 'currentEvent';
    procedure setAcceptsMouseMovedEvents(newValue: objcbool); message 'setAcceptsMouseMovedEvents:';
    function acceptsMouseMovedEvents: objcbool; message 'acceptsMouseMovedEvents';
    procedure setIgnoresMouseEvents(newValue: objcbool); message 'setIgnoresMouseEvents:';
    function ignoresMouseEvents: objcbool; message 'ignoresMouseEvents';
    function mouseLocationOutsideOfEventStream: NSPoint; message 'mouseLocationOutsideOfEventStream';
  end;

type
  NSCursorRect = objccategory external (NSWindow)
    procedure disableCursorRects; message 'disableCursorRects';
    procedure enableCursorRects; message 'enableCursorRects';
    procedure discardCursorRects; message 'discardCursorRects';
    function areCursorRectsEnabled: objcbool; message 'areCursorRectsEnabled';
    procedure invalidateCursorRectsForView (view: NSView); message 'invalidateCursorRectsForView:';
    procedure resetCursorRects; message 'resetCursorRects';
  end;

type
  NSDrag = objccategory external (NSWindow)
    procedure dragImage_at_offset_event_pasteboard_source_slideBack (image: NSImage; baseLocation: NSPoint; initialOffset: NSSize; event: NSEvent; pboard: NSPasteboard; sourceObj: id; slideFlag: objcbool); message 'dragImage:at:offset:event:pasteboard:source:slideBack:';
    procedure registerForDraggedTypes (newTypes: NSArray); message 'registerForDraggedTypes:';
    procedure unregisterDraggedTypes; message 'unregisterDraggedTypes';
  end;

type
  NSCarbonExtensions = objccategory external (NSWindow)
    function initWithWindowRef (windowRef: pointer): NSWindow; message 'initWithWindowRef:';
    function windowRef: pointer; message 'windowRef';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSWindowDelegateProtocol = objcprotocol external name 'NSWindowDelegate' (NSObjectProtocol)
  optional
    function windowShouldClose (sender: NSWindow): objcbool; message 'windowShouldClose:';
    function windowWillReturnFieldEditor_toObject (sender: NSWindow; client: id): id; message 'windowWillReturnFieldEditor:toObject:';
    function windowWillResize_toSize (sender: NSWindow; frameSize: NSSize): NSSize; message 'windowWillResize:toSize:';
    function windowWillUseStandardFrame_defaultFrame (window: NSWindow; newFrame: NSRect): NSRect; message 'windowWillUseStandardFrame:defaultFrame:';
    function windowShouldZoom_toFrame (window: NSWindow; newFrame: NSRect): objcbool; message 'windowShouldZoom:toFrame:';
    function windowWillReturnUndoManager (window: NSWindow): NSUndoManager; message 'windowWillReturnUndoManager:';
    function window_willPositionSheet_usingRect (window: NSWindow; sheet: NSWindow; rect: NSRect): NSRect; message 'window:willPositionSheet:usingRect:';
    function window_shouldPopUpDocumentPathMenu (window: NSWindow; menu: NSMenu): objcbool; message 'window:shouldPopUpDocumentPathMenu:'; { available in macos  }
    function window_shouldDragDocumentWithEvent_from_withPasteboard (window: NSWindow; event: NSEvent; dragImageLocation: NSPoint; pasteboard: NSPasteboard): objcbool; message 'window:shouldDragDocumentWithEvent:from:withPasteboard:'; { available in macos  }
    function window_willUseFullScreenContentSize (window: NSWindow; proposedSize: NSSize): NSSize; message 'window:willUseFullScreenContentSize:'; { available in macos  }
    function window_willUseFullScreenPresentationOptions (window: NSWindow; proposedOptions: NSApplicationPresentationOptions): NSApplicationPresentationOptions; message 'window:willUseFullScreenPresentationOptions:'; { available in macos  }
    function customWindowsToEnterFullScreenForWindow (window: NSWindow): NSArray; message 'customWindowsToEnterFullScreenForWindow:'; { available in macos  }
    procedure window_startCustomAnimationToEnterFullScreenWithDuration (window: NSWindow; duration: NSTimeInterval); message 'window:startCustomAnimationToEnterFullScreenWithDuration:'; { available in macos  }
    procedure windowDidFailToEnterFullScreen (window: NSWindow); message 'windowDidFailToEnterFullScreen:'; { available in macos  }
    function customWindowsToExitFullScreenForWindow (window: NSWindow): NSArray; message 'customWindowsToExitFullScreenForWindow:'; { available in macos  }
    procedure window_startCustomAnimationToExitFullScreenWithDuration (window: NSWindow; duration: NSTimeInterval); message 'window:startCustomAnimationToExitFullScreenWithDuration:'; { available in macos  }
    function customWindowsToEnterFullScreenForWindow_onScreen (window: NSWindow; screen: NSScreen): NSArray; message 'customWindowsToEnterFullScreenForWindow:onScreen:'; { available in macos  }
    procedure window_startCustomAnimationToEnterFullScreenOnScreen_withDuration (window: NSWindow; screen: NSScreen; duration: NSTimeInterval); message 'window:startCustomAnimationToEnterFullScreenOnScreen:withDuration:'; { available in macos  }
    procedure windowDidFailToExitFullScreen (window: NSWindow); message 'windowDidFailToExitFullScreen:'; { available in macos  }
    function window_willResizeForVersionBrowserWithMaxPreferredSize_maxAllowedSize (window: NSWindow; maxPreferredFrameSize: NSSize; maxAllowedFrameSize: NSSize): NSSize; message 'window:willResizeForVersionBrowserWithMaxPreferredSize:maxAllowedSize:'; { available in macos  }
    procedure window_willEncodeRestorableState (window: NSWindow; state: NSCoder); message 'window:willEncodeRestorableState:'; { available in macos  }
    procedure window_didDecodeRestorableState (window: NSWindow; state: NSCoder); message 'window:didDecodeRestorableState:'; { available in macos  }
    procedure windowDidResize (notification: NSNotification); message 'windowDidResize:';
    procedure windowDidExpose (notification: NSNotification); message 'windowDidExpose:';
    procedure windowWillMove (notification: NSNotification); message 'windowWillMove:';
    procedure windowDidMove (notification: NSNotification); message 'windowDidMove:';
    procedure windowDidBecomeKey (notification: NSNotification); message 'windowDidBecomeKey:';
    procedure windowDidResignKey (notification: NSNotification); message 'windowDidResignKey:';
    procedure windowDidBecomeMain (notification: NSNotification); message 'windowDidBecomeMain:';
    procedure windowDidResignMain (notification: NSNotification); message 'windowDidResignMain:';
    procedure windowWillClose (notification: NSNotification); message 'windowWillClose:';
    procedure windowWillMiniaturize (notification: NSNotification); message 'windowWillMiniaturize:';
    procedure windowDidMiniaturize (notification: NSNotification); message 'windowDidMiniaturize:';
    procedure windowDidDeminiaturize (notification: NSNotification); message 'windowDidDeminiaturize:';
    procedure windowDidUpdate (notification: NSNotification); message 'windowDidUpdate:';
    procedure windowDidChangeScreen (notification: NSNotification); message 'windowDidChangeScreen:';
    procedure windowDidChangeScreenProfile (notification: NSNotification); message 'windowDidChangeScreenProfile:';
    procedure windowDidChangeBackingProperties (notification: NSNotification); message 'windowDidChangeBackingProperties:'; { available in macos  }
    procedure windowWillBeginSheet (notification: NSNotification); message 'windowWillBeginSheet:';
    procedure windowDidEndSheet (notification: NSNotification); message 'windowDidEndSheet:';
    procedure windowWillStartLiveResize (notification: NSNotification); message 'windowWillStartLiveResize:'; { available in macos  }
    procedure windowDidEndLiveResize (notification: NSNotification); message 'windowDidEndLiveResize:'; { available in macos  }
    procedure windowWillEnterFullScreen (notification: NSNotification); message 'windowWillEnterFullScreen:'; { available in macos  }
    procedure windowDidEnterFullScreen (notification: NSNotification); message 'windowDidEnterFullScreen:'; { available in macos  }
    procedure windowWillExitFullScreen (notification: NSNotification); message 'windowWillExitFullScreen:'; { available in macos  }
    procedure windowDidExitFullScreen (notification: NSNotification); message 'windowDidExitFullScreen:'; { available in macos  }
    procedure windowWillEnterVersionBrowser (notification: NSNotification); message 'windowWillEnterVersionBrowser:'; { available in macos  }
    procedure windowDidEnterVersionBrowser (notification: NSNotification); message 'windowDidEnterVersionBrowser:'; { available in macos  }
    procedure windowWillExitVersionBrowser (notification: NSNotification); message 'windowWillExitVersionBrowser:'; { available in macos  }
    procedure windowDidExitVersionBrowser (notification: NSNotification); message 'windowDidExitVersionBrowser:'; { available in macos  }
    procedure windowDidChangeOcclusionState (notification: NSNotification); message 'windowDidChangeOcclusionState:'; { available in macos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSWindowDidBecomeKeyNotification: NSNotificationName; cvar; external;
  NSWindowDidBecomeMainNotification: NSNotificationName; cvar; external;
  NSWindowDidChangeScreenNotification: NSNotificationName; cvar; external;
  NSWindowDidDeminiaturizeNotification: NSNotificationName; cvar; external;
  NSWindowDidExposeNotification: NSNotificationName; cvar; external;
  NSWindowDidMiniaturizeNotification: NSNotificationName; cvar; external;
  NSWindowDidMoveNotification: NSNotificationName; cvar; external;
  NSWindowDidResignKeyNotification: NSNotificationName; cvar; external;
  NSWindowDidResignMainNotification: NSNotificationName; cvar; external;
  NSWindowDidResizeNotification: NSNotificationName; cvar; external;
  NSWindowDidUpdateNotification: NSNotificationName; cvar; external;
  NSWindowWillCloseNotification: NSNotificationName; cvar; external;
  NSWindowWillMiniaturizeNotification: NSNotificationName; cvar; external;
  NSWindowWillMoveNotification: NSNotificationName; cvar; external;
  NSWindowWillBeginSheetNotification: NSNotificationName; cvar; external;
  NSWindowDidEndSheetNotification: NSNotificationName; cvar; external;
  NSWindowDidChangeBackingPropertiesNotification: NSNotificationName { available in macos  }; cvar; external;
  NSBackingPropertyOldScaleFactorKey: NSString { available in macos  }; cvar; external;
  NSBackingPropertyOldColorSpaceKey: NSString { available in macos  }; cvar; external;
  NSWindowDidChangeScreenProfileNotification: NSNotificationName; cvar; external;
  NSWindowWillStartLiveResizeNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWindowDidEndLiveResizeNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWindowWillEnterFullScreenNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWindowDidEnterFullScreenNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWindowWillExitFullScreenNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWindowDidExitFullScreenNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWindowWillEnterVersionBrowserNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWindowDidEnterVersionBrowserNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWindowWillExitVersionBrowserNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWindowDidExitVersionBrowserNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWindowDidChangeOcclusionStateNotification: NSNotificationName { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSWindow_NSDeprecated = objccategory external name 'NSDeprecated' (NSWindow)
    procedure cacheImageInRect (rect: NSRect); message 'cacheImageInRect:'; deprecated 'This method shouldn’t be used as it doesn’t work in all drawing situations; instead, a subview should be used that implements the desired drawing behavior';
    procedure restoreCachedImage; message 'restoreCachedImage'; deprecated 'This method shouldn’t be used as it doesn’t work in all drawing situations; instead, a subview should be used that implements the desired drawing behavior';
    procedure discardCachedImage; message 'discardCachedImage'; deprecated 'This method shouldn’t be used as it doesn’t work in all drawing situations; instead, a subview should be used that implements the desired drawing behavior';
    class procedure menuChanged (menu_: NSMenu); message 'menuChanged:'; deprecated 'This method does not do anything and should not be called.';
    function gState: NSInteger; message 'gState'; deprecated 'This method is unused and should not be called.';
    function convertBaseToScreen (point: NSPoint): NSPoint; message 'convertBaseToScreen:'; deprecated 'Use -convertRectToScreen: or -convertPointToScreen: instead';
    function convertScreenToBase (point: NSPoint): NSPoint; message 'convertScreenToBase:'; deprecated 'Use -convertRectFromScreen or -convertPointFromScreen: instead';
    function userSpaceScaleFactor: CGFloat; message 'userSpaceScaleFactor'; deprecated 'Use -convertRectToBacking: and -backingScaleFactor instead';
    procedure useOptimizedDrawing (flag: objcbool); message 'useOptimizedDrawing:'; deprecated 'This method does not do anything and should not be called.';
    function canStoreColor: objcbool; message 'canStoreColor'; deprecated 'This method does not do anything and should not be called.';
    procedure disableFlushWindow; message 'disableFlushWindow'; deprecated 'Use +[NSAnimationContext runAnimationGroup:completionHandler:] to perform atomic updates across runloop invocations.';
    procedure enableFlushWindow; message 'enableFlushWindow'; deprecated 'Use +[NSAnimationContext runAnimationGroup:completionHandler:] to perform atomic updates across runloop invocations.';
    function isFlushWindowDisabled: objcbool; message 'isFlushWindowDisabled'; deprecated 'Use +[NSAnimationContext runAnimationGroup:completionHandler:] to perform atomic updates across runloop invocations.';
    procedure flushWindow; message 'flushWindow'; deprecated 'Allow AppKit''s automatic deferred display mechanism to take care of flushing any graphics contexts as needed.';
    procedure flushWindowIfNeeded; message 'flushWindowIfNeeded'; deprecated 'Allow AppKit''s automatic deferred display mechanism to take care of flushing any graphics contexts as needed.';
    procedure setAutodisplay(newValue: objcbool); message 'setAutodisplay:'; deprecated 'Use +[NSAnimationContext runAnimationGroup:completionHandler:] to temporarily prevent AppKit''s automatic deferred display mechanism from drawing.';
    function isAutodisplay: objcbool; message 'isAutodisplay'; deprecated 'Use +[NSAnimationContext runAnimationGroup:completionHandler:] to temporarily prevent AppKit''s automatic deferred display mechanism from drawing.';
    function graphicsContext: NSGraphicsContext; message 'graphicsContext'; deprecated 'Add instances of NSView to display content in a window.';
    procedure setOneShot(newValue: objcbool); message 'setOneShot:'; deprecated 'This property does not do anything and should not be used';
    function isOneShot: objcbool; message 'isOneShot'; deprecated 'This property does not do anything and should not be used';
    procedure setPreferredBackingLocation(newValue: NSWindowBackingLocation); message 'setPreferredBackingLocation:'; deprecated 'This property does not do anything and should not be used';
    function preferredBackingLocation: NSWindowBackingLocation; message 'preferredBackingLocation'; deprecated 'This property does not do anything and should not be used';
    function backingLocation: NSWindowBackingLocation; message 'backingLocation'; deprecated 'This property does not do anything and should not be used';
    procedure setShowsResizeIndicator(newValue: objcbool); message 'setShowsResizeIndicator:';
    function showsResizeIndicator: objcbool; message 'showsResizeIndicator';
  end;
{$endif}

{$ifdef TYPES}
const
  NSBorderlessWindowMask = NSWindowStyleMaskBorderless deprecated 'replace with NSWindowStyleMaskBorderless';
  NSTitledWindowMask = NSWindowStyleMaskTitled deprecated 'replace with NSWindowStyleMaskTitled';
  NSClosableWindowMask = NSWindowStyleMaskClosable deprecated 'replace with NSWindowStyleMaskClosable';
  NSMiniaturizableWindowMask = NSWindowStyleMaskMiniaturizable deprecated 'replace with NSWindowStyleMaskMiniaturizable';
  NSResizableWindowMask = NSWindowStyleMaskResizable deprecated 'replace with NSWindowStyleMaskResizable';
  NSTexturedBackgroundWindowMask = NSWindowStyleMaskTexturedBackground deprecated 'replace with NSWindowStyleMaskTexturedBackground';
  NSUnifiedTitleAndToolbarWindowMask = NSWindowStyleMaskUnifiedTitleAndToolbar deprecated 'replace with NSWindowStyleMaskUnifiedTitleAndToolbar';
  NSFullScreenWindowMask = NSWindowStyleMaskFullScreen deprecated 'replace with NSWindowStyleMaskFullScreen';
  NSFullSizeContentViewWindowMask = NSWindowStyleMaskFullSizeContentView deprecated 'replace with NSWindowStyleMaskFullSizeContentView';
  NSUtilityWindowMask = NSWindowStyleMaskUtilityWindow deprecated 'replace with NSWindowStyleMaskUtilityWindow';
  NSDocModalWindowMask = NSWindowStyleMaskDocModalWindow deprecated 'replace with NSWindowStyleMaskDocModalWindow';
  NSNonactivatingPanelMask = NSWindowStyleMaskNonactivatingPanel deprecated 'replace with NSWindowStyleMaskNonactivatingPanel';
  NSHUDWindowMask = NSWindowStyleMaskHUDWindow deprecated 'replace with NSWindowStyleMaskHUDWindow';
  NSUnscaledWindowMask = 1 << 11 deprecated 'NSUnscaledWindowMask is deprecated and has no effect. The scale factor for a window backing store is dynamic and dependent on the screen it is placed on.';
  NSWindowFullScreenButton = 7 deprecated 'The standard window button for NSWindowFullScreenButton is always nil; use NSWindowZoomButton instead';
  NSDockWindowLevel = kCGDockWindowLevel deprecated;
{$endif}

