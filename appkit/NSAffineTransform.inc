{ Parsed from AppKit.framework NSAffineTransform.h }
{$ifdef CLASSES}

type
  NSAppKitAdditions = objccategory external (NSAffineTransform)
    function transformBezierPath (path: NSBezierPath): NSBezierPath; message 'transformBezierPath:';
    procedure set_; message 'set';
    procedure concat; message 'concat';
  end;
{$endif}

