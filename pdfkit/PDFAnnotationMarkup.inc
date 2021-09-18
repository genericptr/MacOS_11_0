{ Parsed from PDFKit.framework PDFAnnotationMarkup.h }

{$ifdef TYPES}
type
  PDFAnnotationMarkupPtr = ^PDFAnnotationMarkup;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationMarkup = objcclass external (PDFAnnotation, NSCopyingProtocol, NSCodingProtocol)
  private
    _private2: PDFAnnotationMarkupPrivateVars;
  public
    function quadrilateralPoints: NSArray; message 'quadrilateralPoints';
    procedure setQuadrilateralPoints (points: NSArray); message 'setQuadrilateralPoints:';
    function markupType: PDFMarkupType; message 'markupType';
    procedure setMarkupType (type_: PDFMarkupType); message 'setMarkupType:';
  end;
{$endif}

