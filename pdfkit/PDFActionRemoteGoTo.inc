{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFActionRemoteGoTo.h }

{$ifdef TYPES}
type
  PDFActionRemoteGoToPtr = ^PDFActionRemoteGoTo;
{$endif}

{$ifdef CLASSES}

type
  PDFActionRemoteGoTo = objcclass external (PDFAction, NSCopyingProtocol)
  private
    _private2: PDFActionRemoteGoToPrivateVars;
  public
    function initWithPageIndex_atPoint_fileURL (pageIndex: NSUInteger; point: PDFPoint; url: NSURL): id; message 'initWithPageIndex:atPoint:fileURL:'; { NS_DESIGNATED_INITIALIZER }
    procedure setPageIndex(newValue: NSUInteger); message 'setPageIndex:';
    function pageIndex: NSUInteger; message 'pageIndex';
    procedure setPoint(newValue: PDFPoint); message 'setPoint:';
    function point: PDFPoint; message 'point';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
  end;
{$endif}

