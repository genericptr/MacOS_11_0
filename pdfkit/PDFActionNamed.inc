{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFActionNamed.h }

{$ifdef TYPES}
type
  PDFActionNamedPtr = ^PDFActionNamed;
{$endif}

{$ifdef TYPES}
type
  PDFActionNamedName = NSInteger;
  PDFActionNamedNamePtr = ^PDFActionNamedName;

const
  kPDFActionNamedNone = 0;
  kPDFActionNamedNextPage = 1;
  kPDFActionNamedPreviousPage = 2;
  kPDFActionNamedFirstPage = 3;
  kPDFActionNamedLastPage = 4;
  kPDFActionNamedGoBack = 5;
  kPDFActionNamedGoForward = 6;
  kPDFActionNamedGoToPage = 7;
  kPDFActionNamedFind = 8;
  kPDFActionNamedPrint = 9;
  kPDFActionNamedZoomIn = 10;
  kPDFActionNamedZoomOut = 11;
{$endif}

{$ifdef CLASSES}

type
  PDFActionNamed = objcclass external (PDFAction, NSCopyingProtocol)
  private
    _private2: PDFActionNamedPrivateVars;
  public
    function initWithName (name: PDFActionNamedName): id; message 'initWithName:'; { NS_DESIGNATED_INITIALIZER }
    procedure setName(newValue: PDFActionNamedName); message 'setName:';
    function name: PDFActionNamedName; message 'name';
  end;
{$endif}

