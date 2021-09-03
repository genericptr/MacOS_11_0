{ Parsed from CoreBluetooth.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreBluetooth.framework/Headers/CBDescriptor.h }

{$ifdef TYPES}
type
  CBDescriptorPtr = ^CBDescriptor;
  CBMutableDescriptorPtr = ^CBMutableDescriptor;
{$endif}

{$ifdef CLASSES}

type
  CBDescriptor = objcclass external (CBAttribute)
  public
    function characteristic: CBCharacteristic; message 'characteristic';
    function value: id; message 'value';
  end;

type
  CBMutableDescriptor = objcclass external (CBDescriptor)
  public
    function initWithType_value (UUID_: CBUUID; value_: id): id; message 'initWithType:value:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

