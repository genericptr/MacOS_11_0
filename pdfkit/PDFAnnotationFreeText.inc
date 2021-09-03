{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFAnnotationFreeText.h }

{$ifdef TYPES}
type
  PDFAnnotationFreeTextPtr = ^PDFAnnotationFreeText;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationFreeText = objcclass external (PDFAnnotation, NSCopyingProtocol, NSCodingProtocol)
  private
    _private2: PDFAnnotationFreeTextPrivateVars;
  public
    function font: PDFKitPlatformFontPtr; message 'font';
    procedure setFont (font_: PDFKitPlatformFontPtr); message 'setFont:';
    function fontColor: PDFKitPlatformColorPtr; message 'fontColor';
    procedure setFontColor (color_: PDFKitPlatformColorPtr); message 'setFontColor:';
    function alignment: NSTextAlignment; message 'alignment';
    procedure setAlignment (alignment_: NSTextAlignment); message 'setAlignment:';
  end;
{$endif}
