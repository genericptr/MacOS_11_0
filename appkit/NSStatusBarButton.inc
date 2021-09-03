{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSStatusBarButton.h }

{$ifdef TYPES}
type
  NSStatusBarButtonPtr = ^NSStatusBarButton;
{$endif}

{$ifdef CLASSES}

type
  NSStatusBarButton = objcclass external (NSButton)
  public
    procedure setAppearsDisabled(newValue: objcbool); message 'setAppearsDisabled:';
    function appearsDisabled: objcbool; message 'appearsDisabled';
  end;
{$endif}

