{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSStatusBar.h }

{$ifdef TYPES}
type
  NSStatusBarPtr = ^NSStatusBar;
{$endif}

{$ifdef TYPES}
const
  NSVariableStatusItemLength = -1.0;
  NSSquareStatusItemLength = -2.0;
{$endif}

{$ifdef CLASSES}

type
  NSStatusBar = objcclass external (NSObject)
  public
    class function systemStatusBar: NSStatusBar; message 'systemStatusBar';
    function statusItemWithLength (length: CGFloat): NSStatusItem; message 'statusItemWithLength:';
    procedure removeStatusItem (item: NSStatusItem); message 'removeStatusItem:';
    function isVertical: objcbool; message 'isVertical';
    function thickness: CGFloat; message 'thickness';
  end;
{$endif}

