{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFView.h }

{ Types from PDFView }
{$ifdef TYPES}




{$endif}


{ Types from PDFViewDelegateProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  PDFViewPtr = ^PDFView;
  PDFViewDelegateProtocolPtr = ^PDFViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  PDFDisplayMode = NSInteger;
  PDFDisplayModePtr = ^PDFDisplayMode;

const
  kPDFDisplaySinglePage = 0;
  kPDFDisplaySinglePageContinuous = 1;
  kPDFDisplayTwoUp = 2;
  kPDFDisplayTwoUpContinuous = 3;

type
  PDFDisplayDirection = NSInteger;
  PDFDisplayDirectionPtr = ^PDFDisplayDirection;

const
  kPDFDisplayDirectionVertical = 0;
  kPDFDisplayDirectionHorizontal = 1;

type
  PDFAreaOfInterest = NSInteger;
  PDFAreaOfInterestPtr = ^PDFAreaOfInterest;

const
  kPDFNoArea = 0;
  kPDFPageArea = 1 shl 0;
  kPDFTextArea = 1 shl 1;
  kPDFAnnotationArea = 1 shl 2;
  kPDFLinkArea = 1 shl 3;
  kPDFControlArea = 1 shl 4;
  kPDFTextFieldArea = 1 shl 5;
  kPDFIconArea = 1 shl 6;
  kPDFPopupArea = 1 shl 7;
  kPDFImageArea = 1 shl 8;

type
  PDFInterpolationQuality = NSInteger;
  PDFInterpolationQualityPtr = ^PDFInterpolationQuality;

const
  kPDFInterpolationQualityNone = 0;
  kPDFInterpolationQualityLow = 1;
  kPDFInterpolationQualityHigh = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PDFViewDocumentChangedNotification: NSNotificationName { available in 10_4, 11_0 }; cvar; external;
  PDFViewChangedHistoryNotification: NSNotificationName { available in 10_4, 11_0 }; cvar; external;
  PDFViewPageChangedNotification: NSNotificationName { available in 10_4, 11_0 }; cvar; external;
  PDFViewScaleChangedNotification: NSNotificationName { available in 10_4, 11_0 }; cvar; external;
  PDFViewAnnotationHitNotification: NSNotificationName { available in 10_4, 11_0 }; cvar; external;
  PDFViewCopyPermissionNotification: NSNotificationName { available in 10_4, 11_0 }; cvar; external;
  PDFViewPrintPermissionNotification: NSNotificationName { available in 10_4, 11_0 }; cvar; external;
  PDFViewAnnotationWillHitNotification: NSNotificationName { available in 10_4, 11_0 }; cvar; external;
  PDFViewSelectionChangedNotification: NSNotificationName { available in 10_4, 11_0 }; cvar; external;
  PDFViewDisplayModeChangedNotification: NSNotificationName { available in 10_4, 11_0 }; cvar; external;
  PDFViewDisplayBoxChangedNotification: NSNotificationName { available in 10_4, 11_0 }; cvar; external;
  PDFViewVisiblePagesChangedNotification: NSNotificationName { available in 10_4, 11_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PDFView = objcclass external (PDFKitPlatformView, NSAnimationDelegateProtocol, NSMenuDelegateProtocol)
  private
    _private: PDFViewPrivate;
  public
    procedure setDocument(newValue: PDFDocument); message 'setDocument:';
    function document: PDFDocument; message 'document';
    function canGoToFirstPage: objcbool; message 'canGoToFirstPage';
    procedure goToFirstPage (sender: id); message 'goToFirstPage:';
    function canGoToLastPage: objcbool; message 'canGoToLastPage';
    procedure goToLastPage (sender: id); message 'goToLastPage:';
    function canGoToNextPage: objcbool; message 'canGoToNextPage';
    procedure goToNextPage (sender: id); message 'goToNextPage:';
    function canGoToPreviousPage: objcbool; message 'canGoToPreviousPage';
    procedure goToPreviousPage (sender: id); message 'goToPreviousPage:';
    function canGoBack: objcbool; message 'canGoBack';
    procedure goBack (sender: id); message 'goBack:';
    function canGoForward: objcbool; message 'canGoForward';
    procedure goForward (sender: id); message 'goForward:';
    function currentPage: PDFPage; message 'currentPage';
    procedure goToPage (page: PDFPage); message 'goToPage:';
    function currentDestination: PDFDestination; message 'currentDestination';
    procedure goToDestination (destination: PDFDestination); message 'goToDestination:';
    procedure goToSelection (selection: PDFSelection); message 'goToSelection:';
    procedure goToRect_onPage (rect: PDFRect; page: PDFPage); message 'goToRect:onPage:';
    procedure setDisplayMode(newValue: PDFDisplayMode); message 'setDisplayMode:';
    function displayMode: PDFDisplayMode; message 'displayMode';
    procedure setDisplayDirection(newValue: PDFDisplayDirection); message 'setDisplayDirection:'; { available in 10_13, 11_0 }
    function displayDirection: PDFDisplayDirection; message 'displayDirection'; { available in 10_13, 11_0 }
    procedure setDisplaysPageBreaks(newValue: objcbool); message 'setDisplaysPageBreaks:';
    function displaysPageBreaks: objcbool; message 'displaysPageBreaks';
    procedure setPageBreakMargins(newValue: PDFEdgeInsets); message 'setPageBreakMargins:'; { available in 10_13, 11_0 }
    function pageBreakMargins: PDFEdgeInsets; message 'pageBreakMargins'; { available in 10_13, 11_0 }
    procedure setDisplayBox(newValue: PDFDisplayBox); message 'setDisplayBox:';
    function displayBox: PDFDisplayBox; message 'displayBox';
    procedure setDisplaysAsBook(newValue: objcbool); message 'setDisplaysAsBook:';
    function displaysAsBook: objcbool; message 'displaysAsBook';
    procedure setDisplaysRTL(newValue: objcbool); message 'setDisplaysRTL:'; { available in 10_13, 11_0 }
    function displaysRTL: objcbool; message 'displaysRTL'; { available in 10_13, 11_0 }
    procedure setBackgroundColor(newValue: PDFKitPlatformColorPtr); message 'setBackgroundColor:';
    function backgroundColor: PDFKitPlatformColorPtr; message 'backgroundColor';
    procedure setInterpolationQuality(newValue: PDFInterpolationQuality); message 'setInterpolationQuality:'; { available in 10_7, 11_0 }
    function interpolationQuality: PDFInterpolationQuality; message 'interpolationQuality'; { available in 10_7, 11_0 }
    procedure enablePageShadows(newValue: objcbool); message 'enablePageShadows:'; { available in 10_14, 12_0 }
    function pageShadowsEnabled: objcbool; message 'pageShadowsEnabled'; { available in 10_14, 12_0 }
    {$if (defined(PDFKIT_PLATFORM_IOS))}
    procedure usePageViewController_withViewOptions (enable: objcbool; viewOptions: NSDictionary); message 'usePageViewController:withViewOptions:'; { available in NA, 11_0 }
    function isUsingPageViewController: objcbool; message 'isUsingPageViewController'; { available in NA, 11_0 }
    {$endif}
    procedure setDelegate(newValue: PDFViewDelegateProtocol); message 'setDelegate:';
    function delegate: PDFViewDelegateProtocol; message 'delegate';
    procedure setScaleFactor(newValue: CGFloat); message 'setScaleFactor:';
    function scaleFactor: CGFloat; message 'scaleFactor';
    procedure setMinScaleFactor(newValue: CGFloat); message 'setMinScaleFactor:'; { available in 10_13, 11_0 }
    function minScaleFactor: CGFloat; message 'minScaleFactor'; { available in 10_13, 11_0 }
    procedure setMaxScaleFactor(newValue: CGFloat); message 'setMaxScaleFactor:'; { available in 10_13, 11_0 }
    function maxScaleFactor: CGFloat; message 'maxScaleFactor'; { available in 10_13, 11_0 }
    procedure setAutoScales(newValue: objcbool); message 'setAutoScales:';
    function autoScales: objcbool; message 'autoScales';
    function scaleFactorForSizeToFit: CGFloat; message 'scaleFactorForSizeToFit'; { available in 10_13, 11_0 }
    procedure zoomIn (sender: id); message 'zoomIn:';
    function canZoomIn: objcbool; message 'canZoomIn';
    procedure zoomOut (sender: id); message 'zoomOut:';
    function canZoomOut: objcbool; message 'canZoomOut';
    function areaOfInterestForMouse (event: PDFKitPlatformEventPtr): PDFAreaOfInterest; message 'areaOfInterestForMouse:';
    function areaOfInterestForPoint (cursorLocation: PDFPoint): PDFAreaOfInterest; message 'areaOfInterestForPoint:';
    {$if (defined(PDFKIT_PLATFORM_OSX))}
    procedure setCursorForAreaOfInterest (area: PDFAreaOfInterest); message 'setCursorForAreaOfInterest:';
    {$endif}
    procedure performAction (action: PDFAction); message 'performAction:'; { available in 10_5, 11_0 }
    procedure setCurrentSelection(newValue: PDFSelection); message 'setCurrentSelection:';
    function currentSelection: PDFSelection; message 'currentSelection';
    procedure setCurrentSelection_animate (selection: PDFSelection; animate: objcbool); message 'setCurrentSelection:animate:'; { available in 10_5, 11_0 }
    procedure clearSelection; message 'clearSelection';
    procedure selectAll (sender: id); message 'selectAll:';
    procedure scrollSelectionToVisible (sender: id); message 'scrollSelectionToVisible:';
    procedure setHighlightedSelections(newValue: NSArray); message 'setHighlightedSelections:'; { available in 10_5, 11_0 }
    function highlightedSelections: NSArray; message 'highlightedSelections'; { available in 10_5, 11_0 }
    procedure drawPage_toContext (page: PDFPage; context: CGContextRef); message 'drawPage:toContext:'; { available in 10_12, 11_0 }
    procedure drawPagePost_toContext (page: PDFPage; context: CGContextRef); message 'drawPagePost:toContext:'; { available in 10_12, 11_0 }
    procedure copy (sender: id); message 'copy:';
    {$if (defined(PDFKIT_PLATFORM_OSX))}
    procedure printWithInfo_autoRotate (printInfo: NSPrintInfoPtr; doRotate: objcbool); message 'printWithInfo:autoRotate:';
    procedure printWithInfo_autoRotate_pageScaling (printInfo: NSPrintInfoPtr; doRotate: objcbool; scale: PDFPrintScalingMode); message 'printWithInfo:autoRotate:pageScaling:'; { available in 10_5, 11_0 }
    {$endif}
    function pageForPoint_nearest (point: PDFPoint; nearest: objcbool): PDFPage; message 'pageForPoint:nearest:';
    function convertPoint_toPage (point: PDFPoint; page: PDFPage): PDFPoint; message 'convertPoint:toPage:';
    function convertRect_toPage (rect: PDFRect; page: PDFPage): PDFRect; message 'convertRect:toPage:';
    function convertPoint_fromPage (point: PDFPoint; page: PDFPage): PDFPoint; message 'convertPoint:fromPage:';
    function convertRect_fromPage (rect: PDFRect; page: PDFPage): PDFRect; message 'convertRect:fromPage:';
    function documentView: PDFKitPlatformViewPtr; message 'documentView';
    procedure layoutDocumentView; message 'layoutDocumentView';
    procedure annotationsChangedOnPage (page: PDFPage); message 'annotationsChangedOnPage:'; { available in 10_5, 11_0 }
    function rowSizeForPage (page: PDFPage): PDFSize; message 'rowSizeForPage:';
    {$if (defined(PDFKIT_PLATFORM_OSX))}
    procedure setAcceptsDraggedFiles(newValue: objcbool); message 'setAcceptsDraggedFiles:'; { available in 10_13, NA }
    function acceptsDraggedFiles: objcbool; message 'acceptsDraggedFiles'; { available in 10_13, NA }
    {$endif}
    function visiblePages: NSArray; message 'visiblePages'; { available in 10_5, 11_0 }
    procedure setEnableDataDetectors(newValue: objcbool); message 'setEnableDataDetectors:'; { available in 10_6, 11_0 }
    function enableDataDetectors: objcbool; message 'enableDataDetectors'; { available in 10_6, 11_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  PDFViewDelegateProtocol = objcprotocol external name 'PDFViewDelegate' (NSObjectProtocol)
  optional
    procedure PDFViewWillClickOnLink_withURL (sender: PDFView; url: NSURL); message 'PDFViewWillClickOnLink:withURL:'; { available in 10_5, 11_0 }
    {$if (defined(PDFKIT_PLATFORM_OSX))}
    function PDFViewWillChangeScaleFactor_toScale (sender: PDFView; scaler: CGFloat): CGFloat; message 'PDFViewWillChangeScaleFactor:toScale:'; { available in 10_5, NA }
    function PDFViewPrintJobTitle (sender: PDFView): NSString; message 'PDFViewPrintJobTitle:'; { available in 10_5, NA }
    procedure PDFViewPerformPrint (sender: PDFView); message 'PDFViewPerformPrint:'; { available in 10_5, NA }
    {$elseif (defined(PDFKIT_PLATFORM_IOS))}
    function PDFViewParentViewController: PDFKitPlatformViewControllerPtr; message 'PDFViewParentViewController'; { available in 10_15, 13_0 }
    {$endif}
    procedure PDFViewPerformFind (sender: PDFView); message 'PDFViewPerformFind:'; { available in 10_5, 11_0 }
    procedure PDFViewPerformGoToPage (sender: PDFView); message 'PDFViewPerformGoToPage:'; { available in 10_5, 11_0 }
    procedure PDFViewOpenPDF_forRemoteGoToAction (sender: PDFView; action: PDFActionRemoteGoTo); message 'PDFViewOpenPDF:forRemoteGoToAction:'; { available in 10_5, 11_0 }
  end;
{$endif}

{$if (defined(PDFKIT_PLATFORM_OSX))}
{$ifdef CLASSES}

type
  PDFViewDeprecated = objccategory external (PDFView)
    procedure takePasswordFrom (sender: id); message 'takePasswordFrom:'; deprecated 'in 10_4, 10_12, NA, NA';
    procedure drawPage (page: PDFPage); message 'drawPage:'; deprecated 'in 10_4, 10_12, NA, NA';
    procedure drawPagePost (page: PDFPage); message 'drawPagePost:'; deprecated 'in 10_5, 10_12, NA, NA';
    procedure setShouldAntiAlias(newValue: objcbool); message 'setShouldAntiAlias:'; deprecated 'in 10_4, 10_12, NA, NA';
    function shouldAntiAlias: objcbool; message 'shouldAntiAlias'; deprecated 'in 10_4, 10_12, NA, NA';
    procedure setGreekingThreshold(newValue: CGFloat); message 'setGreekingThreshold:'; deprecated 'in 10_4, 10_12, NA, NA';
    function greekingThreshold: CGFloat; message 'greekingThreshold'; deprecated 'in 10_4, 10_12, NA, NA';
    procedure takeBackgroundColorFrom (sender: id); message 'takeBackgroundColorFrom:'; deprecated 'in 10_4, 10_12, NA, NA';
    procedure setAllowsDragging(newValue: objcbool); message 'setAllowsDragging:'; deprecated 'in 10_4, 10_13, NA, NA';
    function allowsDragging: objcbool; message 'allowsDragging'; deprecated 'in 10_4, 10_13, NA, NA';
  end;
{$endif}

{$endif}
