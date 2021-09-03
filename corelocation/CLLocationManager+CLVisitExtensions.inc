{ Parsed from CoreLocation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreLocation.framework/Headers/CLLocationManager+CLVisitExtensions.h }
{$ifdef CLASSES}

type
  CLVisitExtensions = objccategory external (CLLocationManager)
    procedure startMonitoringVisits; message 'startMonitoringVisits'; { unavailable in watchos, tvos }
    procedure stopMonitoringVisits; message 'stopMonitoringVisits'; { unavailable in watchos, tvos }
  end;
{$endif}

