{ Parsed from AppKit.framework NSPDFImageRep.h }

{$ifdef TYPES}
type
  NSPDFImageRepPtr = ^NSPDFImageRep;
{$endif}

{$ifdef CLASSES}

type
  NSPDFImageRep = objcclass external (NSImageRep)
  public
    class function imageRepWithData (pdfData: NSData): id; message 'imageRepWithData:';
    function initWithData (pdfData: NSData): id; message 'initWithData:';
    function PDFRepresentation: NSData; message 'PDFRepresentation';
    function bounds: NSRect; message 'bounds';
    procedure setCurrentPage(newValue: NSInteger); message 'setCurrentPage:';
    function currentPage: NSInteger; message 'currentPage';
    function pageCount: NSInteger; message 'pageCount';
  end;
{$endif}

