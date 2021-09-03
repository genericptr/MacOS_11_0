{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSSecureTextField.h }

{$ifdef TYPES}
type
  NSSecureTextFieldPtr = ^NSSecureTextField;
  NSSecureTextFieldCellPtr = ^NSSecureTextFieldCell;
{$endif}

{$ifdef CLASSES}

type
  NSSecureTextField = objcclass external (NSTextField)
  end;

type
  NSSecureTextFieldCell = objcclass external (NSTextFieldCell)
  public
    procedure setEchosBullets(newValue: objcbool); message 'setEchosBullets:';
    function echosBullets: objcbool; message 'echosBullets';
  end;
{$endif}

