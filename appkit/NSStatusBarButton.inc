{ Parsed from AppKit.framework NSStatusBarButton.h }

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

