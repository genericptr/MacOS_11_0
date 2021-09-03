{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFPage.h }

{$ifdef TYPES}
type
  PDFPagePtr = ^PDFPage;
{$endif}

{$ifdef TYPES}
type
  PDFDisplayBox = NSInteger;
  PDFDisplayBoxPtr = ^PDFDisplayBox;

const
  kPDFDisplayBoxMediaBox = 0;
  kPDFDisplayBoxCropBox = 1;
  kPDFDisplayBoxBleedBox = 2;
  kPDFDisplayBoxTrimBox = 3;
  kPDFDisplayBoxArtBox = 4;
{$endif}

{$ifdef CLASSES}

type
  PDFPage = objcclass external (NSObject, NSCopyingProtocol)
  private
    _private: PDFPagePrivate;
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithImage (image: PDFKitPlatformImagePtr): id; message 'initWithImage:'; { available in 10_5, 11_0 }
    function document: PDFDocument; message 'document';
    function pageRef: CGPDFPageRef; message 'pageRef';
    function label_: NSString; message 'label';
    function boundsForBox (box: PDFDisplayBox): PDFRect; message 'boundsForBox:';
    procedure setBounds_forBox (bounds: PDFRect; box: PDFDisplayBox); message 'setBounds:forBox:';
    procedure setRotation(newValue: NSInteger); message 'setRotation:';
    function rotation: NSInteger; message 'rotation';
    function annotations: NSArray; message 'annotations';
    procedure setDisplaysAnnotations(newValue: objcbool); message 'setDisplaysAnnotations:';
    function displaysAnnotations: objcbool; message 'displaysAnnotations';
    procedure addAnnotation (annotation: PDFAnnotation); message 'addAnnotation:';
    procedure removeAnnotation (annotation: PDFAnnotation); message 'removeAnnotation:';
    function annotationAtPoint (point: PDFPoint): PDFAnnotation; message 'annotationAtPoint:';
    function transformForBox (box: PDFDisplayBox): CGAffineTransform; message 'transformForBox:'; { available in 10_12, 11_0 }
    procedure drawWithBox_toContext (box: PDFDisplayBox; context: CGContextRef); message 'drawWithBox:toContext:'; { available in 10_12, 11_0 }
    procedure transformContext_forBox (context: CGContextRef; box: PDFDisplayBox); message 'transformContext:forBox:'; { available in 10_12, 11_0 }
    function thumbnailOfSize_forBox (size: PDFSize; box: PDFDisplayBox): PDFKitPlatformImagePtr; message 'thumbnailOfSize:forBox:'; { available in 10_13, 11_0 }
    function numberOfCharacters: NSUInteger; message 'numberOfCharacters';
    function string_: NSString; message 'string';
    function attributedString: NSAttributedString; message 'attributedString';
    function characterBoundsAtIndex (index: NSInteger): PDFRect; message 'characterBoundsAtIndex:';
    function characterIndexAtPoint (point: PDFPoint): NSInteger; message 'characterIndexAtPoint:';
    function selectionForRect (rect: PDFRect): PDFSelection; message 'selectionForRect:';
    function selectionForWordAtPoint (point: PDFPoint): PDFSelection; message 'selectionForWordAtPoint:';
    function selectionForLineAtPoint (point: PDFPoint): PDFSelection; message 'selectionForLineAtPoint:';
    function selectionFromPoint_toPoint (startPoint: PDFPoint; endPoint: PDFPoint): PDFSelection; message 'selectionFromPoint:toPoint:';
    function selectionForRange (range: NSRange): PDFSelection; message 'selectionForRange:';
    function dataRepresentation: NSData; message 'dataRepresentation';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$if (defined(PDFKIT_PLATFORM_OSX))}
{$ifdef CLASSES}

type
  PDFPageDeprecated = objccategory external (PDFPage)
    procedure drawWithBox (box: PDFDisplayBox); message 'drawWithBox:'; deprecated 'in 10_4, 10_12, NA, NA';
    procedure transformContextForBox (box: PDFDisplayBox); message 'transformContextForBox:'; deprecated 'in 10_5, 10_12, NA, NA';
  end;
{$endif}

{$endif}
