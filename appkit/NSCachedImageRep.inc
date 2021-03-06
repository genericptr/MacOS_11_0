{ Parsed from AppKit.framework NSCachedImageRep.h }

{$ifdef TYPES}
type
  NSCachedImageRepPtr = ^NSCachedImageRep;
{$endif}

{$ifdef CLASSES}

type
  NSCachedImageRep = objcclass external (NSImageRep)
  public
    function initWithWindow_rect (win: NSWindow; rect: NSRect): id; message 'initWithWindow:rect:'; deprecated;
    function initWithSize_depth_separate_alpha (size_: NSSize; depth: NSWindowDepth; flag: objcbool; alpha: objcbool): id; message 'initWithSize:depth:separate:alpha:'; deprecated;
    function window: NSWindow; message 'window'; deprecated;
    function rect: NSRect; message 'rect'; deprecated;
  end;
{$endif}

