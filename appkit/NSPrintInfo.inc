{ Parsed from AppKit.framework NSPrintInfo.h }

{$ifdef TYPES}
type
  NSPrintInfoPtr = ^NSPrintInfo;
{$endif}

{$ifdef TYPES}
type
  NSPaperOrientation = NSInteger;
  NSPaperOrientationPtr = ^NSPaperOrientation;

const
  NSPaperOrientationPortrait = 0;
  NSPaperOrientationLandscape = 1;

type
  NSPrintingPaginationMode = NSUInteger;
  NSPrintingPaginationModePtr = ^NSPrintingPaginationMode;

const
  NSPrintingPaginationModeAutomatic = 0;
  NSPrintingPaginationModeFit = 1;
  NSPrintingPaginationModeClip = 2;

type
  NSPrintInfoAttributeKey = NSString;
  NSPrintInfoAttributeKeyPtr = ^NSPrintInfoAttributeKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPrintPaperName: NSPrintInfoAttributeKey; cvar; external;
  NSPrintPaperSize: NSPrintInfoAttributeKey; cvar; external;
  NSPrintOrientation: NSPrintInfoAttributeKey; cvar; external;
  NSPrintScalingFactor: NSPrintInfoAttributeKey; cvar; external;
  NSPrintLeftMargin: NSPrintInfoAttributeKey; cvar; external;
  NSPrintRightMargin: NSPrintInfoAttributeKey; cvar; external;
  NSPrintTopMargin: NSPrintInfoAttributeKey; cvar; external;
  NSPrintBottomMargin: NSPrintInfoAttributeKey; cvar; external;
  NSPrintHorizontallyCentered: NSPrintInfoAttributeKey; cvar; external;
  NSPrintVerticallyCentered: NSPrintInfoAttributeKey; cvar; external;
  NSPrintHorizontalPagination: NSPrintInfoAttributeKey; cvar; external;
  NSPrintVerticalPagination: NSPrintInfoAttributeKey; cvar; external;
  NSPrintPrinter: NSPrintInfoAttributeKey; cvar; external;
  NSPrintCopies: NSPrintInfoAttributeKey; cvar; external;
  NSPrintAllPages: NSPrintInfoAttributeKey; cvar; external;
  NSPrintFirstPage: NSPrintInfoAttributeKey; cvar; external;
  NSPrintLastPage: NSPrintInfoAttributeKey; cvar; external;
  NSPrintMustCollate: NSPrintInfoAttributeKey; cvar; external;
  NSPrintReversePageOrder: NSPrintInfoAttributeKey; cvar; external;
  NSPrintJobDisposition: NSPrintInfoAttributeKey; cvar; external;
  NSPrintPagesAcross: NSPrintInfoAttributeKey; cvar; external;
  NSPrintPagesDown: NSPrintInfoAttributeKey; cvar; external;
  NSPrintTime: NSPrintInfoAttributeKey; cvar; external;
  NSPrintDetailedErrorReporting: NSPrintInfoAttributeKey; cvar; external;
  NSPrintFaxNumber: NSPrintInfoAttributeKey; cvar; external;
  NSPrintPrinterName: NSPrintInfoAttributeKey; cvar; external;
  NSPrintSelectionOnly: NSPrintInfoAttributeKey { available in macos 10.6 }; cvar; external;
  NSPrintJobSavingURL: NSPrintInfoAttributeKey { available in macos 10.6 }; cvar; external;
  NSPrintJobSavingFileNameExtensionHidden: NSPrintInfoAttributeKey { available in macos 10.6 }; cvar; external;
  NSPrintHeaderAndFooter: NSPrintInfoAttributeKey; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSPrintJobDispositionValue = NSString;
  NSPrintJobDispositionValuePtr = ^NSPrintJobDispositionValue;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPrintSpoolJob: NSPrintJobDispositionValue; cvar; external;
  NSPrintPreviewJob: NSPrintJobDispositionValue; cvar; external;
  NSPrintSaveJob: NSPrintJobDispositionValue; cvar; external;
  NSPrintCancelJob: NSPrintJobDispositionValue; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSPrintInfoSettingKey = NSString;
  NSPrintInfoSettingKeyPtr = ^NSPrintInfoSettingKey;
{$endif}

{$ifdef CLASSES}

