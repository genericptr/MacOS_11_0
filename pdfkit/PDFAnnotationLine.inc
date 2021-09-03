{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFAnnotationLine.h }

{$ifdef TYPES}
type
  PDFAnnotationLinePtr = ^PDFAnnotationLine;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationLine = objcclass external (PDFAnnotation, NSCopyingProtocol, NSCodingProtocol)
  private
    _private2: PDFAnnotationLinePrivateVars;
  public
    function startPoint: PDFPoint; message 'startPoint';
    procedure setStartPoint (point: PDFPoint); message 'setStartPoint:';
    function endPoint: PDFPoint; message 'endPoint';
    procedure setEndPoint (point: PDFPoint); message 'setEndPoint:';
    function startLineStyle: PDFLineStyle; message 'startLineStyle';
    procedure setStartLineStyle (style: PDFLineStyle); message 'setStartLineStyle:';
    function endLineStyle: PDFLineStyle; message 'endLineStyle';
    procedure setEndLineStyle (style: PDFLineStyle); message 'setEndLineStyle:';
    function interiorColor: PDFKitPlatformColorPtr; message 'interiorColor';
    procedure setInteriorColor (color_: PDFKitPlatformColorPtr); message 'setInteriorColor:';
  end;
{$endif}

