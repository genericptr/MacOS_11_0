{ Parsed from PDFKit.framework PDFDocument.h }

{ Types from PDFDocument }
{$ifdef TYPES}

{$endif}


{ Types from PDFDocumentDelegateProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  PDFDocumentPtr = ^PDFDocument;
  PDFDocumentDelegateProtocolPtr = ^PDFDocumentDelegateProtocol;
{$endif}

{$if (defined(PDFKIT_PLATFORM_OSX))}
{$ifdef TYPES}
type
  PDFPrintScalingMode = NSInteger;
  PDFPrintScalingModePtr = ^PDFPrintScalingMode;

const
  kPDFPrintPageScaleNone = 0;
  kPDFPrintPageScaleToFit = 1;
  kPDFPrintPageScaleDownToFit = 2;
{$endif}

{$endif}
{$ifdef TYPES}
type
  PDFDocumentPermissions = NSInteger;
  PDFDocumentPermissionsPtr = ^PDFDocumentPermissions;

const
  kPDFDocumentPermissionsNone = 0;
  kPDFDocumentPermissionsUser = 1;
  kPDFDocumentPermissionsOwner = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PDFDocumentDidUnlockNotification: NSNotificationName { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentDidBeginFindNotification: NSNotificationName { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentDidEndFindNotification: NSNotificationName { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentDidBeginPageFindNotification: NSNotificationName { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentDidEndPageFindNotification: NSNotificationName { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentDidFindMatchNotification: NSNotificationName { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentDidBeginWriteNotification: NSNotificationName { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentDidEndWriteNotification: NSNotificationName { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentDidBeginPageWriteNotification: NSNotificationName { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentDidEndPageWriteNotification: NSNotificationName { available in macos 10.4, ios 11.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  PDFDocumentAttribute = NSString;
  PDFDocumentAttributePtr = ^PDFDocumentAttribute;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PDFDocumentTitleAttribute: PDFDocumentAttribute { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentAuthorAttribute: PDFDocumentAttribute { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentSubjectAttribute: PDFDocumentAttribute { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentCreatorAttribute: PDFDocumentAttribute { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentProducerAttribute: PDFDocumentAttribute { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentCreationDateAttribute: PDFDocumentAttribute { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentModificationDateAttribute: PDFDocumentAttribute { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentKeywordsAttribute: PDFDocumentAttribute { available in macos 10.4, ios 11.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  PDFDocumentWriteOption = NSString;
  PDFDocumentWriteOptionPtr = ^PDFDocumentWriteOption;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PDFDocumentOwnerPasswordOption: PDFDocumentWriteOption { available in macos 10.4, ios 11.0 }; cvar; external;
  PDFDocumentUserPasswordOption: PDFDocumentWriteOption { available in macos 10.4, ios 11.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PDFDocument = objcclass external (NSObject, NSCopyingProtocol)
  private
    _private: PDFDocumentPrivate;
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithURL (url: NSURL): id; message 'initWithURL:'; { NS_DESIGNATED_INITIALIZER }
    function initWithData (data: NSData): id; message 'initWithData:'; { NS_DESIGNATED_INITIALIZER }
    function documentURL: NSURL; message 'documentURL';
    function documentRef: CGPDFDocumentRef; message 'documentRef';
    procedure setDocumentAttributes(newValue: NSDictionary); message 'setDocumentAttributes:';
    function documentAttributes: NSDictionary; message 'documentAttributes';
    function majorVersion: NSInteger; message 'majorVersion';
    function minorVersion: NSInteger; message 'minorVersion';
    function isEncrypted: objcbool; message 'isEncrypted';
    function isLocked: objcbool; message 'isLocked';
    function unlockWithPassword (password: NSString): objcbool; message 'unlockWithPassword:';
    function allowsPrinting: objcbool; message 'allowsPrinting'; { available in macos 10.4, ios 11.0 }
    function allowsCopying: objcbool; message 'allowsCopying'; { available in macos 10.4, ios 11.0 }
    function allowsDocumentChanges: objcbool; message 'allowsDocumentChanges'; { available in macos 10.13, ios 11.0 }
    function allowsDocumentAssembly: objcbool; message 'allowsDocumentAssembly'; { available in macos 10.13, ios 11.0 }
    function allowsContentAccessibility: objcbool; message 'allowsContentAccessibility'; { available in macos 10.13, ios 11.0 }
    function allowsCommenting: objcbool; message 'allowsCommenting'; { available in macos 10.13, ios 11.0 }
    function allowsFormFieldEntry: objcbool; message 'allowsFormFieldEntry'; { available in macos 10.13, ios 11.0 }
    function permissionsStatus: PDFDocumentPermissions; message 'permissionsStatus'; { available in macos 10.6, ios 11.0 }
    function string_: NSString; message 'string';
    procedure setDelegate(newValue: PDFDocumentDelegateProtocol); message 'setDelegate:';
    function delegate: PDFDocumentDelegateProtocol; message 'delegate';
    function dataRepresentation: NSData; message 'dataRepresentation';
    function dataRepresentationWithOptions (options: NSDictionary): NSData; message 'dataRepresentationWithOptions:'; { available in macos 10.6, ios 11.0 }
    function writeToFile (path: NSString): objcbool; message 'writeToFile:';
    function writeToFile_withOptions (path: NSString; options: NSDictionary): objcbool; message 'writeToFile:withOptions:';
    function writeToURL (url: NSURL): objcbool; message 'writeToURL:';
    function writeToURL_withOptions (url: NSURL; options: NSDictionary): objcbool; message 'writeToURL:withOptions:';
    procedure setOutlineRoot(newValue: PDFOutline); message 'setOutlineRoot:'; { available in macos 10.6, ios 11.0 }
    function outlineRoot: PDFOutline; message 'outlineRoot'; { available in macos 10.6, ios 11.0 }
    function outlineItemForSelection (selection: PDFSelection): PDFOutline; message 'outlineItemForSelection:';
    function pageCount: NSUInteger; message 'pageCount';
    function pageAtIndex (index: NSUInteger): PDFPage; message 'pageAtIndex:';
    function indexForPage (page: PDFPage): NSUInteger; message 'indexForPage:';
    procedure insertPage_atIndex (page: PDFPage; index: NSUInteger); message 'insertPage:atIndex:';
    procedure removePageAtIndex (index: NSUInteger); message 'removePageAtIndex:';
    procedure exchangePageAtIndex_withPageAtIndex (indexA: NSUInteger; indexB: NSUInteger); message 'exchangePageAtIndex:withPageAtIndex:';
    function pageClass: pobjc_class; message 'pageClass';
    function findString_withOptions (string_: NSString; options: NSStringCompareOptions): NSArray; message 'findString:withOptions:';
    procedure beginFindString_withOptions (string_: NSString; options: NSStringCompareOptions); message 'beginFindString:withOptions:';
    procedure beginFindStrings_withOptions (strings: NSArray; options: NSStringCompareOptions); message 'beginFindStrings:withOptions:'; { available in macos 10.5, ios 11.0 }
    function findString_fromSelection_withOptions (string_: NSString; selection: PDFSelection; options: NSStringCompareOptions): PDFSelection; message 'findString:fromSelection:withOptions:';
    function isFinding: objcbool; message 'isFinding';
    procedure cancelFindString; message 'cancelFindString';
    {$if (defined(PDFKIT_PLATFORM_OSX))}
    function printOperationForPrintInfo_scalingMode_autoRotate (printInfo: NSPrintInfoPtr; scaleMode: PDFPrintScalingMode; doRotate: objcbool): NSPrintOperationPtr; message 'printOperationForPrintInfo:scalingMode:autoRotate:'; { available in 10_7, NA }
    {$endif}
    function selectionForEntireDocument: PDFSelection; message 'selectionForEntireDocument';
    function selectionFromPage_atPoint_toPage_atPoint (startPage: PDFPage; startPoint: PDFPoint; endPage: PDFPage; endPoint: PDFPoint): PDFSelection; message 'selectionFromPage:atPoint:toPage:atPoint:';
    function selectionFromPage_atCharacterIndex_toPage_atCharacterIndex (startPage: PDFPage; startCharacter: NSUInteger; endPage: PDFPage; endCharacter: NSUInteger): PDFSelection; message 'selectionFromPage:atCharacterIndex:toPage:atCharacterIndex:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  PDFDocumentDelegateProtocol = objcprotocol external name 'PDFDocumentDelegate' (NSObjectProtocol)
  optional
    procedure documentDidUnlock (notification: NSNotification); message 'documentDidUnlock:';
    procedure documentDidBeginDocumentFind (notification: NSNotification); message 'documentDidBeginDocumentFind:';
    procedure documentDidEndDocumentFind (notification: NSNotification); message 'documentDidEndDocumentFind:';
    procedure documentDidBeginPageFind (notification: NSNotification); message 'documentDidBeginPageFind:';
    procedure documentDidEndPageFind (notification: NSNotification); message 'documentDidEndPageFind:';
    procedure documentDidFindMatch (notification: NSNotification); message 'documentDidFindMatch:';
    procedure didMatchString (instance: PDFSelection); message 'didMatchString:';
    function classForPage: pobjc_class; message 'classForPage'; { available in macos 10.6, ios 11.0 }
    function classForAnnotationType (annotationType: NSString): pobjc_class; message 'classForAnnotationType:'; { available in macos 10.13, ios 11.0 }
    {$if (defined(PDFKIT_PLATFORM_OSX))}
    function classForAnnotationClass (annotationClass: pobjc_class): pobjc_class; message 'classForAnnotationClass:'; deprecated 'in 10_6, 10_12, NA, NA';
    {$endif}
  end;
{$endif}

