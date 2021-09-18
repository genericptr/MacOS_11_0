{ Parsed from CoreBluetooth.framework CBAttribute.h }

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

