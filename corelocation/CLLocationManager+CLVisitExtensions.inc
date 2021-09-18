{ Parsed from CoreLocation.framework CLLocationManager+CLVisitExtensions.h }
{$ifdef CLASSES}

type
  CLVisitExtensions = objccategory external (CLLocationManager)
    procedure startMonitoringVisits; message 'startMonitoringVisits'; { unavailable in watchos, tvos }
    procedure stopMonitoringVisits; message 'stopMonitoringVisits'; { unavailable in watchos, tvos }
  end;
{$endif}

