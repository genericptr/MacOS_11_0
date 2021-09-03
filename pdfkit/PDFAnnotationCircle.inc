{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFAnnotationCircle.h }

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

