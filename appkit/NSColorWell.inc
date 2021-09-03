{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSColorWell.h }

{$ifdef TYPES}
type
  NSColorWellPtr = ^NSColorWell;
{$endif}

{$ifdef CLASSES}

type
  NSColorWell = objcclass external (NSControl)
  public
    procedure deactivate; message 'deactivate';
    procedure activate (exclusive: objcbool); message 'activate:';
    function isActive: objcbool; message 'isActive';
    procedure drawWellInside (insideRect: NSRect); message 'drawWellInside:';
    procedure setBordered(newValue: objcbool); message 'setBordered:';
    function isBordered: objcbool; message 'isBordered';
    procedure takeColorFrom (sender: id); message 'takeColorFrom:';
    procedure setColor(newValue: NSColor); message 'setColor:';
    function color: NSColor; message 'color';
  end;
{$endif}

