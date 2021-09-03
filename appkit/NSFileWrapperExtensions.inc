{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSFileWrapperExtensions.h }
{$ifdef CLASSES}

type
  NSExtensions = objccategory external (NSFileWrapper)
    procedure setIcon(newValue: NSImage); message 'setIcon:';
    function icon: NSImage; message 'icon';
  end;
{$endif}

