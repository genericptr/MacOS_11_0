{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFAnnotationPopup.h }

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

