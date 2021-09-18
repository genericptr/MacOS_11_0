{ Parsed from SensorKit.framework SRFetchResult.h }

{$ifdef TYPES}
type
  SRFetchResultPtr = ^SRFetchResult;
{$endif}

{$ifdef CLASSES}

type
  SRFetchResult = objcclass external (NSObject, NSCopyingProtocol)
  public
    function sample: id; message 'sample';
    function timestamp: SRAbsoluteTime; message 'timestamp';
    function init: id; message 'init';
    class function new_: id; message 'new';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