type
  NSPrintInfo = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    class procedure setSharedPrintInfo(newValue: NSPrintInfo); message 'setSharedPrintInfo:';
    class function sharedPrintInfo: NSPrintInfo; message 'sharedPrintInfo';
    function initWithDictionary (attributes: NSDictionary): id; message 'initWithDictionary:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init';
    function dictionary: NSMutableDictionary; message 'dictionary';
    procedure setPaperName(newValue: NSPrinterPaperName); message 'setPaperName:';
    function paperName: NSPrinterPaperName; message 'paperName';
    procedure setPaperSize(newValue: NSSize); message 'setPaperSize:';
    function paperSize: NSSize; message 'paperSize';
    procedure setOrientation(newValue: NSPaperOrientation); message 'setOrientation:';
    function orientation: NSPaperOrientation; message 'orientation';
    procedure setScalingFactor(newValue: CGFloat); message 'setScalingFactor:'; { available in macos 10.6 }
    function scalingFactor: CGFloat; message 'scalingFactor'; { available in macos 10.6 }
    procedure setLeftMargin(newValue: CGFloat); message 'setLeftMargin:';
    function leftMargin: CGFloat; message 'leftMargin';
    procedure setRightMargin(newValue: CGFloat); message 'setRightMargin:';
    function rightMargin: CGFloat; message 'rightMargin';
    procedure setTopMargin(newValue: CGFloat); message 'setTopMargin:';
    function topMargin: CGFloat; message 'topMargin';
    procedure setBottomMargin(newValue: CGFloat); message 'setBottomMargin:';
    function bottomMargin: CGFloat; message 'bottomMargin';
    procedure setHorizontallyCentered(newValue: objcbool); message 'setHorizontallyCentered:';
    function isHorizontallyCentered: objcbool; message 'isHorizontallyCentered';
    procedure setVerticallyCentered(newValue: objcbool); message 'setVerticallyCentered:';
    function isVerticallyCentered: objcbool; message 'isVerticallyCentered';
    procedure setHorizontalPagination(newValue: NSPrintingPaginationMode); message 'setHorizontalPagination:';
    function horizontalPagination: NSPrintingPaginationMode; message 'horizontalPagination';
    procedure setVerticalPagination(newValue: NSPrintingPaginationMode); message 'setVerticalPagination:';
    function verticalPagination: NSPrintingPaginationMode; message 'verticalPagination';
    procedure setJobDisposition(newValue: NSPrintJobDispositionValue); message 'setJobDisposition:';
    function jobDisposition: NSPrintJobDispositionValue; message 'jobDisposition';
    procedure setPrinter(newValue: NSPrinter); message 'setPrinter:';
    function printer: NSPrinter; message 'printer';
    procedure setUpPrintOperationDefaultValues; message 'setUpPrintOperationDefaultValues';
    function imageablePageBounds: NSRect; message 'imageablePageBounds';
    function localizedPaperName: NSString; message 'localizedPaperName';
    class function defaultPrinter: NSPrinter; message 'defaultPrinter';
    function printSettings: NSMutableDictionary; message 'printSettings'; { available in macos 10.5 }
    function PMPrintSession: pointer; message 'PMPrintSession'; { available in macos 10.5 }
    function PMPageFormat: pointer; message 'PMPageFormat'; { available in macos 10.5 }
    function PMPrintSettings: pointer; message 'PMPrintSettings'; { available in macos 10.5 }
    procedure updateFromPMPageFormat; message 'updateFromPMPageFormat'; { available in macos 10.5 }
    procedure updateFromPMPrintSettings; message 'updateFromPMPrintSettings'; { available in macos 10.5 }
    procedure setSelectionOnly(newValue: objcbool); message 'setSelectionOnly:'; { available in macos 10.6 }
    function isSelectionOnly: objcbool; message 'isSelectionOnly'; { available in macos 10.6 }
    procedure takeSettingsFromPDFInfo (inPDFInfo: NSPDFInfo); message 'takeSettingsFromPDFInfo:'; { available in macos 10.9 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;


type
  NSPrintInfo_NSDeprecated = objccategory external name 'NSDeprecated' (NSPrintInfo)
    class procedure setDefaultPrinter (printer_: NSPrinter); message 'setDefaultPrinter:'; deprecated 'NSPrintInfo''s implementation has no effect';
    class function sizeForPaperName (name: NSPrinterPaperName): NSSize; message 'sizeForPaperName:'; deprecated 'Use -[NSPrinter pageSizeForPaper:] instead';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPrintFormName: NSString deprecated 'NSPrintInfo does not recognize this attribute'; cvar; external;
  NSPrintJobFeatures: NSString deprecated 'NSPrintInfo does not recognize this attribute. -[NSPrintInfo setUpPrintOperationDefaultValues] sets a default value of an empty dictionary'; cvar; external;
  NSPrintManualFeed: NSString deprecated 'NSPrintInfo does not recognize this attribute'; cvar; external;
  NSPrintPagesPerSheet: NSString deprecated 'NSPrintInfo does not recognize this attribute. -[NSPrintInfo setUpPrintOperationDefaultValues] sets a default value of 1'; cvar; external;
  NSPrintPaperFeed: NSString deprecated 'NSPrintInfo does not recognize this attribute'; cvar; external;
  NSPrintSavePath: NSString deprecated 'Use NSPrintJobSavingURL instead'; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSPrintingOrientation = NSUInteger;
  NSPrintingOrientationPtr = ^NSPrintingOrientation;

const
  NSPortraitOrientation = 0 deprecated 'replace with NSPaperOrientationPortrait';
  NSLandscapeOrientation = 1 deprecated 'replace with NSPaperOrientationLandscape';

const
  NSAutoPagination = NSPrintingPaginationModeAutomatic deprecated 'replace with NSPrintingPaginationModeAutomatic';
  NSFitPagination = NSPrintingPaginationModeFit deprecated 'replace with NSPrintingPaginationModeFit';
  NSClipPagination = NSPrintingPaginationModeClip deprecated 'replace with NSPrintingPaginationModeClip';
{$endif}

