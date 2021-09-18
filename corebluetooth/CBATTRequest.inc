{ Parsed from CoreBluetooth.framework CBATTRequest.h }

{$ifdef TYPES}
type
  CBATTRequestPtr = ^CBATTRequest;
{$endif}

{$ifdef CLASSES}

type
  CBATTRequest = objcclass external (NSObject)
  public
    function init: id; message 'init';
    function central: CBCentral; message 'central';
    function characteristic: CBCharacteristic; message 'characteristic';
    function offset: NSUInteger; message 'offset';
    procedure setValue(newValue: NSData); message 'setValue:';
    function value: NSData; message 'value';
  end;
{$endif}

