{ Parsed from AppKit.framework NSStatusBar.h }

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

