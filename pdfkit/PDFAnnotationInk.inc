{ Parsed from PDFKit.framework PDFAnnotationInk.h }

{$ifdef TYPES}
type
  PDFAnnotationInkPtr = ^PDFAnnotationInk;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationInk = objcclass external (PDFAnnotation, NSCopyingProtocol, NSCodingProtocol)
  private
  public
    function paths: NSArray; message 'paths';
    procedure addBezierPath (path: PDFKitPlatformBezierPathPtr); message 'addBezierPath:';
    procedure removeBezierPath (path: PDFKitPlatformBezierPathPtr); message 'removeBezierPath:';
  end;
{$endif}

