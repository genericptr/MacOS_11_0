{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFAnnotationStamp.h }

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

