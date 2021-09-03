{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFAnnotationText.h }

{$ifdef TYPES}
type
  PDFAnnotationTextPtr = ^PDFAnnotationText;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationText = objcclass external (PDFAnnotation, NSCopyingProtocol, NSCodingProtocol)
  private
    _private2: PDFAnnotationTextPrivateVars;
  public
    function iconType: PDFTextAnnotationIconType; message 'iconType';
    procedure setIconType (type_: PDFTextAnnotationIconType); message 'setIconType:';
  end;
{$endif}

