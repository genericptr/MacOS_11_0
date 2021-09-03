{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WebFrameView.h }

{$ifdef TYPES}
type
  WebFrameViewPtr = ^WebFrameView;
{$endif}

{$ifdef CLASSES}

type
  WebFrameView = objcclass external (NSView)
  private
    _private: WebFrameViewPrivate;
  public
    function webFrame: WebFrame; message 'webFrame';
    function documentView: NSView; message 'documentView';
    procedure setAllowsScrolling(newValue: objcbool); message 'setAllowsScrolling:';
    function allowsScrolling: objcbool; message 'allowsScrolling';
    function canPrintHeadersAndFooters: objcbool; message 'canPrintHeadersAndFooters';
    function printOperationWithPrintInfo (printInfo: NSPrintInfoPtr): NSPrintOperationPtr; message 'printOperationWithPrintInfo:';
    function documentViewShouldHandlePrint: objcbool; message 'documentViewShouldHandlePrint';
    procedure printDocumentView; message 'printDocumentView';
  end;
{$endif}

