{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesAppKit;
interface

type
  NSATSTypesetter = objcclass external;
  NSAccessibilityCustomAction = objcclass external;
  NSAccessibilityCustomRotor = objcclass external;
  NSAccessibilityCustomRotorItemResult = objcclass external;
  NSAccessibilityCustomRotorSearchParameters = objcclass external;
  NSAccessibilityElement = objcclass external;
  NSActionCell = objcclass external;
  NSAlert = objcclass external;
  NSAlignmentFeedbackFilter = objcclass external;
  NSAnimation = objcclass external;
  NSAnimationContext = objcclass external;
  NSAppearance = objcclass external;
  NSApplication = objcclass external;
  NSArrayController = objcclass external;
  NSBezierPath = objcclass external;
  NSBindingSelectionMarker = objcclass external;
  NSBitmapImageRep = objcclass external;
  NSBox = objcclass external;
  NSBrowser = objcclass external;
  NSBrowserCell = objcclass external;
  NSButton = objcclass external;
  NSButtonCell = objcclass external;
  NSButtonTouchBarItem = objcclass external;
  NSCIImageRep = objcclass external;
  NSCachedImageRep = objcclass external;
  NSCandidateListTouchBarItem = objcclass external;
  NSCell = objcclass external;
  NSClickGestureRecognizer = objcclass external;
  NSClipView = objcclass external;
  NSCollectionLayoutAnchor = objcclass external;
  NSCollectionLayoutBoundarySupplementaryItem = objcclass external;
  NSCollectionLayoutDecorationItem = objcclass external;
  NSCollectionLayoutDimension = objcclass external;
  NSCollectionLayoutEdgeSpacing = objcclass external;
  NSCollectionLayoutGroup = objcclass external;
  NSCollectionLayoutGroupCustomItem = objcclass external;
  NSCollectionLayoutItem = objcclass external;
  NSCollectionLayoutSection = objcclass external;
  NSCollectionLayoutSize = objcclass external;
  NSCollectionLayoutSpacing = objcclass external;
  NSCollectionLayoutSupplementaryItem = objcclass external;
  NSCollectionView = objcclass external;
  NSCollectionViewCompositionalLayout = objcclass external;
  NSCollectionViewCompositionalLayoutConfiguration = objcclass external;
  NSCollectionViewDiffableDataSource = objcclass external;
  NSCollectionViewFlowLayout = objcclass external;
  NSCollectionViewFlowLayoutInvalidationContext = objcclass external;
  NSCollectionViewGridLayout = objcclass external;
  NSCollectionViewItem = objcclass external;
  NSCollectionViewLayout = objcclass external;
  NSCollectionViewLayoutAttributes = objcclass external;
  NSCollectionViewLayoutInvalidationContext = objcclass external;
  NSCollectionViewTransitionLayout = objcclass external;
  NSCollectionViewUpdateItem = objcclass external;
  NSColor = objcclass external;
  NSColorList = objcclass external;
  NSColorPanel = objcclass external;
  NSColorPicker = objcclass external;
  NSColorPickerTouchBarItem = objcclass external;
  NSColorSampler = objcclass external;
  NSColorSpace = objcclass external;
  NSColorWell = objcclass external;
  NSComboBox = objcclass external;
  NSComboBoxCell = objcclass external;
  NSControl = objcclass external;
  NSController = objcclass external;
  NSCursor = objcclass external;
  NSCustomImageRep = objcclass external;
  NSCustomTouchBarItem = objcclass external;
  NSDataAsset = objcclass external;
  NSDatePicker = objcclass external;
  NSDatePickerCell = objcclass external;
  NSDictionaryController = objcclass external;
  NSDictionaryControllerKeyValuePair = objcclass external;
  NSDiffableDataSourceSnapshot = objcclass external;
  NSDockTile = objcclass external;
  NSDocument = objcclass external;
  NSDocumentController = objcclass external;
  NSDraggingImageComponent = objcclass external;
  NSDraggingItem = objcclass external;
  NSDraggingSession = objcclass external;
  NSDrawer = objcclass external;
  NSEPSImageRep = objcclass external;
  NSEvent = objcclass external;
  NSFilePromiseProvider = objcclass external;
  NSFilePromiseReceiver = objcclass external;
  NSFont = objcclass external;
  NSFontAssetRequest = objcclass external;
  NSFontCollection = objcclass external;
  NSFontDescriptor = objcclass external;
  NSFontManager = objcclass external;
  NSFontPanel = objcclass external;
  NSForm = objcclass external;
  NSFormCell = objcclass external;
  NSGestureRecognizer = objcclass external;
  NSGlyphGenerator = objcclass external;
  NSGlyphInfo = objcclass external;
  NSGradient = objcclass external;
  NSGraphicsContext = objcclass external;
  NSGridCell = objcclass external;
  NSGridColumn = objcclass external;
  NSGridRow = objcclass external;
  NSGridView = objcclass external;
  NSGroupTouchBarItem = objcclass external;
  NSHapticFeedbackManager = objcclass external;
  NSHelpManager = objcclass external;
  NSImage = objcclass external;
  NSImageCell = objcclass external;
  NSImageRep = objcclass external;
  NSImageSymbolConfiguration = objcclass external;
  NSImageView = objcclass external;
  NSInputManager = objcclass external;
  NSInputServer = objcclass external;
  NSLayoutAnchor = objcclass external;
  NSLayoutConstraint = objcclass external;
  NSLayoutDimension = objcclass external;
  NSLayoutGuide = objcclass external;
  NSLayoutManager = objcclass external;
  NSLayoutXAxisAnchor = objcclass external;
  NSLayoutYAxisAnchor = objcclass external;
  NSLevelIndicator = objcclass external;
  NSLevelIndicatorCell = objcclass external;
  NSMagnificationGestureRecognizer = objcclass external;
  NSMatrix = objcclass external;
  NSMediaLibraryBrowserController = objcclass external;
  NSMenu = objcclass external;
  NSMenuItem = objcclass external;
  NSMenuItemCell = objcclass external;
  NSMenuToolbarItem = objcclass external;
  NSMovie = objcclass external;
  NSMutableFontCollection = objcclass external;
  NSMutableParagraphStyle = objcclass external;
  NSNib = objcclass external;
  NSObjectController = objcclass external;
  NSOpenGLContext = objcclass external;
  NSOpenGLLayer = objcclass external;
  NSOpenGLPixelBuffer = objcclass external;
  NSOpenGLPixelFormat = objcclass external;
  NSOpenGLView = objcclass external;
  NSOpenPanel = objcclass external;
  NSOutlineView = objcclass external;
  NSPDFImageRep = objcclass external;
  NSPDFInfo = objcclass external;
  NSPDFPanel = objcclass external;
  NSPICTImageRep = objcclass external;
  NSPageController = objcclass external;
  NSPageLayout = objcclass external;
  NSPanGestureRecognizer = objcclass external;
  NSPanel = objcclass external;
  NSParagraphStyle = objcclass external;
  NSPasteboard = objcclass external;
  NSPasteboardItem = objcclass external;
  NSPathCell = objcclass external;
  NSPathComponentCell = objcclass external;
  NSPathControl = objcclass external;
  NSPathControlItem = objcclass external;
  NSPersistentDocument = objcclass external;
  NSPickerTouchBarItem = objcclass external;
  NSPopUpButton = objcclass external;
  NSPopUpButtonCell = objcclass external;
  NSPopover = objcclass external;
  NSPopoverTouchBarItem = objcclass external;
  NSPredicateEditor = objcclass external;
  NSPredicateEditorRowTemplate = objcclass external;
  NSPressGestureRecognizer = objcclass external;
  NSPressureConfiguration = objcclass external;
  NSPrintInfo = objcclass external;
  NSPrintOperation = objcclass external;
  NSPrintPanel = objcclass external;
  NSPrinter = objcclass external;
  NSProgressIndicator = objcclass external;
  NSResponder = objcclass external;
  NSRotationGestureRecognizer = objcclass external;
  NSRuleEditor = objcclass external;
  NSRulerMarker = objcclass external;
  NSRulerView = objcclass external;
  NSRunningApplication = objcclass external;
  NSSavePanel = objcclass external;
  NSScreen = objcclass external;
  NSScrollView = objcclass external;
  NSScroller = objcclass external;
  NSScrubber = objcclass external;
  NSScrubberArrangedView = objcclass external;
  NSScrubberFlowLayout = objcclass external;
  NSScrubberImageItemView = objcclass external;
  NSScrubberItemView = objcclass external;
  NSScrubberLayout = objcclass external;
  NSScrubberLayoutAttributes = objcclass external;
  NSScrubberProportionalLayout = objcclass external;
  NSScrubberSelectionStyle = objcclass external;
  NSScrubberSelectionView = objcclass external;
  NSScrubberTextItemView = objcclass external;
  NSSearchField = objcclass external;
  NSSearchFieldCell = objcclass external;
  NSSearchToolbarItem = objcclass external;
  NSSecureTextField = objcclass external;
  NSSecureTextFieldCell = objcclass external;
  NSSegmentedCell = objcclass external;
  NSSegmentedControl = objcclass external;
  NSShadow = objcclass external;
  NSSharingService = objcclass external;
  NSSharingServicePicker = objcclass external;
  NSSharingServicePickerToolbarItem = objcclass external;
  NSSharingServicePickerTouchBarItem = objcclass external;
  NSSlider = objcclass external;
  NSSliderAccessory = objcclass external;
  NSSliderAccessoryBehavior = objcclass external;
  NSSliderCell = objcclass external;
  NSSliderTouchBarItem = objcclass external;
  NSSound = objcclass external;
  NSSpeechRecognizer = objcclass external;
  NSSpeechSynthesizer = objcclass external;
  NSSpellChecker = objcclass external;
  NSSplitView = objcclass external;
  NSSplitViewController = objcclass external;
  NSSplitViewItem = objcclass external;
  NSStackView = objcclass external;
  NSStatusBar = objcclass external;
  NSStatusBarButton = objcclass external;
  NSStatusItem = objcclass external;
  NSStepper = objcclass external;
  NSStepperCell = objcclass external;
  NSStepperTouchBarItem = objcclass external;
  NSStoryboard = objcclass external;
  NSStoryboardSegue = objcclass external;
  NSStringDrawingContext = objcclass external;
  NSSwitch = objcclass external;
  NSTabView = objcclass external;
  NSTabViewController = objcclass external;
  NSTabViewItem = objcclass external;
  NSTableCellView = objcclass external;
  NSTableColumn = objcclass external;
  NSTableHeaderCell = objcclass external;
  NSTableHeaderView = objcclass external;
  NSTableRowView = objcclass external;
  NSTableView = objcclass external;
  NSTableViewDiffableDataSource = objcclass external;
  NSTableViewRowAction = objcclass external;
  NSText = objcclass external;
  NSTextAlternatives = objcclass external;
  NSTextAttachment = objcclass external;
  NSTextAttachmentCell = objcclass external;
  NSTextBlock = objcclass external;
  NSTextCheckingController = objcclass external;
  NSTextContainer = objcclass external;
  NSTextField = objcclass external;
  NSTextFieldCell = objcclass external;
  NSTextFinder = objcclass external;
  NSTextInputContext = objcclass external;
  NSTextList = objcclass external;
  NSTextStorage = objcclass external;
  NSTextTab = objcclass external;
  NSTextTable = objcclass external;
  NSTextTableBlock = objcclass external;
  NSTextView = objcclass external;
  NSTintConfiguration = objcclass external;
  NSTitlebarAccessoryViewController = objcclass external;
  NSTokenField = objcclass external;
  NSTokenFieldCell = objcclass external;
  NSToolbar = objcclass external;
  NSToolbarItem = objcclass external;
  NSToolbarItemGroup = objcclass external;
  NSTouch = objcclass external;
  NSTouchBar = objcclass external;
  NSTouchBarItem = objcclass external;
  NSTrackingArea = objcclass external;
  NSTrackingSeparatorToolbarItem = objcclass external;
  NSTreeController = objcclass external;
  NSTreeNode = objcclass external;
  NSTypesetter = objcclass external;
  NSUserDefaultsController = objcclass external;
  NSUserInterfaceCompressionOptions = objcclass external;
  NSView = objcclass external;
  NSViewAnimation = objcclass external;
  NSViewController = objcclass external;
  NSVisualEffectView = objcclass external;
  NSWindow = objcclass external;
  NSWindowController = objcclass external;
  NSWindowTab = objcclass external;
  NSWindowTabGroup = objcclass external;
  NSWorkspace = objcclass external;
  NSWorkspaceAuthorization = objcclass external;
  NSWorkspaceOpenConfiguration = objcclass external;
  NSAccessibilityButtonProtocol = objcprotocol external name 'NSAccessibilityButton';
  NSAccessibilityCheckBoxProtocol = objcprotocol external name 'NSAccessibilityCheckBox';
  NSAccessibilityColorProtocol = objcprotocol external name 'NSAccessibilityColor';
  NSAccessibilityContainsTransientUIProtocol = objcprotocol external name 'NSAccessibilityContainsTransientUI';
  NSAccessibilityCustomRotorItemSearchDelegateProtocol = objcprotocol external name 'NSAccessibilityCustomRotorItemSearchDelegate';
  NSAccessibilityElementLoadingProtocol = objcprotocol external name 'NSAccessibilityElementLoading';
  NSAccessibilityElementProtocol = objcprotocol external name 'NSAccessibilityElement';
  NSAccessibilityGroupProtocol = objcprotocol external name 'NSAccessibilityGroup';
  NSAccessibilityImageProtocol = objcprotocol external name 'NSAccessibilityImage';
  NSAccessibilityLayoutAreaProtocol = objcprotocol external name 'NSAccessibilityLayoutArea';
  NSAccessibilityLayoutItemProtocol = objcprotocol external name 'NSAccessibilityLayoutItem';
  NSAccessibilityListProtocol = objcprotocol external name 'NSAccessibilityList';
  NSAccessibilityNavigableStaticTextProtocol = objcprotocol external name 'NSAccessibilityNavigableStaticText';
  NSAccessibilityOutlineProtocol = objcprotocol external name 'NSAccessibilityOutline';
  NSAccessibilityProgressIndicatorProtocol = objcprotocol external name 'NSAccessibilityProgressIndicator';
  NSAccessibilityProtocol = objcprotocol external name 'NSAccessibility';
  NSAccessibilityRadioButtonProtocol = objcprotocol external name 'NSAccessibilityRadioButton';
  NSAccessibilityRowProtocol = objcprotocol external name 'NSAccessibilityRow';
  NSAccessibilitySliderProtocol = objcprotocol external name 'NSAccessibilitySlider';
  NSAccessibilityStaticTextProtocol = objcprotocol external name 'NSAccessibilityStaticText';
  NSAccessibilityStepperProtocol = objcprotocol external name 'NSAccessibilityStepper';
  NSAccessibilitySwitchProtocol = objcprotocol external name 'NSAccessibilitySwitch';
  NSAccessibilityTableProtocol = objcprotocol external name 'NSAccessibilityTable';
  NSAlertDelegateProtocol = objcprotocol external name 'NSAlertDelegate';
  NSAlignmentFeedbackTokenProtocol = objcprotocol external name 'NSAlignmentFeedbackToken';
  NSAnimatablePropertyContainerProtocol = objcprotocol external name 'NSAnimatablePropertyContainer';
  NSAnimationDelegateProtocol = objcprotocol external name 'NSAnimationDelegate';
  NSAppearanceCustomizationProtocol = objcprotocol external name 'NSAppearanceCustomization';
  NSApplicationDelegateProtocol = objcprotocol external name 'NSApplicationDelegate';
  NSBrowserDelegateProtocol = objcprotocol external name 'NSBrowserDelegate';
  NSCandidateListTouchBarItemDelegateProtocol = objcprotocol external name 'NSCandidateListTouchBarItemDelegate';
  NSChangeSpellingProtocol = objcprotocol external name 'NSChangeSpelling';
  NSCloudSharingServiceDelegateProtocol = objcprotocol external name 'NSCloudSharingServiceDelegate';
  NSCloudSharingValidationProtocol = objcprotocol external name 'NSCloudSharingValidation';
  NSCollectionLayoutContainerProtocol = objcprotocol external name 'NSCollectionLayoutContainer';
  NSCollectionLayoutEnvironmentProtocol = objcprotocol external name 'NSCollectionLayoutEnvironment';
  NSCollectionLayoutVisibleItemProtocol = objcprotocol external name 'NSCollectionLayoutVisibleItem';
  NSCollectionViewDataSourceProtocol = objcprotocol external name 'NSCollectionViewDataSource';
  NSCollectionViewDelegateFlowLayoutProtocol = objcprotocol external name 'NSCollectionViewDelegateFlowLayout';
  NSCollectionViewDelegateProtocol = objcprotocol external name 'NSCollectionViewDelegate';
  NSCollectionViewElementProtocol = objcprotocol external name 'NSCollectionViewElement';
  NSCollectionViewPrefetchingProtocol = objcprotocol external name 'NSCollectionViewPrefetching';
  NSCollectionViewSectionHeaderViewProtocol = objcprotocol external name 'NSCollectionViewSectionHeaderView';
  NSColorChangingProtocol = objcprotocol external name 'NSColorChanging';
  NSColorPickingCustomProtocol = objcprotocol external name 'NSColorPickingCustom';
  NSColorPickingDefaultProtocol = objcprotocol external name 'NSColorPickingDefault';
  NSComboBoxCellDataSourceProtocol = objcprotocol external name 'NSComboBoxCellDataSource';
  NSComboBoxDataSourceProtocol = objcprotocol external name 'NSComboBoxDataSource';
  NSComboBoxDelegateProtocol = objcprotocol external name 'NSComboBoxDelegate';
  NSControlTextEditingDelegateProtocol = objcprotocol external name 'NSControlTextEditingDelegate';
  NSDatePickerCellDelegateProtocol = objcprotocol external name 'NSDatePickerCellDelegate';
  NSDockTilePlugInProtocol = objcprotocol external name 'NSDockTilePlugIn';
  NSDraggingDestinationProtocol = objcprotocol external name 'NSDraggingDestination';
  NSDraggingInfoProtocol = objcprotocol external name 'NSDraggingInfo';
  NSDraggingSourceProtocol = objcprotocol external name 'NSDraggingSource';
  NSDrawerDelegateProtocol = objcprotocol external name 'NSDrawerDelegate';
  NSEditorProtocol = objcprotocol external name 'NSEditor';
  NSEditorRegistrationProtocol = objcprotocol external name 'NSEditorRegistration';
  NSFilePromiseProviderDelegateProtocol = objcprotocol external name 'NSFilePromiseProviderDelegate';
  NSFontChangingProtocol = objcprotocol external name 'NSFontChanging';
  NSGestureRecognizerDelegateProtocol = objcprotocol external name 'NSGestureRecognizerDelegate';
  NSGlyphStorageProtocol = objcprotocol external name 'NSGlyphStorage';
  NSHapticFeedbackPerformerProtocol = objcprotocol external name 'NSHapticFeedbackPerformer';
  NSIgnoreMisspelledWordsProtocol = objcprotocol external name 'NSIgnoreMisspelledWords';
  NSImageDelegateProtocol = objcprotocol external name 'NSImageDelegate';
  NSInputServerMouseTrackerProtocol = objcprotocol external name 'NSInputServerMouseTracker';
  NSInputServiceProviderProtocol = objcprotocol external name 'NSInputServiceProvider';
  NSLayoutManagerDelegateProtocol = objcprotocol external name 'NSLayoutManagerDelegate';
  NSMatrixDelegateProtocol = objcprotocol external name 'NSMatrixDelegate';
  NSMenuDelegateProtocol = objcprotocol external name 'NSMenuDelegate';
  NSMenuItemValidationProtocol = objcprotocol external name 'NSMenuItemValidation';
  NSOpenSavePanelDelegateProtocol = objcprotocol external name 'NSOpenSavePanelDelegate';
  NSOutlineViewDataSourceProtocol = objcprotocol external name 'NSOutlineViewDataSource';
  NSOutlineViewDelegateProtocol = objcprotocol external name 'NSOutlineViewDelegate';
  NSPageControllerDelegateProtocol = objcprotocol external name 'NSPageControllerDelegate';
  NSPasteboardItemDataProviderProtocol = objcprotocol external name 'NSPasteboardItemDataProvider';
  NSPasteboardReadingProtocol = objcprotocol external name 'NSPasteboardReading';
  NSPasteboardTypeOwnerProtocol = objcprotocol external name 'NSPasteboardTypeOwner';
  NSPasteboardWritingProtocol = objcprotocol external name 'NSPasteboardWriting';
  NSPathCellDelegateProtocol = objcprotocol external name 'NSPathCellDelegate';
  NSPathControlDelegateProtocol = objcprotocol external name 'NSPathControlDelegate';
  NSPopoverDelegateProtocol = objcprotocol external name 'NSPopoverDelegate';
  NSPrintPanelAccessorizingProtocol = objcprotocol external name 'NSPrintPanelAccessorizing';
  NSRuleEditorDelegateProtocol = objcprotocol external name 'NSRuleEditorDelegate';
  NSScrubberDataSourceProtocol = objcprotocol external name 'NSScrubberDataSource';
  NSScrubberDelegateProtocol = objcprotocol external name 'NSScrubberDelegate';
  NSScrubberFlowLayoutDelegateProtocol = objcprotocol external name 'NSScrubberFlowLayoutDelegate';
  NSSearchFieldDelegateProtocol = objcprotocol external name 'NSSearchFieldDelegate';
  NSSeguePerformingProtocol = objcprotocol external name 'NSSeguePerforming';
  NSServicesMenuRequestorProtocol = objcprotocol external name 'NSServicesMenuRequestor';
  NSSharingServiceDelegateProtocol = objcprotocol external name 'NSSharingServiceDelegate';
  NSSharingServicePickerDelegateProtocol = objcprotocol external name 'NSSharingServicePickerDelegate';
  NSSharingServicePickerToolbarItemDelegateProtocol = objcprotocol external name 'NSSharingServicePickerToolbarItemDelegate';
  NSSharingServicePickerTouchBarItemDelegateProtocol = objcprotocol external name 'NSSharingServicePickerTouchBarItemDelegate';
  NSSoundDelegateProtocol = objcprotocol external name 'NSSoundDelegate';
  NSSpeechRecognizerDelegateProtocol = objcprotocol external name 'NSSpeechRecognizerDelegate';
  NSSpeechSynthesizerDelegateProtocol = objcprotocol external name 'NSSpeechSynthesizerDelegate';
  NSSplitViewDelegateProtocol = objcprotocol external name 'NSSplitViewDelegate';
  NSSpringLoadingDestinationProtocol = objcprotocol external name 'NSSpringLoadingDestination';
  NSStackViewDelegateProtocol = objcprotocol external name 'NSStackViewDelegate';
  NSStandardKeyBindingRespondingProtocol = objcprotocol external name 'NSStandardKeyBindingResponding';
  NSTabViewDelegateProtocol = objcprotocol external name 'NSTabViewDelegate';
  NSTableViewDataSourceProtocol = objcprotocol external name 'NSTableViewDataSource';
  NSTableViewDelegateProtocol = objcprotocol external name 'NSTableViewDelegate';
  NSTextAttachmentCellProtocol = objcprotocol external name 'NSTextAttachmentCell';
  NSTextAttachmentContainerProtocol = objcprotocol external name 'NSTextAttachmentContainer';
  NSTextCheckingClientProtocol = objcprotocol external name 'NSTextCheckingClient';
  NSTextContentProtocol = objcprotocol external name 'NSTextContent';
  NSTextDelegateProtocol = objcprotocol external name 'NSTextDelegate';
  NSTextFieldDelegateProtocol = objcprotocol external name 'NSTextFieldDelegate';
  NSTextFinderBarContainerProtocol = objcprotocol external name 'NSTextFinderBarContainer';
  NSTextFinderClientProtocol = objcprotocol external name 'NSTextFinderClient';
  NSTextInputClientProtocol = objcprotocol external name 'NSTextInputClient';
  NSTextInputProtocol = objcprotocol external name 'NSTextInput';
  NSTextInputTraitsProtocol = objcprotocol external name 'NSTextInputTraits';
  NSTextLayoutOrientationProviderProtocol = objcprotocol external name 'NSTextLayoutOrientationProvider';
  NSTextStorageDelegateProtocol = objcprotocol external name 'NSTextStorageDelegate';
  NSTextViewDelegateProtocol = objcprotocol external name 'NSTextViewDelegate';
  NSTokenFieldCellDelegateProtocol = objcprotocol external name 'NSTokenFieldCellDelegate';
  NSTokenFieldDelegateProtocol = objcprotocol external name 'NSTokenFieldDelegate';
  NSToolbarDelegateProtocol = objcprotocol external name 'NSToolbarDelegate';
  NSToolbarItemValidationProtocol = objcprotocol external name 'NSToolbarItemValidation';
  NSTouchBarDelegateProtocol = objcprotocol external name 'NSTouchBarDelegate';
  NSTouchBarProviderProtocol = objcprotocol external name 'NSTouchBarProvider';
  NSUserActivityRestoringProtocol = objcprotocol external name 'NSUserActivityRestoring';
  NSUserInterfaceCompressionProtocol = objcprotocol external name 'NSUserInterfaceCompression';
  NSUserInterfaceItemIdentificationProtocol = objcprotocol external name 'NSUserInterfaceItemIdentification';
  NSUserInterfaceItemSearchingProtocol = objcprotocol external name 'NSUserInterfaceItemSearching';
  NSUserInterfaceValidationsProtocol = objcprotocol external name 'NSUserInterfaceValidations';
  NSValidatedUserInterfaceItemProtocol = objcprotocol external name 'NSValidatedUserInterfaceItem';
  NSViewControllerPresentationAnimatorProtocol = objcprotocol external name 'NSViewControllerPresentationAnimator';
  NSViewLayerContentScaleDelegateProtocol = objcprotocol external name 'NSViewLayerContentScaleDelegate';
  NSViewToolTipOwnerProtocol = objcprotocol external name 'NSViewToolTipOwner';
  NSWindowDelegateProtocol = objcprotocol external name 'NSWindowDelegate';
  NSWindowRestorationProtocol = objcprotocol external name 'NSWindowRestoration';

type
  CALayer = objcclass external;
  CAMediaTimingFunction = objcclass external;
  CIContext = objcclass external;
  CIFilter = objcclass external;
  CIImage = objcclass external;
  CKContainer = objcclass external;
  CKShare = objcclass external;
  CKShareMetadata = objcclass external;
  NSAffineTransform = objcclass external;
  NSAppleEventDescriptor = objcclass external;
  NSArray = objcclass external;
  NSAttributeDescription = objcclass external;
  NSAttributedString = objcclass external;
  NSBundle = objcclass external;
  NSCalendar = objcclass external;
  NSCloseCommand = objcclass external;
  NSData = objcclass external;
  NSDate = objcclass external;
  NSDictionary = objcclass external;
  NSEntityDescription = objcclass external;
  NSError = objcclass external;
  NSException = objcclass external;
  NSFetchRequest = objcclass external;
  NSFileWrapper = objcclass external;
  NSFormatter = objcclass external;
  NSIndexPath = objcclass external;
  NSIndexSet = objcclass external;
  NSLocale = objcclass external;
  NSLock = objcclass external;
  NSMutableArray = objcclass external;
  NSMutableData = objcclass external;
  NSMutableDictionary = objcclass external;
  NSMutableIndexSet = objcclass external;
  NSMutableSet = objcclass external;
  NSNotification = objcclass external;
  NSNotificationCenter = objcclass external;
  NSOperationQueue = objcclass external;
  NSOrthography = objcclass external;
  NSPointerArray = objcclass external;
  NSPredicate = objcclass external;
  NSScriptCommand = objcclass external;
  NSScriptObjectSpecifier = objcclass external;
  NSSet = objcclass external;
  NSSortDescriptor = objcclass external;
  NSString = objcclass external;
  NSTimeZone = objcclass external;
  NSTimer = objcclass external;
  NSURL = objcclass external;
  NSUndoManager = objcclass external;
  NSUserActivity = objcclass external;
  NSUserDefaults = objcclass external;
  NSValue = objcclass external;
  QTMovie = objcclass external;
  UIColor = objcclass external;
  UIImage = objcclass external;
  NSAccessibilityCustomRotorItemLoadDelegateProtocol = objcprotocol external name 'NSAccessibilityCustomRotorItemLoadDelegate';
  NSExtensionRequestHandlingProtocol = objcprotocol external name 'NSExtensionRequestHandling';
  NSMenuItemProtocol = objcprotocol external name 'NSMenuItem';
  QLPreviewItemProtocol = objcprotocol external name 'QLPreviewItem';

implementation
end.
