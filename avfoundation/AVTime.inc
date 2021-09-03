{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVTime.h }

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  NSValueAVFoundationExtensions = objccategory external (NSValue)
    class function valueWithCMTime (time: CMTime): NSValue; message 'valueWithCMTime:'; { available in macos , ios , tvos , watchos  }
    function CMTimeValue_: CMTime; message 'CMTimeValue'; { available in macos , ios , tvos , watchos  }
    class function valueWithCMTimeRange (timeRange: CMTimeRange): NSValue; message 'valueWithCMTimeRange:'; { available in macos , ios , tvos , watchos  }
    function CMTimeRangeValue: CMTimeRange; message 'CMTimeRangeValue'; { available in macos , ios , tvos , watchos  }
    class function valueWithCMTimeMapping (timeMapping: CMTimeMapping): NSValue; message 'valueWithCMTimeMapping:'; { available in macos , ios , tvos , watchos  }
    function CMTimeMappingValue: CMTimeMapping; message 'CMTimeMappingValue'; { available in macos , ios , tvos , watchos  }
  end;

type
  AVTimeCoding = objccategory external (NSCoder)
    procedure encodeCMTime_forKey (time: CMTime; key: NSString); message 'encodeCMTime:forKey:'; { available in macos , ios , tvos , watchos  }
    function decodeCMTimeForKey (key: NSString): CMTime; message 'decodeCMTimeForKey:'; { available in macos , ios , tvos , watchos  }
    procedure encodeCMTimeRange_forKey (timeRange: CMTimeRange; key: NSString); message 'encodeCMTimeRange:forKey:'; { available in macos , ios , tvos , watchos  }
    function decodeCMTimeRangeForKey (key: NSString): CMTimeRange; message 'decodeCMTimeRangeForKey:'; { available in macos , ios , tvos , watchos  }
    procedure encodeCMTimeMapping_forKey (timeMapping: CMTimeMapping; key: NSString); message 'encodeCMTimeMapping:forKey:'; { available in macos , ios , tvos , watchos  }
    function decodeCMTimeMappingForKey (key: NSString): CMTimeMapping; message 'decodeCMTimeMappingForKey:'; { available in macos , ios , tvos , watchos  }
  end;
{$endif}

{$else}
{$endif}
