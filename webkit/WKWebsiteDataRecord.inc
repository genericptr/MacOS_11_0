{ Parsed from WebKit.framework WKWebsiteDataRecord.h }

{$ifdef TYPES}
type
  WKWebsiteDataRecordPtr = ^WKWebsiteDataRecord;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  WKWebsiteDataTypeFetchCache: NSString { available in macos , ios  }; cvar; external;
  WKWebsiteDataTypeDiskCache: NSString { available in macos , ios  }; cvar; external;
  WKWebsiteDataTypeMemoryCache: NSString { available in macos , ios  }; cvar; external;
  WKWebsiteDataTypeOfflineWebApplicationCache: NSString { available in macos , ios  }; cvar; external;
  WKWebsiteDataTypeCookies: NSString { available in macos , ios  }; cvar; external;
  WKWebsiteDataTypeSessionStorage: NSString { available in macos , ios  }; cvar; external;
  WKWebsiteDataTypeLocalStorage: NSString { available in macos , ios  }; cvar; external;
  WKWebsiteDataTypeWebSQLDatabases: NSString { available in macos , ios  }; cvar; external;
  WKWebsiteDataTypeIndexedDBDatabases: NSString { available in macos , ios  }; cvar; external;
  WKWebsiteDataTypeServiceWorkerRegistrations: NSString { available in macos , ios  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  WKWebsiteDataRecord = objcclass external (NSObject)
  public
    function displayName: NSString; message 'displayName';
    function dataTypes: NSSet; message 'dataTypes';
  end;
{$endif}

