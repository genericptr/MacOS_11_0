{ Parsed from SensorKit.framework NSDate+SensorKit.h }
{$ifdef CLASSES}

type
  SensorKit = objccategory external (NSDate)
    class function dateWithSRAbsoluteTime (time: SRAbsoluteTime): id; message 'dateWithSRAbsoluteTime:';
    function initWithSRAbsoluteTime (time: SRAbsoluteTime): id; message 'initWithSRAbsoluteTime:';
    function srAbsoluteTime: SRAbsoluteTime; message 'srAbsoluteTime';
  end;
{$endif}

