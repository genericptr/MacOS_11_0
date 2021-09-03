{ Parsed from QuickLookUI.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Headers/QLPreviewView.h }

{$ifdef TYPES}
type
  QLPreviewViewPtr = ^QLPreviewView;
{$endif}

{$ifdef TYPES}
type
  QLPreviewViewStyle = NSUInteger;
  QLPreviewViewStylePtr = ^QLPreviewViewStyle;

const
  QLPreviewViewStyleNormal = 0;
  QLPreviewViewStyleCompact = 1;
{$endif}

{$ifdef CLASSES}

type
  QLPreviewView = objcclass external (NSView)
  private
    _reserved: QLPreviewViewReserved;
  public
    function initWithFrame_style (frame: NSRect; style: QLPreviewViewStyle): id; message 'initWithFrame:style:';
    function initWithFrame (frame: NSRect): id; message 'initWithFrame:';
    procedure setPreviewItem(newValue: id); message 'setPreviewItem:';
    function previewItem: id; message 'previewItem';
    procedure refreshPreviewItem; message 'refreshPreviewItem';
    procedure setDisplayState(newValue: id); message 'setDisplayState:';
    function displayState: id; message 'displayState';
    procedure close; message 'close';
    procedure setShouldCloseWithWindow(newValue: objcbool); message 'setShouldCloseWithWindow:';
    function shouldCloseWithWindow: objcbool; message 'shouldCloseWithWindow';
    procedure setAutostarts(newValue: objcbool); message 'setAutostarts:';
    function autostarts: objcbool; message 'autostarts';
  end;
{$endif}

