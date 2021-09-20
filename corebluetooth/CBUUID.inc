{ Parsed from CoreBluetooth.framework CBUUID.h }

{$ifdef TYPES}
type
  CBUUIDPtr = ^CBUUID;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CBUUIDCharacteristicExtendedPropertiesString: NSString; cvar; external;
  CBUUIDCharacteristicUserDescriptionString: NSString; cvar; external;
  CBUUIDClientCharacteristicConfigurationString: NSString; cvar; external;
  CBUUIDServerCharacteristicConfigurationString: NSString; cvar; external;
  CBUUIDCharacteristicFormatString: NSString; cvar; external;
  CBUUIDCharacteristicAggregateFormatString: NSString; cvar; external;
  CBUUIDCharacteristicValidRangeString: NSString; cvar; external;
  CBUUIDL2CAPPSMCharacteristicString: NSString { available in macos 10.13, ios 11.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CBUUID = objcclass external (NSObject, NSCopyingProtocol)
  public
    function data: NSData; message 'data';
    function UUIDString: NSString; message 'UUIDString'; { available in macos 10.10, ios 7.1 }
    class function UUIDWithString (theString: NSString): CBUUID; message 'UUIDWithString:';
    class function UUIDWithData (theData: NSData): CBUUID; message 'UUIDWithData:';
    class function UUIDWithCFUUID (theUUID: CFUUIDRef): CBUUID; message 'UUIDWithCFUUID:'; deprecated 'in 10_7, 10_13, 5_0, 9_0';
    class function UUIDWithNSUUID (theUUID: NSUUID): CBUUID; message 'UUIDWithNSUUID:'; { available in macos 10.9, ios 7.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

