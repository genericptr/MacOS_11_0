{ Parsed from PDFKit.framework PDFAnnotationPopup.h }

{$ifdef TYPES}
type
  PDFAnnotationPopupPtr = ^PDFAnnotationPopup;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationPopup = objcclass external (PDFAnnotation, NSCopyingProtocol, NSCodingProtocol)
  private
    _private2: PDFAnnotationPopupPrivateVars;
  public
    function isOpen: objcbool; message 'isOpen';
    procedure setIsOpen (isOpen_: objcbool); message 'setIsOpen:';
  end;
{$endif}

