{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSAffineTransform.h }
{$ifdef CLASSES}

type
  NSAppKitAdditions = objccategory external (NSAffineTransform)
    function transformBezierPath (path: NSBezierPath): NSBezierPath; message 'transformBezierPath:';
    procedure set_; message 'set';
    procedure concat; message 'concat';
  end;
{$endif}

