{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFAnnotationInk.h }

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

