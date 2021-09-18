{ Parsed from PDFKit.framework PDFActionURL.h }

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

