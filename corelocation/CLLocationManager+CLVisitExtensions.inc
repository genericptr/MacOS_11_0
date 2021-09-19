{ Parsed from CoreLocation.framework CLLocationManager+CLVisitExtensions.h }
{$ifdef CLASSES}

type
  CLVisitExtensions = objccategory external (CLLocationManager)
    procedure startMonitoringVisits; message 'startMonitoringVisits'; { unavailable in watchos, tvos } { available in ios 8.0, macos 10.15 }
    procedure stopMonitoringVisits; message 'stopMonitoringVisits'; { unavailable in watchos, tvos } { available in ios 8.0, macos 10.15 }
  end;
{$endif}

