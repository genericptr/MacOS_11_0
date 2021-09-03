{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKReceiptRefreshRequest.h }

{$ifdef TYPES}
type
  SKReceiptRefreshRequestPtr = ^SKReceiptRefreshRequest;
{$endif}

{$ifdef CLASSES}

type
  SKReceiptRefreshRequest = objcclass external (SKRequest)
  private
    _properties: NSDictionary;
  public
    function initWithReceiptProperties (properties: NSDictionary): id; message 'initWithReceiptProperties:'; { available in ios , macos , watchos  }
    function receiptProperties: NSDictionary; message 'receiptProperties'; { available in ios , macos , watchos  }
  end;
{$endif}

{$ifdef FUNCTIONS}
function SKTerminateForInvalidReceipt: pointer; cdecl; external; { available in ios , macos , watchos  }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKReceiptPropertyIsExpired: NSString { available in ios , macos , watchos  }; cvar; external;
  SKReceiptPropertyIsRevoked: NSString { available in ios , macos , watchos  }; cvar; external;
  SKReceiptPropertyIsVolumePurchase: NSString { available in ios , macos , watchos  }; cvar; external;
{$endif}

