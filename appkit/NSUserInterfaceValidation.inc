{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSUserInterfaceValidation.h }

{$ifdef TYPES}
type
  NSValidatedUserInterfaceItemProtocolPtr = ^NSValidatedUserInterfaceItemProtocol;
  NSUserInterfaceValidationsProtocolPtr = ^NSUserInterfaceValidationsProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSValidatedUserInterfaceItemProtocol = objcprotocol external name 'NSValidatedUserInterfaceItem'
    function action: SEL; message 'action';
    function tag: NSInteger; message 'tag';
  end;

type
  NSUserInterfaceValidationsProtocol = objcprotocol external name 'NSUserInterfaceValidations'
    function validateUserInterfaceItem (item: NSValidatedUserInterfaceItemProtocol): objcbool; message 'validateUserInterfaceItem:';
  end;
{$endif}

