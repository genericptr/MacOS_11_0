{ Parsed from PDFKit.framework PDFAnnotationStamp.h }

{$ifdef TYPES}
type
  PDFAnnotationStampPtr = ^PDFAnnotationStamp;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationStamp = objcclass external (PDFAnnotation, NSCopyingProtocol)
  private
    _private2: PDFAnnotationStampPrivateVars;
  public
    function name: NSString; message 'name';
    procedure setName (name_: NSString); message 'setName:';
  end;
{$endif}

