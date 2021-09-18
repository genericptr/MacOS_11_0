{ Parsed from CoreBluetooth.framework CBCentral.h }

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

