{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFActionURL.h }

{$ifdef TYPES}
type
  PDFActionURLPtr = ^PDFActionURL;
{$endif}

{$ifdef CLASSES}

type
  PDFActionURL = objcclass external (PDFAction, NSCopyingProtocol)
  private
    _private2: PDFActionURLPrivateVars;
  public
    function initWithURL (url: NSURL): id; message 'initWithURL:'; { NS_DESIGNATED_INITIALIZER }
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
  end;
{$endif}

