{ Parsed from WebKit.framework WKWebsiteDataRecord.h }

{$ifdef TYPES}
type
  WKWebsiteDataRecordPtr = ^WKWebsiteDataRecord;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  WKWebsiteDataTypeFetchCache: NSString { available in macos 10.13.4, ios 11.3 }; cvar; external;
  WKWebsiteDataTypeDiskCache: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  WKWebsiteDataTypeMemoryCache: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  WKWebsiteDataTypeOfflineWebApplicationCache: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  WKWebsiteDataTypeCookies: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  WKWebsiteDataTypeSessionStorage: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  WKWebsiteDataTypeLocalStorage: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  WKWebsiteDataTypeWebSQLDatabases: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  WKWebsiteDataTypeIndexedDBDatabases: NSString { available in macos 10.11, ios 9.0 }; cvar; external;
  WKWebsiteDataTypeServiceWorkerRegistrations: NSString { available in macos 10.13.4, ios 11.3 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  WKWebsiteDataRecord = objcclass external (NSObject)
  public
    function displayName: NSString; message 'displayName';
    function dataTypes: NSSet; message 'dataTypes';
  end;
{$endif}

