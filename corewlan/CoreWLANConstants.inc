{ Parsed from CoreWLAN.framework CoreWLANConstants.h }

{$ifndef _CORE_WLAN_CONSTANTS_H_}
{$ifdef EXTERNAL_SYMBOLS}
var
  CWErrorDomain: NSString { available in 10_7 }; cvar; external;
  CWPowerDidChangeNotification: NSString deprecated 'in 10_6, 10_10, "Use -[CWWiFiClient startMonitoringEventWithType:error:] with the CWEventTypePowerDidChange event type"'; cvar; external;
  CWSSIDDidChangeNotification: NSString deprecated 'in 10_6, 10_10, "Use -[CWWiFiClient startMonitoringEventWithType:error:] with the CWEventTypeSSIDDidChange event type"'; cvar; external;
  CWBSSIDDidChangeNotification: NSString deprecated 'in 10_6, 10_10, "Use -[CWWiFiClient startMonitoringEventWithType:error:] with the CWEventTypeBSSIDDidChange event type"'; cvar; external;
  CWLinkDidChangeNotification: NSString deprecated 'in 10_6, 10_10, "Use -[CWWiFiClient startMonitoringEventWithType:error:] with the CWEventTypeLinkDidChange event type"'; cvar; external;
  CWModeDidChangeNotification: NSString deprecated 'in 10_6, 10_10, "Use -[CWWiFiClient startMonitoringEventWithType:error:] with the CWEventTypeModeDidChange event type"'; cvar; external;
  CWCountryCodeDidChangeNotification: NSString deprecated 'in 10_6, 10_10, "Use -[CWWiFiClient startMonitoringEventWithType:error:] with the CWEventTypeCountryCodeDidChange event type"'; cvar; external;
  CWScanCacheDidUpdateNotification: NSString deprecated 'in 10_7, 10_10, "Use -[CWWiFiClient startMonitoringEventWithType:error:] with the CWEventTypeScanCacheUpdated event type"'; cvar; external;
  CWLinkQualityDidChangeNotification: NSString deprecated 'in 10_7, 10_10, "Use -[CWWiFiClient startMonitoringEventWithType:error:] with the CWEventTypeLinkQualityDidChange event type"'; cvar; external;
  CWLinkQualityNotificationRSSIKey: NSString deprecated 'in 10_6, 10_10, "Use -[CWWiFiClient startMonitoringEventWithType:error:] with the CWEventTypeLinkQualityDidChange event type"'; cvar; external;
  CWLinkQualityNotificationTransmitRateKey: NSString deprecated 'in 10_6, 10_10, "Use -[CWWiFiClient startMonitoringEventWithType:error:] with the CWEventTypeLinkQualityDidChange event type"'; cvar; external;
{$endif}

{$endif}
