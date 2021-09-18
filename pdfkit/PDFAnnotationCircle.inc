{ Parsed from PDFKit.framework PDFAnnotationCircle.h }

{$ifdef TYPES}
type
  PDFAnnotationCirclePtr = ^PDFAnnotationCircle;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationCircle = objcclass external (PDFAnnotation, NSCopyingProtocol)
  private
    _private2: PDFAnnotationCirclePrivateVars;
  public
    function interiorColor: PDFKitPlatformColorPtr; message 'interiorColor';
    procedure setInteriorColor (color_: PDFKitPlatformColorPtr); message 'setInteriorColor:';
  end;
{$endif}

