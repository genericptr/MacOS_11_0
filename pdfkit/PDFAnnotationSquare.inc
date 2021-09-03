{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFAnnotationSquare.h }

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

