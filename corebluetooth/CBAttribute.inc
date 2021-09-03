{ Parsed from CoreBluetooth.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreBluetooth.framework/Headers/CBAttribute.h }

{$ifdef TYPES}
type
  CBAttributePtr = ^CBAttribute;
{$endif}

{$ifdef CLASSES}

type
  CBAttribute = objcclass external (NSObject)
  public
    function init: id; message 'init';
    function UUID: CBUUID; message 'UUID';
  end;
{$endif}

