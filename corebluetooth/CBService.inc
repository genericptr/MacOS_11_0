{ Parsed from CoreBluetooth.framework CBService.h }

{$ifdef TYPES}
type
  CBServicePtr = ^CBService;
  CBMutableServicePtr = ^CBMutableService;
{$endif}

{$ifdef CLASSES}

type
  CBService = objcclass external (CBAttribute)
  public
    function peripheral: CBPeripheral; message 'peripheral';
    function isPrimary: objcbool; message 'isPrimary';
    function includedServices: NSArray; message 'includedServices';
    function characteristics: NSArray; message 'characteristics';
  end;

type
  CBMutableService = objcclass external (CBService)
  public
    procedure setIncludedServices(newValue: NSArray); message 'setIncludedServices:';
    function includedServices: NSArray; message 'includedServices';
    procedure setCharacteristics(newValue: NSArray); message 'setCharacteristics:';
    function characteristics: NSArray; message 'characteristics';
    function initWithType_primary (UUID_: CBUUID; isPrimary_: objcbool): id; message 'initWithType:primary:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

