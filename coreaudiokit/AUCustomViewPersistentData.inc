{ Parsed from CoreAudioKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreAudioKit.framework/Headers/AUCustomViewPersistentData.h }

{$ifdef TYPES}
type
  AUCustomViewPersistentDataProtocolPtr = ^AUCustomViewPersistentDataProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  AUCustomViewPersistentDataProtocol = objcprotocol external name 'AUCustomViewPersistentData'
    procedure setCustomViewPersistentData(newValue: NSDictionary); message 'setCustomViewPersistentData:';
    function customViewPersistentData: NSDictionary; message 'customViewPersistentData';
  end;
{$endif}

