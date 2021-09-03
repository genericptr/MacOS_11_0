{ Parsed from CoreBluetooth.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreBluetooth.framework/Headers/CBCentral.h }

{$ifdef TYPES}
type
  CBCentralPtr = ^CBCentral;
{$endif}

{$ifdef CLASSES}

type
  CBCentral = objcclass external (CBPeer)
  public
    function maximumUpdateValueLength: NSUInteger; message 'maximumUpdateValueLength';
  end;
{$endif}

