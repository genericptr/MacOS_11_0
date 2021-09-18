{ Parsed from PDFKit.framework PDFAnnotationSquare.h }

{$ifdef TYPES}
type
  PDFAnnotationSquarePtr = ^PDFAnnotationSquare;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationSquare = objcclass external (PDFAnnotation, NSCopyingProtocol, NSCodingProtocol)
  private
    _private2: PDFAnnotationSquarePrivateVars;
  public
    function interiorColor: PDFKitPlatformColorPtr; message 'interiorColor';
    procedure setInteriorColor (color_: PDFKitPlatformColorPtr); message 'setInteriorColor:';
  end;
{$endif}

