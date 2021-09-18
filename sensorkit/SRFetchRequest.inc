{ Parsed from SensorKit.framework SRFetchRequest.h }

{$ifdef TYPES}
type
  SRFetchRequestPtr = ^SRFetchRequest;
{$endif}

{$ifdef CLASSES}

type
  SRFetchRequest = objcclass external (NSObject)
  public
    procedure setFrom(newValue: SRAbsoluteTime); message 'setFrom:';
    function from: SRAbsoluteTime; message 'from';
    procedure setTo(newValue: SRAbsoluteTime); message 'setTo:';
    function to_: SRAbsoluteTime; message 'to';
    procedure setDevice(newValue: SRDevice); message 'setDevice:';
    function device: SRDevice; message 'device';
  end;
{$endif}

