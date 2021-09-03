{ Parsed from CoreBluetooth.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreBluetooth.framework/Headers/CBL2CAPChannel.h }

{$ifdef TYPES}
type
  CBL2CAPChannelPtr = ^CBL2CAPChannel;
{$endif}

{$ifdef TYPES}
type
  CBL2CAPPSM = cuint16;
  CBL2CAPPSMPtr = ^CBL2CAPPSM;
{$endif}

{$ifdef CLASSES}

type
  CBL2CAPChannel = objcclass external (NSObject)
  public
    function peer: CBPeer; message 'peer';
    function inputStream: NSInputStream; message 'inputStream';
    function outputStream: NSOutputStream; message 'outputStream';
    function PSM: CBL2CAPPSM; message 'PSM';
  end;
{$endif}

