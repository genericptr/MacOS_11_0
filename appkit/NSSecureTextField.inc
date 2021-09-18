{ Parsed from AppKit.framework NSSecureTextField.h }

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

