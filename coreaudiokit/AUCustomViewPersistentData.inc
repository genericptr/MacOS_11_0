{ Parsed from CoreAudioKit.framework AUCustomViewPersistentData.h }

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

