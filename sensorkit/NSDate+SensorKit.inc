{ Parsed from SensorKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SensorKit.framework/Headers/NSDate+SensorKit.h }
{$ifdef CLASSES}

type
  SensorKit = objccategory external (NSDate)
    class function dateWithSRAbsoluteTime (time: SRAbsoluteTime): id; message 'dateWithSRAbsoluteTime:';
    function initWithSRAbsoluteTime (time: SRAbsoluteTime): id; message 'initWithSRAbsoluteTime:';
    function srAbsoluteTime: SRAbsoluteTime; message 'srAbsoluteTime';
  end;
{$endif}

