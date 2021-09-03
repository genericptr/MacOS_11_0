{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFActionGoTo.h }

{$ifdef TYPES}
type
  PDFActionGoToPtr = ^PDFActionGoTo;
{$endif}

{$ifdef CLASSES}

type
  PDFActionGoTo = objcclass external (PDFAction, NSCopyingProtocol)
  private
    _private2: PDFActionGoToPrivateVars;
  public
    function initWithDestination (destination: PDFDestination): id; message 'initWithDestination:'; { NS_DESIGNATED_INITIALIZER }
    procedure setDestination(newValue: PDFDestination); message 'setDestination:';
    function destination: PDFDestination; message 'destination';
  end;
{$endif}

