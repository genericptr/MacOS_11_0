{ Parsed from AVFoundation.framework AVTime.h }

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  NSValueAVFoundationExtensions = objccategory external (NSValue)
    class function valueWithCMTime (time: CMTime): NSValue; message 'valueWithCMTime:'; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }
    function CMTimeValue_: CMTime; message 'CMTimeValue'; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }
    class function valueWithCMTimeRange (timeRange: CMTimeRange): NSValue; message 'valueWithCMTimeRange:'; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }
    function CMTimeRangeValue: CMTimeRange; message 'CMTimeRangeValue'; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }
    class function valueWithCMTimeMapping (timeMapping: CMTimeMapping): NSValue; message 'valueWithCMTimeMapping:'; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }
    function CMTimeMappingValue: CMTimeMapping; message 'CMTimeMappingValue'; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }
  end;

type
  AVTimeCoding = objccategory external (NSCoder)
    procedure encodeCMTime_forKey (time: CMTime; key: NSString); message 'encodeCMTime:forKey:'; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }
    function decodeCMTimeForKey (key: NSString): CMTime; message 'decodeCMTimeForKey:'; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }
    procedure encodeCMTimeRange_forKey (timeRange: CMTimeRange; key: NSString); message 'encodeCMTimeRange:forKey:'; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }
    function decodeCMTimeRangeForKey (key: NSString): CMTimeRange; message 'decodeCMTimeRangeForKey:'; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }
    procedure encodeCMTimeMapping_forKey (timeMapping: CMTimeMapping; key: NSString); message 'encodeCMTimeMapping:forKey:'; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }
    function decodeCMTimeMappingForKey (key: NSString): CMTimeMapping; message 'decodeCMTimeMappingForKey:'; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 1.0 }
  end;
{$endif}

{$else}
{$endif}
